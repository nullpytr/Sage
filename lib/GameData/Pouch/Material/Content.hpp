#pragma once
#include <sage>

struct GameData::Pouch::Material::Content : Tag::Structure {
	struct GetOrder : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
	struct StockNum : Tag::Member { using type = span<s32>*; };
	struct UseOrder : Tag::Member { using type = span<s32>*; };
};/* Tag::Structure GameData::Pouch::Material::Content close */

template <> struct Data::Structure<GameData::Pouch::Material::Content> : GameData::Pouch::Material::Content {
	Member<GetOrder> GetOrder;
	Member<Name> Name;
	Member<StockNum> StockNum;
	Member<UseOrder> UseOrder;
	
	explicit Structure(Sav& s) : 
		GetOrder { s.get<struct GetOrder>() },
		Name { s.get<struct Name>() },
		StockNum { s.get<struct StockNum>() },
		UseOrder { s.get<struct UseOrder>() }
	{ }
};/* Structure Data::Structure GameData::Pouch::Material::Content close */

template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Material::Content::GetOrder> { "Pouch.Material.Content.GetOrder" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Material::Content::Name> { "Pouch.Material.Content.Name" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Material::Content::StockNum> { "Pouch.Material.Content.StockNum" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Material::Content::UseOrder> { "Pouch.Material.Content.UseOrder" };