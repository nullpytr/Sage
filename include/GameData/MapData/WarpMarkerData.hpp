#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

namespace GameData::MapData {
    struct WarpMarkerData {
        array<vec3f> Pos;
        array<vec3f> Rot;
        array<s32> Index;

        template <typename Sav>
        explicit WarpMarkerData(Sav& s)
            : Pos   { s.get(Promise::Pos) },
              Rot   { s.get(Promise::Rot) },
              Index { s.get(Promise::Index) }
            {}

        struct Promise {
            static constexpr ::Promise<typeof(Pos)> Pos { murmurhash3::hash("MapData.IconData.WarpMarkerData.Pos") };
            static constexpr ::Promise<typeof(Rot)> Rot { murmurhash3::hash("MapData.IconData.WarpMarkerData.Rot") };
            static constexpr ::Promise<typeof(Index)> Index { murmurhash3::hash("MapData.IconData.WarpMarkerData.Index") };
        };
    };
}