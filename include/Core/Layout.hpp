#pragma once

#include "Core/Types.hpp"
#include "Core/Enum.hpp"

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

template <typename E>
struct layout<Enum::Scalar<E>>
{
    using to_type = Enum::Scalar<E>;

    operator to_type() { return { value }; }

    /*--*/
    E::enum_type value;
};

template <typename E>
struct layout<Enum::Array<E>>
{
    using to_type = Enum::Array<E>;

    operator to_type() { return { adapt(array) }; }

    /*--*/
    layout<span<typename E::enum_type>> array;
};