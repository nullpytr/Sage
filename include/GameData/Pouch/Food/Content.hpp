#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

#include "GameData/Pouch/Food/Effect.hpp"

namespace GameData::Pouch::Food {
    struct Content {
        array<string64> Name;
        array<s32> StockNum;
        array<s32> Price;
        array<s32> LifeRecover;
        array<string64> MaterialName;

        Effect Effect;

        template <typename Sav>
        explicit Content(Sav& s)
            : Name         { s.get(Promise::Name) },
              StockNum     { s.get(Promise::StockNum) },
              Price        { s.get(Promise::Price) },
              LifeRecover  { s.get(Promise::LifeRecover) },
              MaterialName { s.get(Promise::MaterialName) },
              Effect       { s }
        {}

        struct Promise {
            static constexpr ::Promise<typeof(Name)> Name { murmurhash3::hash("Pouch.Food.Content.Name") };
            static constexpr ::Promise<typeof(StockNum)> StockNum { murmurhash3::hash("Pouch.Food.Content.StockNum") };
            static constexpr ::Promise<typeof(Price)> Price { murmurhash3::hash("Pouch.Food.Content.Price") };
            static constexpr ::Promise<typeof(LifeRecover)> LifeRecover { murmurhash3::hash("Pouch.Food.Content.LifeRecover") };
            static constexpr ::Promise<typeof(MaterialName)> MaterialName { murmurhash3::hash("Pouch.Food.Content.MaterialName") };
        };
    };
}
