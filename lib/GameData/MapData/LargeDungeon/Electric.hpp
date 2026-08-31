#pragma once
#include <sage>

struct GameData::MapData::LargeDungeon::Electric : Tag::Structure {
	struct IsGetMap : Tag::Member { using type = bool&; };
	struct IsOpen;
};/* Tag::Structure GameData::MapData::LargeDungeon::Electric close */

#include "Electric/IsOpen.hpp"

template <> struct Data::Structure<GameData::MapData::LargeDungeon::Electric> : GameData::MapData::LargeDungeon::Electric {
	Member<IsGetMap> IsGetMap;
	Map<IsOpen> IsOpen;
	
	explicit Structure(Sav& s) : 
		IsGetMap { s.get<struct IsGetMap>() },
		IsOpen { s }
	{ }
};/* Data::Structure GameData::MapData::LargeDungeon::Electric close */

template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Electric::IsGetMap> { "MapData.LargeDungeon.Electric.IsGetMap" };