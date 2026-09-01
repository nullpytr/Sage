#pragma once
#include <sage>

struct GameData::Pouch::Bow : Tag::Structure {
	struct EquipIndex : Tag::Member { using type = span<s32>*; };
	struct IsEnableShortcut : Tag::Member { using type = span<bool>*; };
	struct IsValid : Tag::Member { using type = span<bool>*; };
	struct ValidNum : Tag::Member { using type = span<s32>*; };
	struct Content;
};/* Tag::Structure GameData::Pouch::Bow close */

#include "Bow/Content.hpp"

template <> struct Data::Structure<GameData::Pouch::Bow> : GameData::Pouch::Bow {
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
		Content { s.get<struct Content>() }
	{ }
};/* Structure Data::Structure GameData::Pouch::Bow close */

template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Bow::EquipIndex> { "Pouch.Bow.EquipIndex" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Bow::IsEnableShortcut> { "Pouch.Bow.IsEnableShortcut" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Bow::IsValid> { "Pouch.Bow.IsValid" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Bow::ValidNum> { "Pouch.Bow.ValidNum" };