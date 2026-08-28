# scripts/gamedata

Python pipeline that generates the C++ headers under `lib/GameData/` from a semicolon-delimited metadata file. 

## Usage

```sh
./scripts/gamedata.py [options]
```

| flag | short | default | effect |
|------|-------|---------|--------|
| `--preset` | `-p` | `medium` | Metadata preset to use: (high \| low \| medium) (default: medium); mutually exclusive with `--metadata` |
| `--metadata` | `-m` | | Path to an arbitrary metadata file; mutually exclusive with `--preset` |
| `--out` | `-o` | `lib/` | Output directory for generated headers |
| `--name` | `-n` | `GameData` | Top-level structure/header name (default: GameData); mutually exclusive with `--pick` |
| `--pick` | `-q` | | Cherry-pick a single tag type by `::` path (e.g. `OwnedHorseList::Body::EyeColor`); output header/directory name matches the tag type; mutually exclusive with `--name` |
| `--standalone` | `-s` | | Emit a single combined header instead of per-subsytem files |
| `--clear` | `-c` | | Delete generated headers without regenerating; mutually exclusive with `--dirty` |
| `--dry` | | | Parse the tree without writing any files |
| `--tree` | | | Only generate the type tree as JSON and exit |
| `--dirty` | | | Skip deleting the output directory before writing; mutually exclusive with `--clear` |
| `--verbose` | `-v` | | Show parser and emitter debug output (suppressed by default) |

Presets are `.txt` files discovered from `data/presets/`

## Input: Metadata format

Preset and metadata files are semicolon-delimited with two record types. Lines starting with `#` are ignored.

### Member records

```
hash_hex ; TypeName ; DotPath.to.Member
```

| column | example | meaning |
|--------|---------|---------|
| `hash_hex` | `d2ddb868` | MurmurHash3 of the full dot-path, as stored in the save blob |
| `TypeName` | `WString16Array` | logical type (see type table below) |
| `DotPath` | `OwnedHorseList.Name` | dot-separated path mirroring the in-game data hierarchy |

### EnumValues records

```
EnumValues ; target ; Value1,Value2,...
```

`target` can be:

- A single dot-path: `MapData.CurrentLayer`
- A comma-separated list of exact paths: `LastWildHorse.Mane,OwnedHorseList.Mane`
- A regexp  pattern with wildcard: `DungeonState.Dungeon*`, `PlayerStatus.Companion.*.JoiningCondition`

These add the underlying enum values to previously declared `Enum` or `EnumArray` members. Pattern matching uses `re.match`. Enum values are encoded as `murmurhash3::hash("Value")`.

## Pipeline

```
gamedata.py
  tree.make_tree()        build in-memory tree from the metadata file
  tree.TreeEmitter.emit() walk the tree, write header(s)
```

### I. Tree building (`tree.py`)

`make_tree` dispatches each record to `parse_data_record` or `parse_enum_value_record`.

`parse_data_record` splits the dot-path into identifiers, walks the tree creating `Structure` nodes for each non-leaf identifier, and inserts a typed `Member` leaf at the end. Every identifier is sanitized: leading digits get a `_` prefix and hyphens become underscores.

`parse_enum_value_record` finds already-inserted `Enum` nodes by exact name or regex pattern match, then replaces each match with a complete copy that carries the `values` tuple. Before replacement, enum members exist in the tree as "incomplete" nodes with an empty `values` tuple.

### II. Type system (`types/`)

`resolve_member_type(raw_typename)` maps the logical typename string to a Python class. The lookup table is built at import time by reflecting all `Member` subclasses in scope, so adding a new concrete type is enough to register it.

```
GameDataType
    Structure          intermediate scope;  structure tag emitted
    Member             leaf node; member tag emitted
        Primitive  (Trait.Reference -> Trait.Transparent)
            Bool, Int, UInt, UInt64, Float, Byte
        String  (Trait.Pointer)
            String32, String64, WString16
        Vector  (Trait.Transparent, Trait.Pointer)
            Vector2, Vector3
        Array[T]  (Trait.Pointer)
            BoolArray, IntArray, UIntArray, UInt64Array, FloatArray,
            String64Array, WString16Array, Vector2Array, Vector3Array, ByteArray
        Enum[EnumName]
            EnumArray[EnumName]    inherits from both Enum and Array
```

