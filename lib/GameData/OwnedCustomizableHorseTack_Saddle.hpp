#pragma once
#include <sage>

struct GameData::OwnedCustomizableHorseTack_Saddle : Tag::Structure {
	struct GameRomHorseSaddle_00 : Tag::Member { using type = bool&; };
	struct GameRomHorseSaddle_01 : Tag::Member { using type = bool&; };
	struct GameRomHorseSaddle_02 : Tag::Member { using type = bool&; };
	struct GameRomHorseSaddle_03 : Tag::Member { using type = bool&; };
	struct GameRomHorseSaddle_04 : Tag::Member { using type = bool&; };
	struct GameRomHorseSaddle_05 : Tag::Member { using type = bool&; };
	struct GameRomHorseSaddle_07 : Tag::Member { using type = bool&; };
	struct GameRomHorseSaddle_07_ExternalCoupler : Tag::Member { using type = bool&; };
	struct GameRomHorseSaddle_07_WithWagon : Tag::Member { using type = bool&; };
};/* Tag::Structure GameData::OwnedCustomizableHorseTack_Saddle close */

template <> struct Data::Structure<GameData::OwnedCustomizableHorseTack_Saddle> : GameData::OwnedCustomizableHorseTack_Saddle {
	Member<GameRomHorseSaddle_00> GameRomHorseSaddle_00;
	Member<GameRomHorseSaddle_01> GameRomHorseSaddle_01;
	Member<GameRomHorseSaddle_02> GameRomHorseSaddle_02;
	Member<GameRomHorseSaddle_03> GameRomHorseSaddle_03;
	Member<GameRomHorseSaddle_04> GameRomHorseSaddle_04;
	Member<GameRomHorseSaddle_05> GameRomHorseSaddle_05;
	Member<GameRomHorseSaddle_07> GameRomHorseSaddle_07;
	Member<GameRomHorseSaddle_07_ExternalCoupler> GameRomHorseSaddle_07_ExternalCoupler;
	Member<GameRomHorseSaddle_07_WithWagon> GameRomHorseSaddle_07_WithWagon;
	
	explicit Structure(Sav& s) : 
		GameRomHorseSaddle_00 { s.get<struct GameRomHorseSaddle_00>() },
		GameRomHorseSaddle_01 { s.get<struct GameRomHorseSaddle_01>() },
		GameRomHorseSaddle_02 { s.get<struct GameRomHorseSaddle_02>() },
		GameRomHorseSaddle_03 { s.get<struct GameRomHorseSaddle_03>() },
		GameRomHorseSaddle_04 { s.get<struct GameRomHorseSaddle_04>() },
		GameRomHorseSaddle_05 { s.get<struct GameRomHorseSaddle_05>() },
		GameRomHorseSaddle_07 { s.get<struct GameRomHorseSaddle_07>() },
		GameRomHorseSaddle_07_ExternalCoupler { s.get<struct GameRomHorseSaddle_07_ExternalCoupler>() },
		GameRomHorseSaddle_07_WithWagon { s.get<struct GameRomHorseSaddle_07_WithWagon>() }
	{ }
};/* Data::Structure GameData::OwnedCustomizableHorseTack_Saddle close */

template <> hash_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Saddle::GameRomHorseSaddle_00> = murmurhash3::hash("OwnedCustomizableHorseTack_Saddle.GameRomHorseSaddle_00");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Saddle::GameRomHorseSaddle_01> = murmurhash3::hash("OwnedCustomizableHorseTack_Saddle.GameRomHorseSaddle_01");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Saddle::GameRomHorseSaddle_02> = murmurhash3::hash("OwnedCustomizableHorseTack_Saddle.GameRomHorseSaddle_02");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Saddle::GameRomHorseSaddle_03> = murmurhash3::hash("OwnedCustomizableHorseTack_Saddle.GameRomHorseSaddle_03");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Saddle::GameRomHorseSaddle_04> = murmurhash3::hash("OwnedCustomizableHorseTack_Saddle.GameRomHorseSaddle_04");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Saddle::GameRomHorseSaddle_05> = murmurhash3::hash("OwnedCustomizableHorseTack_Saddle.GameRomHorseSaddle_05");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Saddle::GameRomHorseSaddle_07> = murmurhash3::hash("OwnedCustomizableHorseTack_Saddle.GameRomHorseSaddle_07");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Saddle::GameRomHorseSaddle_07_ExternalCoupler> = murmurhash3::hash("OwnedCustomizableHorseTack_Saddle.GameRomHorseSaddle_07_ExternalCoupler");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedCustomizableHorseTack_Saddle::GameRomHorseSaddle_07_WithWagon> = murmurhash3::hash("OwnedCustomizableHorseTack_Saddle.GameRomHorseSaddle_07_WithWagon");