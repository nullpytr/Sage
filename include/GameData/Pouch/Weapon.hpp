#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::Pouch::Weapon : Tag::Structure {
	struct IsEnableShortcut : Tag::Member { using type = span<bool>*; };
	struct IsValid : Tag::Member { using type = span<bool>*; };
	struct Content;
	struct EquipIndex : Tag::Member { using type = span<s32>*; };
	struct ValidNum : Tag::Member { using type = span<s32>*; };
};/* Tag::Structure GameData::Pouch::Weapon close */

#include "Weapon/Content.hpp"

template <> struct Data::Structure<GameData::Pouch::Weapon> : GameData::Pouch::Weapon {
	Data::Member<IsEnableShortcut> IsEnableShortcut;
	Data::Member<IsValid> IsValid;
	Structure<Content> Content;
	Data::Member<EquipIndex> EquipIndex;
	Data::Member<ValidNum> ValidNum;
	
	explicit Structure(Sav& s) : 
		IsEnableShortcut { s.get<struct IsEnableShortcut>() },
		IsValid { s.get<struct IsValid>() },
		Content { s },
		EquipIndex { s.get<struct EquipIndex>() },
		ValidNum { s.get<struct ValidNum>() }
	{ }
};/* Data::Structure GameData::Pouch::Weapon close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Weapon::IsEnableShortcut> = murmurhash3::hash("Pouch.Weapon.IsEnableShortcut");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Weapon::IsValid> = murmurhash3::hash("Pouch.Weapon.IsValid");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Weapon::EquipIndex> = murmurhash3::hash("Pouch.Weapon.EquipIndex");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Weapon::ValidNum> = murmurhash3::hash("Pouch.Weapon.ValidNum");