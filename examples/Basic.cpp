#include <print>
#include "Core/Sav.hpp"
#include "GameData.hpp"

int main(int const argc, char const* argv[]) {
    std::println("/* progress.sav */");
    Sav progress_sav { "other/progress.sav" };

    auto const& data = progress_sav.get<GameData>();
    /* -- */
}
