#pragma once
#include <sage>

struct GameData::MapData::LargeDungeon::Water::IsOpen : Tag::Map {
	struct Group000 : Tag::Member { using type = bool&; };
	struct Group001 : Tag::Member { using type = bool&; };
	using type = std::decay_t<Group000::type>;
};/* Tag::Map GameData::MapData::LargeDungeon::Water::IsOpen close */

template <> struct Data::Structure<GameData::MapData::LargeDungeon::Water::IsOpen> : GameData::MapData::LargeDungeon::Water::IsOpen {
	Member<Group000> Group000;
	Member<Group001> Group001;
	
	explicit Structure(Sav& s) : 
		Group000 { s.get<struct Group000>() },
		Group001 { s.get<struct Group001>() }
	{ }
};/* Map Data::Structure GameData::MapData::LargeDungeon::Water::IsOpen close */

template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Water::IsOpen::Group000> { "MapData.LargeDungeon.Water.IsOpen.Group000" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Water::IsOpen::Group001> { "MapData.LargeDungeon.Water.IsOpen.Group001" };