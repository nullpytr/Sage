#pragma once

#include <string>
#include <stdexcept>
#include <unordered_map>

#ifndef SAGE_DISABLE_MMAP
#include "External/Mio.hpp"
#endif

#include "Core.hpp"

#define METADATA_HASHTABLE_START 0x000028
#define METADATA_HASHTABLE_SIZE_ESTIMATE 31000
#define METADATA_HASHTABLE_END_VALUE murmurhash3::hash("Metadata.SaveTypeHash")

class Sav
{
public:
    #ifndef SAGE_DISABLE_MMAP
    explicit Sav(std::string const& path) : m_data { path }
    #else
    explicit Sav(span<byte> const& buf) : m_data { buf }
    #endif
    {
        // Load entire hash table once
        m_offsets.reserve(METADATA_HASHTABLE_SIZE_ESTIMATE);
        for (offset_t offset = METADATA_HASHTABLE_START; offset < m_data.size(); offset += sizeof(hash_t) + sizeof(offset_t))
        {
            auto hash = ref<hash_t>(offset);
            m_offsets[hash] = offset + sizeof(hash_t);

            /* Hashtable ends at MetaData.SaveTypeHash
             * See: https://github.com/marcrobledo/savegame-editors/blob/b65dc1ecf655ba4f5f8bb74d4a7d402fc375fbf1/zelda-totk/zelda-totk.variables.js#L757
             */
            if (hash == METADATA_HASHTABLE_END_VALUE) break;
        }
    }

    #ifndef SAGE_DISABLE_MMAP
    void flush()
    {
        std::error_code error;
        m_data.sync(error);
        if (error) throw std::system_error { error };
    }
    #endif

    /* -- */

    /* High-level access: using GameData types (recommended)
     * Powered by the lower level access methods and the
     * auto generated header include/GameData.hpp */
    template
        <typename N,
        typename I = Structure<N>,
        typename U = I::type,
        typename A = map<U, sizeof(I) / sizeof(void*)>,
        typename L = Layout<A>,
        typename O = Map<N>>
    requires std::derived_from<N, Tag::Map>
    O get()
    {
        // Gives std::ranges semantics from a Data::Map struct
        // Layout of a Data::Map struct of N pure `value_t&`s is equivalent map<value_t, N>
        // and layout<map<value_t, N>> converts it into a `mapped_range`.
        auto buf = get<Tag::Structure, I>();
        auto& adapter = *std::bit_cast<L*>(&buf);
        return adapter; // `mapped_range` copies the pointer buffer with it.
    }

    template<typename S, typename I = Structure<S>, typename O = I>
    requires std::derived_from<S, Tag::Structure>
    O get()
    {
        return O { *this }; // uses get<M>() to construct members under the hood
    }

    template
        <typename M,
        typename Q = M::type,
        typename P = std::remove_reference_t<Q>,
        typename V = std::remove_pointer_t<P>,
        typename I = std::conditional_t<std::is_reference_v<Q>, V&, V>,
        typename L = Layout<I>,
        typename O = Member<M>>
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
    template <typename T>
    T* ptr(offset_t const offset)
    {
        if (m_data.size() < offset + sizeof(T))
            throw std::out_of_range("Sav: out of range");

        return std::bit_cast<T*>(m_data.data() + offset);
    }

    /* Get reference to value of type T at given offset */
    template <typename T>
    T& ref(offset_t const offset)
    {
        return *ptr<T>(offset);
    }
    /* -- */

private: /* Members */
    #ifndef SAGE_DISABLE_MMAP
    mio::ummap_sink m_data;
    #else
    span<byte> m_data;
    #endif

    std::unordered_map<hash_t, offset_t> m_offsets;
};

/* Shift operators (v0.5.2+) */

// lshift: auto data { overlay() << sav }
template<typename T> requires std::derived_from<T, Tag::Type>
decltype(auto) operator<<(T const&, Sav& s) { return s.get<T>(); }

// rshift: auto data { sav >> overlay() }
template<typename T> requires std::derived_from<T, Tag::Type>
decltype(auto) operator>>(Sav& s, T const&) { return s.get<T>(); }

/* Keyword access (optional, v0.5.2+) */
#ifndef SAGE_DISABLE_KEYWORD_ACCESS

// auto data { overlay from sav }
#define from ()<<

// auto data { sav as overlay }
inline Tag::Type RESERVED_SAGE_TAG_PLACEMENT_BUFFER;
#define as >> *new(&RESERVED_SAGE_TAG_PLACEMENT_BUFFER)

#endif
