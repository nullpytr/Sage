#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RaumiGolemAttachment::SubWeapon : Tag::Structure {
	struct Life : Tag::Member { using type = s32&; };
	struct RaumiControlLife : Tag::Member { using type = s32&; };
	struct Name : Tag::Member { using type = string64*; };
};/* Tag::Structure GameData::RaumiGolemAttachment::SubWeapon close */

template <> struct Data::Structure<GameData::RaumiGolemAttachment::SubWeapon> : GameData::RaumiGolemAttachment::SubWeapon {
	Data::Member<Life> Life;
	Data::Member<RaumiControlLife> RaumiControlLife;
	Data::Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		Life { s.get<struct Life>() },
		RaumiControlLife { s.get<struct RaumiControlLife>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::RaumiGolemAttachment::SubWeapon close */

template <> hash_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::SubWeapon::Life> = murmurhash3::hash("RaumiGolemAttachment.SubWeapon.Life");
template <> hash_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::SubWeapon::RaumiControlLife> = murmurhash3::hash("RaumiGolemAttachment.SubWeapon.RaumiControlLife");
template <> hash_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::SubWeapon::Name> = murmurhash3::hash("RaumiGolemAttachment.SubWeapon.Name");