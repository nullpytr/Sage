#pragma once
#include <sage>

struct GameData::Pouch::SpecialPower::Content : Tag::Structure {
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
};/* Tag::Structure GameData::Pouch::SpecialPower::Content close */

template <> struct Data::Structure<GameData::Pouch::SpecialPower::Content> : GameData::Pouch::SpecialPower::Content {
	Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::Pouch::SpecialPower::Content close */

template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::SpecialPower::Content::Name> { "Pouch.SpecialPower.Content.Name" };