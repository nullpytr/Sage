//DEPRECATED
//TODO: bring forward for gd v4.x
// #pragma once
//
// #include "Core/Types.hpp"
// #include "Core/Promise.hpp"
//
// namespace Enum
// {
//     template <typename EnumWrapperStruct, size_t N>
//     struct Collection : EnumWrapperStruct /* injects values enum into view's namespace */
//     {
//         /* type aliases */
//         using value_type = EnumWrapperStruct::Value;
//         using array_type = std::array<Promise<value_type>, N>;
//
//         /* View type for accessing non-continuous collection of Enum entries */
//         static constexpr size_t size = N;
//
//         template <typename Sav>
//         explicit Collection(Sav& s, array_type const& promises)
//         {
//             for (s32 idx = 0; auto const& p: promises)
//                 m_entries[idx++] = &s.get(p); // store pointers to each entry
//         }
//
//         /* Get entry at given index */
//         value_type const& get(size_t const idx) const { return *m_entries[idx]; }
//         value_type& get(size_t const idx) { return  *m_entries[idx]; }
//
//         value_type const& operator[](size_t const idx) const { return get(idx); }
//         value_type& operator[](size_t const idx)             { return get(idx); }
//
//         /* Test value on all entries */
//         size_t test(value_type const& v) const
//         {
//             size_t ctr = 0;
//             for (size_t idx = 0; idx < size; ++idx)
//                 ctr += (v == get(idx));
//
//             return ctr;
//         }
//
//     private:
//         std::array<value_type*, N> m_entries;
//     };
// }
