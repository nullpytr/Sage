#pragma once
#include <sage>

struct GameData::SortPattern : Tag::Structure {
	struct Pouch_Armor : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), Weapon_Category = murmurhash3::hash("Weapon_Category"), Shield_Strength = murmurhash3::hash("Shield_Strength"), Bow_Strength = murmurhash3::hash("Bow_Strength"), Armor_Cateogry = murmurhash3::hash("Armor_Cateogry"), Armor_Series = murmurhash3::hash("Armor_Series"), Material_Category = murmurhash3::hash("Material_Category"), Material_ScraBuild = murmurhash3::hash("Material_ScraBuild"), Material_UseCounter = murmurhash3::hash("Material_UseCounter"), Material_SpecialParts = murmurhash3::hash("Material_SpecialParts"), Food_Effect = murmurhash3::hash("Food_Effect"), SpecialParts_Sortkey = murmurhash3::hash("SpecialParts_Sortkey"), KeyItem_SortKey = murmurhash3::hash("KeyItem_SortKey"), };
		using type = enum_t<Pouch_Armor>&;
	};
	struct Pouch_Bow : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), Weapon_Category = murmurhash3::hash("Weapon_Category"), Shield_Strength = murmurhash3::hash("Shield_Strength"), Bow_Strength = murmurhash3::hash("Bow_Strength"), Armor_Cateogry = murmurhash3::hash("Armor_Cateogry"), Armor_Series = murmurhash3::hash("Armor_Series"), Material_Category = murmurhash3::hash("Material_Category"), Material_ScraBuild = murmurhash3::hash("Material_ScraBuild"), Material_UseCounter = murmurhash3::hash("Material_UseCounter"), Material_SpecialParts = murmurhash3::hash("Material_SpecialParts"), Food_Effect = murmurhash3::hash("Food_Effect"), SpecialParts_Sortkey = murmurhash3::hash("SpecialParts_Sortkey"), KeyItem_SortKey = murmurhash3::hash("KeyItem_SortKey"), };
		using type = enum_t<Pouch_Bow>&;
	};
	struct Pouch_Food : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), Weapon_Category = murmurhash3::hash("Weapon_Category"), Shield_Strength = murmurhash3::hash("Shield_Strength"), Bow_Strength = murmurhash3::hash("Bow_Strength"), Armor_Cateogry = murmurhash3::hash("Armor_Cateogry"), Armor_Series = murmurhash3::hash("Armor_Series"), Material_Category = murmurhash3::hash("Material_Category"), Material_ScraBuild = murmurhash3::hash("Material_ScraBuild"), Material_UseCounter = murmurhash3::hash("Material_UseCounter"), Material_SpecialParts = murmurhash3::hash("Material_SpecialParts"), Food_Effect = murmurhash3::hash("Food_Effect"), SpecialParts_Sortkey = murmurhash3::hash("SpecialParts_Sortkey"), KeyItem_SortKey = murmurhash3::hash("KeyItem_SortKey"), };
		using type = enum_t<Pouch_Food>&;
	};
	struct Pouch_KeyItem : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), Weapon_Category = murmurhash3::hash("Weapon_Category"), Shield_Strength = murmurhash3::hash("Shield_Strength"), Bow_Strength = murmurhash3::hash("Bow_Strength"), Armor_Cateogry = murmurhash3::hash("Armor_Cateogry"), Armor_Series = murmurhash3::hash("Armor_Series"), Material_Category = murmurhash3::hash("Material_Category"), Material_ScraBuild = murmurhash3::hash("Material_ScraBuild"), Material_UseCounter = murmurhash3::hash("Material_UseCounter"), Material_SpecialParts = murmurhash3::hash("Material_SpecialParts"), Food_Effect = murmurhash3::hash("Food_Effect"), SpecialParts_Sortkey = murmurhash3::hash("SpecialParts_Sortkey"), KeyItem_SortKey = murmurhash3::hash("KeyItem_SortKey"), };
		using type = enum_t<Pouch_KeyItem>&;
	};
	struct Pouch_Material : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), Weapon_Category = murmurhash3::hash("Weapon_Category"), Shield_Strength = murmurhash3::hash("Shield_Strength"), Bow_Strength = murmurhash3::hash("Bow_Strength"), Armor_Cateogry = murmurhash3::hash("Armor_Cateogry"), Armor_Series = murmurhash3::hash("Armor_Series"), Material_Category = murmurhash3::hash("Material_Category"), Material_ScraBuild = murmurhash3::hash("Material_ScraBuild"), Material_UseCounter = murmurhash3::hash("Material_UseCounter"), Material_SpecialParts = murmurhash3::hash("Material_SpecialParts"), Food_Effect = murmurhash3::hash("Food_Effect"), SpecialParts_Sortkey = murmurhash3::hash("SpecialParts_Sortkey"), KeyItem_SortKey = murmurhash3::hash("KeyItem_SortKey"), };
		using type = enum_t<Pouch_Material>&;
	};
	struct Pouch_Shield : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), Weapon_Category = murmurhash3::hash("Weapon_Category"), Shield_Strength = murmurhash3::hash("Shield_Strength"), Bow_Strength = murmurhash3::hash("Bow_Strength"), Armor_Cateogry = murmurhash3::hash("Armor_Cateogry"), Armor_Series = murmurhash3::hash("Armor_Series"), Material_Category = murmurhash3::hash("Material_Category"), Material_ScraBuild = murmurhash3::hash("Material_ScraBuild"), Material_UseCounter = murmurhash3::hash("Material_UseCounter"), Material_SpecialParts = murmurhash3::hash("Material_SpecialParts"), Food_Effect = murmurhash3::hash("Food_Effect"), SpecialParts_Sortkey = murmurhash3::hash("SpecialParts_Sortkey"), KeyItem_SortKey = murmurhash3::hash("KeyItem_SortKey"), };
		using type = enum_t<Pouch_Shield>&;
	};
	struct Pouch_SpecialParts : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), Weapon_Category = murmurhash3::hash("Weapon_Category"), Shield_Strength = murmurhash3::hash("Shield_Strength"), Bow_Strength = murmurhash3::hash("Bow_Strength"), Armor_Cateogry = murmurhash3::hash("Armor_Cateogry"), Armor_Series = murmurhash3::hash("Armor_Series"), Material_Category = murmurhash3::hash("Material_Category"), Material_ScraBuild = murmurhash3::hash("Material_ScraBuild"), Material_UseCounter = murmurhash3::hash("Material_UseCounter"), Material_SpecialParts = murmurhash3::hash("Material_SpecialParts"), Food_Effect = murmurhash3::hash("Food_Effect"), SpecialParts_Sortkey = murmurhash3::hash("SpecialParts_Sortkey"), KeyItem_SortKey = murmurhash3::hash("KeyItem_SortKey"), };
		using type = enum_t<Pouch_SpecialParts>&;
	};
	struct Pouch_Weapon : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), Weapon_Category = murmurhash3::hash("Weapon_Category"), Shield_Strength = murmurhash3::hash("Shield_Strength"), Bow_Strength = murmurhash3::hash("Bow_Strength"), Armor_Cateogry = murmurhash3::hash("Armor_Cateogry"), Armor_Series = murmurhash3::hash("Armor_Series"), Material_Category = murmurhash3::hash("Material_Category"), Material_ScraBuild = murmurhash3::hash("Material_ScraBuild"), Material_UseCounter = murmurhash3::hash("Material_UseCounter"), Material_SpecialParts = murmurhash3::hash("Material_SpecialParts"), Food_Effect = murmurhash3::hash("Food_Effect"), SpecialParts_Sortkey = murmurhash3::hash("SpecialParts_Sortkey"), KeyItem_SortKey = murmurhash3::hash("KeyItem_SortKey"), };
		using type = enum_t<Pouch_Weapon>&;
	};
	struct ShortCut_Bow : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), Weapon_Category = murmurhash3::hash("Weapon_Category"), Shield_Strength = murmurhash3::hash("Shield_Strength"), Bow_Strength = murmurhash3::hash("Bow_Strength"), Armor_Cateogry = murmurhash3::hash("Armor_Cateogry"), Armor_Series = murmurhash3::hash("Armor_Series"), Material_Category = murmurhash3::hash("Material_Category"), Material_ScraBuild = murmurhash3::hash("Material_ScraBuild"), Material_UseCounter = murmurhash3::hash("Material_UseCounter"), Material_SpecialParts = murmurhash3::hash("Material_SpecialParts"), Food_Effect = murmurhash3::hash("Food_Effect"), SpecialParts_Sortkey = murmurhash3::hash("SpecialParts_Sortkey"), KeyItem_SortKey = murmurhash3::hash("KeyItem_SortKey"), };
		using type = enum_t<ShortCut_Bow>&;
	};
	struct ShortCut_Material : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), Weapon_Category = murmurhash3::hash("Weapon_Category"), Shield_Strength = murmurhash3::hash("Shield_Strength"), Bow_Strength = murmurhash3::hash("Bow_Strength"), Armor_Cateogry = murmurhash3::hash("Armor_Cateogry"), Armor_Series = murmurhash3::hash("Armor_Series"), Material_Category = murmurhash3::hash("Material_Category"), Material_ScraBuild = murmurhash3::hash("Material_ScraBuild"), Material_UseCounter = murmurhash3::hash("Material_UseCounter"), Material_SpecialParts = murmurhash3::hash("Material_SpecialParts"), Food_Effect = murmurhash3::hash("Food_Effect"), SpecialParts_Sortkey = murmurhash3::hash("SpecialParts_Sortkey"), KeyItem_SortKey = murmurhash3::hash("KeyItem_SortKey"), };
		using type = enum_t<ShortCut_Material>&;
	};
	struct ShortCut_Shield : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), Weapon_Category = murmurhash3::hash("Weapon_Category"), Shield_Strength = murmurhash3::hash("Shield_Strength"), Bow_Strength = murmurhash3::hash("Bow_Strength"), Armor_Cateogry = murmurhash3::hash("Armor_Cateogry"), Armor_Series = murmurhash3::hash("Armor_Series"), Material_Category = murmurhash3::hash("Material_Category"), Material_ScraBuild = murmurhash3::hash("Material_ScraBuild"), Material_UseCounter = murmurhash3::hash("Material_UseCounter"), Material_SpecialParts = murmurhash3::hash("Material_SpecialParts"), Food_Effect = murmurhash3::hash("Food_Effect"), SpecialParts_Sortkey = murmurhash3::hash("SpecialParts_Sortkey"), KeyItem_SortKey = murmurhash3::hash("KeyItem_SortKey"), };
		using type = enum_t<ShortCut_Shield>&;
	};
	struct ShortCut_Weapon : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), Weapon_Category = murmurhash3::hash("Weapon_Category"), Shield_Strength = murmurhash3::hash("Shield_Strength"), Bow_Strength = murmurhash3::hash("Bow_Strength"), Armor_Cateogry = murmurhash3::hash("Armor_Cateogry"), Armor_Series = murmurhash3::hash("Armor_Series"), Material_Category = murmurhash3::hash("Material_Category"), Material_ScraBuild = murmurhash3::hash("Material_ScraBuild"), Material_UseCounter = murmurhash3::hash("Material_UseCounter"), Material_SpecialParts = murmurhash3::hash("Material_SpecialParts"), Food_Effect = murmurhash3::hash("Food_Effect"), SpecialParts_Sortkey = murmurhash3::hash("SpecialParts_Sortkey"), KeyItem_SortKey = murmurhash3::hash("KeyItem_SortKey"), };
		using type = enum_t<ShortCut_Weapon>&;
	};
};/* Tag::Structure GameData::SortPattern close */

