#pragma once
#include <sage>

struct GameData::WeaponStand::EquipInfo::Content : Tag::Structure {
	struct Effect;
	struct Combined;
	struct ExtraLife : Tag::Member { using type = span<s32>*; };
	struct Life : Tag::Member { using type = span<s32>*; };
	struct RecordExtraLife : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
};/* Tag::Structure GameData::WeaponStand::EquipInfo::Content close */

#include "Content/Effect.hpp"
#include "Content/Combined.hpp"

template <> struct Data::Structure<GameData::WeaponStand::EquipInfo::Content> : GameData::WeaponStand::EquipInfo::Content {
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
};/* Data::Structure GameData::WeaponStand::EquipInfo::Content close */

template <> hash_t constexpr Data::Hashtable<GameData::WeaponStand::EquipInfo::Content::ExtraLife> = murmurhash3::hash("WeaponStand.EquipInfo.Content.ExtraLife");
template <> hash_t constexpr Data::Hashtable<GameData::WeaponStand::EquipInfo::Content::Life> = murmurhash3::hash("WeaponStand.EquipInfo.Content.Life");
template <> hash_t constexpr Data::Hashtable<GameData::WeaponStand::EquipInfo::Content::RecordExtraLife> = murmurhash3::hash("WeaponStand.EquipInfo.Content.RecordExtraLife");
template <> hash_t constexpr Data::Hashtable<GameData::WeaponStand::EquipInfo::Content::Name> = murmurhash3::hash("WeaponStand.EquipInfo.Content.Name");