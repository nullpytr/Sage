#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::Pouch::Food::Content : Tag::Structure {
	struct Effect;
	struct LifeRecover : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct Price : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct StockNum : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct MaterialName : Tag::Member { using type = span<adapter<string64>>; using adapter = adapter<type>*; };
	struct Name : Tag::Member { using type = span<adapter<string64>>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::Pouch::Food::Content close */

#include "Content/Effect.hpp"

template <> struct Data::Structure<GameData::Pouch::Food::Content> : GameData::Pouch::Food::Content {
	Structure<Effect> Effect;
	LifeRecover::type LifeRecover;
	Price::type Price;
	StockNum::type StockNum;
	MaterialName::type MaterialName;
	Name::type Name;
	
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