template <> struct Data::Structure<GameData::SortPattern> : GameData::SortPattern {
	Enum<Pouch_Armor> Pouch_Armor;
	Enum<Pouch_Bow> Pouch_Bow;
	Enum<Pouch_Food> Pouch_Food;
	Enum<Pouch_KeyItem> Pouch_KeyItem;
	Enum<Pouch_Material> Pouch_Material;
	Enum<Pouch_Shield> Pouch_Shield;
	Enum<Pouch_SpecialParts> Pouch_SpecialParts;
	Enum<Pouch_Weapon> Pouch_Weapon;
	Enum<ShortCut_Bow> ShortCut_Bow;
	Enum<ShortCut_Material> ShortCut_Material;
	Enum<ShortCut_Shield> ShortCut_Shield;
	Enum<ShortCut_Weapon> ShortCut_Weapon;
	
	explicit Structure(Sav& s) : 
		Pouch_Armor { s.get<struct Pouch_Armor>() },
		Pouch_Bow { s.get<struct Pouch_Bow>() },
		Pouch_Food { s.get<struct Pouch_Food>() },
		Pouch_KeyItem { s.get<struct Pouch_KeyItem>() },
		Pouch_Material { s.get<struct Pouch_Material>() },
		Pouch_Shield { s.get<struct Pouch_Shield>() },
		Pouch_SpecialParts { s.get<struct Pouch_SpecialParts>() },
		Pouch_Weapon { s.get<struct Pouch_Weapon>() },
		ShortCut_Bow { s.get<struct ShortCut_Bow>() },
		ShortCut_Material { s.get<struct ShortCut_Material>() },
		ShortCut_Shield { s.get<struct ShortCut_Shield>() },
		ShortCut_Weapon { s.get<struct ShortCut_Weapon>() }
	{ }
};/* Data::Structure GameData::SortPattern close */

