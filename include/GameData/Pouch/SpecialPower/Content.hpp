#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::Pouch::SpecialPower::Content : Tag::Structure {
	struct Name : Tag::Member { using type = span<adapter<string64>>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::Pouch::SpecialPower::Content close */

template <> struct Data::Structure<GameData::Pouch::SpecialPower::Content> : GameData::Pouch::SpecialPower::Content {
	Name::type Name;
	
	explicit Structure(Sav& s) : 
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::Pouch::SpecialPower::Content close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::SpecialPower::Content::Name> = murmurhash3::hash("Pouch.SpecialPower.Content.Name");