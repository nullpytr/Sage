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

    // Sage v0.5.2 adds keyword access using macros
    { // Pathway A: Parse entire save in one go and use overlay instances
        auto const& data { GameData from save };
        auto const& data { save as GameData }; // equivalent

        auto const& playtime = data.Playtime;
        auto const& status = data.PlayerStatus.MaxLife;
        auto const& stamina = data.PlayerStatus.MaxStamina;
    }

    { // Pathway B: Parse and use only what you want using overlay types
        auto const& playtime{ GameData::Playtime from save }; // OR: { save as GameData::Playtime }
        auto const& status { GameData::PlayerStatus from save }; // OR: { save as GameData::PlayerStatus }

        // subsystem overlay fully loaded in, access anything
        auto const& life = status.MaxLife;
        auto const& stamina = status.MaxStamina;

        // or skip the subsytem entirely
        auto const& life_ { GameData::PlayerStatus::MaxLife from save }; // OR: { save as GameData::PlayerStatus::MaxLife }
        auto const & stamina_ { GameData::PlayerStatus::MaxStamina from save }; // OR: { save as GameData::PlayerStatus::MaxStamina }
    }
}
