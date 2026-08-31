# Sage

C++23 header-only library for no-copy, in-place inspection and editing of *The Legend of Zelda: Tears of the Kingdom* save game files. Edit memory-mapped save files directly using lightweight view types, skip the serialization round-trip.

## Usage

1. Download the lastest [bundled header](../../releases/latest) (or [generate your own](./scripts/README.md#scriptsbundle)) and place it in your project's include directory.

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

The file is memory-mapped for the lifetime of the `Sav` object. Any writes through the API are reflected in the file directly, which are synced to disk when `save` goes out of scope. You can call `save.flush()` to force them to disk immediately.

Sage provides three different ways to access save data from a save file - 3 tiers of abstraction:

### High-level (recommended)

Fully type safe & structured access using the GameData overlay model.

```cpp
{ // Pathway A: Parse entire save in one go and use overlay instances (Sage v0.2+)
   auto const& data = save.get<GameData>();
   auto const& playtime = data.Playtime;
   auto const& status = data.PlayerStatus.MaxLife;
   auto const& stamina = data.PlayerStatus.MaxStamina;
}

{ // Pathway B: Parse and use only what you want using overlay types (Sage v0.4+)
   auto const& playtime = save.get<GameData::Playtime>(); // member field
   auto const& status = save.get<GameData::PlayerStatus>(); // subsystem

   // subsystem overlay fully loaded in, access anything
   auto const& life = status.MaxLife;
   auto const& stamina = status.MaxStamina;

   // or skip the subsystem entirely
   auto const& life_ = save.get<GameData::PlayerStatus::MaxLife>();
   auto const& stamina_ = save.get<GameData::PlayerStatus::MaxStamina>();
}
```

Sage v0.5.2 adds `from` & `as` keywords to access data using macros. Clean but can cause unintentional expansions.
Opt-out using `#define SAGE_DISABLE_KEYWORD_ACCESS` before `#include <sage>`.

```cpp
{ // Pathway A: Parse entire save in one go and use overlay instances
  auto const& data { GameData from save };
  auto const& data_ { save as GameData }; // equivalent

  auto const& playtime = data.Playtime;
  auto const& status = data.PlayerStatus.MaxLife;
  auto const& stamina = data.PlayerStatus.MaxStamina;
}

{ // Pathway B: Parse and use only what you want using overlay types
  auto const& playtime { GameData::Playtime from save }; // OR: { save as GameData::Playtime }
  auto const& status { GameData::PlayerStatus from save }; // OR: { save as GameData::PlayerStatus }

  // subsystem overlay fully loaded in, access anything
  auto const& life = status.MaxLife;
  auto const& stamina = status.MaxStamina;

  // or skip the subsystem entirely
  auto const& life_ { GameData::PlayerStatus::MaxLife from save }; // OR: { save as GameData::PlayerStatus::MaxLife }
  auto const& stamina_ { GameData::PlayerStatus::MaxStamina from save }; // OR: { save as GameData::PlayerStatus::MaxStamina }
}
```

### Medium-level

Get a pointer or reference to a member field from its type and path or hash value. The string literals are hashed at compile time and stripped out of the binary (that's why they need to be wrapped with braces `{}`). Useful for fields not yet covered by the generated headers. (Sage v0.1+)


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

Get a typed pointer or reference to data at a given offset directly. (Sage v0.1+)

```cpp
auto* hashtable = save.ptr<hash_t>(METADATA_HASHTABLE_START);
std::println("{}", hashtable[0] == save.ref<hash_t>(METADATA_HASHTABLE_START)); // true
```
## Examples
The example below patches the hearts, stamina, rupee and bubbul gem values to their max limits, essentially like a cheat. 

```cpp
auto status { GameData::PlayerStatus from save }; // get subsystem overlay

constexpr auto limit_rupee = std::numeric_limits<std::decay_t<decltype(status.CurrentRupee)>>::max(); // limits
constexpr auto limit_mamo = std::numeric_limits<std::decay_t<decltype(status.CurrentMamo)>>::max();

status.MaxLife = LIMIT_MAX_LIFE; // set
status.MaxStamina = LIMIT_MAX_STAMINA;
status.MaxEnergy = LIMIT_MAX_ENERGY;
status.CurrentRupee = limit_rupee;
status.CurrentMamo = limit_mamo;


require(save as GameData::PlayerStatus::MaxLife == LIMIT_MAX_LIFE); // verify
require(save as GameData::PlayerStatus::MaxStamina == LIMIT_MAX_STAMINA);
require(save as GameData::PlayerStatus::MaxEnergy == LIMIT_MAX_ENERGY);
require(save as GameData::PlayerStatus::CurrentRupee == limit_rupee);
require(save as GameData::PlayerStatus::CurrentMamo == limit_mamo);
```

The changes reflect in game which can be seen in this snapshot: ![images-example](../../releases/download/images/example.png)

The full code for this cheat can be found [here](./examples/Cheat.cpp) and more examples can be found [here](./examples).

## How it works

![images-sage](../../releases/download/images/diagram.png)

### 1. Sav: file I/O and field lookup

`Sav` memory-maps the save file on construction using [mio](https://github.com/vimpunk/mio) (`External/Mio.hpp`). It then walks the blob's internal hash table and builds an `unordered_map<hash_t, offset_t>` for O(1) field lookup by name hash. This is the only data copied, all subsequently accessed members overlay the memory-mapped file directly, no data is copied.

Writes through `ref<T>()` go straight to the mapped file and are flushed using `::flush()` or automatically when the `Sav` instance goes out of scope.

### 2. Overlay System

The type system splits into two namespaces:

- `Tag::Structure`, `Tag::Member`, `Tag::Enum` are compile-time constraints. Template specializations are gated behind `std::derived_from` concept checks so only valid types are accepted.
- `Data::Structure<S>` is the constructible copy of the tag structure, it can be constructed with Sav&, and "overlays" its members over the data of the Sav object. Automatically constructed on `Sav::get<S>()`.
- `Data::Hashtable<M>` stores compile-time hash values for each member, computed via `consteval murmurhash3::hash()`.  

Each subsystem header defines its own specializations; See [below](./README.md#Codegen).

### 3. `Sav::get<T = S|M|E>()` dispatch

`get<T = S|M|E>()` dispatches at compile time based on the tag `T` carries:

- `Tag::Structure (S)`: builds `Data::Structure<T>`, initializing every member reference from the blob.
- `Tag::Member (M)`: resolves the hash from `Data::Hashtable<M>` and applies layout adaptation. If the member type is a pointer (e.g. `X*`), `get<M>()` resolves the indirection automatically and returns `X`. Non-pointer members (e.g. `float&`) read directly from the runtime hashtable offset.
- `Tag::Enum (E)`: `Tag::Enum` inherits from `Tag::Member`, so enum members go through the same `get<M>()` path.

### 4. Overlay layout adaptors

The blob layout doesn't always map 1:1 to modern C++ types. `Core/Layout.hpp` adapts each type at point of access with no copying of the underlying data, always "overlaying" or "viewing" the buffer.

| Blob type | Blob layout | View type | Adapter |
|---|---|---|---|
| `primitive` | `u8`-`u64`, `s8`-`s64`, `float` | direct `&` | not needed, identical memory layout |
| `vec2f \| vec3f` | `float[2\|3]` | `vec2f& \| vec3f&` | needs only pointer indirection resolution |
| `string<N, CharT>` | `CharT buf[N]` | `string16/32/64`, `wstring16/32/64` (`mutable_string_view`) | converted into a mutable bounds-checked string view type |
| `array<T>` | `{ u32 size; T data[] }` | `span<T>` | needs only pointer indirection resolution |
| `enum`  | `hash_t enum_value` | `enum_t<E>&` | not needed |
| `enum array` | `hash_t enum_buf[]` | `span<enum_t<E>>` | needs only pointer indirection |
| `array<adaptive_t>` | array of adaptive types | `adaptive_range<T>` (`std::views::transform`) | lazy per-element layout adapt; view types constructed on *element access* |

## Codegen

The overlay schema is autogenerated from `data/preset`(s) or explicit metadata files, and output to `lib/GameData`. See [`scripts`](./scripts) for more information.

## Dependencies (vendored at `include/External/`)

- [mio](https://github.com/vimpunk/mio) ([`External/Mio.hpp`](./lib/External/Mio.hpp)) - Header-only cross-platform memory-mapped file I/O.
- [boost::static_string](https://github.com/boostorg/static_string) ([`External/String.hpp`](./lib/External/String.hpp)) - A patched version (header-only, standalone mode). Provides fixed-capacity string views backing `string16/32/64` and their wide variants.
- [StaticMurmurHash3](https://github.com/AntonJohansson/StaticMurmur/blob/master/StaticMurmur.hpp) ([`External/MurmurHash3.hpp`](./lib/External/MurmurHash3.hpp)) - A compile time implementation of MurmurHash3 by [AntonJohansson](https://github.com/AntonJohansson).
- [utfcpp](https://github.com/nemtrif/utfcpp) ([`External/UTF8.hpp`](./lib/External/UTF8.hpp))  - Header-only UTF-8/16/32 conversion library. Used for `wstring16` formatting (re-encoding at utf8).

## Build

Requires *CMake 3.16+* and a *C++23* compiler.

```sh
cmake -S . -B build
cmake --build build
```

## Credits

Code reference: [Marc Robeldo](https://www.marcrobledo.com/savegame-editors/zelda-totk)  
Data mining: [MrCheeze](https://github.com/MrCheeze/totk-tools) & [McSpazzy](https://github.com/McSpazzy/totk-gamedata)
