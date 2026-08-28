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
		Combined { s },
		Effect { s }
	{ }
};/* Data::Structure GameData::ShieldStand::EquipInfo::Content close */

template <> hash_t constexpr Data::Hashtable<GameData::ShieldStand::EquipInfo::Content::ExtraLife> = murmurhash3::hash("ShieldStand.EquipInfo.Content.ExtraLife");
template <> hash_t constexpr Data::Hashtable<GameData::ShieldStand::EquipInfo::Content::Life> = murmurhash3::hash("ShieldStand.EquipInfo.Content.Life");
template <> hash_t constexpr Data::Hashtable<GameData::ShieldStand::EquipInfo::Content::Name> = murmurhash3::hash("ShieldStand.EquipInfo.Content.Name");