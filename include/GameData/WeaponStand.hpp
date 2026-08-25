#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::WeaponStand : Tag::Structure {
	struct EquipInfo;
};/* Tag::Structure GameData::WeaponStand close */

#include "WeaponStand/EquipInfo.hpp"

template <> struct Data::Structure<GameData::WeaponStand> : GameData::WeaponStand {
	Structure<EquipInfo> EquipInfo;
	
	explicit Structure(Sav& s) : 
		EquipInfo { s }
	{ }
};/* Data::Structure GameData::WeaponStand close */
