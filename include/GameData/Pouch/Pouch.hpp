#pragma once

#include "Core/Types.hpp"
#include "Core/Promise.hpp"
#include "Core/MurmurHash3.hpp"

#include "GameData/Pouch/Material/Material.hpp"
#include "GameData/Pouch/KeyItem/KeyItem.hpp"
#include "GameData/Pouch/Bow/Bow.hpp"
#include "GameData/Pouch/Shield/Shield.hpp"
#include "GameData/Pouch/Armor/Armor.hpp"
#include "GameData/Pouch/Food/Food.hpp"
#include "GameData/Pouch/Arrow/Arrow.hpp"
#include "GameData/Pouch/SpecialParts/SpecialParts.hpp"
#include "GameData/Pouch/SpecialPower/SpecialPower.hpp"
#include "Weapon/Weapon.hpp"

namespace GameData::Pouch {
    struct Pouch {
        Material::Data Material;
        KeyItem::Data KeyItem;
        Bow::Data Bow;
        Shield::Data Shield;
        Armor::Data Armor;
        Food::Data Food;
        Arrow::Data Arrow;
        SpecialParts::Data SpecialParts;
        SpecialPower::Data SpecialPower;
        Weapon::Data Weapon;

        template <typename Sav>
        explicit Pouch(Sav& s)
            : Material     { s },
              KeyItem      { s },
              Bow          { s },
              Shield       { s },
              Armor        { s },
              Food         { s },
              Arrow        { s },
              SpecialParts { s },
              SpecialPower { s },
              Weapon       { s }
        {}

        struct Promise {};
    };

    using Data = Pouch;
};