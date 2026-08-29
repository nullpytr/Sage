# scripts/gamedata

Python pipeline that generates the C++ headers under `lib/GameData/` from a semicolon-delimited metadata file. 

## Usage

```sh
py scripts/gamedata.py [options]
```

| flag | short | default | effect |
|------|-------|---------|--------|
| `--preset` | `-p` | `medium` | Metadata preset to use: (high \| low \| medium); mutually exclusive with `--metadata` |
| `--metadata` | `-m` | | Path to an arbitrary metadata file; mutually exclusive with `--preset` |
| `--out` | `-o` | `lib/` | Output directory for generated headers |
| `--name` | `-n` | `GameData` | Top-level structure/header name; mutually exclusive with `--pick` |
| `--pick` | `-q` | | Cherry-pick a single tag type by `::` path (e.g. `OwnedHorseList::Body::EyeColor`); output header/directory name matches the tag type; mutually exclusive with `--name` |
| `--standalone` | `-s` | | Emit a single combined header instead of per-subsytem files |
| `--clear` | `-c` | | Delete generated headers without regenerating; mutually exclusive with `--dirty` |
| `--dry` | | | Parse the tree without writing any files |
| `--tree` | | | Only generate the type tree as JSON and exit |
| `--dirty` | | | Skip deleting the output directory before writing; mutually exclusive with `--clear` |
| `--verbose` | `-v` | `false` | Show parser and emitter debug output |

Presets are `.txt` files discovered from `data/presets/`

## Input: Metadata format

Preset and metadata files are semicolon-delimited with two record types. Lines starting with `#` are ignored.

### Member records

```
Hashval ; Typename ; Hashtext
```

| column | example | meaning |
|--------|---------|---------|
| `Hashval` | `d2ddb868` | MurmurHash3 of the full dot-path, as stored in the save blob |
| `Typename` | `WString16Array` | logical type (see type table below) |
| `Hashtext` | `OwnedHorseList.Name` | dot-separated path describing the in-game data hierarchy |

### EnumValues records

```
EnumValues ; target ; Value1,Value2,...
```

`target` can be:

- A single dot-path (hashtext): `MapData.CurrentLayer`
- A comma-separated list of exact paths: `LastWildHorse.Mane,OwnedHorseList.Mane`
- A regexp  pattern with wildcard: `DungeonState.Dungeon*`, `PlayerStatus.Companion.*.JoiningCondition`

These add the underlying enum values to previously declared `Enum` or `EnumArray` members. Pattern matching uses `re.match`. Enum values are encoded as `murmurhash3::hash("Value")`.

## Pipeline

```
gamedata.py
  tree.make_tree()        build in-memory tree from the metadata file
  Tree.sort()        sort children for deterministic output order
  TreeEmitter.emit() walk the tree, write header(s)
```

### 1. Tree building (`tree.py`)

`make_tree` dispatches each record to `parse_data_record` or `parse_enum_value_record`.

`parse_data_record` splits the dot-path (hashtext) into identifiers, walks the tree creating `Structure` nodes for each non-leaf identifier, and inserts a typed `Member` leaf at the end. Every identifier is sanitized: leading digits get a `_` prefix and hyphens become underscores.

`parse_enum_value_record` finds already-inserted `Enum` nodes by exact name or regex pattern match, then replaces each match with a complete copy that carries the `values` tuple. Before replacement, enum members exist in the tree as "incomplete" nodes with an empty `values` tuple.

After parsing, the tree is sorted twice to guarantee deterministic output regardless of metadata order. `Structure.sort(by, key, reverse, recv) (aka Tree.sort)` sorts `children` in-place by any attribute, with an optional key transform and optional recursion into child structures (`recv=True` by default). The two passes are:

1. `sort(by="name")` - alphabetical A→Z across all children, recursively.
2. `sort(by="basename", key=("Tag::Member", "Tag::Enum", "Tag::Structure").index)` - groups by kind: members first, enums second, nested structures last.

### 2. Type system (`types/`)

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

### 3. Code generation (`emit/`)

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
4. Hashtable specializations: `template <> hash_t constexpr Data::Hashtable<Subsystem::Member> = murmurhash3::hash("hashtext");` for every `Tag::Member`. The only exception is `Playtime`, it's original hash text is unknown; we're using a raw hex literal instead.
```cpp
struct GameData::PlayerStatus : Tag::Structure {
    struct MaxLife    : Tag::Member { using type = s32&; };
    struct SavePos    : Tag::Member { using type = vec3f*; };
    struct CurrentSpecialPower : Tag::Enum {
        enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), UltraHand = murmurhash3::hash("UltraHand"), ... };
        using type = enum_t<CurrentSpecialPower>&;
    };
    struct Companion;
};
```


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

