#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

#include "GameData/Pouch/KeyItem/Content.hpp"

// FIXME

namespace GameData::Pouch::KeyItem {
    struct KeyItem {
        Content Content;
        // array<bool> IsEnableShortcut;

        template <typename Sav>
        explicit KeyItem(Sav& s)
            : Content          { s }//,
              // IsEnableShortcut { s.get(Promise::IsEnableShortcut) }
        {}

        struct Promise {
            // static constexpr ::Promise<typeof(IsEnableShortcut)> IsEnableShortcut { murmurhash3::hash("Pouch.KeyItem.IsEnableShortcut") };
        };
    };

    using Data = KeyItem;
}