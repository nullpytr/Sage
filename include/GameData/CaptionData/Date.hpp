#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

namespace GameData::CaptionData
{
    struct Date {
        u32& Second;
        u32& Minute;
        u32& Hour;
        u32& Day;
        u32& Month;
        u32& Year;

        template <typename Sav>
        explicit Date(Sav& s)
            : Second { s.get(Promise::Second) },
              Minute { s.get(Promise::Minute) },
              Hour   { s.get(Promise::Hour) },
              Day    { s.get(Promise::Day) },
              Month  { s.get(Promise::Month) },
              Year   { s.get(Promise::Year) }
        {}

        struct Promise {
            static constexpr ::Promise<typeof(Second)> Second { murmurhash3::hash("CaptionData.Date.Second") };
            static constexpr ::Promise<typeof(Minute)> Minute { murmurhash3::hash("CaptionData.Date.Minute") };
            static constexpr ::Promise<typeof(Hour)> Hour { murmurhash3::hash("CaptionData.Date.Hour") };
            static constexpr ::Promise<typeof(Day)> Day { murmurhash3::hash("CaptionData.Date.Day") };
            static constexpr ::Promise<typeof(Month)> Month { murmurhash3::hash("CaptionData.Date.Month") };
            static constexpr ::Promise<typeof(Year)> Year { murmurhash3::hash("CaptionData.Date.Year") };
        };
    };
}