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