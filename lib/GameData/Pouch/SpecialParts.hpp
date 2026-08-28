#pragma once
#include <sage>

struct GameData::Pouch::SpecialParts : Tag::Structure {
	struct IsValid : Tag::Member { using type = span<bool>*; };
	struct Content;
	struct EquipIndex : Tag::Member { using type = span<s32>*; };
};/* Tag::Structure GameData::Pouch::SpecialParts close */

#include "SpecialParts/Content.hpp"

template <> struct Data::Structure<GameData::Pouch::SpecialParts> : GameData::Pouch::SpecialParts {
	Member<IsValid> IsValid;
	Structure<Content> Content;
	Member<EquipIndex> EquipIndex;
	
	explicit Structure(Sav& s) : 
		IsValid { s.get<struct IsValid>() },
		Content { s },
		EquipIndex { s.get<struct EquipIndex>() }
	{ }
};/* Data::Structure GameData::Pouch::SpecialParts close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::SpecialParts::IsValid> = murmurhash3::hash("Pouch.SpecialParts.IsValid");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::SpecialParts::EquipIndex> = murmurhash3::hash("Pouch.SpecialParts.EquipIndex");