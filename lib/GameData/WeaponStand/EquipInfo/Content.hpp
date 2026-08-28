#pragma once
#include <sage>

struct GameData::WeaponStand::EquipInfo::Content : Tag::Structure {
	struct ExtraLife : Tag::Member { using type = span<s32>*; };
	struct Life : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
	struct RecordExtraLife : Tag::Member { using type = span<s32>*; };
	struct Combined;
	struct Effect;
};/* Tag::Structure GameData::WeaponStand::EquipInfo::Content close */

#include "Content/Combined.hpp"
#include "Content/Effect.hpp"

template <> struct Data::Structure<GameData::WeaponStand::EquipInfo::Content> : GameData::WeaponStand::EquipInfo::Content {
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
};/* Data::Structure GameData::WeaponStand::EquipInfo::Content close */

template <> hash_t constexpr Data::Hashtable<GameData::WeaponStand::EquipInfo::Content::ExtraLife> = murmurhash3::hash("WeaponStand.EquipInfo.Content.ExtraLife");
template <> hash_t constexpr Data::Hashtable<GameData::WeaponStand::EquipInfo::Content::Life> = murmurhash3::hash("WeaponStand.EquipInfo.Content.Life");
template <> hash_t constexpr Data::Hashtable<GameData::WeaponStand::EquipInfo::Content::Name> = murmurhash3::hash("WeaponStand.EquipInfo.Content.Name");
template <> hash_t constexpr Data::Hashtable<GameData::WeaponStand::EquipInfo::Content::RecordExtraLife> = murmurhash3::hash("WeaponStand.EquipInfo.Content.RecordExtraLife");