#pragma once

#include <string>
#include <vector>
#include <unordered_map>

#include "Hash.hpp"
#include "Filesystem.hpp"
#include "Core/Types.hpp"
#include "Core/MurmurHash3.hpp"

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
            auto hash = value_at<Hash>(offset);
            m_offsets[hash] = offset + sizeof(mmh32);

            /* Hashtable ends at MetaData.SaveTypeHash
             * See: https://github.com/marcrobledo/savegame-editors/blob/b65dc1ecf655ba4f5f8bb74d4a7d402fc375fbf1/zelda-totk/zelda-totk.variables.js#L757
             */
            if (hash == Hash::MetaData_SaveTypeHash) break;
        }
    }

    void dump(std::string const& path) const
    {
        write_all_bytes(path, m_data);
    }


    /* Raw data ptr; do whatever */
    [[nodiscard]] byte const* data_ptr() const { return &m_data[0]; }

    /* Get reference to value by hash (uses cached offset) */
    template <typename T>
    T& get(Hash const hash)
    {
        return value_at<T>(m_offsets.at(hash));
    }

    /* Get array by hash (uses cached offset) */
    template <typename T>
    std::span<T> array(Hash const hash)
    {
        return array<T>(m_offsets.at(hash));
    }

    /* Get reference to value at any offset */
    template <typename T>
    T& value_at(u32 const offset)
    {
        return *ptr<T>(offset);
    }

    /* Get pointer to value at any offset */
    template <typename T>
    T* ptr(u32 const offset)
    {
        return reinterpret_cast<T*>(&m_data[0] + offset);
    }

    /* Get array at any offset */
    template <typename T>
    std::span<T> array(u32 const offset)
    {
        auto const size = value_at<u32>(offset);
        T* data = ptr<T>(offset + sizeof(u32));
        return {data, size};
    }

private:
    std::vector<byte> m_data;
    std::unordered_map<Hash, u32> m_offsets;
};
