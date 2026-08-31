#pragma once
#include <sage>

struct GameData::DeadHorseList : Tag::Structure {
	struct ActorName : Tag::Member { using type = adaptive_range<string64>*; };
	struct ChargeNum : Tag::Member { using type = span<s32>*; };
	struct ColorType : Tag::Member { using type = span<s32>*; };
	struct DeadCause : Tag::Member { using type = span<s32>*; };
	struct Familiarity : Tag::Member { using type = span<float>*; };
	struct FootType : Tag::Member { using type = span<s32>*; };
	struct HorsePower : Tag::Member { using type = span<s32>*; };
	struct HorseType : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = adaptive_range<wstring16>*; };
	struct Speed : Tag::Member { using type = span<s32>*; };
	struct Toughness : Tag::Member { using type = span<s32>*; };
	struct UidHash : Tag::Member { using type = span<u64>*; };
	struct Mane : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), Horse_Link_Mane = murmurhash3::hash("Horse_Link_Mane"), Horse_Link_Mane_01 = murmurhash3::hash("Horse_Link_Mane_01"), Horse_Link_Mane_02 = murmurhash3::hash("Horse_Link_Mane_02"), Horse_Link_Mane_03 = murmurhash3::hash("Horse_Link_Mane_03"), Horse_Link_Mane_04 = murmurhash3::hash("Horse_Link_Mane_04"), Horse_Link_Mane_05 = murmurhash3::hash("Horse_Link_Mane_05"), Horse_Link_Mane_06 = murmurhash3::hash("Horse_Link_Mane_06"), Horse_Link_Mane_07 = murmurhash3::hash("Horse_Link_Mane_07"), Horse_Link_Mane_08 = murmurhash3::hash("Horse_Link_Mane_08"), Horse_Link_Mane_09 = murmurhash3::hash("Horse_Link_Mane_09"), Horse_Link_Mane_00L = murmurhash3::hash("Horse_Link_Mane_00L"), Horse_Link_Mane_00S = murmurhash3::hash("Horse_Link_Mane_00S"), Horse_Link_Mane_10 = murmurhash3::hash("Horse_Link_Mane_10"), Horse_Link_Mane_11 = murmurhash3::hash("Horse_Link_Mane_11"), Horse_Link_Mane_12 = murmurhash3::hash("Horse_Link_Mane_12"), Horse_Link_Mane_01L = murmurhash3::hash("Horse_Link_Mane_01L"), }; };
		using type = span<enum_t<Mane>>*;
	};
	struct Rein : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), GameRomHorseReins_00 = murmurhash3::hash("GameRomHorseReins_00"), GameRomHorseReins_01 = murmurhash3::hash("GameRomHorseReins_01"), GameRomHorseReins_02 = murmurhash3::hash("GameRomHorseReins_02"), GameRomHorseReins_03 = murmurhash3::hash("GameRomHorseReins_03"), GameRomHorseReins_04 = murmurhash3::hash("GameRomHorseReins_04"), GameRomHorseReins_05 = murmurhash3::hash("GameRomHorseReins_05"), GameRomHorseReins_06 = murmurhash3::hash("GameRomHorseReins_06"), GameRomHorseReins_00L = murmurhash3::hash("GameRomHorseReins_00L"), GameRomHorseReins_00S = murmurhash3::hash("GameRomHorseReins_00S"), }; };
		using type = span<enum_t<Rein>>*;
	};
	struct Saddle : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), GameRomHorseSaddle_00 = murmurhash3::hash("GameRomHorseSaddle_00"), GameRomHorseSaddle_01 = murmurhash3::hash("GameRomHorseSaddle_01"), GameRomHorseSaddle_02 = murmurhash3::hash("GameRomHorseSaddle_02"), GameRomHorseSaddle_03 = murmurhash3::hash("GameRomHorseSaddle_03"), GameRomHorseSaddle_04 = murmurhash3::hash("GameRomHorseSaddle_04"), GameRomHorseSaddle_05 = murmurhash3::hash("GameRomHorseSaddle_05"), GameRomHorseSaddle_06 = murmurhash3::hash("GameRomHorseSaddle_06"), GameRomHorseSaddle_00L = murmurhash3::hash("GameRomHorseSaddle_00L"), GameRomHorseSaddle_00S = murmurhash3::hash("GameRomHorseSaddle_00S"), GameRomHorseSaddle_07 = murmurhash3::hash("GameRomHorseSaddle_07"), }; };
		using type = span<enum_t<Saddle>>*;
	};
	struct Body;
	struct Hair;
};/* Tag::Structure GameData::DeadHorseList close */

#include "DeadHorseList/Body.hpp"
#include "DeadHorseList/Hair.hpp"

template <> struct Data::Structure<GameData::DeadHorseList> : GameData::DeadHorseList {
	Member<ActorName> ActorName;
	Member<ChargeNum> ChargeNum;
	Member<ColorType> ColorType;
	Member<DeadCause> DeadCause;
	Member<Familiarity> Familiarity;
	Member<FootType> FootType;
	Member<HorsePower> HorsePower;
	Member<HorseType> HorseType;
	Member<Name> Name;
	Member<Speed> Speed;
	Member<Toughness> Toughness;
	Member<UidHash> UidHash;
	Enum<Mane> Mane;
	Enum<Rein> Rein;
	Enum<Saddle> Saddle;
	Structure<Body> Body;
	Structure<Hair> Hair;
	
	explicit Structure(Sav& s) : 
		ActorName { s.get<struct ActorName>() },
		ChargeNum { s.get<struct ChargeNum>() },
		ColorType { s.get<struct ColorType>() },
		DeadCause { s.get<struct DeadCause>() },
		Familiarity { s.get<struct Familiarity>() },
		FootType { s.get<struct FootType>() },
		HorsePower { s.get<struct HorsePower>() },
		HorseType { s.get<struct HorseType>() },
		Name { s.get<struct Name>() },
		Speed { s.get<struct Speed>() },
		Toughness { s.get<struct Toughness>() },
		UidHash { s.get<struct UidHash>() },
		Mane { s.get<struct Mane>() },
		Rein { s.get<struct Rein>() },
		Saddle { s.get<struct Saddle>() },
		Body { s },
		Hair { s }
	{ }
};/* Data::Structure GameData::DeadHorseList close */

template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::ActorName> { "DeadHorseList.ActorName" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::ChargeNum> { "DeadHorseList.ChargeNum" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::ColorType> { "DeadHorseList.ColorType" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::DeadCause> { "DeadHorseList.DeadCause" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::Familiarity> { "DeadHorseList.Familiarity" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::FootType> { "DeadHorseList.FootType" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::HorsePower> { "DeadHorseList.HorsePower" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::HorseType> { "DeadHorseList.HorseType" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::Name> { "DeadHorseList.Name" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::Speed> { "DeadHorseList.Speed" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::Toughness> { "DeadHorseList.Toughness" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::UidHash> { "DeadHorseList.UidHash" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::Mane> { "DeadHorseList.Mane" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::Rein> { "DeadHorseList.Rein" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::Saddle> { "DeadHorseList.Saddle" };