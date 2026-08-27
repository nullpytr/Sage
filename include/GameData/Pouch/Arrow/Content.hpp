#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::Pouch::Arrow::Content : Tag::Structure {
	struct StockNum : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = span<layout<string64>>*; };
};/* Tag::Structure GameData::Pouch::Arrow::Content close */

template <> struct Data::Structure<GameData::Pouch::Arrow::Content> : GameData::Pouch::Arrow::Content {
	Data::Member<StockNum> StockNum;
	Data::Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		StockNum { s.get<struct StockNum>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::Pouch::Arrow::Content close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Arrow::Content::StockNum> = murmurhash3::hash("Pouch.Arrow.Content.StockNum");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Arrow::Content::Name> = murmurhash3::hash("Pouch.Arrow.Content.Name");