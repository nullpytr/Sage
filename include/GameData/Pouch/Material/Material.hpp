#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

#include "GameData/Pouch/Material/Content.hpp"

namespace GameData::Pouch::Material {
    struct Material {
        Content Content;
        array<bool> IsEnableShortcut;

        template <typename Sav>
        explicit Material(Sav& s)
            : Content          { s },
              IsEnableShortcut { s.get(Promise::IsEnableShortcut) }
        {}

        struct Promise {
            static constexpr ::Promise<typeof(IsEnableShortcut)> IsEnableShortcut { murmurhash3::hash("Pouch.Material.IsEnableShortcut") };
        };
    };

    using Data = Material;
}