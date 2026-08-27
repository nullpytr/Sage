#pragma once

#include "Core/Enum/Container.hpp"

namespace Enum
{
    template <typename E>
    struct Scalar : Container<E>
    {
        /* View type for accessing single Enum entry;
         * analogous to T& */

        /* type aliases */
        using enum_type = E::enum_type;
        using type = enum_type&;

        enum_type const& get() const { return m_value; } // getters
        enum_type& get() { return m_value; }

        enum_type const& operator*() const { return get(); }
        enum_type& operator*()             { return get(); }

        operator enum_type() const { return get(); } // implicit

        Scalar& operator=(enum_type const& v) { m_value = v; return *this; } // assignment

        bool operator==(enum_type const& v) const { return m_value == v; } // comparison

        Scalar(type v) : m_value(v) {}

        /*--*/
        type m_value;
    };
}
