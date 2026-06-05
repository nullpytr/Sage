#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

#include "GameData/Pouch/Armor/EquipIndexes.hpp"
#include "GameData/Pouch/Armor/Content.hpp"

namespace GameData::Pouch::Armor {
    struct Armor {
        array<bool> IsValid;
        EquipIndexes EquipIndexes;
        Content Content;

        template <typename Sav>
        explicit Armor(Sav& s)
            : IsValid      { s.get(Promise::IsValid) },
              EquipIndexes { s },
              Content      { s }
        {};

        struct Promise {
            static constexpr ::Promise<typeof(IsValid)> IsValid { murmurhash3::hash("Pouch.Armor.IsValid") };
        };
    };

    using Data = Armor;
}
