#include <print>
#include "Core/Sav.hpp"
#include "GameData.hpp"

int main(int const argc, char const* argv[]) {
    /* progress.sav */
    std::println("/* progress.sav */");
    Sav progress_sav { "other/progress-jan.sav" };

    auto data = progress_sav.get<GameData>();

    std::println("Playtime: {} seconds", data.Playtime); // read any value from struct
    std::print("Pony Points: {}", data.HorseInnMemberPoint);
    data.HorseInnMemberPoint = 69; // write directly to any ref in struct
    std::println(" -> {}", data.HorseInnMemberPoint);

    // top-level strings
    std::print("Current Banc: {}", data.Sequence_CurrentBanc); // read
    data.Sequence_CurrentBanc = "HelloWorld"; // directly writes to sav object's memory
    std::print(" -> {}", data.Sequence_CurrentBanc);

    string_view current_banc = progress_sav.get<GameData::Sequence_CurrentBanc>(); // get immutable sv
    std::println(" ({})", current_banc);

    /* Query location */
    auto [x, y, z] = data.PlayerStatus.SavePos; // get copies
    std::println("Location: {}, {}, {}", x, y, z);

    /* Set heart container count */
    auto& hearts = data.PlayerStatus.MaxLife; // get as reference

    std::print("Heart containers: {}", hearts / 4);
    hearts = 40 * 4; // directly writes to sav object's memory
    std::println(" -> {}", data.PlayerStatus.MaxLife / 4);

    /* Set rupee amount */
    auto& rupees = data.PlayerStatus.CurrentRupee; // another reference
    std::print("Rupees: {}", rupees);
    rupees = 99'999;
    std::println(" -> {}", data.PlayerStatus.CurrentRupee);

    /* Set weapon capacity */
    auto& weapon_capacity = data.Pouch.Weapon.ValidNum[0];

    std::print("Weapon capacity: {}", weapon_capacity);
    weapon_capacity = 20;
    std::println(" -> {}", weapon_capacity);

    // enums
    auto& power = data.PlayerStatus.CurrentSpecialPower;
    power = power.Amiibo;

    if (progress_sav.get<GameData::PlayerStatus::CurrentSpecialPower>() == power.Amiibo)
        std::println("Player was using Amiibo");
    else
        std::println("Player was not using Amiibo");

    // string arrays
    // strings inside arrays need to be dereferenced (because of nested adapters, WIP)
    for (auto& name : data.OwnedHorseList.Name)
        *name = u"my horse"; // write directly into sav object's memory

    auto const& updated_names = progress_sav.get<GameData::OwnedHorseList::Name>(); // now all identical
    std::println("Horses renamed successfully: {}", *updated_names[0] == *updated_names[1]);

    progress_sav.dump("other/export.sav");

    std::println("Exported modified save to 'other/export.sav'");
    std::println("/* -- */");
    /* -- */
}