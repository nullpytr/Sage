#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

#include "GameData/Pouch/Shield/Content.hpp"

namespace GameData::Pouch::Shield {
    struct Shield {
        array<s32> EquipIndex;
        array<bool> IsValid;
        array<s32> ValidNum;
        array<bool> IsEnableShortcut;
        Content Content;

        template <typename Sav>
        explicit Shield(Sav& s)
            : EquipIndex       { s.get(Promise::EquipIndex) },
              IsValid          { s.get(Promise::IsValid) },
              ValidNum         { s.get(Promise::ValidNum) },
              IsEnableShortcut { s.get(Promise::IsEnableShortcut) },
              Content          { s }
        {};

        struct Promise {
            static constexpr ::Promise<typeof(EquipIndex)> EquipIndex { murmurhash3::hash("Pouch.Shield.EquipIndex") };
            static constexpr ::Promise<typeof(IsValid)> IsValid { murmurhash3::hash("Pouch.Shield.IsValid") };
            static constexpr ::Promise<typeof(ValidNum)> ValidNum { murmurhash3::hash("Pouch.Shield.ValidNum") };
            static constexpr ::Promise<typeof(IsEnableShortcut)> IsEnableShortcut { murmurhash3::hash("Pouch.Shield.IsEnableShortcut") };
        };
    };

    using Data = Shield;
}
