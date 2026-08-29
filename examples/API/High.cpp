#include <print>
#include <sage>

int main(int const argc, char const* argv[]) {
    Sav save { "other/progress.sav" };

    { // Pathway A: Parse entire save in one go and use overlay instances
        auto const& data = save.get<GameData>();
        auto const& playtime = data.Playtime;
        auto const& status = data.PlayerStatus.MaxLife;
        auto const& stamina = data.PlayerStatus.MaxStamina;
    }

    { // Pathway B: Parse and use only what you want using overlay types
        auto const& playtime = save.get<GameData::Playtime>(); // member field
        auto const& status = save.get<GameData::PlayerStatus>(); // subsystem

        // subsystem overlay fully loaded in, access anything
        auto const& life = status.MaxLife;
        auto const& stamina = status.MaxStamina;

        // or skip the subsytem entirely
        auto const& life_ = save.get<GameData::PlayerStatus::MaxLife>();
        auto const & stamina_ = save.get<GameData::PlayerStatus::MaxStamina>();
    }
}
