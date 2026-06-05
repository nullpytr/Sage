#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

namespace GameData::Pouch::Material {
    struct Content {
        array<string64> Name;
        array<s32> StockNum;
        array<s32> GetOrder;
        array<s32> UseOrder;

        template <typename Sav>
        explicit Content(Sav& s)
            : Name     { s.get(Promise::Name) },
              StockNum { s.get(Promise::StockNum) },
              GetOrder { s.get(Promise::GetOrder) },
              UseOrder { s.get(Promise::UseOrder) }
            {}

        struct Promise {
            static constexpr ::Promise<typeof(Name)> Name { murmurhash3::hash("Pouch.Material.Content.Name") };
            static constexpr ::Promise<typeof(StockNum)> StockNum { murmurhash3::hash("Pouch.Material.Content.StockNum") };
            static constexpr ::Promise<typeof(GetOrder)> GetOrder { murmurhash3::hash("Pouch.Material.Content.GetOrder") };
            static constexpr ::Promise<typeof(UseOrder)> UseOrder { murmurhash3::hash("Pouch.Material.Content.UseOrder") };
        };
    };
}