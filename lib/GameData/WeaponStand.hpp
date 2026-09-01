#pragma once
#include <sage>

struct GameData::WeaponStand : Tag::Structure {
	struct EquipInfo;
};/* Tag::Structure GameData::WeaponStand close */

#include "WeaponStand/EquipInfo.hpp"

template <> struct Data::Structure<GameData::WeaponStand> : GameData::WeaponStand {
	Structure<EquipInfo> EquipInfo;
	
	explicit Structure(Sav& s) : 
		EquipInfo { s.get<struct EquipInfo>() }
	{ }
};/* Structure Data::Structure GameData::WeaponStand close */
