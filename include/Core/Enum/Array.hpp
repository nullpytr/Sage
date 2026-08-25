#pragma once

#include "Core/Types.hpp"
#include "Core/adapter.hpp"
#include "Core/Enum/Container.hpp"

namespace Enum
{
    template <typename E>
    struct Array : Container<E>
    {
        /* type aliases */
        using enum_type = E::enum_type;
        using type = span<enum_type>;

        type const& get() const { return m_value; } // getters
        type& get() { return m_value; }

        type const& operator*() const { return get(); }
        type& operator*()             { return get(); }

        enum_type const& get(size_t const idx) const { return m_value[idx]; } // idx getters
        enum_type& get(size_t const idx) { return  m_value[idx]; }

        enum_type const& operator[](size_t const idx) const { return get(idx); }
        enum_type& operator[](size_t const idx)             { return get(idx); }

        [[nodiscard]] size_t size() const { return m_value.size(); } // convenience
        [[nodiscard]] bool empty() const { return m_value.empty(); }

        explicit Array(type v) : m_value(v) {}

        /*--*/
        type m_value;
    };
}
