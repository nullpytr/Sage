#pragma once
#include <sage>

struct GameData::RaumiGolemAttachment::Weapon : Tag::Structure {
	struct Life : Tag::Member { using type = s32&; };
	struct Name : Tag::Member { using type = string64*; };
	struct RaumiControlLife : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RaumiGolemAttachment::Weapon close */

template <> struct Data::Structure<GameData::RaumiGolemAttachment::Weapon> : GameData::RaumiGolemAttachment::Weapon {
	Member<Life> Life;
	Member<Name> Name;
	Member<RaumiControlLife> RaumiControlLife;
	
	explicit Structure(Sav& s) : 
		Life { s.get<struct Life>() },
		Name { s.get<struct Name>() },
		RaumiControlLife { s.get<struct RaumiControlLife>() }
	{ }
};/* Data::Structure GameData::RaumiGolemAttachment::Weapon close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::Weapon::Life> { "RaumiGolemAttachment.Weapon.Life" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::Weapon::Name> { "RaumiGolemAttachment.Weapon.Name" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::Weapon::RaumiControlLife> { "RaumiGolemAttachment.Weapon.RaumiControlLife" };