Three traits on `Member` control what the emitter appends to the C++ return type:

- `Trait.Transparent`: type can appear be directly overlayed into blob without layout adaptation.
- `Trait.Reference` (extends `Transparent`): Transparent type, accessor returns a reference (`&` suffix).
- `Trait.Pointer`: accessor automatically resolves indirection.
- Note: types that do not have `Trait.Transparent` are termed Opaque, and need a layout adaptor to wrap the emitted type. (e.g. `String64Array`, `WString16Array`)

### III. Code generation (`emit/`)

**`MemberEmitter`** produces a single-line `Tag::Member` struct with a `type` alias:

```cpp
struct MaxLife : Tag::Member { using type = s32&; };
struct SavePos : Tag::Member { using type = vec3f*; };
struct Name    : Tag::Member { using type = string64*; };
```

The suffix is determined by the traits:

| traits | suffix | example |
|--------|--------|---------|
| `Reference` | `&` | `float&`, `s32&`, `bool&` |
| `Pointer` | `*` | `string64*`, `vec3f*` |
| `Array<Transparent T>` | `span<T>*` | `span<bool>*`, `span<vec2f>*` |
| `Array<Opaque T>` elements | `adaptive_range<T>*` | `adaptive_range<string64>*` |

Arrays with Opaque T use `adaptive_range<T>` instead of `span<T>`. This tells the C++ side to apply a lazy per-element layout adaptor via `std::views::transform` rather than treating the blob slice as a plain span. `Primitive` and `Vector` types carry `Trait.Transparent`, so their arrays stay as `span<T>*`.

**`EnumEmitter`** wraps `MemberEmitter` output and injects an `underlying_enum_t` definition between the struct opening and the `using type` line:

```cpp
struct CurrentSpecialPower : Tag::Enum {
    enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), UltraHand = murmurhash3::hash("UltraHand"), ... };
    using type = enum_t<CurrentSpecialPower>&;
};
```

`StructureEmitter` is also exported as `TreeEmitter` from `tree.py`.

**`StructureEmitter`** writes a full subsystem header in four passes:

1. Tag struct: opens `struct Subsystem : Tag::Structure`, forward-declares nested structures, emits inline members and enums, closes.
2. Nested struct bodies: recurses into each child `Structure` and emits it to its own file when `include_dir` is set, and `#include`s after forward declaration. inline otherwise.
3. Data struct: emits `template <> struct Data::Structure<Subsystem> : Subsystem` with one typed field per member and an explicit constructor which overlays the subsytem on a Sav& blob. 
4. Hashtable specializations: `template <> hash_t constexpr Data::Hashtable<Subsystem::Member> = murmurhash3::hash("dot.path");` for every `Tag::Member`. The only exception is `Playtime`, it's original hash text is unknown; we're using a raw hex literal instead.

All three emitters accept `header_fp` for direct-to-file output. `StructureEmitter` additionally accepts `include_dir` for per-struct directory output. `#pragma once` and `#include <sage>` are prepended only when one of those is set; inline emission skips them.

## Output layout

By default, each struct writes to its own file. The `::` hierarchy becomes a `/` path under `lib/`:

```
lib/
  GameData.hpp
  GameData/
    PlayerStatus.hpp
    PlayerStatus/
      Companion.hpp
    DungeonState.hpp
    OwnedHorseList.hpp
    OwnedHorseList/
      Body.hpp
      Body/
        NoseColor.hpp
        PrimaryColor.hpp
        SecondaryColor.hpp
      Hair.hpp
      ...
    ...
```

With `--standalone`, everything is concatenated into a single `GameData.hpp` at the output root instead. In non-standalone mode, every header is self contained and can be included independently (the foward decl includes are obviously needed).