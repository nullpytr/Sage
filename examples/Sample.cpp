#include <print>
#include <algorithm>
#include "Core/Sav.hpp"
#include "GameData.hpp"

static void require(bool const condition) { if (!condition) std::exit(1); }

static bool is_player_stats_max(Data::Structure<GameData::PlayerStatus> const& status)
{
    return status.MaxLife == 160
        && status.MaxStamina == 3000
        && status.MaxEnergy == 48000;
}

static bool is_ability_amiibo(Data::Enum<GameData::PlayerStatus::CurrentSpecialPower> const& ability)
{
    return ability == ability.Amiibo;
}

static auto is_player_in_mainfield = [](Data::Member<GameData::Sequence_CurrentBanc> const& banc) { return banc == "MainField"; };

int main(int const argc, char const* argv[]) {
    /* progress.sav */
    std::println("/* progress.sav */");
    Sav save { "other/progress.sav" };

    auto data = save.get<GameData>();

    std::println("[playtime] {} seconds", data.Playtime); // read any value from struct
    std::print("[pony points] {}", data.HorseInnMemberPoint);
    data.HorseInnMemberPoint = 69; // write directly to any ref in struct
    std::println(" -> {}", data.HorseInnMemberPoint);

    std::println(
        "[status] player {} maxed out stats",
        is_player_stats_max(data.PlayerStatus) ? "has" : "does not have"
    );

    require(data.HorseInnMemberPoint == 69);
    require(save.get<GameData::HorseInnMemberPoint>() == data.HorseInnMemberPoint);

    /* Top-level strings */

    std::println(
        "[banc] player {} in region MainField",
        is_player_in_mainfield(data.Sequence_CurrentBanc) ? "is" : "is not"
    );

    data.Sequence_CurrentBanc = "TestField"; // directly writes to sav object's memory
    std::print("[banc] region set to {}", data.Sequence_CurrentBanc);

    require(data.Sequence_CurrentBanc == "TestField");
    require(save.get<GameData::Sequence_CurrentBanc>() == data.Sequence_CurrentBanc);

    string_view current_banc_sv = save.get<GameData::Sequence_CurrentBanc>(); // get immutable sv
    std::println(" ({})", current_banc_sv);

    require(current_banc_sv == "TestField");
    require(data.Sequence_CurrentBanc == current_banc_sv);
    require(save.get<GameData::Sequence_CurrentBanc>() == current_banc_sv);

    /* Query location */
    auto [x, y, z] = data.PlayerStatus.SavePos; // get copies
    std::println("[location] {}, {}, {}", x, y, z);

    /* Set heart container count */
    auto& hearts = data.PlayerStatus.MaxLife; // get as reference

    std::print("[hearts] {}", hearts / 4);
    hearts = 40 * 4; // directly writes to sav object's memory
    std::println(" -> {}", data.PlayerStatus.MaxLife / 4);

    require(data.PlayerStatus.MaxLife == 40 * 4);
    require(save.get<GameData::PlayerStatus::MaxLife>() == data.PlayerStatus.MaxLife);

    /* Set rupee amount */
    auto& rupees = data.PlayerStatus.CurrentRupee; // another reference
    std::print("[rupees] {}", rupees);
    rupees = 99'999;
    std::println(" -> {}", data.PlayerStatus.CurrentRupee);

    require(data.PlayerStatus.CurrentRupee == 99'999);
    require(save.get<GameData::PlayerStatus::CurrentRupee>() == data.PlayerStatus.CurrentRupee);

    /* Set weapon capacity */
    auto& weapon_capacity = data.Pouch.Weapon.ValidNum[0];
    std::print("[weapon/capacity] {}", weapon_capacity);
    weapon_capacity = 20;
    std::println(" -> {}", weapon_capacity);

    /* Enums */
    auto& power = data.PlayerStatus.CurrentSpecialPower;
    if (is_ability_amiibo(power)) std::println("[ability] player is currently using ability Amiibo");
    else {
        power = power.Amiibo;
        std::println("[ability] player ability set to Amiibo");

        require(save.get<GameData::PlayerStatus::CurrentSpecialPower>() == power.Amiibo);
    }

    /* Enum arrays */
    auto& saddle_array = data.OwnedHorseList.Saddle;
    auto first_saddle = saddle_array[0];
    std::println(
        "[horses] First horse {} wearing saddle GameRomHorseSaddle_00",
        first_saddle == first_saddle.GameRomHorseSaddle_00 ? "is" : "is not"
   );

    // Find which horse is wearing a specific saddle
    auto const itr = std::ranges::find_if(
        saddle_array,
        [](auto s) { return s == s.GameRomHorseSaddle_00; }
    );
    auto const pos = itr - saddle_array.begin();

    if (pos < saddle_array.size()) std::println("[horses/saddle] GameRomHorseSaddle_00 found at position {} of array", pos);
    else std::println("[horses/saddle] GameRomHorseSaddle_00 not found in array");

    /* String arrays
     * strings inside arrays need to be adapted explicitly
     * (because of nested adapters, WIP) */
    for (auto name : data.OwnedHorseList.Name)
        name = u"my horse"; // write directly into sav object's memory

    auto const& updated_names = save.get<GameData::OwnedHorseList::Name>(); // now all identical

    for (auto name : updated_names)
        require(name == u"my horse");

    std::println("[horses/names] all horses renamed to 'my horse'");

    save.dump("other/export.sav");

    std::println("[export] modified save written to 'other/export.sav'");
    std::println("/* -- */");
    /* -- */
}