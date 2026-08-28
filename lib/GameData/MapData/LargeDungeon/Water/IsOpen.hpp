#pragma once
#include <sage>

struct GameData::MapData::LargeDungeon::Water::IsOpen : Tag::Structure {
	struct Group000 : Tag::Member { using type = bool&; };
	struct Group001 : Tag::Member { using type = bool&; };
};/* Tag::Structure GameData::MapData::LargeDungeon::Water::IsOpen close */

template <> struct Data::Structure<GameData::MapData::LargeDungeon::Water::IsOpen> : GameData::MapData::LargeDungeon::Water::IsOpen {
	Member<Group000> Group000;
	Member<Group001> Group001;
	
	explicit Structure(Sav& s) : 
		Group000 { s.get<struct Group000>() },
		Group001 { s.get<struct Group001>() }
	{ }
};/* Data::Structure GameData::MapData::LargeDungeon::Water::IsOpen close */

template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Water::IsOpen::Group000> = murmurhash3::hash("MapData.LargeDungeon.Water.IsOpen.Group000");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Water::IsOpen::Group001> = murmurhash3::hash("MapData.LargeDungeon.Water.IsOpen.Group001");