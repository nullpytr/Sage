#pragma once
#include <sage>

struct GameData::ShieldStand : Tag::Structure {
	struct EquipInfo;
};/* Tag::Structure GameData::ShieldStand close */

#include "ShieldStand/EquipInfo.hpp"

template <> struct Data::Structure<GameData::ShieldStand> : GameData::ShieldStand {
	Structure<EquipInfo> EquipInfo;
	
	explicit Structure(Sav& s) : 
		EquipInfo { s.get<struct EquipInfo>() }
	{ }
};/* Structure Data::Structure GameData::ShieldStand close */
