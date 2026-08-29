#pragma once
#include <sage>

struct GameData::Pouch::Material : Tag::Structure {
	struct EquipIndex : Tag::Member { using type = span<s32>*; };
	struct IsEnableShortcut : Tag::Member { using type = span<bool>*; };
	struct IsValid : Tag::Member { using type = span<bool>*; };
	struct Content;
};/* Tag::Structure GameData::Pouch::Material close */

#include "Material/Content.hpp"

template <> struct Data::Structure<GameData::Pouch::Material> : GameData::Pouch::Material {
	Member<EquipIndex> EquipIndex;
	Member<IsEnableShortcut> IsEnableShortcut;
	Member<IsValid> IsValid;
	Structure<Content> Content;
	
	explicit Structure(Sav& s) : 
		EquipIndex { s.get<struct EquipIndex>() },
		IsEnableShortcut { s.get<struct IsEnableShortcut>() },
		IsValid { s.get<struct IsValid>() },
		Content { s }
	{ }
};/* Data::Structure GameData::Pouch::Material close */

template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Material::EquipIndex> { "Pouch.Material.EquipIndex" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Material::IsEnableShortcut> { "Pouch.Material.IsEnableShortcut" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Material::IsValid> { "Pouch.Material.IsValid" };