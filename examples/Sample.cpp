#include <print>
#include "Core/Sav.hpp"
#include "GameData.hpp"

void require(bool condition) { if (!condition) std::exit(1); }

int main(int const argc, char const* argv[]) {
    /* progress.sav */
    std::println("/* progress.sav */");
    Sav save { "other/progress.sav" };

    auto data = save.get<GameData>();

    std::println("Playtime: {} seconds", data.Playtime); // read any value from struct
    std::print("Pony Points: {}", data.HorseInnMemberPoint);
    data.HorseInnMemberPoint = 69; // write directly to any ref in struct
    std::println(" -> {}", data.HorseInnMemberPoint);

    require(data.HorseInnMemberPoint == 69);
    require(save.get<GameData::HorseInnMemberPoint>() == data.HorseInnMemberPoint);

    /* Top-level strings */
    std::print("Current Banc: {}", data.Sequence_CurrentBanc); // read
    data.Sequence_CurrentBanc = "HelloWorld"; // directly writes to sav object's memory
    std::print(" -> {}", data.Sequence_CurrentBanc);

    require(data.Sequence_CurrentBanc == "HelloWorld");
    require(save.get<GameData::Sequence_CurrentBanc>() == data.Sequence_CurrentBanc);

    string_view current_banc_sv = save.get<GameData::Sequence_CurrentBanc>(); // get immutable sv
    std::println(" ({})", current_banc_sv);

    require(current_banc_sv == "HelloWorld");
    require(data.Sequence_CurrentBanc == current_banc_sv);
    require(save.get<GameData::Sequence_CurrentBanc>() == current_banc_sv);

    /* Query location */
    auto [x, y, z] = data.PlayerStatus.SavePos; // get copies
    std::println("Location: {}, {}, {}", x, y, z);

    /* Set heart container count */
    auto& hearts = data.PlayerStatus.MaxLife; // get as reference

    std::print("Heart containers: {}", hearts / 4);
    hearts = 40 * 4; // directly writes to sav object's memory
    std::println(" -> {}", data.PlayerStatus.MaxLife / 4);

    require(data.PlayerStatus.MaxLife == 40 * 4);
    require(save.get<GameData::PlayerStatus::MaxLife>() == data.PlayerStatus.MaxLife);

    /* Set rupee amount */
    auto& rupees = data.PlayerStatus.CurrentRupee; // another reference
    std::print("Rupees: {}", rupees);
    rupees = 99'999;
    std::println(" -> {}", data.PlayerStatus.CurrentRupee);

    require(data.PlayerStatus.CurrentRupee == 99'999);
    require(save.get<GameData::PlayerStatus::CurrentRupee>() == data.PlayerStatus.CurrentRupee);

    /* Set weapon capacity */
    auto& weapon_capacity = data.Pouch.Weapon.ValidNum[0];
    std::print("Weapon capacity: {}", weapon_capacity);
    weapon_capacity = 20;
    std::println(" -> {}", weapon_capacity);

    /* Enums */
    auto& power = data.PlayerStatus.CurrentSpecialPower;
    if (power == power.Amiibo) std::println("Selected player ability: Amiibo");
    else {
        power = power.Amiibo;
        std::println("Selected player ability set to Amiibo");

        require(save.get<GameData::PlayerStatus::CurrentSpecialPower>() == power.Amiibo);
    }

    /* String arrays
     * strings inside arrays need to be adapted explicitly
     * (because of nested adapters, WIP) */
    for (auto& name : data.OwnedHorseList.Name)
        adapt(name) = u"my horse"; // write directly into sav object's memory

    auto const& updated_names = save.get<GameData::OwnedHorseList::Name>(); // now all identical

    for (auto& name : updated_names)
        require(adapt(name) == u"my horse");

    std::println("All horses renamed to 'my horse'");

    save.dump("other/export.sav");

    std::println("Exported modified save to 'other/export.sav'");
    std::println("/* -- */");
    /* -- */
}