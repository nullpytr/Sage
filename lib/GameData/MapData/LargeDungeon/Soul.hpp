#pragma once
#include <sage>

struct GameData::MapData::LargeDungeon::Soul : Tag::Structure {
	struct IsGetMap : Tag::Member { using type = bool&; };
	struct IsOpen;
};/* Tag::Structure GameData::MapData::LargeDungeon::Soul close */

#include "Soul/IsOpen.hpp"

template <> struct Data::Structure<GameData::MapData::LargeDungeon::Soul> : GameData::MapData::LargeDungeon::Soul {
	Data::Member<IsGetMap> IsGetMap;
	Structure<IsOpen> IsOpen;
	
	explicit Structure(Sav& s) : 
		IsGetMap { s.get<struct IsGetMap>() },
		IsOpen { s }
	{ }
};/* Data::Structure GameData::MapData::LargeDungeon::Soul close */

template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Soul::IsGetMap> = murmurhash3::hash("MapData.LargeDungeon.Soul.IsGetMap");