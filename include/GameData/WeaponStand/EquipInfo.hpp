#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::WeaponStand::EquipInfo : Tag::Structure {
	struct Content;
};/* Tag::Structure GameData::WeaponStand::EquipInfo close */

#include "EquipInfo/Content.hpp"

template <> struct Data::Structure<GameData::WeaponStand::EquipInfo> : GameData::WeaponStand::EquipInfo {
	Structure<Content> Content;
	
	explicit Structure(Sav& s) : 
		Content { s }
	{ }
};/* Data::Structure GameData::WeaponStand::EquipInfo close */
