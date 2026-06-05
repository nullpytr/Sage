#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

#include "GameData/Pouch/SpecialPower/Content.hpp"

namespace GameData::Pouch::SpecialPower {
    struct SpecialPower {
        array<bool> IsValid;
        array<s32> ValidNum;
        Content Content;

        template <typename Sav>
        explicit SpecialPower(Sav& s)
            : IsValid  { s.get(Promise::IsValid) },
              ValidNum { s.get(Promise::ValidNum) },
              Content  { s }
        {};

        struct Promise {
            static constexpr ::Promise<typeof(IsValid)> IsValid { murmurhash3::hash("Pouch.SpecialPower.IsValid") };
            static constexpr ::Promise<typeof(ValidNum)> ValidNum { murmurhash3::hash("Pouch.SpecialPower.ValidNum") };
        };
    };

    using Data = SpecialPower;
}
