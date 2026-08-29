#pragma once
#include <sage>

struct GameData::Pouch::Shield : Tag::Structure {
	struct EquipIndex : Tag::Member { using type = span<s32>*; };
	struct IsEnableShortcut : Tag::Member { using type = span<bool>*; };
	struct IsValid : Tag::Member { using type = span<bool>*; };
	struct ValidNum : Tag::Member { using type = span<s32>*; };
	struct Content;
};/* Tag::Structure GameData::Pouch::Shield close */

#include "Shield/Content.hpp"

template <> struct Data::Structure<GameData::Pouch::Shield> : GameData::Pouch::Shield {
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
};/* Data::Structure GameData::Pouch::Shield close */

template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Shield::EquipIndex> { "Pouch.Shield.EquipIndex" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Shield::IsEnableShortcut> { "Pouch.Shield.IsEnableShortcut" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Shield::IsValid> { "Pouch.Shield.IsValid" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Shield::ValidNum> { "Pouch.Shield.ValidNum" };