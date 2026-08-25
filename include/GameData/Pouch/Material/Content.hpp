#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::Pouch::Material::Content : Tag::Structure {
	struct GetOrder : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct StockNum : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct UseOrder : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct Name : Tag::Member { using type = span<adapter<string64>>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::Pouch::Material::Content close */

template <> struct Data::Structure<GameData::Pouch::Material::Content> : GameData::Pouch::Material::Content {
	GetOrder::type GetOrder;
	StockNum::type StockNum;
	UseOrder::type UseOrder;
	Name::type Name;
	
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