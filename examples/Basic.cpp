#include <print>
#include <sage>

int main(int const argc, char const* argv[]) {
    std::println("/* progress.sav */");
    Sav progress_sav { "other/progress.sav" };

    // Pathway A -- Parse entire save in one go and use model instances (aka views)
    auto const& data_a = progress_sav.get<GameData>();
    auto const& body_a = data_a.OwnedHorseList.Body;
    auto const& names_a = data_a.OwnedHorseList.Name;
    auto const& enum_a = data_a.OwnedHorseList.Body.Pattern;

    // Pathway B -- Parse and use only what you want using model types
    auto const& body_b = progress_sav.get<GameData::OwnedHorseList::Body>();
    auto const& names_b = progress_sav.get<GameData::OwnedHorseList::Name>();
    auto const& enum_b = progress_sav.get<GameData::OwnedHorseList::Body::Pattern>();
    /* -- */
}
