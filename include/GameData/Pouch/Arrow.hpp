#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::Pouch::Arrow : Tag::Structure {
	struct IsValid : Tag::Member { using type = span<bool>; using adapter = adapter<type>*; };
	struct Combined;
	struct Content;
	struct EquipIndex : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::Pouch::Arrow close */

#include "Arrow/Combined.hpp"
#include "Arrow/Content.hpp"

template <> struct Data::Structure<GameData::Pouch::Arrow> : GameData::Pouch::Arrow {
	IsValid::type IsValid;
	Structure<Combined> Combined;
	Structure<Content> Content;
	EquipIndex::type EquipIndex;
	
	explicit Structure(Sav& s) : 
		IsValid { s.get<struct IsValid>() },
		Combined { s },
		Content { s },
		EquipIndex { s.get<struct EquipIndex>() }
	{ }
};/* Data::Structure GameData::Pouch::Arrow close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Arrow::IsValid> = murmurhash3::hash("Pouch.Arrow.IsValid");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Arrow::EquipIndex> = murmurhash3::hash("Pouch.Arrow.EquipIndex");