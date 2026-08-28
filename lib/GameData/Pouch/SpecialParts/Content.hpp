#pragma once
#include <sage>

struct GameData::Pouch::SpecialParts::Content : Tag::Structure {
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
	struct StockNum : Tag::Member { using type = span<s32>*; };
	struct UseOrder : Tag::Member { using type = span<s32>*; };
};/* Tag::Structure GameData::Pouch::SpecialParts::Content close */

template <> struct Data::Structure<GameData::Pouch::SpecialParts::Content> : GameData::Pouch::SpecialParts::Content {
	Member<Name> Name;
	Member<StockNum> StockNum;
	Member<UseOrder> UseOrder;
	
	explicit Structure(Sav& s) : 
		Name { s.get<struct Name>() },
		StockNum { s.get<struct StockNum>() },
		UseOrder { s.get<struct UseOrder>() }
	{ }
};/* Data::Structure GameData::Pouch::SpecialParts::Content close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::SpecialParts::Content::Name> = murmurhash3::hash("Pouch.SpecialParts.Content.Name");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::SpecialParts::Content::StockNum> = murmurhash3::hash("Pouch.SpecialParts.Content.StockNum");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::SpecialParts::Content::UseOrder> = murmurhash3::hash("Pouch.SpecialParts.Content.UseOrder");