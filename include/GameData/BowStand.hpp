#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

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
