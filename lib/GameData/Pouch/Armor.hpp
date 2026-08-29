#pragma once
#include <sage>

struct GameData::Pouch::Armor : Tag::Structure {
	struct IsValid : Tag::Member { using type = span<bool>*; };
	struct Content;
	struct EquipIndexes;
};/* Tag::Structure GameData::Pouch::Armor close */

#include "Armor/Content.hpp"
#include "Armor/EquipIndexes.hpp"

template <> struct Data::Structure<GameData::Pouch::Armor> : GameData::Pouch::Armor {
	Member<IsValid> IsValid;
	Structure<Content> Content;
	Structure<EquipIndexes> EquipIndexes;
	
	explicit Structure(Sav& s) : 
		IsValid { s.get<struct IsValid>() },
		Content { s },
		EquipIndexes { s }
	{ }
};/* Data::Structure GameData::Pouch::Armor close */

template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Armor::IsValid> { "Pouch.Armor.IsValid" };