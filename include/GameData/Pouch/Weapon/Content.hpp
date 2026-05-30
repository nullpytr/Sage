#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

#include "GameData/Pouch/Weapon/Effect.hpp"
#include "GameData/Pouch/Weapon/Combined.hpp"

namespace GameData::Pouch::Weapon {
    struct Content {
        array<string64> Name;
        array<s32> Life;
        array<s32> ExtraLife;
        array<s32> RecordExtraLife;
        
        Effect Effect;
        Combined Combined;

        template <typename Sav>
        explicit Content(Sav& s)
            : Name            { s.get(Promise::Name) },
              Life            { s.get(Promise::Life) },
              ExtraLife       { s.get(Promise::ExtraLife) },
              RecordExtraLife { s.get(Promise::RecordExtraLife) },
              Effect          { s },
              Combined        { s }
        {}

        struct Promise {
            static constexpr ::Promise<typeof(Name)> Name { murmurhash3::hash("Pouch.Weapon.Content.Name") };
            static constexpr ::Promise<typeof(Life)> Life { murmurhash3::hash("Pouch.Weapon.Content.Life") };
            static constexpr ::Promise<typeof(ExtraLife)> ExtraLife { murmurhash3::hash("Pouch.Weapon.Content.ExtraLife") };
            static constexpr ::Promise<typeof(RecordExtraLife)> RecordExtraLife { murmurhash3::hash("Pouch.Weapon.Content.RecordExtraLife") };
        };
    };
}