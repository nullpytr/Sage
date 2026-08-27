#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::OwnedCustomizableHorseTack_Reins : Tag::Structure {
	struct GameRomHorseReins_00 : Tag::Member { using type = bool&; };
	struct GameRomHorseReins_01 : Tag::Member { using type = bool&; };
	struct GameRomHorseReins_02 : Tag::Member { using type = bool&; };
	struct GameRomHorseReins_03 : Tag::Member { using type = bool&; };
	struct GameRomHorseReins_04 : Tag::Member { using type = bool&; };
	struct GameRomHorseReins_05 : Tag::Member { using type = bool&; };
};/* Tag::Structure GameData::OwnedCustomizableHorseTack_Reins close */

template <> struct Data::Structure<GameData::OwnedCustomizableHorseTack_Reins> : GameData::OwnedCustomizableHorseTack_Reins {
	Data::Member<GameRomHorseReins_00> GameRomHorseReins_00;
	Data::Member<GameRomHorseReins_01> GameRomHorseReins_01;
	Data::Member<GameRomHorseReins_02> GameRomHorseReins_02;
	Data::Member<GameRomHorseReins_03> GameRomHorseReins_03;
	Data::Member<GameRomHorseReins_04> GameRomHorseReins_04;
	Data::Member<GameRomHorseReins_05> GameRomHorseReins_05;
	
	explicit Structure(Sav& s) : 
		GameRomHorseReins_00 { s.get<struct GameRomHorseReins_00>() },
		GameRomHorseReins_01 { s.get<struct GameRomHorseReins_01>() },
		GameRomHorseReins_02 { s.get<struct GameRomHorseReins_02>() },
		GameRomHorseReins_03 { s.get<struct GameRomHorseReins_03>() },
		GameRomHorseReins_04 { s.get<struct GameRomHorseReins_04>() },
		GameRomHorseReins_05 { s.get<struct GameRomHorseReins_05>() }
	{ }
};/* Data::Structure GameData::OwnedCustomizableHorseTack_Reins close */

template <> hash_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Reins::GameRomHorseReins_00> = murmurhash3::hash("OwnedCustomizableHorseTack_Reins.GameRomHorseReins_00");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Reins::GameRomHorseReins_01> = murmurhash3::hash("OwnedCustomizableHorseTack_Reins.GameRomHorseReins_01");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Reins::GameRomHorseReins_02> = murmurhash3::hash("OwnedCustomizableHorseTack_Reins.GameRomHorseReins_02");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Reins::GameRomHorseReins_03> = murmurhash3::hash("OwnedCustomizableHorseTack_Reins.GameRomHorseReins_03");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Reins::GameRomHorseReins_04> = murmurhash3::hash("OwnedCustomizableHorseTack_Reins.GameRomHorseReins_04");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Reins::GameRomHorseReins_05> = murmurhash3::hash("OwnedCustomizableHorseTack_Reins.GameRomHorseReins_05");