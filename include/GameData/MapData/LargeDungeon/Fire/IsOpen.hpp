#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::MapData::LargeDungeon::Fire::IsOpen : Tag::Structure {
	struct Group000 : Tag::Member { using type = bool&; using adapter = bool&; };
};/* Tag::Structure GameData::MapData::LargeDungeon::Fire::IsOpen close */

template <> struct Data::Structure<GameData::MapData::LargeDungeon::Fire::IsOpen> : GameData::MapData::LargeDungeon::Fire::IsOpen {
	Group000::type Group000;
	
	explicit Structure(Sav& s) : 
		Group000 { s.get<struct Group000>() }
	{ }
};/* Data::Structure GameData::MapData::LargeDungeon::Fire::IsOpen close */

template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Fire::IsOpen::Group000> = murmurhash3::hash("MapData.LargeDungeon.Fire.IsOpen.Group000");