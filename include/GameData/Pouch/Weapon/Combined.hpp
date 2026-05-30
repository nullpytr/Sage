#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

namespace GameData::Pouch::Weapon {
    struct Combined {
        array<string64> Name;
        array<s32> Life;

        // FIXME
        // array<s32> SerialNumber;
        // array<bool> IsValid;

        template <typename Sav>
        explicit Combined(Sav& s)
            : Name          { s.get(Promise::Name) },
              Life          { s.get(Promise::Life) }//,
              // SerialNumber  { s.get(Promise::SerialNumber) },
              // IsValid       { s.get(Promise::IsValid) }
        {}

        struct Promise {
            static constexpr ::Promise<typeof(Name)> Name { murmurhash3::hash("Pouch.Weapon.Content.Combined.Name") };
            static constexpr ::Promise<typeof(Life)> Life { murmurhash3::hash("Pouch.Weapon.Content.Combined.Life") };
            // static constexpr ::Promise<typeof(SerialNumber)> SerialNumber { murmurhash3::hash("Pouch.Weapon.Content.Combined.SerialNumber") };
            // static constexpr ::Promise<typeof(IsValid)> IsValid { murmurhash3::hash("Pouch.Weapon.Content.Combined.IsValid") };
        };
    };
}