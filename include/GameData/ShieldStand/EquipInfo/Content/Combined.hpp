#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::ShieldStand::EquipInfo::Content::Combined : Tag::Structure {
	struct Life : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct Name : Tag::Member { using type = span<adapter<string64>>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::ShieldStand::EquipInfo::Content::Combined close */

template <> struct Data::Structure<GameData::ShieldStand::EquipInfo::Content::Combined> : GameData::ShieldStand::EquipInfo::Content::Combined {
	Life::type Life;
	Name::type Name;
	
	explicit Structure(Sav& s) : 
		Life { s.get<struct Life>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::ShieldStand::EquipInfo::Content::Combined close */

template <> hash_t constexpr Data::Hashtable<GameData::ShieldStand::EquipInfo::Content::Combined::Life> = murmurhash3::hash("ShieldStand.EquipInfo.Content.Combined.Life");
template <> hash_t constexpr Data::Hashtable<GameData::ShieldStand::EquipInfo::Content::Combined::Name> = murmurhash3::hash("ShieldStand.EquipInfo.Content.Combined.Name");