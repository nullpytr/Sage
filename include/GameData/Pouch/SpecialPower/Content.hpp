#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::Pouch::SpecialPower::Content : Tag::Structure {
	struct Name : Tag::Member { using type = range<string64>*; };
};/* Tag::Structure GameData::Pouch::SpecialPower::Content close */

template <> struct Data::Structure<GameData::Pouch::SpecialPower::Content> : GameData::Pouch::SpecialPower::Content {
	Data::Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::Pouch::SpecialPower::Content close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::SpecialPower::Content::Name> = murmurhash3::hash("Pouch.SpecialPower.Content.Name");