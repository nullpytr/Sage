#pragma once
#include <sage>

struct GameData::ShieldStand::EquipInfo::Content : Tag::Structure {
	struct ExtraLife : Tag::Member { using type = span<s32>*; };
	struct Life : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
	struct Combined;
	struct Effect;
};/* Tag::Structure GameData::ShieldStand::EquipInfo::Content close */

#include "Content/Combined.hpp"
#include "Content/Effect.hpp"

template <> struct Data::Structure<GameData::ShieldStand::EquipInfo::Content> : GameData::ShieldStand::EquipInfo::Content {
	Member<ExtraLife> ExtraLife;
	Member<Life> Life;
	Member<Name> Name;
	Structure<Combined> Combined;
	Structure<Effect> Effect;
	
	explicit Structure(Sav& s) : 
		ExtraLife { s.get<struct ExtraLife>() },
		Life { s.get<struct Life>() },
		Name { s.get<struct Name>() },
		Combined { s.get<struct Combined>() },
		Effect { s.get<struct Effect>() }
	{ }
};/* Structure Data::Structure GameData::ShieldStand::EquipInfo::Content close */

template <> hash_value_t constexpr Data::Hashtable<GameData::ShieldStand::EquipInfo::Content::ExtraLife> { "ShieldStand.EquipInfo.Content.ExtraLife" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ShieldStand::EquipInfo::Content::Life> { "ShieldStand.EquipInfo.Content.Life" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ShieldStand::EquipInfo::Content::Name> { "ShieldStand.EquipInfo.Content.Name" };