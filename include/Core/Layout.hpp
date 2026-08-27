#pragma once

#include "Core/Types.hpp"

/* Datatype layout adapter for converting
 * incompatible Nintendo types into C++ view types */
template <typename T>
struct Layout
{
    using to_type = T;

    operator to_type() { return value; }

    /*--*/
    std::remove_cvref_t<T> value; // default passthrough
};

// lowercase alias, used when treating layout<X> itself as a type
template <typename X> using layout = Layout<X>;

// Explicitly adapt layout
inline auto adapt = []<typename T> (layout<T>& x) -> T { return x; /* implicit conversion */ };

template <size_t N, typename CharT, typename Traits>
struct Layout<basic_string<N, CharT, Traits>>
{
    using to_type = basic_string<N, CharT, Traits>;

    operator to_type() { return { buffer, Traits::length(buffer) }; }

    /*--*/
    CharT buffer[N + 1]; // basic_string<N, ...> does not include the null terminator
};

template <typename T>
struct Layout<span<T>>
{
    using to_type = span<T>;

    operator to_type() { return { data, size }; }

    /*--*/
    u32 size; // blob layout is inverted
    T data[];
};

template <typename T>
using adaptive_range = range<layout<T>, decltype(adapt)>;

template <typename T>
struct Layout<adaptive_range<T>>
{ /* same as span<T> layout adapter, but also lazily adapts member elements */
    using to_type = adaptive_range<T>;

    operator to_type() {
        return span<layout<T>> { data, size }
        | std::views::transform(adapt);
    }

    /*--*/
    u32 size;
    layout<T> data[];
};