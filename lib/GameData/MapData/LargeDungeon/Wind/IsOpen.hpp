#pragma once
#include <sage>

struct GameData::MapData::LargeDungeon::Wind::IsOpen : Tag::Map {
	struct Group002 : Tag::Member { using type = bool&; };
	struct Group003 : Tag::Member { using type = bool&; };
	struct Group004 : Tag::Member { using type = bool&; };
	struct Group005 : Tag::Member { using type = bool&; };
	struct Group006 : Tag::Member { using type = bool&; };
	struct Group007 : Tag::Member { using type = bool&; };
	struct Group008 : Tag::Member { using type = bool&; };
	struct Group009 : Tag::Member { using type = bool&; };
	using type = std::decay_t<Group002::type>;
};/* Tag::Map GameData::MapData::LargeDungeon::Wind::IsOpen close */

template <> struct Data::Structure<GameData::MapData::LargeDungeon::Wind::IsOpen> : GameData::MapData::LargeDungeon::Wind::IsOpen {
	Member<Group002> Group002;
	Member<Group003> Group003;
	Member<Group004> Group004;
	Member<Group005> Group005;
	Member<Group006> Group006;
	Member<Group007> Group007;
	Member<Group008> Group008;
	Member<Group009> Group009;
	
	explicit Structure(Sav& s) : 
		Group002 { s.get<struct Group002>() },
		Group003 { s.get<struct Group003>() },
		Group004 { s.get<struct Group004>() },
		Group005 { s.get<struct Group005>() },
		Group006 { s.get<struct Group006>() },
		Group007 { s.get<struct Group007>() },
		Group008 { s.get<struct Group008>() },
		Group009 { s.get<struct Group009>() }
	{ }
};/* Map Data::Structure GameData::MapData::LargeDungeon::Wind::IsOpen close */

template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Wind::IsOpen::Group002> { "MapData.LargeDungeon.Wind.IsOpen.Group002" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Wind::IsOpen::Group003> { "MapData.LargeDungeon.Wind.IsOpen.Group003" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Wind::IsOpen::Group004> { "MapData.LargeDungeon.Wind.IsOpen.Group004" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Wind::IsOpen::Group005> { "MapData.LargeDungeon.Wind.IsOpen.Group005" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Wind::IsOpen::Group006> { "MapData.LargeDungeon.Wind.IsOpen.Group006" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Wind::IsOpen::Group007> { "MapData.LargeDungeon.Wind.IsOpen.Group007" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Wind::IsOpen::Group008> { "MapData.LargeDungeon.Wind.IsOpen.Group008" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Wind::IsOpen::Group009> { "MapData.LargeDungeon.Wind.IsOpen.Group009" };