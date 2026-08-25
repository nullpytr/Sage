#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::Pouch::SpecialParts : Tag::Structure {
	struct IsValid : Tag::Member { using type = span<bool>; using adapter = adapter<type>*; };
	struct Content;
	struct EquipIndex : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::Pouch::SpecialParts close */

#include "SpecialParts/Content.hpp"

template <> struct Data::Structure<GameData::Pouch::SpecialParts> : GameData::Pouch::SpecialParts {
	IsValid::type IsValid;
	Structure<Content> Content;
	EquipIndex::type EquipIndex;
	
	explicit Structure(Sav& s) : 
		IsValid { s.get<struct IsValid>() },
		Content { s },
		EquipIndex { s.get<struct EquipIndex>() }
	{ }
};/* Data::Structure GameData::Pouch::SpecialParts close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::SpecialParts::IsValid> = murmurhash3::hash("Pouch.SpecialParts.IsValid");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::SpecialParts::EquipIndex> = murmurhash3::hash("Pouch.SpecialParts.EquipIndex");