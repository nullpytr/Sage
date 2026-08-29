#pragma once
#include <sage>

struct GameData::MapData::LargeDungeon::Test : Tag::Structure {
	struct IsGetMap : Tag::Member { using type = bool&; };
	struct IsOpen;
};/* Tag::Structure GameData::MapData::LargeDungeon::Test close */

#include "Test/IsOpen.hpp"

template <> struct Data::Structure<GameData::MapData::LargeDungeon::Test> : GameData::MapData::LargeDungeon::Test {
	Member<IsGetMap> IsGetMap;
	Structure<IsOpen> IsOpen;
	
	explicit Structure(Sav& s) : 
		IsGetMap { s.get<struct IsGetMap>() },
		IsOpen { s }
	{ }
};/* Data::Structure GameData::MapData::LargeDungeon::Test close */

template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Test::IsGetMap> { "MapData.LargeDungeon.Test.IsGetMap" };