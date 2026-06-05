#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

namespace GameData::Pouch::Armor {
    struct Content {
        array<string64> Name;
        array<u32> ColorVariation;

        template <typename Sav>
        explicit Content(Sav& s)
            : Name           { s.get(Promise::Name) },
              ColorVariation { s.get(Promise::ColorVariation) }
        {}

        struct Promise {
            static constexpr ::Promise<typeof(Name)> Name { murmurhash3::hash("Pouch.Armor.Content.Name") };
            static constexpr ::Promise<typeof(ColorVariation)> ColorVariation { murmurhash3::hash("Pouch.Armor.Content.ColorVariation") };
        };
    };
}
