#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

#include "GameData/Pouch/Weapon/Content.hpp"

namespace GameData::Pouch::Weapon {
    struct Weapon {
        array<s32> EquipIndex;
        array<bool> IsValid;
        array<s32> ValidNum;
        array<bool> IsEnableShortcut;
        Content Content;

        template <typename Sav>
        explicit Weapon(Sav& s)
            : EquipIndex       { s.get(Promise::EquipIndex) },
              IsValid          { s.get(Promise::IsValid) },
              ValidNum         { s.get(Promise::ValidNum) },
              IsEnableShortcut { s.get(Promise::IsEnableShortcut) },
              Content          { s }
        {};

        struct Promise {
            static constexpr ::Promise<typeof(EquipIndex)> EquipIndex { murmurhash3::hash("Pouch.Weapon.EquipIndex") };
            static constexpr ::Promise<typeof(IsValid)> IsValid { murmurhash3::hash("Pouch.Weapon.IsValid") };
            static constexpr ::Promise<typeof(ValidNum)> ValidNum { murmurhash3::hash("Pouch.Weapon.ValidNum") };
            static constexpr ::Promise<typeof(IsEnableShortcut)> IsEnableShortcut { murmurhash3::hash("Pouch.Weapon.IsEnableShortcut") };
        };
    };

    using Data = Weapon;
}