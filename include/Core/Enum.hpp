#pragma once

#include "Core/MurmurHash3.hpp"
#include "Core/Types.hpp"

namespace Enum
{
    /* Various enum values used in progress.sav;
     * See: https://github.com/marcrobledo/savegame-editors/blob/b65dc1ecf655ba4f5f8bb74d4a7d402fc375fbf1/zelda-totk/zelda-totk.hashes.csv#L5
     * TODO: definition of these enum values as enum classes here is deprecated; they should be moved to the corresponding headers in include/GameData/
     */

    enum class CheckpointState : u32 // ArrivalPointState_Checkpoint
    {
        Close = murmurhash3::hash("Close"),
        Open = murmurhash3::hash("Open")
    };

    enum class KorokCarryProgress : u32
    {
        NotClear = murmurhash3::hash("NotClear"),
        Clear = murmurhash3::hash("Clear")
    };

    enum class PictureBookDataState : u32
    {
        Unopened = murmurhash3::hash("Unopened"),
        TakePhoto = murmurhash3::hash("TakePhoto"),
        Buy = murmurhash3::hash("Buy")
    };

    template <typename EnumWrapperStruct, size_t N>
    struct View : EnumWrapperStruct /* injects values enum into view's namespace */
    {
        /* type aliases */
        using value_type = EnumWrapperStruct::Value;
        using array_type = std::array<::Promise<View::value_type>, N>;
        static constexpr size_t size = N;

        /* View type for accessing saved Enum entries;
         * just like array<T>, string and T&
         */

        template <typename Sav>
        explicit View(Sav& s, View::array_type const& promises)
        {
            for (s32 idx = 0; auto const& p: promises)
                m_entries[idx++] = &s.get(p); // store pointers to each entry
        }

        /* Get entry at given index */
        View::value_type const& get(size_t const idx) const { return *m_entries[idx]; }
        View::value_type& get(size_t const idx) { return  *m_entries[idx]; }

        View::value_type const& operator[](size_t const idx) const { return get(idx); }
        View::value_type& operator[](size_t const idx)             { return get(idx); }

        /* Test value on all entries */
        size_t test(View::value_type const& v) const
        {
            size_t ctr = 0;
            for (size_t idx = 0; idx < size; ++idx)
                ctr += (v == get(idx));

            return ctr;
        }

    private:
        std::array<View::value_type*, N> m_entries;
    };

    /* consteval promise-array (hash-array replacement) generator for Enums */
    static consteval size_t _constexpr_uint_size(u32 n)
    {
        size_t ctr;
        for (ctr = 0; n > 0; n /= 10) ++ctr;
        return ctr;
    }

    static consteval u32 _constexpr_pow(u32 base, u32 exp)
    {
        u32 result = 1;
        for (; exp; --exp) result *= base;
        return result;
    }

    static consteval void _constexpr_hash_text_with_padded_index(
        std::span<char const> const& hash_text,
        size_t const index,
        s32 const pad_width,
        char* out_buffer
    ) {
        size_t pos = 0;

        for (size_t j = 0; j < hash_text.size() - 1; ++j)
            out_buffer[pos++] = hash_text[j]; // copy hash text into buff

        for (s32 exp = pad_width - 1; exp >= 0; --exp)
        {
            u32 const divisor = _constexpr_pow(10, exp);
            u32 const digit = (index / divisor) % 10;
            out_buffer[pos++] = static_cast<char>('0' + digit); // 0 padding if divisor is too big
        }

        out_buffer[pos] = '\0';
    }

    template <typename EnumType>
        static consteval EnumType::array_type generate_enum_promises(std::span<char const> const& hash_text)
    {
        typename EnumType::array_type return_arr;

        s32 const pad_width = _constexpr_uint_size(EnumType::size - 1); // size - 1 cause max index

        for (size_t idx = 0; idx < EnumType::size; ++idx)
        {
            char buffer[512]; // safe enough?
            _constexpr_hash_text_with_padded_index(
                hash_text,
                idx, pad_width,
                buffer
            );
            return_arr[idx] = { murmurhash3::hash(buffer) };
        }

        return return_arr;
    }
}