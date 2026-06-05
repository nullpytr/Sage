#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

namespace GameData::Pouch::Armor {
    struct EquipIndexes {
        array<s32> Head;
        array<s32> Upper;
        array<s32> Bottom;

        template <typename Sav>
        explicit EquipIndexes(Sav& s)
            : Head   { s.get(Promise::Head) },
              Upper  { s.get(Promise::Upper) },
              Bottom { s.get(Promise::Bottom) }
        {}

        struct Promise {
            static constexpr ::Promise<typeof(Head)> Head { murmurhash3::hash("Pouch.Armor.EquipIndexes.Head") };
            static constexpr ::Promise<typeof(Upper)> Upper { murmurhash3::hash("Pouch.Armor.EquipIndexes.Upper") };
            static constexpr ::Promise<typeof(Bottom)> Bottom { murmurhash3::hash("Pouch.Armor.EquipIndexes.Bottom") };
        };
    };
}
