#pragma once

#include "External/String.hpp"

using string16 = string<16>;
using string32 = string<32>;
using string64 = string<64>;

template <size_t N>
using wstring = u16string<N>;

using wstring16 = wstring<16>;
using wstring32 = wstring<32>;
using wstring64 = wstring<64>;