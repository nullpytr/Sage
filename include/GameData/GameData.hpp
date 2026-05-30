#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

#include "GameData/MetaData.hpp"
#include "GameData/CaptionData/CaptionData.hpp"
#include "GameData/PlayerStatus.hpp"
#include "GameData/OwnedHorseList.hpp"
#include "GameData/Pouch/Pouch.hpp"
#include "GameData/MapData/MapData.hpp"
#include "GameData/PlusMenu.hpp"

#include "GameData/DungeonState.hpp"

/*
 * Murmur3 hashes for the interesting game data in the .sav files
 * See:
 * https://github.com/marcrobledo/savegame-editors/blob/b65dc1ecf655ba4f5f8bb74d4a7d402fc375fbf1/zelda-totk/zelda-totk.js#L28
 * https://raw.githubusercontent.com/McSpazzy/totk-gamedata/refs/heads/master/GameDataList.Product.110.json
 * https://raw.githubusercontent.com/MrCheeze/totk-tools/refs/heads/master/gamedata_hashes.txt
*/

namespace GameData
{
    struct GameData
    {
        PlayerStatus PlayerStatus;
        Pouch::Data Pouch;
        OwnedHorseList OwnedHorseList;
        MapData::Data MapData;
        PlusMenu PlusMenu;

        DungeonState DungeonState;

        u32& Playtime;
        u32& HorseInnMemberPoint;
        string64& Sequence_CurrentBanc;

        template <typename Sav>
        explicit GameData(Sav& s)
            :   PlayerStatus         { s },
                Pouch                { s },
                OwnedHorseList       { s },
                MapData              { s },
                PlusMenu             { s },

                DungeonState { s },

                Playtime             { s.get(Promise::Playtime) },
                HorseInnMemberPoint  { s.get(Promise::HorseInnMemberPoint) },
                Sequence_CurrentBanc { s.get(Promise::Sequence_CurrentBanc) }
            {}

        struct Promise {
            static constexpr ::Promise<typeof(Playtime)> Playtime { 0xe573f564 }; // unknown hash text
            static constexpr ::Promise<typeof(HorseInnMemberPoint)> HorseInnMemberPoint { murmurhash3::hash("HorseInnMemberPoint") };
            static constexpr ::Promise<typeof(Sequence_CurrentBanc)*> Sequence_CurrentBanc { murmurhash3::hash("Sequence_CurrentBanc") };
        };
    };
}