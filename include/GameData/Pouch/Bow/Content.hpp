#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

#include "GameData/Pouch/Bow/Effect.hpp"

namespace GameData::Pouch::Bow {
    struct Content {
        array<string64> Name;
        array<s32> Life;

        Effect Effect;

        template <typename Sav>
        explicit Content(Sav& s)
            : Name   { s.get(Promise::Name) },
              Life   { s.get(Promise::Life) },
              Effect { s }
        {}

        struct Promise {
            static constexpr ::Promise<typeof(Name)> Name { murmurhash3::hash("Pouch.Bow.Content.Name") };
            static constexpr ::Promise<typeof(Life)> Life { murmurhash3::hash("Pouch.Bow.Content.Life") };
        };
    };
}
