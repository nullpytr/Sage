#pragma once
#include <sage>

struct GameData::RaumiGolemAttachment::SubWeapon : Tag::Structure {
	struct Life : Tag::Member { using type = s32&; };
	struct Name : Tag::Member { using type = string64*; };
	struct RaumiControlLife : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RaumiGolemAttachment::SubWeapon close */

template <> struct Data::Structure<GameData::RaumiGolemAttachment::SubWeapon> : GameData::RaumiGolemAttachment::SubWeapon {
	Member<Life> Life;
	Member<Name> Name;
	Member<RaumiControlLife> RaumiControlLife;
	
	explicit Structure(Sav& s) : 
		Life { s.get<struct Life>() },
		Name { s.get<struct Name>() },
		RaumiControlLife { s.get<struct RaumiControlLife>() }
	{ }
};/* Data::Structure GameData::RaumiGolemAttachment::SubWeapon close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::SubWeapon::Life> { "RaumiGolemAttachment.SubWeapon.Life" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::SubWeapon::Name> { "RaumiGolemAttachment.SubWeapon.Name" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::SubWeapon::RaumiControlLife> { "RaumiGolemAttachment.SubWeapon.RaumiControlLife" };