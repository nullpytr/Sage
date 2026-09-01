#pragma once
#include <sage>

struct GameData::Pouch::Arrow::Content : Tag::Structure {
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
	struct StockNum : Tag::Member { using type = span<s32>*; };
};/* Tag::Structure GameData::Pouch::Arrow::Content close */

template <> struct Data::Structure<GameData::Pouch::Arrow::Content> : GameData::Pouch::Arrow::Content {
	Member<Name> Name;
	Member<StockNum> StockNum;
	
	explicit Structure(Sav& s) : 
		Name { s.get<struct Name>() },
		StockNum { s.get<struct StockNum>() }
	{ }
};/* Structure Data::Structure GameData::Pouch::Arrow::Content close */

template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Arrow::Content::Name> { "Pouch.Arrow.Content.Name" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Arrow::Content::StockNum> { "Pouch.Arrow.Content.StockNum" };