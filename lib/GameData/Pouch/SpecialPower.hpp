#pragma once
#include <sage>

struct GameData::Pouch::SpecialPower : Tag::Structure {
	struct IsValid : Tag::Member { using type = span<bool>*; };
	struct ValidNum : Tag::Member { using type = span<s32>*; };
	struct Content;
};/* Tag::Structure GameData::Pouch::SpecialPower close */

#include "SpecialPower/Content.hpp"

template <> struct Data::Structure<GameData::Pouch::SpecialPower> : GameData::Pouch::SpecialPower {
	Member<IsValid> IsValid;
	Member<ValidNum> ValidNum;
	Structure<Content> Content;
	
	explicit Structure(Sav& s) : 
		IsValid { s.get<struct IsValid>() },
		ValidNum { s.get<struct ValidNum>() },
		Content { s }
	{ }
};/* Data::Structure GameData::Pouch::SpecialPower close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::SpecialPower::IsValid> = murmurhash3::hash("Pouch.SpecialPower.IsValid");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::SpecialPower::ValidNum> = murmurhash3::hash("Pouch.SpecialPower.ValidNum");