#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

#include "GameData/Pouch/KeyItem/Content.hpp"

namespace GameData::Pouch::KeyItem {
    struct KeyItem {
        array<bool> IsValid;
        Content Content;

        template <typename Sav>
        explicit KeyItem(Sav& s)
            : IsValid { s.get(Promise::IsValid) },
              Content { s }
        {}

        struct Promise {
            static constexpr ::Promise<typeof(IsValid)> IsValid { murmurhash3::hash("Pouch.KeyItem.IsValid") };
        };
    };

    using Data = KeyItem;
}