#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

#include "GameData/Pouch/Material/Content.hpp"

namespace GameData::Pouch::Material {
    struct Material {
        array<s32> EquipIndex;
        array<bool> IsValid;
        array<bool> IsEnableShortcut;
        Content Content;

        template <typename Sav>
        explicit Material(Sav& s)
            : EquipIndex       { s.get(Promise::EquipIndex) },
              IsValid          { s.get(Promise::IsValid) },
              IsEnableShortcut { s.get(Promise::IsEnableShortcut) },
              Content          { s }
        {}

        struct Promise {
            static constexpr ::Promise<typeof(EquipIndex)> EquipIndex { murmurhash3::hash("Pouch.Material.EquipIndex") };
            static constexpr ::Promise<typeof(IsValid)> IsValid { murmurhash3::hash("Pouch.Material.IsValid") };
            static constexpr ::Promise<typeof(IsEnableShortcut)> IsEnableShortcut { murmurhash3::hash("Pouch.Material.IsEnableShortcut") };
        };
    };

    using Data = Material;
}