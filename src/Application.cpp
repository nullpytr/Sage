#include <print>
#include "Core/Sav.hpp"
#include "Core/Enum.hpp"
#include "GameData/GameData.hpp"
#include "Filesystem.hpp"

int main(int const argc, char const* argv[]) {
    // if (argc != 2) return 1;
    // Sav s { argv[1] };

    /* Sample usage for `Sav.hpp` */
    /* progress.sav */
    Sav progress_sav { "test/progress.sav" };

    auto data = progress_sav.get<GameData::GameData>();
    std::println("Playtime: {} seconds", data.Playtime);

    // get reference to any value
    auto& pony_points = data.HorseInnMemberPoint;
    std::println("Pony Points: {}", pony_points);
    pony_points = 69; // write directly to any ref
    std::println("Pony Points: {}", pony_points);

    // cstrings can be (optionally) upgraded to string views
    string const current_banc = data.Sequence_CurrentBanc;

    std::println("Current Banc: {}", current_banc);

    /* Query location */
    auto [x, y, z] = data.PlayerStatus.SavePos; // get copy
    std::println("Location: {}, {}, {}", x, y, z);

    /* Set heart container count */
    auto& hearts = data.PlayerStatus.MaxLife; // get as reference
    hearts = 40 * 4; // directly writes to sav object's memory

    std::println("Heart containers set to {}", hearts / 4);

    /* Set rupee amount */
    auto& rupees = data.PlayerStatus.CurrentRupee; // another ref
    rupees = 99'999;

    std::println("Rupees set to {}", rupees);

    /* Set weapon capacity */
    auto& weapon_capacity = data.Pouch.Weapon.ValidNum[0];
    weapon_capacity = 20;

    std::println("Weapon capacity set to {}", weapon_capacity);

    // TODO
    /* Query cleared shrine count */
    // auto query_shrines = [&sav = progress_sav]() {
    //     return sav.test(HashArray::DungeonState, Enum::DungeonState::Clear);
    // };
    // std::println("Shrines cleared: {}", query_shrines()); // 50
    //
    // /* Set all shrines as cleared */
    // progress_sav.set(HashArray::DungeonState, Enum::DungeonState::Clear);
    // std::println(" -> {}", query_shrines()); // 152

    progress_sav.dump("test/export.sav");
    /**/

    /* caption.sav */
    Sav caption_sav { "test/caption.sav" };

    /* Query location */
    auto caption_data = caption_sav.get<GameData::CaptionData::Data>();
    string const& loc = caption_data.LocationName;
    std::println("Location: {}", loc); // example: MapArea_EastHateru

    /* Export save thumbnail (menu preview image) */
    array<byte> image = caption_data.ScreenShot;
    write_all_bytes("test/preview.jpg", image);
    /**/
}
