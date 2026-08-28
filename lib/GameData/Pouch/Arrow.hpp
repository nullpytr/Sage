#pragma once
#include <sage>

struct GameData::Pouch::Arrow : Tag::Structure {
	struct EquipIndex : Tag::Member { using type = span<s32>*; };
	struct IsValid : Tag::Member { using type = span<bool>*; };
	struct Combined;
	struct Content;
};/* Tag::Structure GameData::Pouch::Arrow close */

#include "Arrow/Combined.hpp"
#include "Arrow/Content.hpp"

template <> struct Data::Structure<GameData::Pouch::Arrow> : GameData::Pouch::Arrow {
	Member<EquipIndex> EquipIndex;
	Member<IsValid> IsValid;
	Structure<Combined> Combined;
	Structure<Content> Content;
	
	explicit Structure(Sav& s) : 
		EquipIndex { s.get<struct EquipIndex>() },
		IsValid { s.get<struct IsValid>() },
		Combined { s },
		Content { s }
	{ }
};/* Data::Structure GameData::Pouch::Arrow close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Arrow::EquipIndex> = murmurhash3::hash("Pouch.Arrow.EquipIndex");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Arrow::IsValid> = murmurhash3::hash("Pouch.Arrow.IsValid");