#pragma once
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
