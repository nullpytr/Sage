#pragma once
#include <sage>

struct GameData::MapData::LargeDungeon::Fire : Tag::Structure {
	struct IsGetMap : Tag::Member { using type = bool&; };
	struct IsOpen;
};/* Tag::Structure GameData::MapData::LargeDungeon::Fire close */

#include "Fire/IsOpen.hpp"

template <> struct Data::Structure<GameData::MapData::LargeDungeon::Fire> : GameData::MapData::LargeDungeon::Fire {
	Member<IsGetMap> IsGetMap;
	Structure<IsOpen> IsOpen;
	
	explicit Structure(Sav& s) : 
		IsGetMap { s.get<struct IsGetMap>() },
		IsOpen { s }
	{ }
};/* Data::Structure GameData::MapData::LargeDungeon::Fire close */

template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Fire::IsGetMap> { "MapData.LargeDungeon.Fire.IsGetMap" };