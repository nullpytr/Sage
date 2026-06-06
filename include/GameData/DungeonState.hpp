#pragma once

#include "Core/Types.hpp"
#include "Core/Enum.hpp"

namespace Enum {
    struct DungeonState {
        struct Dungeon {
            enum Value : u32 {
                Hidden = murmurhash3::hash("Hidden"),
                Appear = murmurhash3::hash("Appear"),
                Open = murmurhash3::hash("Open"),
                Enter = murmurhash3::hash("Enter"),
                Clear = murmurhash3::hash("Clear")
            };
        };
    };
}

namespace GameData {
    struct DungeonState {
        Enum::View<Enum::DungeonState::Dungeon, 152> Dungeon;

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
