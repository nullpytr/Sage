#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

#include "GameData/Pouch/Material/Material.hpp"
#include "GameData/Pouch/KeyItem/KeyItem.hpp"
#include "GameData/Pouch/Bow.hpp"
#include "GameData/Pouch/Shield.hpp"
#include "Weapon/Weapon.hpp"

namespace GameData::Pouch {
    struct Pouch {
        Material::Data Material;
        KeyItem::Data KeyItem;
        Bow Bow;
        Shield Shield;
        Weapon::Data Weapon;

        template <typename Sav>
        explicit Pouch(Sav& s)
            : Material { s },
              KeyItem  { s },
              Bow      { s },
              Shield   { s },
              Weapon   { s }
        {}

        struct Promise {};
    };

    using Data = Pouch;
};