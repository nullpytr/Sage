#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

namespace GameData::Pouch {
    struct Shield {
        array<s32> ValidNum;

        template <typename Sav>
        explicit Shield(Sav& s)
            : ValidNum { s.get(Promise::ValidNum) }
        {}

        struct Promise {
            static constexpr ::Promise<typeof(ValidNum)> ValidNum { murmurhash3::hash("Pouch.Shield.ValidNum") };
        };
    };
};