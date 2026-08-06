#pragma once

#include <string>
#include <vector>
#include <unordered_map>

#include "Filesystem.hpp"
#include "Core/Types.hpp"
#include "Core/MurmurHash3.hpp"
#include "Core/Promise.hpp"
#include "Core/Enum.hpp"

#define METADATA_SAVE_TYPE_HASH 0xa3db7114

class Sav
{
public:
    /*
     * Open/Export of Sav blob
     */
    explicit Sav(std::string const& path) : m_data { read_all_bytes(path) }
    {
        // Load entire hash table once
        for (u32 offset = 0x000028; offset < m_data.size(); offset += sizeof(mmh32) + sizeof(u32))
        {
            auto hash = value_at<mmh32>(offset);
            m_offsets[hash] = offset + sizeof(mmh32);

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

    /*
     * High-level access: using GameData structures (recommended)
     * See include/GameData/GameData.hpp
     */
    template<typename S>
    S::data get()
    {
        return (typename S::Data) { *this };
    }
    /* -- */

    /*
     * Mid-level access: using Promises
     * See include/Core/Promise.hpp
     */
    /* Get a reference to any promised value of type T */
    template <typename T>
    T& get(Promise<T> const promise)
    {
        return value_at<T>(
            m_offsets.at(promise.hash)
        );
    }

    // Get a reference to underlying value of a promised pointer of type T
    template <typename T>
    T& get(Promise<T*> const promise)
    {
        return value_at<T>(
            get(Promise<u32>{promise.hash}) // offset
        );
    }

    // Get C++20 style array-view to a promised array of type T (preferred)
    template <typename T>
    array<T> get(Promise<array<T>> const promise)
    {
        // u32& size = get(Promise<u32*>{promise.hash}); // resolve pointer to size
        // T* data = reinterpret_cast<T*>(&size + 1); // array starts after size
        u32 const offset = value_at<u32>(m_offsets.at(promise.hash));
        u32 const size = value_at<u32>(offset);
        T* data = ptr<T>(offset + sizeof(u32));

        return { data, size };
    }

    template <typename T>
    array<T> get(Promise<T[]> const promise)
    {
        return get(Promise<array<T>>{promise.hash});
    }

    // Get view types over raw enum types
    template <typename ESW> // EnumStructWrapper
    Enum::Scalar<ESW> get(Promise<Enum::Scalar<ESW>> const promise)
    {
        return { get(Promise<typename ESW::value_type>{promise.hash}) };
    }

    template <typename ESW>
    Enum::Array<ESW> get(Promise<Enum::Array<ESW>> const promise)
    {
        return { get(Promise<array<typename ESW::value_type>>{promise.hash}) };
    }

    // TODO template <typename ESW>
    // Enum::Collection<ESW> get

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
private:
    std::vector<byte> m_data;
    std::unordered_map<mmh32, u32> m_offsets;
};
