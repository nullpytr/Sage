#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

#include "GameData/Pouch/SpecialParts/Content.hpp"

namespace GameData::Pouch::SpecialParts {
    struct SpecialParts {
        array<bool> IsValid;
        array<s32> EquipIndex;
        Content Content;

        template <typename Sav>
        explicit SpecialParts(Sav& s)
            : IsValid    { s.get(Promise::IsValid) },
              EquipIndex { s.get(Promise::EquipIndex) },
              Content    { s }
        {};

        struct Promise {
            static constexpr ::Promise<typeof(IsValid)> IsValid { murmurhash3::hash("Pouch.SpecialParts.IsValid") };
            static constexpr ::Promise<typeof(EquipIndex)> EquipIndex { murmurhash3::hash("Pouch.SpecialParts.EquipIndex") };
        };
    };

    using Data = SpecialParts;
}
