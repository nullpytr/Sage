#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::MapData::LargeDungeon::Electric::IsOpen : Tag::Structure {
	struct Group000 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Group001 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Group002 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Group003 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Group004 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Group005 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Group006 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Group007 : Tag::Member { using type = bool&; using adapter = bool&; };
};/* Tag::Structure GameData::MapData::LargeDungeon::Electric::IsOpen close */

template <> struct Data::Structure<GameData::MapData::LargeDungeon::Electric::IsOpen> : GameData::MapData::LargeDungeon::Electric::IsOpen {
	Group000::type Group000;
	Group001::type Group001;
	Group002::type Group002;
	Group003::type Group003;
	Group004::type Group004;
	Group005::type Group005;
	Group006::type Group006;
	Group007::type Group007;
	
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

template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Electric::IsOpen::Group000> = murmurhash3::hash("MapData.LargeDungeon.Electric.IsOpen.Group000");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Electric::IsOpen::Group001> = murmurhash3::hash("MapData.LargeDungeon.Electric.IsOpen.Group001");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Electric::IsOpen::Group002> = murmurhash3::hash("MapData.LargeDungeon.Electric.IsOpen.Group002");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Electric::IsOpen::Group003> = murmurhash3::hash("MapData.LargeDungeon.Electric.IsOpen.Group003");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Electric::IsOpen::Group004> = murmurhash3::hash("MapData.LargeDungeon.Electric.IsOpen.Group004");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Electric::IsOpen::Group005> = murmurhash3::hash("MapData.LargeDungeon.Electric.IsOpen.Group005");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Electric::IsOpen::Group006> = murmurhash3::hash("MapData.LargeDungeon.Electric.IsOpen.Group006");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Electric::IsOpen::Group007> = murmurhash3::hash("MapData.LargeDungeon.Electric.IsOpen.Group007");