#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

namespace GameData::MapData {
    struct StampData {
        array<s32> Type;
        array<vec3f> Pos;
        array<s32> Layer;

        template <typename Sav>
        explicit StampData(Sav& s)
            : Type  { s.get(Promise::Type) },
              Pos   { s.get(Promise::Pos) },
              Layer { s.get(Promise::Layer) }
            {}

        struct Promise {
            static constexpr ::Promise<typeof(Type)> Type { murmurhash3::hash("MapData.IconData.StampData.Type") };
            static constexpr ::Promise<typeof(Pos)> Pos { murmurhash3::hash("MapData.IconData.StampData.Pos") };
            static constexpr ::Promise<typeof(Layer)> Layer { murmurhash3::hash("MapData.IconData.StampData.Layer") };
        };
    };
}