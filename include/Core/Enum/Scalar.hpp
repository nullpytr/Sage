#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"

namespace Enum
{
    template <typename EnumWrapperStruct>
    struct Scalar : EnumWrapperStruct /* injects values enum into scalar's namespace */
    {
        /* type aliases */
        using value_type = EnumWrapperStruct::Value;

        /* View type for accessing single Enum entry;
         * analogous to T& */

        Scalar(value_type& v)
            : m_entry { v }
        {}

        /* Get entry */
        value_type const& get() const { return m_entry; }
        value_type& get() { return m_entry; }

        value_type const& operator()() const { return get(); }
        value_type& operator()()             { return get(); }

        /* Assignment and conversion */
        Scalar& operator=(value_type const& v) { m_entry = v; return *this; }
        operator value_type() const { return get(); }

        bool operator==(value_type const& v) const { return m_entry == v; }

    private:
        value_type& m_entry;
    };
}
