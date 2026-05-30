#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

// FIXME

namespace GameData {
    struct PlusMenu {
        // bool& IsNeedDeleteWarpMarker;
        // bool& IsNeedReplaceWarpMarker;
        //
        template <typename Sav>
        explicit PlusMenu(Sav& s)
        //     : IsNeedDeleteWarpMarker  { s.get(Promise::IsNeedDeleteWarpMarker) },
        //       IsNeedReplaceWarpMarker { s.get(Promise::IsNeedReplaceWarpMarker) }
        {}
        //
        // struct Promise {
        //     static constexpr ::Promise<typeof(IsNeedDeleteWarpMarker)> IsNeedDeleteWarpMarker { murmurhash3::hash("PlusMenu_IsNeedDeleteWarpMarker") };
        //     static constexpr ::Promise<typeof(IsNeedReplaceWarpMarker)> IsNeedReplaceWarpMarker { murmurhash3::hash("PlusMenu_IsNeedReplaceWarpMarker") };
        // };
    };
}