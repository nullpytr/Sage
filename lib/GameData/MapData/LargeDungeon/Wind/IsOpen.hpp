#pragma once
#include <sage>

struct GameData::MapData::LargeDungeon::Wind::IsOpen : Tag::Structure {
	struct Group002 : Tag::Member { using type = bool&; };
	struct Group003 : Tag::Member { using type = bool&; };
	struct Group004 : Tag::Member { using type = bool&; };
	struct Group005 : Tag::Member { using type = bool&; };
	struct Group006 : Tag::Member { using type = bool&; };
	struct Group007 : Tag::Member { using type = bool&; };
	struct Group008 : Tag::Member { using type = bool&; };
	struct Group009 : Tag::Member { using type = bool&; };
};/* Tag::Structure GameData::MapData::LargeDungeon::Wind::IsOpen close */

template <> struct Data::Structure<GameData::MapData::LargeDungeon::Wind::IsOpen> : GameData::MapData::LargeDungeon::Wind::IsOpen {
	Data::Member<Group002> Group002;
	Data::Member<Group003> Group003;
	Data::Member<Group004> Group004;
	Data::Member<Group005> Group005;
	Data::Member<Group006> Group006;
	Data::Member<Group007> Group007;
	Data::Member<Group008> Group008;
	Data::Member<Group009> Group009;
	
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
};/* Data::Structure GameData::MapData::LargeDungeon::Wind::IsOpen close */

template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Wind::IsOpen::Group002> = murmurhash3::hash("MapData.LargeDungeon.Wind.IsOpen.Group002");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Wind::IsOpen::Group003> = murmurhash3::hash("MapData.LargeDungeon.Wind.IsOpen.Group003");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Wind::IsOpen::Group004> = murmurhash3::hash("MapData.LargeDungeon.Wind.IsOpen.Group004");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Wind::IsOpen::Group005> = murmurhash3::hash("MapData.LargeDungeon.Wind.IsOpen.Group005");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Wind::IsOpen::Group006> = murmurhash3::hash("MapData.LargeDungeon.Wind.IsOpen.Group006");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Wind::IsOpen::Group007> = murmurhash3::hash("MapData.LargeDungeon.Wind.IsOpen.Group007");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Wind::IsOpen::Group008> = murmurhash3::hash("MapData.LargeDungeon.Wind.IsOpen.Group008");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Wind::IsOpen::Group009> = murmurhash3::hash("MapData.LargeDungeon.Wind.IsOpen.Group009");