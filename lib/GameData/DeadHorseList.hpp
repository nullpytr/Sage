#pragma once
#include <sage>

struct GameData::DeadHorseList : Tag::Structure {
	struct Name : Tag::Member { using type = adaptive_range<wstring16>*; };
	struct UidHash : Tag::Member { using type = span<u64>*; };
	struct ActorName : Tag::Member { using type = adaptive_range<string64>*; };
	struct ChargeNum : Tag::Member { using type = span<s32>*; };
	struct ColorType : Tag::Member { using type = span<s32>*; };
	struct DeadCause : Tag::Member { using type = span<s32>*; };
	struct FootType : Tag::Member { using type = span<s32>*; };
	struct HorsePower : Tag::Member { using type = span<s32>*; };
	struct HorseType : Tag::Member { using type = span<s32>*; };
	struct Speed : Tag::Member { using type = span<s32>*; };
	struct Toughness : Tag::Member { using type = span<s32>*; };
	struct Familiarity : Tag::Member { using type = span<float>*; };
	struct Body;
	struct Mane : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), Horse_Link_Mane = murmurhash3::hash("Horse_Link_Mane"), Horse_Link_Mane_01 = murmurhash3::hash("Horse_Link_Mane_01"), Horse_Link_Mane_02 = murmurhash3::hash("Horse_Link_Mane_02"), Horse_Link_Mane_03 = murmurhash3::hash("Horse_Link_Mane_03"), Horse_Link_Mane_04 = murmurhash3::hash("Horse_Link_Mane_04"), Horse_Link_Mane_05 = murmurhash3::hash("Horse_Link_Mane_05"), Horse_Link_Mane_06 = murmurhash3::hash("Horse_Link_Mane_06"), Horse_Link_Mane_07 = murmurhash3::hash("Horse_Link_Mane_07"), Horse_Link_Mane_08 = murmurhash3::hash("Horse_Link_Mane_08"), Horse_Link_Mane_09 = murmurhash3::hash("Horse_Link_Mane_09"), Horse_Link_Mane_00L = murmurhash3::hash("Horse_Link_Mane_00L"), Horse_Link_Mane_00S = murmurhash3::hash("Horse_Link_Mane_00S"), Horse_Link_Mane_10 = murmurhash3::hash("Horse_Link_Mane_10"), Horse_Link_Mane_11 = murmurhash3::hash("Horse_Link_Mane_11"), Horse_Link_Mane_12 = murmurhash3::hash("Horse_Link_Mane_12"), Horse_Link_Mane_01L = murmurhash3::hash("Horse_Link_Mane_01L"), };
		using type = span<enum_t<Mane>>*;
	};
	struct Rein : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), GameRomHorseReins_00 = murmurhash3::hash("GameRomHorseReins_00"), GameRomHorseReins_01 = murmurhash3::hash("GameRomHorseReins_01"), GameRomHorseReins_02 = murmurhash3::hash("GameRomHorseReins_02"), GameRomHorseReins_03 = murmurhash3::hash("GameRomHorseReins_03"), GameRomHorseReins_04 = murmurhash3::hash("GameRomHorseReins_04"), GameRomHorseReins_05 = murmurhash3::hash("GameRomHorseReins_05"), GameRomHorseReins_06 = murmurhash3::hash("GameRomHorseReins_06"), GameRomHorseReins_00L = murmurhash3::hash("GameRomHorseReins_00L"), GameRomHorseReins_00S = murmurhash3::hash("GameRomHorseReins_00S"), };
		using type = span<enum_t<Rein>>*;
	};
	struct Saddle : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), GameRomHorseSaddle_00 = murmurhash3::hash("GameRomHorseSaddle_00"), GameRomHorseSaddle_01 = murmurhash3::hash("GameRomHorseSaddle_01"), GameRomHorseSaddle_02 = murmurhash3::hash("GameRomHorseSaddle_02"), GameRomHorseSaddle_03 = murmurhash3::hash("GameRomHorseSaddle_03"), GameRomHorseSaddle_04 = murmurhash3::hash("GameRomHorseSaddle_04"), GameRomHorseSaddle_05 = murmurhash3::hash("GameRomHorseSaddle_05"), GameRomHorseSaddle_06 = murmurhash3::hash("GameRomHorseSaddle_06"), GameRomHorseSaddle_00L = murmurhash3::hash("GameRomHorseSaddle_00L"), GameRomHorseSaddle_00S = murmurhash3::hash("GameRomHorseSaddle_00S"), GameRomHorseSaddle_07 = murmurhash3::hash("GameRomHorseSaddle_07"), };
		using type = span<enum_t<Saddle>>*;
	};
	struct Hair;
};/* Tag::Structure GameData::DeadHorseList close */

#include "DeadHorseList/Body.hpp"
#include "DeadHorseList/Hair.hpp"

template <> struct Data::Structure<GameData::DeadHorseList> : GameData::DeadHorseList {
	Member<Name> Name;
	Member<UidHash> UidHash;
	Member<ActorName> ActorName;
	Member<ChargeNum> ChargeNum;
	Member<ColorType> ColorType;
	Member<DeadCause> DeadCause;
	Member<FootType> FootType;
	Member<HorsePower> HorsePower;
	Member<HorseType> HorseType;
	Member<Speed> Speed;
	Member<Toughness> Toughness;
	Member<Familiarity> Familiarity;
	Structure<Body> Body;
	Enum<Mane> Mane;
	Enum<Rein> Rein;
	Enum<Saddle> Saddle;
	Structure<Hair> Hair;
	
	explicit Structure(Sav& s) : 
		Name { s.get<struct Name>() },
		UidHash { s.get<struct UidHash>() },
		ActorName { s.get<struct ActorName>() },
		ChargeNum { s.get<struct ChargeNum>() },
		ColorType { s.get<struct ColorType>() },
		DeadCause { s.get<struct DeadCause>() },
		FootType { s.get<struct FootType>() },
		HorsePower { s.get<struct HorsePower>() },
		HorseType { s.get<struct HorseType>() },
		Speed { s.get<struct Speed>() },
		Toughness { s.get<struct Toughness>() },
		Familiarity { s.get<struct Familiarity>() },
		Body { s },
		Mane { s.get<struct Mane>() },
		Rein { s.get<struct Rein>() },
		Saddle { s.get<struct Saddle>() },
		Hair { s }
	{ }
};/* Data::Structure GameData::DeadHorseList close */

template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Name> = murmurhash3::hash("DeadHorseList.Name");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::UidHash> = murmurhash3::hash("DeadHorseList.UidHash");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::ActorName> = murmurhash3::hash("DeadHorseList.ActorName");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::ChargeNum> = murmurhash3::hash("DeadHorseList.ChargeNum");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::ColorType> = murmurhash3::hash("DeadHorseList.ColorType");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::DeadCause> = murmurhash3::hash("DeadHorseList.DeadCause");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::FootType> = murmurhash3::hash("DeadHorseList.FootType");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::HorsePower> = murmurhash3::hash("DeadHorseList.HorsePower");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::HorseType> = murmurhash3::hash("DeadHorseList.HorseType");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Speed> = murmurhash3::hash("DeadHorseList.Speed");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Toughness> = murmurhash3::hash("DeadHorseList.Toughness");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Familiarity> = murmurhash3::hash("DeadHorseList.Familiarity");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Mane> = murmurhash3::hash("DeadHorseList.Mane");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Rein> = murmurhash3::hash("DeadHorseList.Rein");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Saddle> = murmurhash3::hash("DeadHorseList.Saddle");