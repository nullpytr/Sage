#pragma once
#include <sage>

struct GameData::Pouch::KeyItem::Content : Tag::Structure {
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
	struct StockNum : Tag::Member { using type = span<s32>*; };
};/* Tag::Structure GameData::Pouch::KeyItem::Content close */

template <> struct Data::Structure<GameData::Pouch::KeyItem::Content> : GameData::Pouch::KeyItem::Content {
	Member<Name> Name;
	Member<StockNum> StockNum;
	
	explicit Structure(Sav& s) : 
		Name { s.get<struct Name>() },
		StockNum { s.get<struct StockNum>() }
	{ }
};/* Data::Structure GameData::Pouch::KeyItem::Content close */

template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::KeyItem::Content::Name> { "Pouch.KeyItem.Content.Name" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::KeyItem::Content::StockNum> { "Pouch.KeyItem.Content.StockNum" };