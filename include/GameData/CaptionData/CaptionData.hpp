#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

#include "GameData/CaptionData/Date.hpp"

namespace GameData::Hash::CaptionData
{
 static constexpr mmh32 SaveTypeHash { 0x26f3523b };
}

namespace GameData::CaptionData {
    struct CaptionData {
        array<byte> ScreenShot;
        bool& IsAutoSave;
        bool& IsClear;
        bool& IsEnableUseAmiibo;
        bool& IsTitleMuralEnable;
        string64& LocationName;

        Date Date;

        template <typename Sav>
        explicit CaptionData(Sav& s)
            : ScreenShot         { s.get(Promise::ScreenShot) },
              IsAutoSave         { s.get(Promise::IsAutoSave) },
              IsClear            { s.get(Promise::IsClear) },
              IsEnableUseAmiibo  { s.get(Promise::IsEnableUseAmiibo) },
              IsTitleMuralEnable { s.get(Promise::IsTitleMuralEnable) },
              LocationName       { s.get(Promise::LocationName) },
              Date               { s }
        {}

        struct Promise {
            static constexpr ::Promise<typeof(ScreenShot)> ScreenShot { murmurhash3::hash("CaptionData.ScreenShot") };
            static constexpr ::Promise<typeof(IsAutoSave)> IsAutoSave { murmurhash3::hash("CaptionData.IsAutoSave") };
            static constexpr ::Promise<typeof(IsClear)> IsClear { murmurhash3::hash("CaptionData.IsClear") };
            static constexpr ::Promise<typeof(IsEnableUseAmiibo)> IsEnableUseAmiibo { murmurhash3::hash("CaptionData.IsEnableUseAmiibo") };
            static constexpr ::Promise<typeof(IsTitleMuralEnable)> IsTitleMuralEnable { murmurhash3::hash("CaptionData.IsTitleMuralEnable") };
            static constexpr ::Promise<typeof(LocationName)*> LocationName { murmurhash3::hash("CaptionData.LocationName") };
        };
    };

    using Data = CaptionData;
}