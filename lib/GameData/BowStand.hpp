#pragma once
#include <sage>

struct GameData::BowStand : Tag::Structure {
	struct EquipInfo;
};/* Tag::Structure GameData::BowStand close */

#include "BowStand/EquipInfo.hpp"

template <> struct Data::Structure<GameData::BowStand> : GameData::BowStand {
	Structure<EquipInfo> EquipInfo;
	
	explicit Structure(Sav& s) : 
		EquipInfo { s }
	{ }
};/* Data::Structure GameData::BowStand close */
