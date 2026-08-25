#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::ShieldStand::EquipInfo : Tag::Structure {
	struct Content;
};/* Tag::Structure GameData::ShieldStand::EquipInfo close */

#include "EquipInfo/Content.hpp"

template <> struct Data::Structure<GameData::ShieldStand::EquipInfo> : GameData::ShieldStand::EquipInfo {
	Structure<Content> Content;
	
	explicit Structure(Sav& s) : 
		Content { s }
	{ }
};/* Data::Structure GameData::ShieldStand::EquipInfo close */
