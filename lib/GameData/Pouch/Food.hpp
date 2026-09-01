#pragma once
#include <sage>

struct GameData::Pouch::Food : Tag::Structure {
	struct IsValid : Tag::Member { using type = span<bool>*; };
	struct Content;
};/* Tag::Structure GameData::Pouch::Food close */

#include "Food/Content.hpp"

template <> struct Data::Structure<GameData::Pouch::Food> : GameData::Pouch::Food {
	Member<IsValid> IsValid;
	Structure<Content> Content;
	
	explicit Structure(Sav& s) : 
		IsValid { s.get<struct IsValid>() },
		Content { s.get<struct Content>() }
	{ }
};/* Structure Data::Structure GameData::Pouch::Food close */

template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Food::IsValid> { "Pouch.Food.IsValid" };