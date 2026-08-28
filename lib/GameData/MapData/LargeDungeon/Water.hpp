#pragma once
#include <sage>

struct GameData::MapData::LargeDungeon::Water : Tag::Structure {
	struct IsGetMap : Tag::Member { using type = bool&; };
	struct IsOpen;
};/* Tag::Structure GameData::MapData::LargeDungeon::Water close */

#include "Water/IsOpen.hpp"

template <> struct Data::Structure<GameData::MapData::LargeDungeon::Water> : GameData::MapData::LargeDungeon::Water {
	Member<IsGetMap> IsGetMap;
	Structure<IsOpen> IsOpen;
	
	explicit Structure(Sav& s) : 
		IsGetMap { s.get<struct IsGetMap>() },
		IsOpen { s }
	{ }
};/* Data::Structure GameData::MapData::LargeDungeon::Water close */

template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Water::IsGetMap> = murmurhash3::hash("MapData.LargeDungeon.Water.IsGetMap");