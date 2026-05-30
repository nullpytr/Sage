#pragma once

#include "Core/Types.hpp"
#include "Core/Enum.hpp"

namespace GameData {
    struct DungeonState {
        Enum::View<Enum::DungeonState, 152> Dungeon;

        template <typename Sav>
        explicit DungeonState(Sav& s)
            : Dungeon { s, Promise::Dungeon }
        {};

        struct Promise {
            static constexpr auto Dungeon = \
                Enum::generate_enum_promises<typeof(DungeonState::Dungeon)>(
                        "DungeonState.Dungeon"
                );
        };

    };
}
