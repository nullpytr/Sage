#include <iostream>
#include "Core/Sav.hpp"
#include "Core/Enum.hpp"
#include "Filesystem.hpp"

int main(int const argc, char const* argv[]) {
    // if (argc != 2) return 1;
    // Sav s { argv[1] };

    /* Sample usage for `Sav.hpp` */
    /* progress.sav */
    Sav progress_sav { "test/progress.sav" };

    auto data = progress_sav.get<GameData::GameData>();
    std::cout << data.Playtime << std::endl; // read any value

    // get reference to any value
    auto& pony_points = data.HorseInnMemberPoint;
    std::cout << pony_points << std::endl;
    pony_points = 69; // write directly to any ref
    std::cout << pony_points << std::endl;

    // cstrings can be (optionally) upgraded to string views
    string const current_banc = data.Sequence_CurrentBanc;

    std::cout << current_banc << std::endl;

    progress_sav.dump("test/export.sav");

    // TODO
    // /* Query location */
    // auto [x, y, z] = progress_sav.get(Promise<vec3f*>{(mmh32)Hash::PlayerStatus_SavePos});
    // std::cout << "Location: " << x << ", " << y << ", " << z << std::endl;
    //
    // /* Set heart container count */
    // auto& hearts = progress_sav.get(Promise<u32>{(mmh32)Hash::PlayerStatus_MaxLife});
    // hearts = 40 * 4; // directly writes to sav object's memory
    //
    // std::cout
    //     << "Hearts set to "
    //     << hearts / 4
    //     << std::endl;
    //
    // /* Set rupee amount */
    // auto& rupees = progress_sav.get(Promise<u32>{(mmh32)Hash::PlayerStatus_CurrentRupee}); // get as reference
    // rupees = 99'999;
    //
    // std::cout
    //     << "Rupees set to "
    //     << rupees
    //     << std::endl;
    //
    // /* Set weapon capacity */
    // auto& weapon_capacity = progress_sav.get(Promise<u32[]>{(mmh32)Hash::Pouch_Weapon_ValidNum})[0];
    // weapon_capacity = 20;
    //
    // std::cout
    //     << "Weapon capacity set to "
    //     << weapon_capacity
    //     << std::endl;
    //
    // // TODO
    // /* Query cleared shrine count */
    // // auto query_shrines = [&sav = progress_sav]() {
    // //     return sav.test(HashArray::DungeonState, Enum::DungeonState::Clear);
    // // };
    // // std::cout << "Shrines cleared: " << query_shrines(); // 50
    // //
    // // /* Set all shrines as cleared */
    // // progress_sav.set(HashArray::DungeonState, Enum::DungeonState::Clear);
    // // std::cout << " -> " << query_shrines() << std::endl; // 152
    //
    // progress_sav.dump("test/export.sav");
    // /**/
    //
    // /* caption.sav */
    // Sav caption_sav { "test/caption.sav" };
    //
    // /* Query map area, it is found 48 bytes
    //  * after Metadata.SaveTypeHash
    //  */
    // std::string_view const map_area = &caption_sav.get(Promise<char>{(mmh32)Hash::CaptionData_SaveTypeHash}) + 48;
    // std::cout << map_area; // MapArea_TamulPlateau
    //
    // /* Export save thumbnail (menu preview image) */
    // std::span<u8 const> image = caption_sav.get(Promise<u8[]>{(mmh32)Hash::CaptionData_ScreenShot});
    //
    // write_all_bytes("test/preview.jpg", image);
    /**/
}
