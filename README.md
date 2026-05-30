# Sage

Simple tool for parsing and patching savegame files for TLoZ: Tears of the Kingdom.

## Credits
This tool is based on [this](https://www.marcrobledo.com/savegame-editors/zelda-totk) amazing savegame editor by [Marc Robeldo](https://www.marcrobledo.com/) and extensive game data gathered by [MrCheeze](https://github.com/MrCheeze/totk-tools) and [McSpazzy](https://github.com/McSpazzy/totk-gamedata).

## Usage
At this stage, no user interface has been implemented;  
but the `Sav.hpp` header can be included and used like a library as such:
```c++
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

    /* Query location */
    auto [x, y, z] = data.PlayerStatus.SavePos; // get copy
    std::cout << "Location: " << x << ", " << y << ", " << z << std::endl;

    /* Set heart container count */
    auto& hearts = data.PlayerStatus.MaxLife; // get as reference
    hearts = 40 * 4; // directly writes to sav object's memory

    std::cout
        << "Hearts set to "
        << hearts / 4
        << std::endl;

    /* Set rupee amount */
    auto& rupees = data.PlayerStatus.CurrentRupee; // another ref
    rupees = 99'999;

    std::cout
        << "Rupees set to "
        << rupees
        << std::endl;

    /* Set weapon capacity */
    auto& weapon_capacity = data.Pouch.Weapon.ValidNum[0];
    weapon_capacity = 20;

    std::cout
        << "Weapon capacity set to "
        << weapon_capacity
        << std::endl;

    // TODO
    /* Query cleared shrine count */
    // auto query_shrines = [&sav = progress_sav]() {
    //     return sav.test(HashArray::DungeonState, Enum::DungeonState::Clear);
    // };
    // std::cout << "Shrines cleared: " << query_shrines(); // 50
    //
    // /* Set all shrines as cleared */
    // progress_sav.set(HashArray::DungeonState, Enum::DungeonState::Clear);
    // std::cout << " -> " << query_shrines() << std::endl; // 152

    progress_sav.dump("test/export.sav");
    /**/

    /* caption.sav */
    Sav caption_sav { "test/caption.sav" };

    /* Query location */
    auto caption_data = caption_sav.get<GameData::CaptionData::Data>();
    string const& loc = caption_data.LocationName;
    std::cout << loc << std::endl; // example: MapArea_EastHateru

    /* Export save thumbnail (menu preview image) */
    array<byte> image = caption_data.ScreenShot;
    write_all_bytes("test/preview.jpg", image);
```

The modified number of heart containers and amount of rupees will reflect in-game:
![sample-image](https://github.com/priyamkalra0/Sage/releases/download/sample-image/sample.png)

## Dependencies

*   none

## Build

This project uses CMake. To build, navigate to the project root and run:

```bash
mkdir build
cd build && cmake ..
cmake --build .
```