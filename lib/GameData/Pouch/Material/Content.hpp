#pragma once
#include <sage>

struct GameData::Pouch::Material::Content : Tag::Structure {
	struct GetOrder : Tag::Member { using type = span<s32>*; };
	struct StockNum : Tag::Member { using type = span<s32>*; };
	struct UseOrder : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
};/* Tag::Structure GameData::Pouch::Material::Content close */

template <> struct Data::Structure<GameData::Pouch::Material::Content> : GameData::Pouch::Material::Content {
	Member<GetOrder> GetOrder;
	Member<StockNum> StockNum;
	Member<UseOrder> UseOrder;
	Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		GetOrder { s.get<struct GetOrder>() },
		StockNum { s.get<struct StockNum>() },
		UseOrder { s.get<struct UseOrder>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::Pouch::Material::Content close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Material::Content::GetOrder> = murmurhash3::hash("Pouch.Material.Content.GetOrder");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Material::Content::StockNum> = murmurhash3::hash("Pouch.Material.Content.StockNum");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Material::Content::UseOrder> = murmurhash3::hash("Pouch.Material.Content.UseOrder");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Material::Content::Name> = murmurhash3::hash("Pouch.Material.Content.Name");