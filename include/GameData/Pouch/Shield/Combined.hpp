#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

namespace GameData::Pouch::Shield {
    struct Combined {
        array<string64> Name;
        array<s32> Life;

        template <typename Sav>
        explicit Combined(Sav& s)
            : Name { s.get(Promise::Name) },
              Life { s.get(Promise::Life) }
        {}

        struct Promise {
            static constexpr ::Promise<typeof(Name)> Name { murmurhash3::hash("Pouch.Shield.Content.Combined.Name") };
            static constexpr ::Promise<typeof(Life)> Life { murmurhash3::hash("Pouch.Shield.Content.Combined.Life") };
        };
    };
}
