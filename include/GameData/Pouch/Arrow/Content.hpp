#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

namespace GameData::Pouch::Arrow {
    struct Content {
        array<string64> Name;
        array<s32> StockNum;

        template <typename Sav>
        explicit Content(Sav& s)
            : Name     { s.get(Promise::Name) },
              StockNum { s.get(Promise::StockNum) }
        {}

        struct Promise {
            static constexpr ::Promise<typeof(Name)> Name { murmurhash3::hash("Pouch.Arrow.Content.Name") };
            static constexpr ::Promise<typeof(StockNum)> StockNum { murmurhash3::hash("Pouch.Arrow.Content.StockNum") };
        };
    };
}
