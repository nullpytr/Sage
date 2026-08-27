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
    std::remove_cvref_t<T> value; // default passthrough
};

template <typename X> using Layout = layout<X>; // uppercase alias

// Explicitly adapt layout
inline auto adapt = []<typename T> (layout<T>& x) -> T { return x; /* implicit conversion */ };

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

#include <ranges>
template <typename T>
using range = std::ranges::transform_view<span<layout<T>>, decltype(adapt)>;

template <typename T>
struct layout<range<T>>
{ /* same as span<T> layout adapter, but also lazily adapts member elements */
    using to_type = range<T>;

    operator to_type() {
        return span<layout<T>> { data, size }
        | std::views::transform(adapt);
    }

    /*--*/
    u32 size;
    layout<T> data[];
};

template <typename V>
struct layout<Enum<V>>
{
    using to_type = Enum<V>;

    operator to_type() { return { value }; }

    /*--*/
    to_type::underlying_enum_t value;
};