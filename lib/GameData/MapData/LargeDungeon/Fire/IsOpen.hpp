#pragma once
#include <sage>

struct GameData::MapData::LargeDungeon::Fire::IsOpen : Tag::Map {
	struct Group000 : Tag::Member { using type = bool&; };
	using type = std::decay_t<Group000::type>;
};/* Tag::Structure GameData::MapData::LargeDungeon::Fire::IsOpen close */

template <> struct Data::Map<GameData::MapData::LargeDungeon::Fire::IsOpen> : GameData::MapData::LargeDungeon::Fire::IsOpen {
	Member<Group000> Group000;
	
	explicit Map(Sav& s) : 
		Group000 { s.get<struct Group000>() }
	{ }
};/* Data::Map GameData::MapData::LargeDungeon::Fire::IsOpen close */

template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Fire::IsOpen::Group000> { "MapData.LargeDungeon.Fire.IsOpen.Group000" };