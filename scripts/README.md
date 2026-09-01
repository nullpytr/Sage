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

These add the underlying enum values to previously generated `Enum` or `EnumArray` members. Pattern matching uses `re.match`. Enum values are encoded as `murmurhash3::hash("<value>")`.

## Pipeline

```
gamedata.py
  tree.make_tree()        build in-memory tree from the metadata file
                          (calls promote_all_structs_to_maps_in_scope internally)
  Tree.sort()        sort children for deterministic output order
  TreeEmitter.emit() walk the tree, write header(s)
```

### 1. Tree building (`tree.py`)

`make_tree` dispatches each record to `parse_data_record` or `parse_enum_value_record`.

`parse_data_record` splits the dot-path (hashtext) into identifiers, walks the tree creating `Structure` nodes for each non-leaf identifier, and inserts a typed `Member` leaf at the end. Every identifier is sanitized: leading digits get a `_` prefix and hyphens become underscores.

`parse_enum_value_record` finds already-inserted `Enum` nodes by exact name or regex pattern match, then replaces each match with a complete copy that carries the `values` tuple. Before replacement, enum members exist in the tree as "incomplete" nodes with an empty `values` tuple.

After parsing, `promote_all_structs_to_maps_in_scope` post-processes the tree bottom-up, promoting eligible `Structure` nodes to `Map`. A structure qualifies if: all its children are non-array `Member` leaves, every child shares the same concrete type (or for `Enum` children, identical `values` tuples), and all child names follow a common prefix + numeric suffix pattern (e.g. `Dungeon000`…`Dungeon151`, `CheckPoint000`…). Promotion is bottom-up so nested maps are handled before their parents.

The tree is then sorted twice to guarantee deterministic output regardless of metadata order. `Structure.sort(by, key, reverse, recv) (aka Tree.sort)` sorts `children` in-place by any attribute, with an optional key transform and optional recursion into child structures (`recv=True` by default). The two passes are:

1. `sort(by="name")` - alphabetical A→Z across all children, recursively.
2. `sort(by="basename", key=("Member", "Enum", "Structure", "Map").index)` - groups by kind: members first, enums second, nested structures, maps last.

### 2. Type system (`types/`)

`resolve_member_type(raw_typename)` maps the logical typename string to a Python class. The lookup table is built at import time by reflecting all `Member` subclasses in scope, so adding a new concrete type is enough to register it.

| type | parent | traits | concrete types |
|------|--------|--------|----------------|
| `GameDataType` | | | |
| `Structure` | `GameDataType` | | |
| `Map` | `Structure` | | |
| `Member` | `GameDataType` | | |
| `Primitive` | `Member` | `Trait.Reference` → `Trait.Transparent` | `Bool`, `Int`, `UInt`, `UInt64`, `Float`, `Byte` |
| `String` | `Member` | `Trait.Pointer` | `String32`, `String64`, `WString16` |
| `Vector` | `Member` | `Trait.Transparent`, `Trait.Pointer` | `Vector2`, `Vector3` |
| `Array[T]` | `Member` | `Trait.Pointer` | `BoolArray`, `IntArray`, `UIntArray`, `UInt64Array`, `FloatArray`, `String64Array`, `WString16Array`, `Vector2Array`, `Vector3Array`, `ByteArray` |
| `Enum[EnumName: str]` | `Member` | | |
| `EnumArray[EnumName: str]` | `Enum`, `Array` | | |

Three traits on `Member` control what the emitter appends to the C++ member type:

- `Trait.Transparent`: type can be directly overlayed into blob without layout adaptation.
- `Trait.Reference` (extends `Transparent`): transparent type, accessor returns a reference (`&` suffix).
- `Trait.Pointer`: accessor automatically resolves indirection (`*` suffix).
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

Arrays with Opaque T use `adaptive_range<T>` instead of `span<T>`. This tells the C++ side to apply a lazy per-element layout adaptor via `std::views::transform` rather than treating the blob slice as a plain span. `Primitive` and `Vector` types carry `Trait.Transparent`, so their arrays stay as `span<T>`.

**`EnumEmitter`** wraps `MemberEmitter` output and injects an `underlying_enum_t` definition between the struct opening and the `using type` line (it is wrapped in a anonymous struct, to prevent name conflicts between the enum tag struct and the enum values):

```cpp
struct CurrentSpecialPower : Tag::Enum {
	using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), UltraHand = murmurhash3::hash("UltraHand"), ... , Amiibo = murmurhash3::hash("Amiibo"), }; };
	using type = enum_t<CurrentSpecialPower>&;
};
```

