#pragma once
#include <sage>

struct GameData::Pouch::Weapon::Content : Tag::Structure {
	struct ExtraLife : Tag::Member { using type = span<s32>*; };
	struct Life : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
	struct RecordExtraLife : Tag::Member { using type = span<s32>*; };
	struct Combined;
	struct Effect;
};/* Tag::Structure GameData::Pouch::Weapon::Content close */

#include "Content/Combined.hpp"
#include "Content/Effect.hpp"

template <> struct Data::Structure<GameData::Pouch::Weapon::Content> : GameData::Pouch::Weapon::Content {
	Member<ExtraLife> ExtraLife;
	Member<Life> Life;
	Member<Name> Name;
	Member<RecordExtraLife> RecordExtraLife;
	Structure<Combined> Combined;
	Structure<Effect> Effect;
	
	explicit Structure(Sav& s) : 
		ExtraLife { s.get<struct ExtraLife>() },
		Life { s.get<struct Life>() },
		Name { s.get<struct Name>() },
		RecordExtraLife { s.get<struct RecordExtraLife>() },
		Combined { s },
		Effect { s }
	{ }
};/* Data::Structure GameData::Pouch::Weapon::Content close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Weapon::Content::ExtraLife> = murmurhash3::hash("Pouch.Weapon.Content.ExtraLife");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Weapon::Content::Life> = murmurhash3::hash("Pouch.Weapon.Content.Life");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Weapon::Content::Name> = murmurhash3::hash("Pouch.Weapon.Content.Name");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Weapon::Content::RecordExtraLife> = murmurhash3::hash("Pouch.Weapon.Content.RecordExtraLife");