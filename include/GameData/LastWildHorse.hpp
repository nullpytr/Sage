#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::LastWildHorse : Tag::Structure {
	struct Body;
	struct Mane : Tag::Enum { using type = ::Enum::Scalar<Mane>; using adapter = ::Enum::Scalar<Mane>; enum enum_type : hash_t { None = murmurhash3::hash("None"), Horse_Link_Mane = murmurhash3::hash("Horse_Link_Mane"), Horse_Link_Mane_01 = murmurhash3::hash("Horse_Link_Mane_01"), Horse_Link_Mane_02 = murmurhash3::hash("Horse_Link_Mane_02"), Horse_Link_Mane_03 = murmurhash3::hash("Horse_Link_Mane_03"), Horse_Link_Mane_04 = murmurhash3::hash("Horse_Link_Mane_04"), Horse_Link_Mane_05 = murmurhash3::hash("Horse_Link_Mane_05"), Horse_Link_Mane_06 = murmurhash3::hash("Horse_Link_Mane_06"), Horse_Link_Mane_07 = murmurhash3::hash("Horse_Link_Mane_07"), Horse_Link_Mane_08 = murmurhash3::hash("Horse_Link_Mane_08"), Horse_Link_Mane_09 = murmurhash3::hash("Horse_Link_Mane_09"), Horse_Link_Mane_00L = murmurhash3::hash("Horse_Link_Mane_00L"), Horse_Link_Mane_00S = murmurhash3::hash("Horse_Link_Mane_00S"), Horse_Link_Mane_10 = murmurhash3::hash("Horse_Link_Mane_10"), Horse_Link_Mane_11 = murmurhash3::hash("Horse_Link_Mane_11"), Horse_Link_Mane_12 = murmurhash3::hash("Horse_Link_Mane_12"), Horse_Link_Mane_01L = murmurhash3::hash("Horse_Link_Mane_01L"), }; };
	struct Rein : Tag::Enum { using type = ::Enum::Scalar<Rein>; using adapter = ::Enum::Scalar<Rein>; enum enum_type : hash_t { None = murmurhash3::hash("None"), GameRomHorseReins_00 = murmurhash3::hash("GameRomHorseReins_00"), GameRomHorseReins_01 = murmurhash3::hash("GameRomHorseReins_01"), GameRomHorseReins_02 = murmurhash3::hash("GameRomHorseReins_02"), GameRomHorseReins_03 = murmurhash3::hash("GameRomHorseReins_03"), GameRomHorseReins_04 = murmurhash3::hash("GameRomHorseReins_04"), GameRomHorseReins_05 = murmurhash3::hash("GameRomHorseReins_05"), GameRomHorseReins_06 = murmurhash3::hash("GameRomHorseReins_06"), GameRomHorseReins_00L = murmurhash3::hash("GameRomHorseReins_00L"), GameRomHorseReins_00S = murmurhash3::hash("GameRomHorseReins_00S"), }; };
	struct Saddle : Tag::Enum { using type = ::Enum::Scalar<Saddle>; using adapter = ::Enum::Scalar<Saddle>; enum enum_type : hash_t { None = murmurhash3::hash("None"), GameRomHorseSaddle_00 = murmurhash3::hash("GameRomHorseSaddle_00"), GameRomHorseSaddle_01 = murmurhash3::hash("GameRomHorseSaddle_01"), GameRomHorseSaddle_02 = murmurhash3::hash("GameRomHorseSaddle_02"), GameRomHorseSaddle_03 = murmurhash3::hash("GameRomHorseSaddle_03"), GameRomHorseSaddle_04 = murmurhash3::hash("GameRomHorseSaddle_04"), GameRomHorseSaddle_05 = murmurhash3::hash("GameRomHorseSaddle_05"), GameRomHorseSaddle_06 = murmurhash3::hash("GameRomHorseSaddle_06"), GameRomHorseSaddle_00L = murmurhash3::hash("GameRomHorseSaddle_00L"), GameRomHorseSaddle_00S = murmurhash3::hash("GameRomHorseSaddle_00S"), GameRomHorseSaddle_07 = murmurhash3::hash("GameRomHorseSaddle_07"), }; };
	struct Familiarity : Tag::Member { using type = float&; using adapter = float&; };
	struct ChargeNum : Tag::Member { using type = s32&; using adapter = s32&; };
	struct ColorType : Tag::Member { using type = s32&; using adapter = s32&; };
	struct FootType : Tag::Member { using type = s32&; using adapter = s32&; };
	struct HorsePower : Tag::Member { using type = s32&; using adapter = s32&; };
	struct HorseType : Tag::Member { using type = s32&; using adapter = s32&; };
	struct Speed : Tag::Member { using type = s32&; using adapter = s32&; };
	struct Toughness : Tag::Member { using type = s32&; using adapter = s32&; };
	struct ActorName : Tag::Member { using type = string64; using adapter = adapter<type>*; };
	struct Hair;
	struct UidHash : Tag::Member { using type = u64&; using adapter = u64&; };
};/* Tag::Structure GameData::LastWildHorse close */

#include "LastWildHorse/Body.hpp"
#include "LastWildHorse/Hair.hpp"

template <> struct Data::Structure<GameData::LastWildHorse> : GameData::LastWildHorse {
	Structure<Body> Body;
	Mane::type Mane;
	Rein::type Rein;
	Saddle::type Saddle;
	Familiarity::type Familiarity;
	ChargeNum::type ChargeNum;
	ColorType::type ColorType;
	FootType::type FootType;
	HorsePower::type HorsePower;
	HorseType::type HorseType;
	Speed::type Speed;
	Toughness::type Toughness;
	ActorName::type ActorName;
	Structure<Hair> Hair;
	UidHash::type UidHash;
	
	explicit Structure(Sav& s) : 
		Body { s },
		Mane { s.get<struct Mane>() },
		Rein { s.get<struct Rein>() },
		Saddle { s.get<struct Saddle>() },
		Familiarity { s.get<struct Familiarity>() },
		ChargeNum { s.get<struct ChargeNum>() },
		ColorType { s.get<struct ColorType>() },
		FootType { s.get<struct FootType>() },
		HorsePower { s.get<struct HorsePower>() },
		HorseType { s.get<struct HorseType>() },
		Speed { s.get<struct Speed>() },
		Toughness { s.get<struct Toughness>() },
		ActorName { s.get<struct ActorName>() },
		Hair { s },
		UidHash { s.get<struct UidHash>() }
	{ }
};/* Data::Structure GameData::LastWildHorse close */

template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Mane> = murmurhash3::hash("LastWildHorse.Mane");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Rein> = murmurhash3::hash("LastWildHorse.Rein");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Saddle> = murmurhash3::hash("LastWildHorse.Saddle");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Familiarity> = murmurhash3::hash("LastWildHorse.Familiarity");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::ChargeNum> = murmurhash3::hash("LastWildHorse.ChargeNum");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::ColorType> = murmurhash3::hash("LastWildHorse.ColorType");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::FootType> = murmurhash3::hash("LastWildHorse.FootType");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::HorsePower> = murmurhash3::hash("LastWildHorse.HorsePower");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::HorseType> = murmurhash3::hash("LastWildHorse.HorseType");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Speed> = murmurhash3::hash("LastWildHorse.Speed");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Toughness> = murmurhash3::hash("LastWildHorse.Toughness");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::ActorName> = murmurhash3::hash("LastWildHorse.ActorName");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::UidHash> = murmurhash3::hash("LastWildHorse.UidHash");