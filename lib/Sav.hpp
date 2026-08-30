#pragma once

#include <string>
#include <vector>
#include <unordered_map>

#include "External/Filesystem.hpp"
#include "Core.hpp"

#define METADATA_HASHTABLE_START 0x000028
#define METADATA_HASHTABLE_SIZE_ESTIMATE 31000
#define METADATA_HASHTABLE_END_VALUE murmurhash3::hash("Metadata.SaveTypeHash")

class Sav
{
public:
    /* [Open | Export] of Sav blob */
    explicit Sav(std::string const& path) : m_data { read_all_bytes(path) }
    {
        // Load entire hash table once
        m_offsets.reserve(METADATA_HASHTABLE_SIZE_ESTIMATE);
        for (offset_t offset = METADATA_HASHTABLE_START; offset < m_data.size(); offset += sizeof(hash_t) + sizeof(u32))
        {
            auto hash = ref<hash_t>(offset);
            m_offsets[hash] = offset + sizeof(hash_t);

            /* Hashtable ends at MetaData.SaveTypeHash
             * See: https://github.com/marcrobledo/savegame-editors/blob/b65dc1ecf655ba4f5f8bb74d4a7d402fc375fbf1/zelda-totk/zelda-totk.variables.js#L757
             */
            if (hash == METADATA_HASHTABLE_END_VALUE) break;
        }
    }

    void dump(std::string const& path) const
    {
        write_all_bytes(path, m_data);
    }

    [[nodiscard]] byte const* data_ptr() const { return &m_data[0]; }

    /* -- */

    /* High-level access: using GameData types (recommended)
     * Powered by the lower level access methods and the
     * auto generated header include/GameData.hpp */
    template<typename S, typename I = Data::Structure<S>, typename O = I>
    requires std::derived_from<S, Tag::Structure>
    O get()
    {
        return O { *this }; // uses get<M>() to construct members under the hood
    }

    template<typename  M, typename P = M::type, typename I = std::remove_pointer_t<P>, typename L = Layout<I>, typename O = Data::Member<M>>
    requires std::derived_from<M, Tag::Member>
    O get()
    {
        auto const& hash = Data::Hashtable<M>;

        if constexpr (std::is_pointer_v<P>) {
            /* resolve indirection automatically
             * so the user does not have to */
            offset_t const offset = ref<u32>(hash);
            return ref<L>(offset);
        }

        return ref<L>(hash); // default
    }

    /* Mid-level access */
    /* Get pointer to value of type T from hash text or value */
    template <typename T>
    T* ptr(hash_value_t const& h)
    {
        offset_t const offset = m_offsets.at(h);
        return ptr<T>(offset);
    }

    /* Get reference to value of type T from hash text or value */
    template <typename T>
    T& ref(hash_value_t const& h)
    {
        return *ptr<T>(h);
    }

    /* Low-level access */
    /* Get pointer to value of type T at given offset */
    template <typename T, size_t E = sizeof(T) - 1>
    T* ptr(offset_t const offset)
    {
        auto& start = m_data.at(offset); // vector::at() will ensure start is in bounds
        m_data.at(offset + E); // also ensure that end is in bounds

        return std::bit_cast<T*>(&start);
    }

    /* Get reference to value of type T at given offset */
    template <typename T>
    T& ref(offset_t const offset)
    {
        return *ptr<T>(offset);
    }
    /* -- */

private: /* Members */
    std::vector<byte> m_data;
    std::unordered_map<hash_t, offset_t> m_offsets;
};

/* Shift operators (v0.5.2+) */

// lshift: auto data { overlay() << sav }
template<typename T> requires std::derived_from<T, Tag::Type>
auto operator<<(T const&, Sav& s) { return s.get<T>(); }

// rshift: auto data { sav >> overlay() }
template<typename T> requires std::derived_from<T, Tag::Type>
auto operator>>(Sav& s, T const&) { return s.get<T>(); }

/* Keyword access (optional, v0.5.2+) */
#ifndef SAGE_DISABLE_KEYWORD_ACCESS

// auto data { overlay from sav }
#define from ()<<

// auto data { sav as overlay }
inline Tag::Type RESERVED_SAGE_TAG_PLACEMENT_BUFFER;
#define as >> *new(&RESERVED_SAGE_TAG_PLACEMENT_BUFFER)

#endif