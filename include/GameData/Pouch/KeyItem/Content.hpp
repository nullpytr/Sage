#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::Pouch::KeyItem::Content : Tag::Structure {
	struct StockNum : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = range<string64>*; };
};/* Tag::Structure GameData::Pouch::KeyItem::Content close */

template <> struct Data::Structure<GameData::Pouch::KeyItem::Content> : GameData::Pouch::KeyItem::Content {
	Data::Member<StockNum> StockNum;
	Data::Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		StockNum { s.get<struct StockNum>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::Pouch::KeyItem::Content close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::KeyItem::Content::StockNum> = murmurhash3::hash("Pouch.KeyItem.Content.StockNum");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::KeyItem::Content::Name> = murmurhash3::hash("Pouch.KeyItem.Content.Name");