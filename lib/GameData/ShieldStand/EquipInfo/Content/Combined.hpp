#pragma once
#include <sage>

struct GameData::ShieldStand::EquipInfo::Content::Combined : Tag::Structure {
	struct Life : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
};/* Tag::Structure GameData::ShieldStand::EquipInfo::Content::Combined close */

template <> struct Data::Structure<GameData::ShieldStand::EquipInfo::Content::Combined> : GameData::ShieldStand::EquipInfo::Content::Combined {
	Member<Life> Life;
	Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		Life { s.get<struct Life>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::ShieldStand::EquipInfo::Content::Combined close */

template <> hash_value_t constexpr Data::Hashtable<GameData::ShieldStand::EquipInfo::Content::Combined::Life> { "ShieldStand.EquipInfo.Content.Combined.Life" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ShieldStand::EquipInfo::Content::Combined::Name> { "ShieldStand.EquipInfo.Content.Combined.Name" };