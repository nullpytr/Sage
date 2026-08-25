#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::Pouch::Armor::EquipIndexes : Tag::Structure {
	struct Bottom : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct Head : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct Upper : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::Pouch::Armor::EquipIndexes close */

template <> struct Data::Structure<GameData::Pouch::Armor::EquipIndexes> : GameData::Pouch::Armor::EquipIndexes {
	Bottom::type Bottom;
	Head::type Head;
	Upper::type Upper;
	
	explicit Structure(Sav& s) : 
		Bottom { s.get<struct Bottom>() },
		Head { s.get<struct Head>() },
		Upper { s.get<struct Upper>() }
	{ }
};/* Data::Structure GameData::Pouch::Armor::EquipIndexes close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Armor::EquipIndexes::Bottom> = murmurhash3::hash("Pouch.Armor.EquipIndexes.Bottom");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Armor::EquipIndexes::Head> = murmurhash3::hash("Pouch.Armor.EquipIndexes.Head");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Armor::EquipIndexes::Upper> = murmurhash3::hash("Pouch.Armor.EquipIndexes.Upper");