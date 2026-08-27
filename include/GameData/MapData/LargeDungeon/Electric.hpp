#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::MapData::LargeDungeon::Electric : Tag::Structure {
	struct IsGetMap : Tag::Member { using type = bool&; };
	struct IsOpen;
};/* Tag::Structure GameData::MapData::LargeDungeon::Electric close */

#include "Electric/IsOpen.hpp"

template <> struct Data::Structure<GameData::MapData::LargeDungeon::Electric> : GameData::MapData::LargeDungeon::Electric {
	Data::Member<IsGetMap> IsGetMap;
	Structure<IsOpen> IsOpen;
	
	explicit Structure(Sav& s) : 
		IsGetMap { s.get<struct IsGetMap>() },
		IsOpen { s }
	{ }
};/* Data::Structure GameData::MapData::LargeDungeon::Electric close */

template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Electric::IsGetMap> = murmurhash3::hash("MapData.LargeDungeon.Electric.IsGetMap");