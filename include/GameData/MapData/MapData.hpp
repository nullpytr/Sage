#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

#include "GameData/MapData/IconData.hpp"

namespace GameData::MapData {
    struct MapData {
        IconData IconData;

        template <typename Sav>
        explicit MapData(Sav& s)
            : IconData { s }
        {}

        struct Promise {};
    };

    using Data = MapData;
}