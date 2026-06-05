#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

namespace GameData::Pouch::Food {
    struct Effect {
        array<u32> Type;
        array<s32> Level;
        array<s32> Time;

        template <typename Sav>
        explicit Effect(Sav& s)
            : Type  { s.get(Promise::Type) },
              Level { s.get(Promise::Level) },
              Time  { s.get(Promise::Time) }
        {}

        struct Promise {
            static constexpr ::Promise<typeof(Type)> Type { murmurhash3::hash("Pouch.Food.Content.Effect.Type") };
            static constexpr ::Promise<typeof(Level)> Level { murmurhash3::hash("Pouch.Food.Content.Effect.Level") };
            static constexpr ::Promise<typeof(Time)> Time { murmurhash3::hash("Pouch.Food.Content.Effect.Time") };
        };
    };
}
