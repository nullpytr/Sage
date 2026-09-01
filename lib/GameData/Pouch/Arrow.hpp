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
		Combined { s.get<struct Combined>() },
		Content { s.get<struct Content>() }
	{ }
};/* Structure Data::Structure GameData::Pouch::Arrow close */

template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Arrow::EquipIndex> { "Pouch.Arrow.EquipIndex" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Arrow::IsValid> { "Pouch.Arrow.IsValid" };