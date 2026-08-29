#pragma once
#include <sage>

struct GameData::Pouch::Armor::EquipIndexes : Tag::Structure {
	struct Bottom : Tag::Member { using type = span<s32>*; };
	struct Head : Tag::Member { using type = span<s32>*; };
	struct Upper : Tag::Member { using type = span<s32>*; };
};/* Tag::Structure GameData::Pouch::Armor::EquipIndexes close */

template <> struct Data::Structure<GameData::Pouch::Armor::EquipIndexes> : GameData::Pouch::Armor::EquipIndexes {
	Member<Bottom> Bottom;
	Member<Head> Head;
	Member<Upper> Upper;
	
	explicit Structure(Sav& s) : 
		Bottom { s.get<struct Bottom>() },
		Head { s.get<struct Head>() },
		Upper { s.get<struct Upper>() }
	{ }
};/* Data::Structure GameData::Pouch::Armor::EquipIndexes close */

template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Armor::EquipIndexes::Bottom> { "Pouch.Armor.EquipIndexes.Bottom" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Armor::EquipIndexes::Head> { "Pouch.Armor.EquipIndexes.Head" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Armor::EquipIndexes::Upper> { "Pouch.Armor.EquipIndexes.Upper" };