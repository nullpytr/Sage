#pragma once

#include "Core/Types.hpp"

/* Datatype layout adapter for converting
 * incompatible Nintendo types into C++ view types */
template <typename T>
struct adapter
{
    operator T&()               { return value; }
    operator T const&() const   { return value; }

    /*--*/
    T value; // default passthrough
};

template <size_t N, typename CharT, typename Traits>
struct adapter<basic_string<N, CharT, Traits>>
{
    operator basic_string<N, CharT, Traits>() { return { buffer, Traits::length(buffer) }; }
    basic_string<N, CharT, Traits> operator*() { return *this; }

    /*--*/
    CharT buffer[N + 1];
};

template <typename T>
struct adapter<span<T>>
{
    operator span<T>() { return { data, size }; }
    span<T> operator*() { return *this; }

    /*--*/
    u32 size; // blob's layout is inverted
    T data[];
};