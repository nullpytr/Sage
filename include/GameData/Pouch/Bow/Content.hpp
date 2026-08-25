#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::Pouch::Bow::Content : Tag::Structure {
	struct Effect;
	struct Life : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct Name : Tag::Member { using type = span<adapter<string64>>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::Pouch::Bow::Content close */

#include "Content/Effect.hpp"

template <> struct Data::Structure<GameData::Pouch::Bow::Content> : GameData::Pouch::Bow::Content {
	Structure<Effect> Effect;
	Life::type Life;
	Name::type Name;
	
	explicit Structure(Sav& s) : 
		Effect { s },
		Life { s.get<struct Life>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::Pouch::Bow::Content close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Bow::Content::Life> = murmurhash3::hash("Pouch.Bow.Content.Life");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Bow::Content::Name> = murmurhash3::hash("Pouch.Bow.Content.Name");