#pragma once

#include "Core/Types.hpp"

/* Datatype layout adapter for converting
 * incompatible Nintendo types into C++ view types */
template <typename I>
struct Adapter;

template <size_t N>
struct Adapter<string<N>>
{
    operator string<N>() { return { m_data, N }; }

    /*--*/
    char m_data[N];
};

template <typename T>
struct Adapter<span<T>>
{
    operator span<T>() { return { static_cast<T*>(m_data), m_size }; }

    /*--*/
    u32 m_size; // nintendo's layout is inverted
    T m_data[];
};