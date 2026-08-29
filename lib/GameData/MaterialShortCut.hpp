#pragma once
#include <sage>

struct GameData::MaterialShortCut : Tag::Structure {
	struct PouchIndex : Tag::Member { using type = s32&; };
	struct Category : Tag::Enum {
		enum underlying_enum_t : hash_t { Weapon = murmurhash3::hash("Weapon"), Bow = murmurhash3::hash("Bow"), Arrow = murmurhash3::hash("Arrow"), Shield = murmurhash3::hash("Shield"), Armor = murmurhash3::hash("Armor"), Material = murmurhash3::hash("Material"), Food = murmurhash3::hash("Food"), SpecialParts = murmurhash3::hash("SpecialParts"), KeyItem = murmurhash3::hash("KeyItem"), Rupee = murmurhash3::hash("Rupee"), Grain = murmurhash3::hash("Grain"), SpecialPower = murmurhash3::hash("SpecialPower"), };
		using type = enum_t<Category>&;
	};
};/* Tag::Structure GameData::MaterialShortCut close */

template <> struct Data::Structure<GameData::MaterialShortCut> : GameData::MaterialShortCut {
	Member<PouchIndex> PouchIndex;
	Enum<Category> Category;
	
	explicit Structure(Sav& s) : 
		PouchIndex { s.get<struct PouchIndex>() },
		Category { s.get<struct Category>() }
	{ }
};/* Data::Structure GameData::MaterialShortCut close */

template <> hash_value_t constexpr Data::Hashtable<GameData::MaterialShortCut::PouchIndex> { "MaterialShortCut.PouchIndex" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MaterialShortCut::Category> { "MaterialShortCut.Category" };