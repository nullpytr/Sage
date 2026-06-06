# Sage

Simple tool for parsing and patching savegame files for TLoZ: Tears of the Kingdom.

## Credits
This tool is based on [this](https://www.marcrobledo.com/savegame-editors/zelda-totk) amazing savegame editor by [Marc Robeldo](https://www.marcrobledo.com/) and extensive game data gathered by [MrCheeze](https://github.com/MrCheeze/totk-tools) and [McSpazzy](https://github.com/McSpazzy/totk-gamedata).

## Usage
At this stage, no user interface has been implemented;  
but the `Sav.hpp` header can be included and used like a library as such:
```c++
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
```

should output:
```c++
/* progress.sav */
Playtime: 193449 seconds
Pony Points: 26 -> 69
Current Banc: MainField
Location: -255.73038, 616.5528, -1062.7076
Heart containers: 40 -> 40
Rupees: 986836 -> 99999
Weapon capacity: 20 -> 20
Shrines cleared: 51 -> 152
Exported modified save to 'test/export.sav'
/* -- */

/* caption.sav */
Location: MapArea_TamulPlateau
Exported save thumbnail to 'test/preview.jpg'
/* -- */
```

The modifications (ex. number of heart containers and amount of rupees) will reflect in-game:
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