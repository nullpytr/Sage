#pragma once
#include <sage>

struct GameData::Pouch::SpecialParts : Tag::Structure {
	struct EquipIndex : Tag::Member { using type = span<s32>*; };
	struct IsValid : Tag::Member { using type = span<bool>*; };
	struct Content;
};/* Tag::Structure GameData::Pouch::SpecialParts close */

#include "SpecialParts/Content.hpp"

template <> struct Data::Structure<GameData::Pouch::SpecialParts> : GameData::Pouch::SpecialParts {
	Member<EquipIndex> EquipIndex;
	Member<IsValid> IsValid;
	Structure<Content> Content;
	
	explicit Structure(Sav& s) : 
		EquipIndex { s.get<struct EquipIndex>() },
		IsValid { s.get<struct IsValid>() },
		Content { s }
	{ }
};/* Data::Structure GameData::Pouch::SpecialParts close */

template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::SpecialParts::EquipIndex> { "Pouch.SpecialParts.EquipIndex" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::SpecialParts::IsValid> { "Pouch.SpecialParts.IsValid" };