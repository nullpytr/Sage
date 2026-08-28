#pragma once
#include <sage>

struct GameData::MapData::LargeDungeon::Fire::IsOpen : Tag::Structure {
	struct Group000 : Tag::Member { using type = bool&; };
};/* Tag::Structure GameData::MapData::LargeDungeon::Fire::IsOpen close */

template <> struct Data::Structure<GameData::MapData::LargeDungeon::Fire::IsOpen> : GameData::MapData::LargeDungeon::Fire::IsOpen {
	Member<Group000> Group000;
	
	explicit Structure(Sav& s) : 
		Group000 { s.get<struct Group000>() }
	{ }
};/* Data::Structure GameData::MapData::LargeDungeon::Fire::IsOpen close */

template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Fire::IsOpen::Group000> = murmurhash3::hash("MapData.LargeDungeon.Fire.IsOpen.Group000");