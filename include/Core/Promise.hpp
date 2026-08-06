#pragma once

#include "Core/MurmurHash3.hpp"

template <typename T>
struct Promise
{
    mmh32 hash;
    using value_type = T;
};