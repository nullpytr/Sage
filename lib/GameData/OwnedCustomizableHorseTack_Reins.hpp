#pragma once
#include <sage>

struct GameData::OwnedCustomizableHorseTack_Reins : Tag::Map {
	struct GameRomHorseReins_00 : Tag::Member { using type = bool&; };
	struct GameRomHorseReins_01 : Tag::Member { using type = bool&; };
	struct GameRomHorseReins_02 : Tag::Member { using type = bool&; };
	struct GameRomHorseReins_03 : Tag::Member { using type = bool&; };
	struct GameRomHorseReins_04 : Tag::Member { using type = bool&; };
	struct GameRomHorseReins_05 : Tag::Member { using type = bool&; };
	using type = std::decay_t<GameRomHorseReins_00::type>;
};/* Tag::Map GameData::OwnedCustomizableHorseTack_Reins close */

template <> struct Data::Structure<GameData::OwnedCustomizableHorseTack_Reins> : GameData::OwnedCustomizableHorseTack_Reins {
	Member<GameRomHorseReins_00> GameRomHorseReins_00;
	Member<GameRomHorseReins_01> GameRomHorseReins_01;
	Member<GameRomHorseReins_02> GameRomHorseReins_02;
	Member<GameRomHorseReins_03> GameRomHorseReins_03;
	Member<GameRomHorseReins_04> GameRomHorseReins_04;
	Member<GameRomHorseReins_05> GameRomHorseReins_05;
	
	explicit Structure(Sav& s) : 
		GameRomHorseReins_00 { s.get<struct GameRomHorseReins_00>() },
		GameRomHorseReins_01 { s.get<struct GameRomHorseReins_01>() },
		GameRomHorseReins_02 { s.get<struct GameRomHorseReins_02>() },
		GameRomHorseReins_03 { s.get<struct GameRomHorseReins_03>() },
		GameRomHorseReins_04 { s.get<struct GameRomHorseReins_04>() },
		GameRomHorseReins_05 { s.get<struct GameRomHorseReins_05>() }
	{ }
};/* Map Data::Structure GameData::OwnedCustomizableHorseTack_Reins close */

template <> hash_value_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Reins::GameRomHorseReins_00> { "OwnedCustomizableHorseTack_Reins.GameRomHorseReins_00" };
template <> hash_value_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Reins::GameRomHorseReins_01> { "OwnedCustomizableHorseTack_Reins.GameRomHorseReins_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Reins::GameRomHorseReins_02> { "OwnedCustomizableHorseTack_Reins.GameRomHorseReins_02" };
template <> hash_value_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Reins::GameRomHorseReins_03> { "OwnedCustomizableHorseTack_Reins.GameRomHorseReins_03" };
template <> hash_value_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Reins::GameRomHorseReins_04> { "OwnedCustomizableHorseTack_Reins.GameRomHorseReins_04" };
template <> hash_value_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Reins::GameRomHorseReins_05> { "OwnedCustomizableHorseTack_Reins.GameRomHorseReins_05" };