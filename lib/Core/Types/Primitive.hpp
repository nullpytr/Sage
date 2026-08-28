#pragma once

#include <cstdint>

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

/* blob is <4MB, offset fits into 32 bits */
using offset_t = u32;