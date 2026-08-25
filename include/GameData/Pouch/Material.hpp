#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::Pouch::Material : Tag::Structure {
	struct IsEnableShortcut : Tag::Member { using type = span<bool>; using adapter = adapter<type>*; };
	struct IsValid : Tag::Member { using type = span<bool>; using adapter = adapter<type>*; };
	struct Content;
	struct EquipIndex : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::Pouch::Material close */

#include "Material/Content.hpp"

template <> struct Data::Structure<GameData::Pouch::Material> : GameData::Pouch::Material {
	IsEnableShortcut::type IsEnableShortcut;
	IsValid::type IsValid;
	Structure<Content> Content;
	EquipIndex::type EquipIndex;
	
	explicit Structure(Sav& s) : 
		IsEnableShortcut { s.get<struct IsEnableShortcut>() },
		IsValid { s.get<struct IsValid>() },
		Content { s },
		EquipIndex { s.get<struct EquipIndex>() }
	{ }
};/* Data::Structure GameData::Pouch::Material close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Material::IsEnableShortcut> = murmurhash3::hash("Pouch.Material.IsEnableShortcut");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Material::IsValid> = murmurhash3::hash("Pouch.Material.IsValid");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Material::EquipIndex> = murmurhash3::hash("Pouch.Material.EquipIndex");