#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

namespace GameData::Pouch::Weapon {
    struct Effect {
        array<u32> Type;
        array<s32> Value;

        template <typename Sav>
        explicit Effect(Sav& s)
            : Type  { s.get(Promise::Type) },
              Value { s.get(Promise::Value) }
        {}

        struct Promise {
            static constexpr ::Promise<typeof(Type)> Type { murmurhash3::hash("Pouch.Weapon.Content.Effect.Type") };
            static constexpr ::Promise<typeof(Value)> Value { murmurhash3::hash("Pouch.Weapon.Content.Effect.Value") };
        };
    };
}