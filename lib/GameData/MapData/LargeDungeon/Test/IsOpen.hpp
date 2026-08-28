#pragma once
#include <sage>

struct GameData::MapData::LargeDungeon::Test::IsOpen : Tag::Structure {
	struct Group000 : Tag::Member { using type = bool&; };
	struct Group001 : Tag::Member { using type = bool&; };
	struct Group002 : Tag::Member { using type = bool&; };
	struct Group009 : Tag::Member { using type = bool&; };
	struct Group010 : Tag::Member { using type = bool&; };
};/* Tag::Structure GameData::MapData::LargeDungeon::Test::IsOpen close */

template <> struct Data::Structure<GameData::MapData::LargeDungeon::Test::IsOpen> : GameData::MapData::LargeDungeon::Test::IsOpen {
	Member<Group000> Group000;
	Member<Group001> Group001;
	Member<Group002> Group002;
	Member<Group009> Group009;
	Member<Group010> Group010;
	
	explicit Structure(Sav& s) : 
		Group000 { s.get<struct Group000>() },
		Group001 { s.get<struct Group001>() },
		Group002 { s.get<struct Group002>() },
		Group009 { s.get<struct Group009>() },
		Group010 { s.get<struct Group010>() }
	{ }
};/* Data::Structure GameData::MapData::LargeDungeon::Test::IsOpen close */

template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Test::IsOpen::Group000> = murmurhash3::hash("MapData.LargeDungeon.Test.IsOpen.Group000");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Test::IsOpen::Group001> = murmurhash3::hash("MapData.LargeDungeon.Test.IsOpen.Group001");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Test::IsOpen::Group002> = murmurhash3::hash("MapData.LargeDungeon.Test.IsOpen.Group002");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Test::IsOpen::Group009> = murmurhash3::hash("MapData.LargeDungeon.Test.IsOpen.Group009");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Test::IsOpen::Group010> = murmurhash3::hash("MapData.LargeDungeon.Test.IsOpen.Group010");