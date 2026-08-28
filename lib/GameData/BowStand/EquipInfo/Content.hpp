#pragma once
#include <sage>

struct GameData::BowStand::EquipInfo::Content : Tag::Structure {
	struct Effect;
	struct Life : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
};/* Tag::Structure GameData::BowStand::EquipInfo::Content close */

#include "Content/Effect.hpp"

template <> struct Data::Structure<GameData::BowStand::EquipInfo::Content> : GameData::BowStand::EquipInfo::Content {
	Structure<Effect> Effect;
	Member<Life> Life;
	Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		Effect { s },
		Life { s.get<struct Life>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::BowStand::EquipInfo::Content close */

template <> hash_t constexpr Data::Hashtable<GameData::BowStand::EquipInfo::Content::Life> = murmurhash3::hash("BowStand.EquipInfo.Content.Life");
template <> hash_t constexpr Data::Hashtable<GameData::BowStand::EquipInfo::Content::Name> = murmurhash3::hash("BowStand.EquipInfo.Content.Name");