`StructureEmitter` is also exported as `TreeEmitter` from `tree.py`.

**`StructureEmitter`** writes a full subsystem header in four passes:

1. Tag struct: opens `struct Subsystem : Tag::Structure` (or `Tag::Map` for map structures), forward-declares nested structures, emits inline members and enums. For map structures, appends `using type = std::decay_t<<first_member>::type>` at the end of the tag body. Closes.
2. Nested struct bodies: recurses into each child `Structure` and emits it to its own file when `include_dir` is set, and `#include`s after forward declaration. inline otherwise.
3. Data struct: for regular structures, emits `template <> struct Data::[Structure | Map]<Subsystem> : Subsystem` with one typed field per member and an explicit `(Sav&)` constructor which overlays the subsystem on a `Sav&` blob.
4. Hashtable specializations: `template <> hash_value_t constexpr Data::Hashtable<Subsystem::Member> { "<hashtext>" };` for every `Tag::Member`. The only exception is `Playtime`, its original hash text is unknown; we're using a raw hex literal instead.
```cpp
struct GameData::PlayerStatus : Tag::Structure {
    struct MaxLife    : Tag::Member { using type = s32&; };
    struct SavePos    : Tag::Member { using type = vec3f*; };
	struct CurrentSpecialPower : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), UltraHand = murmurhash3::hash("UltraHand"), ... , Amiibo = murmurhash3::hash("Amiibo"), }; };
		using type = enum_t<CurrentSpecialPower>&;
	};
    struct Companion;
};
... (see full example below)
```


All three emitters accept `header_fp` for direct-to-file output. `StructureEmitter` additionally accepts `include_dir` for per-struct directory output. `#pragma once` and `#include <sage>` are prepended only when one of those is set; inline emission skips them.

## Output layout

By default (non-standalone mode), each struct writes to its own file. The `::` hierarchy becomes a `/` path under `lib/`:

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

Each header is independent of it's parent and can be included directly with a forward reference. With `--standalone`, everything is concatenated into a single `GameData.hpp` at the output root instead.  

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
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), UltraHand = murmurhash3::hash("UltraHand"), OneTouchBond = murmurhash3::hash("OneTouchBond"), CeilingClipper = murmurhash3::hash("CeilingClipper"), ReverseRecorder = murmurhash3::hash("ReverseRecorder"), AutoBuilder = murmurhash3::hash("AutoBuilder"), SheikahCamera = murmurhash3::hash("SheikahCamera"), Map = murmurhash3::hash("Map"), Amiibo = murmurhash3::hash("Amiibo"), }; };
		using type = enum_t<CurrentSpecialPower>&;
	};
	struct ParasailPattern : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Default = murmurhash3::hash("Default"), Pattern00 = murmurhash3::hash("Pattern00"), Pattern01 = murmurhash3::hash("Pattern01"), Pattern02 = murmurhash3::hash("Pattern02"), Pattern03 = murmurhash3::hash("Pattern03"), Pattern04 = murmurhash3::hash("Pattern04"), Pattern05 = murmurhash3::hash("Pattern05"), Pattern06 = murmurhash3::hash("Pattern06"), Pattern07 = murmurhash3::hash("Pattern07"), Pattern08 = murmurhash3::hash("Pattern08"), Pattern09 = murmurhash3::hash("Pattern09"), Pattern10 = murmurhash3::hash("Pattern10"), Pattern11 = murmurhash3::hash("Pattern11"), Pattern12 = murmurhash3::hash("Pattern12"), Pattern13 = murmurhash3::hash("Pattern13"), Pattern14 = murmurhash3::hash("Pattern14"), Pattern15 = murmurhash3::hash("Pattern15"), Pattern16 = murmurhash3::hash("Pattern16"), Pattern17 = murmurhash3::hash("Pattern17"), Pattern18 = murmurhash3::hash("Pattern18"), Pattern19 = murmurhash3::hash("Pattern19"), Pattern20 = murmurhash3::hash("Pattern20"), Pattern21 = murmurhash3::hash("Pattern21"), Pattern22 = murmurhash3::hash("Pattern22"), Pattern23 = murmurhash3::hash("Pattern23"), Pattern24 = murmurhash3::hash("Pattern24"), Pattern25 = murmurhash3::hash("Pattern25"), Pattern26 = murmurhash3::hash("Pattern26"), Pattern27 = murmurhash3::hash("Pattern27"), Pattern28 = murmurhash3::hash("Pattern28"), Pattern29 = murmurhash3::hash("Pattern29"), Pattern30 = murmurhash3::hash("Pattern30"), Pattern31 = murmurhash3::hash("Pattern31"), Pattern32 = murmurhash3::hash("Pattern32"), Pattern33 = murmurhash3::hash("Pattern33"), Pattern34 = murmurhash3::hash("Pattern34"), Pattern35 = murmurhash3::hash("Pattern35"), Pattern36 = murmurhash3::hash("Pattern36"), Pattern37 = murmurhash3::hash("Pattern37"), Pattern38 = murmurhash3::hash("Pattern38"), Pattern39 = murmurhash3::hash("Pattern39"), Pattern40 = murmurhash3::hash("Pattern40"), Pattern41 = murmurhash3::hash("Pattern41"), Pattern43 = murmurhash3::hash("Pattern43"), Pattern45 = murmurhash3::hash("Pattern45"), Pattern46 = murmurhash3::hash("Pattern46"), Pattern48 = murmurhash3::hash("Pattern48"), Pattern49 = murmurhash3::hash("Pattern49"), Pattern51 = murmurhash3::hash("Pattern51"), Pattern52 = murmurhash3::hash("Pattern52"), Pattern53 = murmurhash3::hash("Pattern53"), Pattern55 = murmurhash3::hash("Pattern55"), Pattern56 = murmurhash3::hash("Pattern56"), }; };
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

