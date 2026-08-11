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
    std::println("/* progress.sav */");
    Sav progress_sav { "test/progress.sav" };

    auto data = progress_sav.get<GameData::GameData>();

    // read any value from struct
    std::println("Playtime: {} seconds", data.Playtime);

    std::print("Pony Points: {}", data.HorseInnMemberPoint);
    data.HorseInnMemberPoint = 69; // write directly to any ref in struct
    std::println(" -> {}", data.HorseInnMemberPoint);

    // cstrings can be (optionally) upgraded to string views
    string const current_banc = data.Sequence_CurrentBanc;

    std::println("Current Banc: {}", current_banc);


    /* Query location */
    auto [x, y, z] = data.PlayerStatus.SavePos; // get copy
    std::println("Location: {}, {}, {}", x, y, z);

    /* Set heart container count */
    auto& hearts = data.PlayerStatus.MaxLife; // get as reference

    std::print("Heart containers: {}", hearts / 4);
    hearts = 40 * 4; // directly writes to sav object's memory
    std::println(" -> {}", hearts / 4);

    /* Set rupee amount */
    auto& rupees = data.PlayerStatus.CurrentRupee; // another ref
    std::print("Rupees: {}", rupees);
    rupees = 99'999;
    std::println(" -> {}", rupees);

    /* Set weapon capacity */
    auto& weapon_capacity = data.Pouch.Weapon.ValidNum[0];
    std::print("Weapon capacity: {}", weapon_capacity);
    weapon_capacity = 20;
    std::println(" -> {}", weapon_capacity);

    /* Query cleared shrine count */
    auto& dungeon = data.DungeonState.Dungeon;
    std::print("Shrines cleared: {}", dungeon.test(dungeon.Clear)); // 50

    /* Set all shrines as cleared */
    for (auto idx = 0; idx < dungeon.size; ++idx) dungeon[idx] = dungeon.Clear;
    std::println(" -> {}", dungeon.test(dungeon.Clear)); // 152

    progress_sav.dump("test/export.sav");
    
    std::println("Exported modified save to 'test/export.sav'");
    std::println("/* -- */");
    /* -- */

    /* caption.sav */
    std::println("\n/* caption.sav */");
    Sav caption_sav { "test/caption.sav" };

    /* Query location */
    auto caption_data = caption_sav.get<GameData::CaptionData::Data>();
    std::println(
        "Location: {}",
        string {caption_data.LocationName /* string64 - should be wrapped in string_view */}
    );

    /* Export save thumbnail (menu preview image) */
    write_all_bytes(
        "test/preview.jpg",
        caption_data.ScreenShot // array<byte>
    );
    std::println("Exported save thumbnail to 'test/preview.jpg'");
    std::println("/* -- */");
    /* -- */
}
