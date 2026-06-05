#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

#include "GameData/Pouch/Arrow/Content.hpp"
#include "GameData/Pouch/Arrow/Combined.hpp"

namespace GameData::Pouch::Arrow {
    struct Arrow {
        array<s32> EquipIndex;
        array<bool> IsValid;
        Content Content;
        Combined Combined;

        template <typename Sav>
        explicit Arrow(Sav& s)
            : EquipIndex { s.get(Promise::EquipIndex) },
              IsValid    { s.get(Promise::IsValid) },
              Content    { s },
              Combined   { s }
        {};

        struct Promise {
            static constexpr ::Promise<typeof(EquipIndex)> EquipIndex { murmurhash3::hash("Pouch.Arrow.EquipIndex") };
            static constexpr ::Promise<typeof(IsValid)> IsValid { murmurhash3::hash("Pouch.Arrow.IsValid") };
        };
    };

    using Data = Arrow;
}
