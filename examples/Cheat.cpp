#include <print>
#include <sage>

#define LIMIT_MAX_LIFE      160
#define LIMIT_MAX_STAMINA   3000
#define LIMIT_MAX_ENERGY    48000

static void require(bool const condition) { if (!condition) std::exit(1); }

int main(int const argc, char const* argv[]) {
    Sav save { "other/progress.sav" }; /* progress.sav */

    auto status { GameData::PlayerStatus from save }; // get subsystem overlay

    constexpr auto limit_rupee = std::numeric_limits<std::decay_t<decltype(status.CurrentRupee)>>::max(); // limits
    constexpr auto limit_mamo = std::numeric_limits<std::decay_t<decltype(status.CurrentMamo)>>::max();

    status.MaxLife = LIMIT_MAX_LIFE; // set
    status.MaxStamina = LIMIT_MAX_STAMINA;
    status.MaxEnergy = LIMIT_MAX_ENERGY;
    status.CurrentRupee = limit_rupee;
    status.CurrentMamo = limit_mamo;


    require(save as GameData::PlayerStatus::MaxLife == LIMIT_MAX_LIFE); // verify
    require(save as GameData::PlayerStatus::MaxStamina == LIMIT_MAX_STAMINA);
    require(save as GameData::PlayerStatus::MaxEnergy == LIMIT_MAX_ENERGY);
    require(save as GameData::PlayerStatus::CurrentRupee == limit_rupee);
    require(save as GameData::PlayerStatus::CurrentMamo == limit_mamo);

    save.dump("other/cheat.sav");

    std::println("[export] modified save written to 'other/cheat.sav'");
    std::println("/* -- */");
    /* -- */
}