template <> hash_t constexpr Data::Hashtable<GameData::SortPattern::Pouch_Armor> = murmurhash3::hash("SortPattern.Pouch_Armor");
template <> hash_t constexpr Data::Hashtable<GameData::SortPattern::Pouch_Bow> = murmurhash3::hash("SortPattern.Pouch_Bow");
template <> hash_t constexpr Data::Hashtable<GameData::SortPattern::Pouch_Food> = murmurhash3::hash("SortPattern.Pouch_Food");
template <> hash_t constexpr Data::Hashtable<GameData::SortPattern::Pouch_KeyItem> = murmurhash3::hash("SortPattern.Pouch_KeyItem");
template <> hash_t constexpr Data::Hashtable<GameData::SortPattern::Pouch_Material> = murmurhash3::hash("SortPattern.Pouch_Material");
template <> hash_t constexpr Data::Hashtable<GameData::SortPattern::Pouch_Shield> = murmurhash3::hash("SortPattern.Pouch_Shield");
template <> hash_t constexpr Data::Hashtable<GameData::SortPattern::Pouch_SpecialParts> = murmurhash3::hash("SortPattern.Pouch_SpecialParts");
template <> hash_t constexpr Data::Hashtable<GameData::SortPattern::Pouch_Weapon> = murmurhash3::hash("SortPattern.Pouch_Weapon");
template <> hash_t constexpr Data::Hashtable<GameData::SortPattern::ShortCut_Bow> = murmurhash3::hash("SortPattern.ShortCut_Bow");
template <> hash_t constexpr Data::Hashtable<GameData::SortPattern::ShortCut_Material> = murmurhash3::hash("SortPattern.ShortCut_Material");
template <> hash_t constexpr Data::Hashtable<GameData::SortPattern::ShortCut_Shield> = murmurhash3::hash("SortPattern.ShortCut_Shield");
template <> hash_t constexpr Data::Hashtable<GameData::SortPattern::ShortCut_Weapon> = murmurhash3::hash("SortPattern.ShortCut_Weapon");