#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

namespace GameData::Pouch::SpecialPower {
    struct Content {
        array<string64> Name;

        template <typename Sav>
        explicit Content(Sav& s)
            : Name { s.get(Promise::Name) }
        {}

        struct Promise {
            static constexpr ::Promise<typeof(Name)> Name { murmurhash3::hash("Pouch.SpecialPower.Content.Name") };
        };
    };
}
