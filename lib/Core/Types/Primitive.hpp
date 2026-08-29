#pragma once

#include <cstdint>
#include <string_view>

/* Primitive types: directly map to blob types */
using u8 = std::uint8_t;
using u16 = std::uint16_t;
using u32 = std::uint32_t;
using u64 = std::uint64_t;

using s8 = std::int8_t;
using s16 = std::int16_t;
using s32 = std::int32_t;
using s64 = std::int64_t;

using byte = unsigned char;

/* MurmurHash3: blob uses the 32 bit version */
#include "External/MurmurHash3.hpp"
using hash_t = mmh32;

struct hash_value_t
{
    consteval hash_value_t(std::string_view const& text)
        : value { murmurhash3::hash(text) }
        {}

    consteval hash_value_t(hash_t const hash) : value { hash } {}

    operator hash_t() const { return value; }

    hash_t value;
};

/* blob is <4MB, offset fits into 32 bits */
using offset_t = u32;