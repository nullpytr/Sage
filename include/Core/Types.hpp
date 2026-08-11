#pragma once

/* Primitive types: directly map to types used in Nintendo's blobs */
#include <cstdint>
using u8 = std::uint8_t;
using u16 = std::uint16_t;
using u32 = std::uint32_t;
using u64 = std::uint64_t;

using s8 = std::int8_t;
using s16 = std::int16_t;
using s32 = std::int32_t;
using s64 = std::int64_t;

struct vec2f { float x, y; };
struct vec3f { float x, y, z; };

using string16 = char[16];
using string32 = char[32];
using string64 = char[64];

using wchar = char16_t;
using wstring16 = wchar[16];
using wstring32 = wchar[32];
using wstring64 = wchar[64];

using byte = unsigned char;

/* MurmurHash3: Nintendo uses the 32 bit version in it's blobs */
#include "External/MurmurHash3.hpp"
using hash_t = mmh32;

/* STL types
 * Sage automatically upgrades
 * C style arrays into array-view (std::span)
 * while C strings can be implicitly upgraded in user code
 */
#include <span>
template<typename T>
using array = std::span<T>;

#include <string_view>
using string = std::string_view;

/* GameData types
 * These types are used in Sage's GameData model,
 * for constraining template substitution
 * in Sage's Sav::get<[S|M]> API
 */
namespace Data
{
    struct Type {};
    struct Structure : Type {};

    /* A view (specialization of this template)
     * is like an instantiable 'copy' of a
     * auto generated Data::Structure types;
     * but injected with save data from a Sav&
     */
    template <typename S>
    struct View;

    struct Member : Type {};

    /* Specializations of this template
     * are simply used to store hashes for
     * auto generated Data::Member types
     */
    template <typename M>
    inline constexpr hash_t Hashtable = [] {
        /* This static assert ensures that no other type
         * can fall back to this non-specialised template (because this is not an impl)
         * -- we throw a hard error for undefined specializations. */
        static_assert(false, "no hashtable entry found");
    };
}