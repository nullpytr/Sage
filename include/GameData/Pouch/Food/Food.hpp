#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

#include "GameData/Pouch/Food/Content.hpp"

namespace GameData::Pouch::Food {
    struct Food {
        array<bool> IsValid;
        Content Content;

        template <typename Sav>
        explicit Food(Sav& s)
            : IsValid { s.get(Promise::IsValid) },
              Content { s }
        {};

        struct Promise {
            static constexpr ::Promise<typeof(IsValid)> IsValid { murmurhash3::hash("Pouch.Food.IsValid") };
        };
    };

    using Data = Food;
}
