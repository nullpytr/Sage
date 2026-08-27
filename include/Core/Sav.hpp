#pragma once

#include <string>
#include <vector>
#include <unordered_map>

#include "External/Filesystem.hpp"
#include "Core/Types.hpp"
#include "Core/Layout.hpp"
#include "Core/Enum.hpp"

#define METADATA_SAVE_TYPE_HASH 0xa3db7114

inline constexpr struct {} from_hash;

class Sav
{
public:
    /* [Open | Export] of Sav blob */
    explicit Sav(std::string const& path) : m_data { read_all_bytes(path) }
    {
        // Load entire hash table once
        m_offsets.reserve(31000); // approximate size of the hashtable
        for (offset_t offset = 0x000028; offset < m_data.size(); offset += sizeof(hash_t) + sizeof(u32))
        {
            auto hash = ref<hash_t>(offset);
            m_offsets[hash] = offset + sizeof(hash_t);

            /* Hashtable ends at MetaData.SaveTypeHash
             * See: https://github.com/marcrobledo/savegame-editors/blob/b65dc1ecf655ba4f5f8bb74d4a7d402fc375fbf1/zelda-totk/zelda-totk.variables.js#L757
             */
            if (hash == METADATA_SAVE_TYPE_HASH) break;
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
    template<typename S, typename D = Data::Structure<S>>
    requires std::derived_from<S, Tag::Structure>
    D get()
    {
        return D { *this }; // uses get<M>() to construct members under the hood
    }

    template<typename  M, typename T = Data::Member<M>, typename L = Layout<T>, typename P = M::type>
    requires std::derived_from<M, Tag::Member>
    T get()
    {
        hash_t const& hash = Data::Hashtable<M>;

        if constexpr (std::is_pointer_v<P>) {
            /* resolve indirection automatically
             * so the user does not have to */
            offset_t const offset = ref<from_hash, u32>(hash);
            return ref<L>(offset);
        }

        return ref<from_hash, L>(hash); // default
    }

    /* Mid-level access */
    /* Get pointer to value of type T from hash */
    template <decltype(from_hash), typename T>
    T* ptr(hash_t const hash)
    {
        offset_t const offset = m_offsets.at(hash);
        return ptr<T>(offset);
    }

    /* Get reference to value of type T from hash */
    template <decltype(from_hash), typename T>
    T& ref(hash_t const hash)
    {
        return *ptr<from_hash, T>(hash);
    }

    /* Low-level access */
    /* Get pointer to value of type T at given offset */
    template <typename T>
    T* ptr(offset_t const offset)
    {
        return reinterpret_cast<T*>(
            &m_data[0]
            + offset
        );
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
