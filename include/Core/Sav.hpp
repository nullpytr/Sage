#pragma once

#include <string>
#include <vector>
#include <unordered_map>

#include "External/Filesystem.hpp"
#include "Core/Types.hpp"
#include "Core/Layout.hpp"
#include "Core/Enum.hpp"

#define METADATA_SAVE_TYPE_HASH 0xa3db7114

class Sav
{
public:
    /* [Open | Export] of Sav blob */
    explicit Sav(std::string const& path) : m_data { read_all_bytes(path) }
    {
        // Load entire hash table once
        m_offsets.reserve(31000); // approximate size of the hashtable
        for (u32 offset = 0x000028; offset < m_data.size(); offset += sizeof(hash_t) + sizeof(u32))
        {
            auto hash = value_at<hash_t>(offset);
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

    /* Low-level access */
    /* Get reference to value of type T at given offset */
    template <typename T>
    T& value_at(u32 const offset)
    {
        return *ptr<T>(offset);
    }

    /* Get pointer to value of type T at given offset */
    template <typename T>
    T* ptr(u32 const offset)
    {
        return reinterpret_cast<T*>(
            &m_data[0]
            + offset
        );
    }
    /* -- */

    /* High-level access: using GameData types (recommended)
     * Powered by the private getter machinery below and the
     * auto generated header include/GameData.hpp
     */
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
        using A = std::conditional_t<std::is_pointer_v<P>, L*, L&>;
        return get<T, A>(Data::Hashtable<M>);
    }
    template <typename T, typename A = T>
    T get(hash_t const hash)
    {
        return Getter<A>::get(*this, hash);
    }


private: /* Specializations for different data types */
    template <typename T>
    struct Getter;

    template <typename T>
    struct Getter<T&> {
        static T& get(Sav& self, hash_t const hash) {
            return self.value_at<T>(
                self.m_offsets.at(hash)
            );
        }
    };

    template <typename T>
    struct Getter<T*> {
        static T& get(Sav& self, hash_t const hash) {
            u32 const value_offset = Getter<u32&>::get(self, hash); // hash gives offest of actual value
            return *self.ptr<T>(value_offset);
        }
    };

private: /* Members */
    std::vector<byte> m_data;
    std::unordered_map<hash_t, u32> m_offsets;
};
