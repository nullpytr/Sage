# Sage

C++23 header-only library for no-copy, in-place inspection and editing of *The Legend of Zelda: Tears of the Kingdom* save game files.  All member reads and writes go directly into the loaded save blob. Only lightweight view types, no serialization round-trip.

## Usage

1. Download the [bundled header](../../releases/latest) (or [generate your own](./scripts/README.md#scriptsbundle)) and place it in your project's include directory.

2. Set it up as a precompiled header to avoid recompilation on every build of your project.

   **CMake:** `target_precompile_headers(your_target PRIVATE sage)`

3. In your code, simply:

   ```cpp
   #include <sage>
   ```
   
To update to a newer version, simply drop in the latest bundled header from [releases](../../releases).

## API

Load a save file using
```cpp
Sav save { "other/progress.sav" };
```

& Export it after editing using
```cpp
save.dump("export.sav");
```
  
  
Sage provides three different ways to access save data from a save file - 3 tiers of abstraction:

### High-level (recommended)

Fully type safe & structured access using the GameData overlay model.

```cpp
{ // Pathway A: Parse entire save in one go and use overlay instances
   auto const& data = save.get<GameData>();
   auto const& playtime = data.Playtime;
   auto const& status = data.PlayerStatus.MaxLife;
   auto const& stamina = data.PlayerStatus.MaxStamina;
}

{ // Pathway B: Parse and use only what you want using overlay types
   auto const& playtime = save.get<GameData::Playtime>(); // member field
   auto const& status = save.get<GameData::PlayerStatus>(); // subsystem

   // subsystem overlay fully loaded in, access anything
   auto const& life = status.MaxLife;
   auto const& stamina = status.MaxStamina;

   // or skip the subsytem entirely
   auto const& life_ = save.get<GameData::PlayerStatus::MaxLife>();
   auto const & stamina_ = save.get<GameData::PlayerStatus::MaxStamina>();
}
```

### Medium-level

Get a pointer or reference to a member field by it's path or hash value. The string literals are hashed at compile time and stripped out of the binary (that's why they need to be wrapped with braces `{}`). Useful for fields not yet covered by the generated headers.


```cpp
{ // Get pointers to fields using hash text or value
   auto* playtime = save.ptr<u32>(hash_value_t { 0xe573f564 });
   auto* life = save.ptr<s32>({ "PlayerStatus.MaxLife" });
}

{ // Get references to fields using hash text or value
   auto& playtime = save.ref<u32>(hash_value_t { 0xe573f564 });
   auto& life = save.ref<s32>({ "PlayerStatus.MaxLife" });

   auto& stamina = *save.ptr<s32>({ "PlayerStatus.MaxStamina" }); // also works
}
```

### Low level

Get a pointer or reference to data at a given offset directly.

```cpp
auto* hashtable = save.ptr<hash_t>(METADATA_HASHTABLE_START);
std::println("{}", hashtable[0] == save.ref<hash_t>(METADATA_HASHTABLE_START)); // true
```
## Examples
The example below patches the hearts, stamina, rupee and bubbul gem values to their max limits, essentially like a cheat. 

```cpp
auto status = save.get<GameData::PlayerStatus>(); // get subsystem overlay

constexpr auto limit_rupee = std::numeric_limits<std::decay_t<decltype(status.CurrentRupee)>>::max(); // limits
constexpr auto limit_mamo = std::numeric_limits<std::decay_t<decltype(status.CurrentMamo)>>::max();

status.MaxLife = LIMIT_MAX_LIFE; // set
status.MaxStamina = LIMIT_MAX_STAMINA;
status.MaxEnergy = LIMIT_MAX_ENERGY;
status.CurrentRupee = limit_rupee;
status.CurrentMamo = limit_mamo;

require(save.get<GameData::PlayerStatus::MaxLife>() == LIMIT_MAX_LIFE); // verify
require(save.get<GameData::PlayerStatus::MaxStamina>() == LIMIT_MAX_STAMINA);
require(save.get<GameData::PlayerStatus::MaxEnergy>() == LIMIT_MAX_ENERGY);
require(save.get<GameData::PlayerStatus::CurrentRupee>() == limit_rupee);
require(save.get<GameData::PlayerStatus::CurrentMamo>() == limit_mamo);
```

The changes reflect in game which can be seen in this snapshot: ![images-example](../../releases/download/images/example.png)

The full code for this cheat can be found [here](./examples/Cheat.cpp) and more examples can be found [here](./examples).

## How it works

![images-sage](../../releases/download/images/diagram.png)

### 1. Sav: file I/O and field lookup

`Sav` reads the entire save file into a `std::vector<byte>`. On construction it walks the blob's internal hash table and builds an `unordered_map<hash_t, offset_t>` for O(1) field lookup by name hash. All subsequent member access "overlay" that buffer.

Filesystem I/O lives in `Core/Filesystem.hpp` via `read_all_bytes()` and `write_all_bytes()`.

### 2. Overlay System

The type system splits into two namespaces:

- `Tag::Structure`, `Tag::Member`, `Tag::Enum` are compile-time constraints. Template specializations are gated behind `std::derived_from` concept checks so only valid types are accepted.
- `Data::Structure<S>` is the constructible copy of the tag structure, it can be constructed with Sav&, and "overlays" its members over the data of the Sav object. Automatically constructed on `Sav::get<S>()`.
- `Data::Hashtable<M>` stores compile-time hash values for each member, computed via `consteval murmurhash3::hash()`. Each subsystem header defines its own specializations; `lib/GameData/GameData.hpp` includes all ~50 of them. `lib/Sage.hpp` includes `GameData.hpp`, and `include/sage` forwards to `Sage.hpp`, so a single `#include <sage>` brings everything in.

### 3. `Sav::get<[S|M|E]>()` dispatch

`get<[S|M|E]>()` dispatches at compile time based on the tag `T` carries:

- `Tag::Structure (S)`: builds `Data::Structure<T>`, initializing every member reference from the blob.
- `Tag::Member (M)`: resolves the hash from `Data::Hashtable<M>` and applies layout adaptation. If the member type is a pointer (e.g. `X*`), `get<M>()` resolves the indirection automatically and returns `X`. Non-pointer members (e.g. `float&`) read directly from the runtime hashtable offset.
- `Tag::Enum (E)`: `Tag::Enum` inherits from `Tag::Member`, so enum members go through the same `get<M>()` path. Scalar enums have `type = enum_t<E>&` (non-pointer, direct read); enum arrays have `type = span<enum_t<E>>*` (pointer-indirect).

### 4. Overlay layout adaptors

The blob uses Nintendo's binary layout, which doesn't map 1:1 to C++ types. `Core/Layout.hpp` adapts each type at point of access with no copying of the underlying data, always "overlaying" or "viewing" the buffer.

| type | Blob layout | C++ type | Adapter |
|---|---|---|---|
| `primitive` | `u8`-`u64`, `s8`-`s64`, `float` | direct `&` | not needed, identical memory layout |
| `vec2f \| vec3f` | `float[2\|3]` | `vec2f \| vec3f` | needs pointer indirection resolution |
| `string<CharT>` | `CharT buf[N+1]` | `string16/32/64`, `wstring16/32/64` (`mutable_string_view`) | raw char buffer as a mutable bounds-checked string view |
| `array<T>` | `{ u32 size; T data[] }` | `span<T>` | needs pointer indirection resolution |
| `enum`  | `hash_t enum_value` | `enum_t<E>&` | not needed |
| `enum array` | `hash_t enum_buf[]` | `span<enum_t<E>>` | needs pointer indirection; each element reinterpreted as a typed enum |
| `array<adaptive_t>` | nested array of adaptive types | `adaptive_range<T>` (lazy `std::views::transform`) | lazy per-element layout adapt via `std::views::transform`; still no copy |

## Codegen

The overlay schema is autogenerated from `data/preset`(s) or explicit metadata files, and output to `lib/GameData`. See [`scripts`](./scripts) for more information.

## Dependencies (vendored at `include/External/`)

- [boost::static_string](https://github.com/boostorg/static_string) - A patched version (header-only, standalone mode). Provides fixed-capacity string views backing `string16/32/64` and their wide variants.
- [StaticMurmurHash3](https://github.com/AntonJohansson/StaticMurmur/blob/master/StaticMurmur.hpp) - A compile time implementation of MurmurHash3 by [AntonJohansson](https://github.com/AntonJohansson)

## Build

Requires *CMake 3.16+* and a *C++23* compiler.

```sh
cmake -S . -B build
cmake --build build
```

## Credits

Code reference: [Marc Robeldo](https://www.marcrobledo.com/savegame-editors/zelda-totk)  
Data mining: [MrCheeze](https://github.com/MrCheeze/totk-tools) & [McSpazzy](https://github.com/McSpazzy/totk-gamedata)
