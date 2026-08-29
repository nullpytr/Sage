#pragma once
#include <sage>

struct GameData::WeaponStand::EquipInfo::Content::Combined : Tag::Structure {
	struct Life : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
};/* Tag::Structure GameData::WeaponStand::EquipInfo::Content::Combined close */

template <> struct Data::Structure<GameData::WeaponStand::EquipInfo::Content::Combined> : GameData::WeaponStand::EquipInfo::Content::Combined {
	Member<Life> Life;
	Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		Life { s.get<struct Life>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::WeaponStand::EquipInfo::Content::Combined close */

template <> hash_value_t constexpr Data::Hashtable<GameData::WeaponStand::EquipInfo::Content::Combined::Life> { "WeaponStand.EquipInfo.Content.Combined.Life" };
template <> hash_value_t constexpr Data::Hashtable<GameData::WeaponStand::EquipInfo::Content::Combined::Name> { "WeaponStand.EquipInfo.Content.Combined.Name" };