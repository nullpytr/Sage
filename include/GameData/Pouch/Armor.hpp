#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::Pouch::Armor : Tag::Structure {
	struct IsValid : Tag::Member { using type = span<bool>*; };
	struct Content;
	struct EquipIndexes;
};/* Tag::Structure GameData::Pouch::Armor close */

#include "Armor/Content.hpp"
#include "Armor/EquipIndexes.hpp"

template <> struct Data::Structure<GameData::Pouch::Armor> : GameData::Pouch::Armor {
	Data::Member<IsValid> IsValid;
	Structure<Content> Content;
	Structure<EquipIndexes> EquipIndexes;
	
	explicit Structure(Sav& s) : 
		IsValid { s.get<struct IsValid>() },
		Content { s },
		EquipIndexes { s }
	{ }
};/* Data::Structure GameData::Pouch::Armor close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Armor::IsValid> = murmurhash3::hash("Pouch.Armor.IsValid");