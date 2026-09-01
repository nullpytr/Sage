#pragma once
#include <sage>

struct GameData::BowStand::EquipInfo::Content : Tag::Structure {
	struct Life : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
	struct Effect;
};/* Tag::Structure GameData::BowStand::EquipInfo::Content close */

#include "Content/Effect.hpp"

template <> struct Data::Structure<GameData::BowStand::EquipInfo::Content> : GameData::BowStand::EquipInfo::Content {
	Member<Life> Life;
	Member<Name> Name;
	Structure<Effect> Effect;
	
	explicit Structure(Sav& s) : 
		Life { s.get<struct Life>() },
		Name { s.get<struct Name>() },
		Effect { s.get<struct Effect>() }
	{ }
};/* Structure Data::Structure GameData::BowStand::EquipInfo::Content close */

template <> hash_value_t constexpr Data::Hashtable<GameData::BowStand::EquipInfo::Content::Life> { "BowStand.EquipInfo.Content.Life" };
template <> hash_value_t constexpr Data::Hashtable<GameData::BowStand::EquipInfo::Content::Name> { "BowStand.EquipInfo.Content.Name" };