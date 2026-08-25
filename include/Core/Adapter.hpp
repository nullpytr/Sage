#pragma once

#include "Core/Types.hpp"

/* Datatype layout adapter for converting
 * incompatible Nintendo types into C++ view types */
template <typename I>
struct adapter;

template <size_t N, typename CharT, typename Traits>
struct adapter<basic_string<N, CharT, Traits>>
{
    operator basic_string<N, CharT, Traits>() { return { m_data, Traits::length(m_data) }; }

    /*--*/
    CharT m_data[N + 1];
};

template <typename T>
struct adapter<span<T>>
{
    operator span<T>() { return { static_cast<T*>(m_data), m_size }; }

    /*--*/
    u32 m_size; // nintendo's layout is inverted
    T m_data[];
};