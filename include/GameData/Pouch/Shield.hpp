#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::Pouch::Shield : Tag::Structure {
	struct IsEnableShortcut : Tag::Member { using type = span<bool>; using adapter = adapter<type>*; };
	struct IsValid : Tag::Member { using type = span<bool>; using adapter = adapter<type>*; };
	struct Content;
	struct EquipIndex : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct ValidNum : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::Pouch::Shield close */

#include "Shield/Content.hpp"

template <> struct Data::Structure<GameData::Pouch::Shield> : GameData::Pouch::Shield {
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
};/* Data::Structure GameData::Pouch::Shield close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Shield::IsEnableShortcut> = murmurhash3::hash("Pouch.Shield.IsEnableShortcut");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Shield::IsValid> = murmurhash3::hash("Pouch.Shield.IsValid");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Shield::EquipIndex> = murmurhash3::hash("Pouch.Shield.EquipIndex");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Shield::ValidNum> = murmurhash3::hash("Pouch.Shield.ValidNum");