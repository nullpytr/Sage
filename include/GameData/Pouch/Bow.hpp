#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::Pouch::Bow : Tag::Structure {
	struct IsEnableShortcut : Tag::Member { using type = span<bool>; using adapter = adapter<type>*; };
	struct IsValid : Tag::Member { using type = span<bool>; using adapter = adapter<type>*; };
	struct Content;
	struct EquipIndex : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct ValidNum : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::Pouch::Bow close */

#include "Bow/Content.hpp"

template <> struct Data::Structure<GameData::Pouch::Bow> : GameData::Pouch::Bow {
	IsEnableShortcut::type IsEnableShortcut;
	IsValid::type IsValid;
	Structure<Content> Content;
	EquipIndex::type EquipIndex;
	ValidNum::type ValidNum;
	
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