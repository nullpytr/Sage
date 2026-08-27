#pragma once

#include "Core/Types.hpp"

/* Datatype layout adapter for converting
 * incompatible Nintendo types into C++ view types */
template <typename T>
struct layout
{
    using to_type = T;

    operator to_type() { return value; }

    /*--*/
    T value; // default passthrough
};

template <size_t N, typename CharT, typename Traits>
struct layout<basic_string<N, CharT, Traits>>
{
    using to_type = basic_string<N, CharT, Traits>;

    operator to_type() { return { buffer, Traits::length(buffer) }; }

    /*--*/
    CharT buffer[N + 1]; // basic_string<N, ...> does not include the null terminator
};

template <typename T>
struct layout<span<T>>
{
    using to_type = span<T>;

    operator to_type() { return { data, size }; }

    /*--*/
    u32 size; // blob layout is inverted
    T data[];
};

// Explicitly adapt layout
inline auto adapt = []<typename T> (layout<T>& x) -> T { return x; /* implicit conversion */ };