Putting it all together here is an example header `GameData::PlayerStatus` in non-standalone mode:
```cpp
#pragma once
#include <sage>

struct GameData::PlayerStatus : Tag::Structure {
	struct BreakLife : Tag::Member { using type = s32&; };
	struct CookBuff : Tag::Member { using type = s32&; };
	struct CookBuffLv : Tag::Member { using type = s32&; };
	struct CookBuffTime : Tag::Member { using type = float&; };
	struct CurrentMamo : Tag::Member { using type = s32&; };
	struct CurrentRupee : Tag::Member { using type = s32&; };
	struct ExtraEnergy : Tag::Member { using type = float&; };
	struct ExtraLife : Tag::Member { using type = s32&; };
	struct ExtraStamina : Tag::Member { using type = float&; };
	struct FirstSkyIslandEventFailureOnce : Tag::Member { using type = bool&; };
	struct HasAnyBluePrint : Tag::Member { using type = bool&; };
	struct IsEquipShoulderBelt : Tag::Member { using type = bool&; };
	struct IsEquipWaistBelt : Tag::Member { using type = bool&; };
	struct IsForceDisableSummonCompanion : Tag::Member { using type = bool&; };
	struct IsForceDisableUseSpecialPower : Tag::Member { using type = bool&; };
	struct IsMasterSwordSleeping : Tag::Member { using type = bool&; };
	struct IsUseCameraPointer : Tag::Member { using type = bool&; };
	struct IsUseTemporaryLife : Tag::Member { using type = bool&; };
	struct Life : Tag::Member { using type = s32&; };
	struct MasterSwordSleepTimer : Tag::Member { using type = float&; };
	struct MaxEnergy : Tag::Member { using type = float&; };
	struct MaxLife : Tag::Member { using type = s32&; };
	struct MaxLifeForBeforeVSGanon : Tag::Member { using type = s32&; };
	struct MaxStamina : Tag::Member { using type = float&; };
	struct SavePos : Tag::Member { using type = vec3f*; };
	struct SavePosRadY : Tag::Member { using type = float&; };
	struct TemporaryBreakLife : Tag::Member { using type = s32&; };
	struct TemporaryExtraEnergy : Tag::Member { using type = float&; };
	struct TemporaryExtraLife : Tag::Member { using type = s32&; };
	struct TemporaryExtraStamina : Tag::Member { using type = float&; };
	struct TemporaryLife : Tag::Member { using type = s32&; };
	struct UseScopeStartEvent : Tag::Member { using type = bool&; };
	struct WeaponAttachCount : Tag::Member { using type = s32&; };
	struct ZonauEventFailureOnce : Tag::Member { using type = bool&; };
	struct CurrentSpecialPower : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), UltraHand = murmurhash3::hash("UltraHand"), OneTouchBond = murmurhash3::hash("OneTouchBond"), CeilingClipper = murmurhash3::hash("CeilingClipper"), ReverseRecorder = murmurhash3::hash("ReverseRecorder"), AutoBuilder = murmurhash3::hash("AutoBuilder"), SheikahCamera = murmurhash3::hash("SheikahCamera"), Map = murmurhash3::hash("Map"), Amiibo = murmurhash3::hash("Amiibo"), };
		using type = enum_t<CurrentSpecialPower>&;
	};
	struct ParasailPattern : Tag::Enum {
		enum underlying_enum_t : hash_t { Default = murmurhash3::hash("Default"), Pattern00 = murmurhash3::hash("Pattern00"), Pattern01 = murmurhash3::hash("Pattern01"), Pattern02 = murmurhash3::hash("Pattern02"), Pattern03 = murmurhash3::hash("Pattern03"), Pattern04 = murmurhash3::hash("Pattern04"), Pattern05 = murmurhash3::hash("Pattern05"), ..., Pattern51 = murmurhash3::hash("Pattern51"), Pattern52 = murmurhash3::hash("Pattern52"), Pattern53 = murmurhash3::hash("Pattern53"), Pattern55 = murmurhash3::hash("Pattern55"), Pattern56 = murmurhash3::hash("Pattern56"), };
		using type = enum_t<ParasailPattern>&;
	};
	struct Companion;
};/* Tag::Structure GameData::PlayerStatus close */

#include "PlayerStatus/Companion.hpp"

template <> struct Data::Structure<GameData::PlayerStatus> : GameData::PlayerStatus {
	Member<BreakLife> BreakLife;
	Member<CookBuff> CookBuff;
	Member<CookBuffLv> CookBuffLv;
	Member<CookBuffTime> CookBuffTime;
	Member<CurrentMamo> CurrentMamo;
	Member<CurrentRupee> CurrentRupee;
	Member<ExtraEnergy> ExtraEnergy;
	Member<ExtraLife> ExtraLife;
	Member<ExtraStamina> ExtraStamina;
	Member<FirstSkyIslandEventFailureOnce> FirstSkyIslandEventFailureOnce;
	Member<HasAnyBluePrint> HasAnyBluePrint;
	Member<IsEquipShoulderBelt> IsEquipShoulderBelt;
	Member<IsEquipWaistBelt> IsEquipWaistBelt;
	Member<IsForceDisableSummonCompanion> IsForceDisableSummonCompanion;
	Member<IsForceDisableUseSpecialPower> IsForceDisableUseSpecialPower;
	Member<IsMasterSwordSleeping> IsMasterSwordSleeping;
	Member<IsUseCameraPointer> IsUseCameraPointer;
	Member<IsUseTemporaryLife> IsUseTemporaryLife;
	Member<Life> Life;
	Member<MasterSwordSleepTimer> MasterSwordSleepTimer;
	Member<MaxEnergy> MaxEnergy;
	Member<MaxLife> MaxLife;
	Member<MaxLifeForBeforeVSGanon> MaxLifeForBeforeVSGanon;
	Member<MaxStamina> MaxStamina;
	Member<SavePos> SavePos;
	Member<SavePosRadY> SavePosRadY;
	Member<TemporaryBreakLife> TemporaryBreakLife;
	Member<TemporaryExtraEnergy> TemporaryExtraEnergy;
	Member<TemporaryExtraLife> TemporaryExtraLife;
	Member<TemporaryExtraStamina> TemporaryExtraStamina;
	Member<TemporaryLife> TemporaryLife;
	Member<UseScopeStartEvent> UseScopeStartEvent;
	Member<WeaponAttachCount> WeaponAttachCount;
	Member<ZonauEventFailureOnce> ZonauEventFailureOnce;
	Enum<CurrentSpecialPower> CurrentSpecialPower;
	Enum<ParasailPattern> ParasailPattern;
	Structure<Companion> Companion;
	
	explicit Structure(Sav& s) : 
		BreakLife { s.get<struct BreakLife>() },
		CookBuff { s.get<struct CookBuff>() },
		CookBuffLv { s.get<struct CookBuffLv>() },
		CookBuffTime { s.get<struct CookBuffTime>() },
		CurrentMamo { s.get<struct CurrentMamo>() },
		CurrentRupee { s.get<struct CurrentRupee>() },
		ExtraEnergy { s.get<struct ExtraEnergy>() },
		ExtraLife { s.get<struct ExtraLife>() },
		ExtraStamina { s.get<struct ExtraStamina>() },
		FirstSkyIslandEventFailureOnce { s.get<struct FirstSkyIslandEventFailureOnce>() },
		HasAnyBluePrint { s.get<struct HasAnyBluePrint>() },
		IsEquipShoulderBelt { s.get<struct IsEquipShoulderBelt>() },
		IsEquipWaistBelt { s.get<struct IsEquipWaistBelt>() },
		IsForceDisableSummonCompanion { s.get<struct IsForceDisableSummonCompanion>() },
		IsForceDisableUseSpecialPower { s.get<struct IsForceDisableUseSpecialPower>() },
		IsMasterSwordSleeping { s.get<struct IsMasterSwordSleeping>() },
		IsUseCameraPointer { s.get<struct IsUseCameraPointer>() },
		IsUseTemporaryLife { s.get<struct IsUseTemporaryLife>() },
		Life { s.get<struct Life>() },
		MasterSwordSleepTimer { s.get<struct MasterSwordSleepTimer>() },
		MaxEnergy { s.get<struct MaxEnergy>() },
		MaxLife { s.get<struct MaxLife>() },
		MaxLifeForBeforeVSGanon { s.get<struct MaxLifeForBeforeVSGanon>() },
		MaxStamina { s.get<struct MaxStamina>() },
		SavePos { s.get<struct SavePos>() },
		SavePosRadY { s.get<struct SavePosRadY>() },
		TemporaryBreakLife { s.get<struct TemporaryBreakLife>() },
		TemporaryExtraEnergy { s.get<struct TemporaryExtraEnergy>() },
		TemporaryExtraLife { s.get<struct TemporaryExtraLife>() },
		TemporaryExtraStamina { s.get<struct TemporaryExtraStamina>() },
		TemporaryLife { s.get<struct TemporaryLife>() },
		UseScopeStartEvent { s.get<struct UseScopeStartEvent>() },
		WeaponAttachCount { s.get<struct WeaponAttachCount>() },
		ZonauEventFailureOnce { s.get<struct ZonauEventFailureOnce>() },
		CurrentSpecialPower { s.get<struct CurrentSpecialPower>() },
		ParasailPattern { s.get<struct ParasailPattern>() },
		Companion { s }
	{ }
};/* Data::Structure GameData::PlayerStatus close */

template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::BreakLife> = murmurhash3::hash("PlayerStatus.BreakLife");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::CookBuff> = murmurhash3::hash("PlayerStatus.CookBuff");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::CookBuffLv> = murmurhash3::hash("PlayerStatus.CookBuffLv");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::CookBuffTime> = murmurhash3::hash("PlayerStatus.CookBuffTime");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::CurrentMamo> = murmurhash3::hash("PlayerStatus.CurrentMamo");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::CurrentRupee> = murmurhash3::hash("PlayerStatus.CurrentRupee");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::ExtraEnergy> = murmurhash3::hash("PlayerStatus.ExtraEnergy");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::ExtraLife> = murmurhash3::hash("PlayerStatus.ExtraLife");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::ExtraStamina> = murmurhash3::hash("PlayerStatus.ExtraStamina");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::FirstSkyIslandEventFailureOnce> = murmurhash3::hash("PlayerStatus.FirstSkyIslandEventFailureOnce");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::HasAnyBluePrint> = murmurhash3::hash("PlayerStatus.HasAnyBluePrint");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::IsEquipShoulderBelt> = murmurhash3::hash("PlayerStatus.IsEquipShoulderBelt");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::IsEquipWaistBelt> = murmurhash3::hash("PlayerStatus.IsEquipWaistBelt");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::IsForceDisableSummonCompanion> = murmurhash3::hash("PlayerStatus.IsForceDisableSummonCompanion");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::IsForceDisableUseSpecialPower> = murmurhash3::hash("PlayerStatus.IsForceDisableUseSpecialPower");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::IsMasterSwordSleeping> = murmurhash3::hash("PlayerStatus.IsMasterSwordSleeping");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::IsUseCameraPointer> = murmurhash3::hash("PlayerStatus.IsUseCameraPointer");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::IsUseTemporaryLife> = murmurhash3::hash("PlayerStatus.IsUseTemporaryLife");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Life> = murmurhash3::hash("PlayerStatus.Life");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::MasterSwordSleepTimer> = murmurhash3::hash("PlayerStatus.MasterSwordSleepTimer");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::MaxEnergy> = murmurhash3::hash("PlayerStatus.MaxEnergy");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::MaxLife> = murmurhash3::hash("PlayerStatus.MaxLife");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::MaxLifeForBeforeVSGanon> = murmurhash3::hash("PlayerStatus.MaxLifeForBeforeVSGanon");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::MaxStamina> = murmurhash3::hash("PlayerStatus.MaxStamina");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::SavePos> = murmurhash3::hash("PlayerStatus.SavePos");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::SavePosRadY> = murmurhash3::hash("PlayerStatus.SavePosRadY");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::TemporaryBreakLife> = murmurhash3::hash("PlayerStatus.TemporaryBreakLife");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::TemporaryExtraEnergy> = murmurhash3::hash("PlayerStatus.TemporaryExtraEnergy");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::TemporaryExtraLife> = murmurhash3::hash("PlayerStatus.TemporaryExtraLife");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::TemporaryExtraStamina> = murmurhash3::hash("PlayerStatus.TemporaryExtraStamina");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::TemporaryLife> = murmurhash3::hash("PlayerStatus.TemporaryLife");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::UseScopeStartEvent> = murmurhash3::hash("PlayerStatus.UseScopeStartEvent");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::WeaponAttachCount> = murmurhash3::hash("PlayerStatus.WeaponAttachCount");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::ZonauEventFailureOnce> = murmurhash3::hash("PlayerStatus.ZonauEventFailureOnce");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::CurrentSpecialPower> = murmurhash3::hash("PlayerStatus.CurrentSpecialPower");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::ParasailPattern> = murmurhash3::hash("PlayerStatus.ParasailPattern");
```  
<br><hr> 
   
# scripts/bundle

Bundle Sage headers into a single self-contained file. After quom runs, a post-processing pass hoists unconditional `#include` directives out of the bundled output and sorts them at the top of the file.

Requires the [quom](https://github.com/Viatorus/quom) tool made by [Viatorus](https://github.com/Viatorus):
```sh
pip install quom
```

## Usage

```sh
py scripts/bundle.py [source] [options]
```

| arg / flag | short | default | effect |
|------------|-------|---------|--------|
| `source` | | `Sage.hpp` | Top-level source header to bundle |
| `--out` | `-o` | `include/sage` | Output header path |
| `--include` | `-I` | `lib` | Additional include search directories; may be repeated |
| `--unsafe` | `-u` | | Also hoist includes inside conditional blocks, WILL break the conditional logic |
| `--quiet` | `-q` | | Do not output list of hoisted includes |
