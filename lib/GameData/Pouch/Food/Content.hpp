#pragma once
#include <sage>

struct GameData::Pouch::Food::Content : Tag::Structure {
	struct Effect;
	struct LifeRecover : Tag::Member { using type = span<s32>*; };
	struct Price : Tag::Member { using type = span<s32>*; };
	struct StockNum : Tag::Member { using type = span<s32>*; };
	struct MaterialName : Tag::Member { using type = adaptive_range<string64>*; };
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
};/* Tag::Structure GameData::Pouch::Food::Content close */

#include "Content/Effect.hpp"

template <> struct Data::Structure<GameData::Pouch::Food::Content> : GameData::Pouch::Food::Content {
	Structure<Effect> Effect;
	Data::Member<LifeRecover> LifeRecover;
	Data::Member<Price> Price;
	Data::Member<StockNum> StockNum;
	Data::Member<MaterialName> MaterialName;
	Data::Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		Effect { s },
		LifeRecover { s.get<struct LifeRecover>() },
		Price { s.get<struct Price>() },
		StockNum { s.get<struct StockNum>() },
		MaterialName { s.get<struct MaterialName>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::Pouch::Food::Content close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Food::Content::LifeRecover> = murmurhash3::hash("Pouch.Food.Content.LifeRecover");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Food::Content::Price> = murmurhash3::hash("Pouch.Food.Content.Price");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Food::Content::StockNum> = murmurhash3::hash("Pouch.Food.Content.StockNum");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Food::Content::MaterialName> = murmurhash3::hash("Pouch.Food.Content.MaterialName");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Food::Content::Name> = murmurhash3::hash("Pouch.Food.Content.Name");