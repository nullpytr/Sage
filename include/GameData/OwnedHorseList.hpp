#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

namespace GameData {
    struct OwnedHorseList {
        array<wstring16> Name;

        template <typename Sav>
        explicit OwnedHorseList(Sav& s)
            : Name { s.get(Promise::Name) }
        {};

        struct Promise
        {
            static constexpr ::Promise<typeof(Name)> Name { murmurhash3::hash("OwnedHorseList.Name") };
        };
    };
}
