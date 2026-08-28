#pragma once
#include <sage>

struct GameData::BowStand::EquipInfo : Tag::Structure {
	struct Content;
};/* Tag::Structure GameData::BowStand::EquipInfo close */

#include "EquipInfo/Content.hpp"

template <> struct Data::Structure<GameData::BowStand::EquipInfo> : GameData::BowStand::EquipInfo {
	Structure<Content> Content;
	
	explicit Structure(Sav& s) : 
		Content { s }
	{ }
};/* Data::Structure GameData::BowStand::EquipInfo close */
