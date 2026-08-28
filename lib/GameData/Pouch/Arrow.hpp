#pragma once
#include <sage>

struct GameData::Pouch::Arrow : Tag::Structure {
	struct IsValid : Tag::Member { using type = span<bool>*; };
	struct Combined;
	struct Content;
	struct EquipIndex : Tag::Member { using type = span<s32>*; };
};/* Tag::Structure GameData::Pouch::Arrow close */

#include "Arrow/Combined.hpp"
#include "Arrow/Content.hpp"

template <> struct Data::Structure<GameData::Pouch::Arrow> : GameData::Pouch::Arrow {
	Data::Member<IsValid> IsValid;
	Structure<Combined> Combined;
	Structure<Content> Content;
	Data::Member<EquipIndex> EquipIndex;
	
	explicit Structure(Sav& s) : 
		IsValid { s.get<struct IsValid>() },
		Combined { s },
		Content { s },
		EquipIndex { s.get<struct EquipIndex>() }
	{ }
};/* Data::Structure GameData::Pouch::Arrow close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Arrow::IsValid> = murmurhash3::hash("Pouch.Arrow.IsValid");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Arrow::EquipIndex> = murmurhash3::hash("Pouch.Arrow.EquipIndex");