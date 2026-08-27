#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::MapData::LargeDungeon::Wind : Tag::Structure {
	struct IsGetMap : Tag::Member { using type = bool&; };
	struct IsOpen;
};/* Tag::Structure GameData::MapData::LargeDungeon::Wind close */

#include "Wind/IsOpen.hpp"

template <> struct Data::Structure<GameData::MapData::LargeDungeon::Wind> : GameData::MapData::LargeDungeon::Wind {
	Data::Member<IsGetMap> IsGetMap;
	Structure<IsOpen> IsOpen;
	
	explicit Structure(Sav& s) : 
		IsGetMap { s.get<struct IsGetMap>() },
		IsOpen { s }
	{ }
};/* Data::Structure GameData::MapData::LargeDungeon::Wind close */

template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Wind::IsGetMap> = murmurhash3::hash("MapData.LargeDungeon.Wind.IsGetMap");