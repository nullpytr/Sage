#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::ShieldStand::EquipInfo::Content : Tag::Structure {
	struct Effect;
	struct Combined;
	struct ExtraLife : Tag::Member { using type = span<s32>*; };
	struct Life : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = range<string64>*; };
};/* Tag::Structure GameData::ShieldStand::EquipInfo::Content close */

#include "Content/Effect.hpp"
#include "Content/Combined.hpp"

template <> struct Data::Structure<GameData::ShieldStand::EquipInfo::Content> : GameData::ShieldStand::EquipInfo::Content {
	Structure<Effect> Effect;
	Structure<Combined> Combined;
	Data::Member<ExtraLife> ExtraLife;
	Data::Member<Life> Life;
	Data::Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		Effect { s },
		Combined { s },
		ExtraLife { s.get<struct ExtraLife>() },
		Life { s.get<struct Life>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::ShieldStand::EquipInfo::Content close */

template <> hash_t constexpr Data::Hashtable<GameData::ShieldStand::EquipInfo::Content::ExtraLife> = murmurhash3::hash("ShieldStand.EquipInfo.Content.ExtraLife");
template <> hash_t constexpr Data::Hashtable<GameData::ShieldStand::EquipInfo::Content::Life> = murmurhash3::hash("ShieldStand.EquipInfo.Content.Life");
template <> hash_t constexpr Data::Hashtable<GameData::ShieldStand::EquipInfo::Content::Name> = murmurhash3::hash("ShieldStand.EquipInfo.Content.Name");