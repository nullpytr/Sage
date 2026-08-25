#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::MapData::LargeDungeon::Fire : Tag::Structure {
	struct IsGetMap : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsOpen;
};/* Tag::Structure GameData::MapData::LargeDungeon::Fire close */

#include "Fire/IsOpen.hpp"

template <> struct Data::Structure<GameData::MapData::LargeDungeon::Fire> : GameData::MapData::LargeDungeon::Fire {
	IsGetMap::type IsGetMap;
	Structure<IsOpen> IsOpen;
	
	explicit Structure(Sav& s) : 
		IsGetMap { s.get<struct IsGetMap>() },
		IsOpen { s }
	{ }
};/* Data::Structure GameData::MapData::LargeDungeon::Fire close */

template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Fire::IsGetMap> = murmurhash3::hash("MapData.LargeDungeon.Fire.IsGetMap");