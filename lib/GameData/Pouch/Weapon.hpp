#pragma once
#include <sage>

struct GameData::Pouch::Weapon : Tag::Structure {
	struct EquipIndex : Tag::Member { using type = span<s32>*; };
	struct IsEnableShortcut : Tag::Member { using type = span<bool>*; };
	struct IsValid : Tag::Member { using type = span<bool>*; };
	struct ValidNum : Tag::Member { using type = span<s32>*; };
	struct Content;
};/* Tag::Structure GameData::Pouch::Weapon close */

#include "Weapon/Content.hpp"

template <> struct Data::Structure<GameData::Pouch::Weapon> : GameData::Pouch::Weapon {
	Member<EquipIndex> EquipIndex;
	Member<IsEnableShortcut> IsEnableShortcut;
	Member<IsValid> IsValid;
	Member<ValidNum> ValidNum;
	Structure<Content> Content;
	
	explicit Structure(Sav& s) : 
		EquipIndex { s.get<struct EquipIndex>() },
		IsEnableShortcut { s.get<struct IsEnableShortcut>() },
		IsValid { s.get<struct IsValid>() },
		ValidNum { s.get<struct ValidNum>() },
		Content { s }
	{ }
};/* Data::Structure GameData::Pouch::Weapon close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Weapon::EquipIndex> = murmurhash3::hash("Pouch.Weapon.EquipIndex");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Weapon::IsEnableShortcut> = murmurhash3::hash("Pouch.Weapon.IsEnableShortcut");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Weapon::IsValid> = murmurhash3::hash("Pouch.Weapon.IsValid");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Weapon::ValidNum> = murmurhash3::hash("Pouch.Weapon.ValidNum");