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

#include "External/String.hpp"
using string16 = string<16>;
using string32 = string<32>;
using string64 = string<64>;

using wchar = char16_t;
template <size_t N>
using wstring = u16string<N>;

using wstring16 = wstring<16>;
using wstring32 = wstring<32>;
using wstring64 = wstring<64>;

using byte = unsigned char;

#include "Core/Enum.hpp"
using ::enum_t; // enum_t because enum is a reserved keyword

/* MurmurHash3: Nintendo uses the 32 bit version in it's blobs */
#include "External/MurmurHash3.hpp"
using hash_t = mmh32;

/* blob is <4MB, offset fits into 32 bits */
using offset_t = u32;

/* STL types */
#include <span>
using std::span;

#include <string_view>
using std::string_view;
using wstring_view = std::u16string_view;

/* Range */
#include <ranges>
template <typename T, typename Fn>
using range = std::ranges::transform_view<span<T>, Fn>;

/* GameData Tags
 * These types are used in Sage's GameData model,
 * for constraining template substitution
 * in Sage's Sav::get<[S|M]> API */
namespace Tag
{
    struct Type {};
    struct Structure : Type {};
    struct Member : Type {};
    struct Enum : Member {};

    template <typename X>
    struct Series;
}