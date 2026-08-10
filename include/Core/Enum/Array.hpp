#pragma once

#include "Core/Types.hpp"
#include "Core/Enum/Container.hpp"

namespace Enum
{
    template <typename E>
    struct Array : Container<E>
    {
        /* type aliases */
        using enum_type = E::enum_type;
        using value_type = array<enum_type>;

        /* View type for accessing continuous collection of Enum entries;
         * analogous to array<T> */

        explicit Array(value_type const& span)
            : m_span { span }
        {}

        /* Get entry at given index */
        enum_type const& get(size_t const idx) const { return m_span[idx]; }
        enum_type& get(size_t const idx) { return  m_span[idx]; }

        enum_type const& operator[](size_t const idx) const { return get(idx); }
        enum_type& operator[](size_t const idx)             { return get(idx); }

        [[nodiscard]] size_t size() const { return m_span.size(); }
        [[nodiscard]] bool empty() const { return m_span.empty(); }

        /* Test value on all entries */
        size_t test(enum_type const& v) const
        {
            size_t ctr = 0;
            for (auto const& item : m_span)
                ctr += (item == v);

            return ctr;
        }

    private:
        value_type m_span;
    };
}
