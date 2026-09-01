#pragma once
#include <sage>

struct GameData::WeaponStand::EquipInfo : Tag::Structure {
	struct Content;
};/* Tag::Structure GameData::WeaponStand::EquipInfo close */

#include "EquipInfo/Content.hpp"

template <> struct Data::Structure<GameData::WeaponStand::EquipInfo> : GameData::WeaponStand::EquipInfo {
	Structure<Content> Content;
	
	explicit Structure(Sav& s) : 
		Content { s.get<struct Content>() }
	{ }
};/* Structure Data::Structure GameData::WeaponStand::EquipInfo close */
