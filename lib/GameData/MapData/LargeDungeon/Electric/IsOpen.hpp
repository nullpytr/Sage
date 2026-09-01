#pragma once
#include <sage>

struct GameData::MapData::LargeDungeon::Electric::IsOpen : Tag::Map {
	struct Group000 : Tag::Member { using type = bool&; };
	struct Group001 : Tag::Member { using type = bool&; };
	struct Group002 : Tag::Member { using type = bool&; };
	struct Group003 : Tag::Member { using type = bool&; };
	struct Group004 : Tag::Member { using type = bool&; };
	struct Group005 : Tag::Member { using type = bool&; };
	struct Group006 : Tag::Member { using type = bool&; };
	struct Group007 : Tag::Member { using type = bool&; };
	using type = std::decay_t<Group000::type>;
};/* Tag::Structure GameData::MapData::LargeDungeon::Electric::IsOpen close */

template <> struct Data::Structure<GameData::MapData::LargeDungeon::Electric::IsOpen> : GameData::MapData::LargeDungeon::Electric::IsOpen {
	Member<Group000> Group000;
	Member<Group001> Group001;
	Member<Group002> Group002;
	Member<Group003> Group003;
	Member<Group004> Group004;
	Member<Group005> Group005;
	Member<Group006> Group006;
	Member<Group007> Group007;
	
	explicit Structure(Sav& s) : 
		Group000 { s.get<struct Group000>() },
		Group001 { s.get<struct Group001>() },
		Group002 { s.get<struct Group002>() },
		Group003 { s.get<struct Group003>() },
		Group004 { s.get<struct Group004>() },
		Group005 { s.get<struct Group005>() },
		Group006 { s.get<struct Group006>() },
		Group007 { s.get<struct Group007>() }
	{ }
};/* Data::Structure GameData::MapData::LargeDungeon::Electric::IsOpen close */

template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Electric::IsOpen::Group000> { "MapData.LargeDungeon.Electric.IsOpen.Group000" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Electric::IsOpen::Group001> { "MapData.LargeDungeon.Electric.IsOpen.Group001" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Electric::IsOpen::Group002> { "MapData.LargeDungeon.Electric.IsOpen.Group002" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Electric::IsOpen::Group003> { "MapData.LargeDungeon.Electric.IsOpen.Group003" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Electric::IsOpen::Group004> { "MapData.LargeDungeon.Electric.IsOpen.Group004" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Electric::IsOpen::Group005> { "MapData.LargeDungeon.Electric.IsOpen.Group005" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Electric::IsOpen::Group006> { "MapData.LargeDungeon.Electric.IsOpen.Group006" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Electric::IsOpen::Group007> { "MapData.LargeDungeon.Electric.IsOpen.Group007" };