#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::MapData::LargeDungeon::Soul::IsOpen : Tag::Structure {
	struct dummy : Tag::Member { using type = bool&; };
};/* Tag::Structure GameData::MapData::LargeDungeon::Soul::IsOpen close */

template <> struct Data::Structure<GameData::MapData::LargeDungeon::Soul::IsOpen> : GameData::MapData::LargeDungeon::Soul::IsOpen {
	Data::Member<dummy> dummy;
	
	explicit Structure(Sav& s) : 
		dummy { s.get<struct dummy>() }
	{ }
};/* Data::Structure GameData::MapData::LargeDungeon::Soul::IsOpen close */

template <> hash_t constexpr Data::Hashtable<GameData::MapData::LargeDungeon::Soul::IsOpen::dummy> = murmurhash3::hash("MapData.LargeDungeon.Soul.IsOpen.dummy");