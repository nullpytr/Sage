#pragma once
#include <sage>

struct GameData::Pouch::Shield::Content : Tag::Structure {
	struct Effect;
	struct Combined;
	struct ExtraLife : Tag::Member { using type = span<s32>*; };
	struct Life : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
};/* Tag::Structure GameData::Pouch::Shield::Content close */

#include "Content/Effect.hpp"
#include "Content/Combined.hpp"

template <> struct Data::Structure<GameData::Pouch::Shield::Content> : GameData::Pouch::Shield::Content {
	Structure<Effect> Effect;
	Structure<Combined> Combined;
	Member<ExtraLife> ExtraLife;
	Member<Life> Life;
	Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		Effect { s },
		Combined { s },
		ExtraLife { s.get<struct ExtraLife>() },
		Life { s.get<struct Life>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::Pouch::Shield::Content close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Shield::Content::ExtraLife> = murmurhash3::hash("Pouch.Shield.Content.ExtraLife");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Shield::Content::Life> = murmurhash3::hash("Pouch.Shield.Content.Life");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Shield::Content::Name> = murmurhash3::hash("Pouch.Shield.Content.Name");