#pragma once
#include <sage>

struct GameData::Pouch::Shield::Content : Tag::Structure {
	struct ExtraLife : Tag::Member { using type = span<s32>*; };
	struct Life : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
	struct Combined;
	struct Effect;
};/* Tag::Structure GameData::Pouch::Shield::Content close */

#include "Content/Combined.hpp"
#include "Content/Effect.hpp"

template <> struct Data::Structure<GameData::Pouch::Shield::Content> : GameData::Pouch::Shield::Content {
	Member<ExtraLife> ExtraLife;
	Member<Life> Life;
	Member<Name> Name;
	Structure<Combined> Combined;
	Structure<Effect> Effect;
	
	explicit Structure(Sav& s) : 
		ExtraLife { s.get<struct ExtraLife>() },
		Life { s.get<struct Life>() },
		Name { s.get<struct Name>() },
		Combined { s },
		Effect { s }
	{ }
};/* Data::Structure GameData::Pouch::Shield::Content close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Shield::Content::ExtraLife> = murmurhash3::hash("Pouch.Shield.Content.ExtraLife");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Shield::Content::Life> = murmurhash3::hash("Pouch.Shield.Content.Life");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Shield::Content::Name> = murmurhash3::hash("Pouch.Shield.Content.Name");