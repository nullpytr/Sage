#pragma once
#include <sage>

struct GameData::Pouch::KeyItem : Tag::Structure {
	struct IsValid : Tag::Member { using type = span<bool>*; };
	struct Content;
};/* Tag::Structure GameData::Pouch::KeyItem close */

#include "KeyItem/Content.hpp"

template <> struct Data::Structure<GameData::Pouch::KeyItem> : GameData::Pouch::KeyItem {
	Member<IsValid> IsValid;
	Structure<Content> Content;
	
	explicit Structure(Sav& s) : 
		IsValid { s.get<struct IsValid>() },
		Content { s }
	{ }
};/* Data::Structure GameData::Pouch::KeyItem close */

template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::KeyItem::IsValid> { "Pouch.KeyItem.IsValid" };