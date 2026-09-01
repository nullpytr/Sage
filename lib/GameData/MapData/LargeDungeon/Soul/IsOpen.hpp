#pragma once
#include <sage>

struct GameData::MapData::LargeDungeon::Soul::IsOpen : Tag::Structure {
	struct dummy : Tag::Member { using type = bool&; };
};/* Tag::Structure GameData::MapData::LargeDungeon::Soul::IsOpen close */

template <> struct Data::Structure<GameData::MapData::LargeDungeon::Soul::IsOpen> : GameData::MapData::LargeDungeon::Soul::IsOpen {
	Member<dummy> dummy;
	
	explicit Structure(Sav& s) : 
		dummy { s.get<struct dummy>() }
	{ }
};/* Structure Data::Structure GameData::MapData::LargeDungeon::Soul::IsOpen close */

template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Soul::IsOpen::dummy> { "MapData.LargeDungeon.Soul.IsOpen.dummy" };