#pragma once
#include <sage>

struct GameData::Pouch : Tag::Structure {
	struct Armor;
	struct Arrow;
	struct Bow;
	struct Food;
	struct KeyItem;
	struct Material;
	struct Shield;
	struct SpecialParts;
	struct SpecialPower;
	struct Weapon;
};/* Tag::Structure GameData::Pouch close */

#include "Pouch/Armor.hpp"
#include "Pouch/Arrow.hpp"
#include "Pouch/Bow.hpp"
#include "Pouch/Food.hpp"
#include "Pouch/KeyItem.hpp"
#include "Pouch/Material.hpp"
#include "Pouch/Shield.hpp"
#include "Pouch/SpecialParts.hpp"
#include "Pouch/SpecialPower.hpp"
#include "Pouch/Weapon.hpp"

template <> struct Data::Structure<GameData::Pouch> : GameData::Pouch {
	Structure<Armor> Armor;
	Structure<Arrow> Arrow;
	Structure<Bow> Bow;
	Structure<Food> Food;
	Structure<KeyItem> KeyItem;
	Structure<Material> Material;
	Structure<Shield> Shield;
	Structure<SpecialParts> SpecialParts;
	Structure<SpecialPower> SpecialPower;
	Structure<Weapon> Weapon;
	
	explicit Structure(Sav& s) : 
		Armor { s.get<struct Armor>() },
		Arrow { s.get<struct Arrow>() },
		Bow { s.get<struct Bow>() },
		Food { s.get<struct Food>() },
		KeyItem { s.get<struct KeyItem>() },
		Material { s.get<struct Material>() },
		Shield { s.get<struct Shield>() },
		SpecialParts { s.get<struct SpecialParts>() },
		SpecialPower { s.get<struct SpecialPower>() },
		Weapon { s.get<struct Weapon>() }
	{ }
};/* Structure Data::Structure GameData::Pouch close */
