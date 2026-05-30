#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

namespace GameData {
    struct PlayerStatus {
        s32& MaxLife;
        float& MaxStamina;
        vec3f& SavePos;
        s32& CurrentRupee;
        u32& Life;
        float& MaxEnergy;

        template <typename Sav>
        explicit PlayerStatus(Sav& s)
            : MaxLife { s.get(Promise::MaxLife) },
              MaxStamina { s.get(Promise::MaxStamina) },
              SavePos { s.get(Promise::SavePos) },
              CurrentRupee { s.get(Promise::CurrentRupee) },
              Life { s.get(Promise::Life) },
              MaxEnergy { s.get(Promise::MaxEnergy) }
            {};

        struct Promise {
            static constexpr ::Promise<typeof(MaxLife)> MaxLife { murmurhash3::hash("PlayerStatus.MaxLife") };
            static constexpr ::Promise<typeof(MaxStamina)> MaxStamina { murmurhash3::hash("PlayerStatus.MaxStamina") };
            static constexpr ::Promise<typeof(SavePos)*> SavePos { murmurhash3::hash("PlayerStatus.SavePos") };
            static constexpr ::Promise<typeof(CurrentRupee)> CurrentRupee { murmurhash3::hash("PlayerStatus.CurrentRupee") };
            static constexpr ::Promise<typeof(Life)> Life { murmurhash3::hash("PlayerStatus.Life") };
            static constexpr ::Promise<typeof(MaxEnergy)> MaxEnergy { murmurhash3::hash("PlayerStatus.MaxEnergy") };
        };
    };
}
