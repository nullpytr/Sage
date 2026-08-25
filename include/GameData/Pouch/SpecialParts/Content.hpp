#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::Pouch::SpecialParts::Content : Tag::Structure {
	struct StockNum : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct UseOrder : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct Name : Tag::Member { using type = span<adapter<string64>>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::Pouch::SpecialParts::Content close */

template <> struct Data::Structure<GameData::Pouch::SpecialParts::Content> : GameData::Pouch::SpecialParts::Content {
	StockNum::type StockNum;
	UseOrder::type UseOrder;
	Name::type Name;
	
	explicit Structure(Sav& s) : 
		StockNum { s.get<struct StockNum>() },
		UseOrder { s.get<struct UseOrder>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::Pouch::SpecialParts::Content close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::SpecialParts::Content::StockNum> = murmurhash3::hash("Pouch.SpecialParts.Content.StockNum");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::SpecialParts::Content::UseOrder> = murmurhash3::hash("Pouch.SpecialParts.Content.UseOrder");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::SpecialParts::Content::Name> = murmurhash3::hash("Pouch.SpecialParts.Content.Name");