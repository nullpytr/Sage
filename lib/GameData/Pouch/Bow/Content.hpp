#pragma once
#include <sage>

struct GameData::Pouch::Bow::Content : Tag::Structure {
	struct Life : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
	struct Effect;
};/* Tag::Structure GameData::Pouch::Bow::Content close */

#include "Content/Effect.hpp"

template <> struct Data::Structure<GameData::Pouch::Bow::Content> : GameData::Pouch::Bow::Content {
	Member<Life> Life;
	Member<Name> Name;
	Structure<Effect> Effect;
	
	explicit Structure(Sav& s) : 
		Life { s.get<struct Life>() },
		Name { s.get<struct Name>() },
		Effect { s }
	{ }
};/* Data::Structure GameData::Pouch::Bow::Content close */

template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Bow::Content::Life> { "Pouch.Bow.Content.Life" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Bow::Content::Name> { "Pouch.Bow.Content.Name" };