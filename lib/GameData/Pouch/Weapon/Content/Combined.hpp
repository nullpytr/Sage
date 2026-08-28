#pragma once
#include <sage>

struct GameData::Pouch::Weapon::Content::Combined : Tag::Structure {
	struct Life : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
};/* Tag::Structure GameData::Pouch::Weapon::Content::Combined close */

template <> struct Data::Structure<GameData::Pouch::Weapon::Content::Combined> : GameData::Pouch::Weapon::Content::Combined {
	Data::Member<Life> Life;
	Data::Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		Life { s.get<struct Life>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::Pouch::Weapon::Content::Combined close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Weapon::Content::Combined::Life> = murmurhash3::hash("Pouch.Weapon.Content.Combined.Life");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Weapon::Content::Combined::Name> = murmurhash3::hash("Pouch.Weapon.Content.Combined.Name");