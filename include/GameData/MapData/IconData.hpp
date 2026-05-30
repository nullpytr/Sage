#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

#include "GameData/MapData/StampData.hpp"
#include "GameData/MapData/WarpMarkerData.hpp"

namespace GameData::MapData {
    struct IconData {
        StampData StampData;
        WarpMarkerData WarpMarkerData;

        template <typename Sav>
        explicit IconData(Sav& s)
            : StampData      { s },
              WarpMarkerData { s }
        {}

        struct Promise {};
    };
}