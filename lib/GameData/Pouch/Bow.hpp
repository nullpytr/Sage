#pragma once
#include <sage>

struct GameData::Pouch::Bow : Tag::Structure {
	struct IsEnableShortcut : Tag::Member { using type = span<bool>*; };
	struct IsValid : Tag::Member { using type = span<bool>*; };
	struct Content;
	struct EquipIndex : Tag::Member { using type = span<s32>*; };
	struct ValidNum : Tag::Member { using type = span<s32>*; };
};/* Tag::Structure GameData::Pouch::Bow close */

#include "Bow/Content.hpp"

template <> struct Data::Structure<GameData::Pouch::Bow> : GameData::Pouch::Bow {
	Member<IsEnableShortcut> IsEnableShortcut;
	Member<IsValid> IsValid;
	Structure<Content> Content;
	Member<EquipIndex> EquipIndex;
	Member<ValidNum> ValidNum;
	
	explicit Structure(Sav& s) : 
		IsEnableShortcut { s.get<struct IsEnableShortcut>() },
		IsValid { s.get<struct IsValid>() },
		Content { s },
		EquipIndex { s.get<struct EquipIndex>() },
		ValidNum { s.get<struct ValidNum>() }
	{ }
};/* Data::Structure GameData::Pouch::Bow close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Bow::IsEnableShortcut> = murmurhash3::hash("Pouch.Bow.IsEnableShortcut");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Bow::IsValid> = murmurhash3::hash("Pouch.Bow.IsValid");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Bow::EquipIndex> = murmurhash3::hash("Pouch.Bow.EquipIndex");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Bow::ValidNum> = murmurhash3::hash("Pouch.Bow.ValidNum");