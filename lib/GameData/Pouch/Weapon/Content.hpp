#pragma once
#include <sage>

struct GameData::Pouch::Weapon::Content : Tag::Structure {
	struct Effect;
	struct Combined;
	struct ExtraLife : Tag::Member { using type = span<s32>*; };
	struct Life : Tag::Member { using type = span<s32>*; };
	struct RecordExtraLife : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
};/* Tag::Structure GameData::Pouch::Weapon::Content close */

#include "Content/Effect.hpp"
#include "Content/Combined.hpp"

template <> struct Data::Structure<GameData::Pouch::Weapon::Content> : GameData::Pouch::Weapon::Content {
	Structure<Effect> Effect;
	Structure<Combined> Combined;
	Member<ExtraLife> ExtraLife;
	Member<Life> Life;
	Member<RecordExtraLife> RecordExtraLife;
	Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		Effect { s },
		Combined { s },
		ExtraLife { s.get<struct ExtraLife>() },
		Life { s.get<struct Life>() },
		RecordExtraLife { s.get<struct RecordExtraLife>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::Pouch::Weapon::Content close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Weapon::Content::ExtraLife> = murmurhash3::hash("Pouch.Weapon.Content.ExtraLife");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Weapon::Content::Life> = murmurhash3::hash("Pouch.Weapon.Content.Life");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Weapon::Content::RecordExtraLife> = murmurhash3::hash("Pouch.Weapon.Content.RecordExtraLife");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Weapon::Content::Name> = murmurhash3::hash("Pouch.Weapon.Content.Name");