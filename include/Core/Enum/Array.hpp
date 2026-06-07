#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"

namespace Enum
{
    template <typename EnumWrapperStruct>
    struct Array : EnumWrapperStruct /* injects values enum into array's namespace */
    {
        /* type aliases */
        using value_type = EnumWrapperStruct::Value;

        /* View type for accessing continuous collection of Enum entries;
         * analogous to array<T> */

        template <typename Sav>
        explicit Array(Sav& s, Promise<value_type[]> const& promise)
            : m_span { s.get(promise) }
        {}

        /* Get entry at given index */
        value_type const& get(size_t const idx) const { return m_span[idx]; }
        value_type& get(size_t const idx) { return  m_span[idx]; }

        value_type const& operator[](size_t const idx) const { return get(idx); }
        value_type& operator[](size_t const idx)             { return get(idx); }

        [[nodiscard]] size_t size() const { return m_span.size(); }
        [[nodiscard]] bool empty() const { return m_span.empty(); }

        /* Test value on all entries */
        size_t test(value_type const& v) const
        {
            size_t ctr = 0;
            for (auto const& item : m_span)
                ctr += (item == v);

            return ctr;
        }

    private:
        array<value_type> m_span;
    };
}