template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::BreakLife> { "PlayerStatus.BreakLife" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::CookBuff> { "PlayerStatus.CookBuff" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::CookBuffLv> { "PlayerStatus.CookBuffLv" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::CookBuffTime> { "PlayerStatus.CookBuffTime" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::CurrentMamo> { "PlayerStatus.CurrentMamo" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::CurrentRupee> { "PlayerStatus.CurrentRupee" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::ExtraEnergy> { "PlayerStatus.ExtraEnergy" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::ExtraLife> { "PlayerStatus.ExtraLife" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::ExtraStamina> { "PlayerStatus.ExtraStamina" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::FirstSkyIslandEventFailureOnce> { "PlayerStatus.FirstSkyIslandEventFailureOnce" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::HasAnyBluePrint> { "PlayerStatus.HasAnyBluePrint" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::IsEquipShoulderBelt> { "PlayerStatus.IsEquipShoulderBelt" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::IsEquipWaistBelt> { "PlayerStatus.IsEquipWaistBelt" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::IsForceDisableSummonCompanion> { "PlayerStatus.IsForceDisableSummonCompanion" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::IsForceDisableUseSpecialPower> { "PlayerStatus.IsForceDisableUseSpecialPower" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::IsMasterSwordSleeping> { "PlayerStatus.IsMasterSwordSleeping" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::IsUseCameraPointer> { "PlayerStatus.IsUseCameraPointer" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::IsUseTemporaryLife> { "PlayerStatus.IsUseTemporaryLife" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Life> { "PlayerStatus.Life" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::MasterSwordSleepTimer> { "PlayerStatus.MasterSwordSleepTimer" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::MaxEnergy> { "PlayerStatus.MaxEnergy" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::MaxLife> { "PlayerStatus.MaxLife" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::MaxLifeForBeforeVSGanon> { "PlayerStatus.MaxLifeForBeforeVSGanon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::MaxStamina> { "PlayerStatus.MaxStamina" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::SavePos> { "PlayerStatus.SavePos" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::SavePosRadY> { "PlayerStatus.SavePosRadY" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::TemporaryBreakLife> { "PlayerStatus.TemporaryBreakLife" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::TemporaryExtraEnergy> { "PlayerStatus.TemporaryExtraEnergy" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::TemporaryExtraLife> { "PlayerStatus.TemporaryExtraLife" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::TemporaryExtraStamina> { "PlayerStatus.TemporaryExtraStamina" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::TemporaryLife> { "PlayerStatus.TemporaryLife" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::UseScopeStartEvent> { "PlayerStatus.UseScopeStartEvent" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::WeaponAttachCount> { "PlayerStatus.WeaponAttachCount" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::ZonauEventFailureOnce> { "PlayerStatus.ZonauEventFailureOnce" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::CurrentSpecialPower> { "PlayerStatus.CurrentSpecialPower" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::ParasailPattern> { "PlayerStatus.ParasailPattern" };
```  
<br><hr> 
   
# scripts/bundle

Bundle Sage headers into a single self-contained file. A post-processing pass hoists unconditional `#include` directives out of the bundled output and sorts them at the top of the file.

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
