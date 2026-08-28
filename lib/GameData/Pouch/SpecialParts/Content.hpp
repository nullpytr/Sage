#pragma once
#include <sage>

struct GameData::Pouch::SpecialParts::Content : Tag::Structure {
	struct StockNum : Tag::Member { using type = span<s32>*; };
	struct UseOrder : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
};/* Tag::Structure GameData::Pouch::SpecialParts::Content close */

template <> struct Data::Structure<GameData::Pouch::SpecialParts::Content> : GameData::Pouch::SpecialParts::Content {
	Data::Member<StockNum> StockNum;
	Data::Member<UseOrder> UseOrder;
	Data::Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		StockNum { s.get<struct StockNum>() },
		UseOrder { s.get<struct UseOrder>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::Pouch::SpecialParts::Content close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::SpecialParts::Content::StockNum> = murmurhash3::hash("Pouch.SpecialParts.Content.StockNum");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::SpecialParts::Content::UseOrder> = murmurhash3::hash("Pouch.SpecialParts.Content.UseOrder");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::SpecialParts::Content::Name> = murmurhash3::hash("Pouch.SpecialParts.Content.Name");