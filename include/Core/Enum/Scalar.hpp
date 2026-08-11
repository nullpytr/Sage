#pragma once

#include "Core/Enum/Container.hpp"

namespace Enum
{
    template <typename E>
    struct Scalar : Container<E>
    {
        /* type aliases */
        using enum_type = E::enum_type;
        using value_type = enum_type;

        /* View type for accessing single Enum entry;
         * analogous to T& */

        explicit Scalar(value_type& v)
            : m_entry { v }
        {}

        /* Get entry */
        value_type const& get() const { return m_entry; }
        value_type& get() { return m_entry; }

        value_type const& operator*() const { return get(); }
        value_type& operator*()             { return get(); }

        /* Assignment and conversion */
        Scalar& operator=(value_type const& v) { m_entry = v; return *this; }
        operator value_type() const { return get(); }

        bool operator==(value_type const& v) const { return m_entry == v; }

    private:
        value_type& m_entry;
    };
}
