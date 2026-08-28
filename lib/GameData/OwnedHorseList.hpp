#pragma once
#include <sage>

struct GameData::OwnedHorseList : Tag::Structure {
	struct Name : Tag::Member { using type = adaptive_range<wstring16>*; };
	struct UidHash : Tag::Member { using type = span<u64>*; };
	struct ActorName : Tag::Member { using type = adaptive_range<string64>*; };
	struct ChargeNum : Tag::Member { using type = span<s32>*; };
	struct ColorType : Tag::Member { using type = span<s32>*; };
	struct FootType : Tag::Member { using type = span<s32>*; };
	struct HorsePower : Tag::Member { using type = span<s32>*; };
	struct HorseType : Tag::Member { using type = span<s32>*; };
	struct RoomID : Tag::Member { using type = span<s32>*; };
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
	struct IsFamiliarityChecked : Tag::Member { using type = span<bool>*; };
	struct Hair;
};/* Tag::Structure GameData::OwnedHorseList close */

#include "OwnedHorseList/Body.hpp"
#include "OwnedHorseList/Hair.hpp"

template <> struct Data::Structure<GameData::OwnedHorseList> : GameData::OwnedHorseList {
	Data::Member<Name> Name;
	Data::Member<UidHash> UidHash;
	Data::Member<ActorName> ActorName;
	Data::Member<ChargeNum> ChargeNum;
	Data::Member<ColorType> ColorType;
	Data::Member<FootType> FootType;
	Data::Member<HorsePower> HorsePower;
	Data::Member<HorseType> HorseType;
	Data::Member<RoomID> RoomID;
	Data::Member<Speed> Speed;
	Data::Member<Toughness> Toughness;
	Data::Member<Familiarity> Familiarity;
	Structure<Body> Body;
	Data::Enum<Mane> Mane;
	Data::Enum<Rein> Rein;
	Data::Enum<Saddle> Saddle;
	Data::Member<IsFamiliarityChecked> IsFamiliarityChecked;
	Structure<Hair> Hair;
	
	explicit Structure(Sav& s) : 
		Name { s.get<struct Name>() },
		UidHash { s.get<struct UidHash>() },
		ActorName { s.get<struct ActorName>() },
		ChargeNum { s.get<struct ChargeNum>() },
		ColorType { s.get<struct ColorType>() },
		FootType { s.get<struct FootType>() },
		HorsePower { s.get<struct HorsePower>() },
		HorseType { s.get<struct HorseType>() },
		RoomID { s.get<struct RoomID>() },
		Speed { s.get<struct Speed>() },
		Toughness { s.get<struct Toughness>() },
		Familiarity { s.get<struct Familiarity>() },
		Body { s },
		Mane { s.get<struct Mane>() },
		Rein { s.get<struct Rein>() },
		Saddle { s.get<struct Saddle>() },
		IsFamiliarityChecked { s.get<struct IsFamiliarityChecked>() },
		Hair { s }
	{ }
};/* Data::Structure GameData::OwnedHorseList close */

template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Name> = murmurhash3::hash("OwnedHorseList.Name");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::UidHash> = murmurhash3::hash("OwnedHorseList.UidHash");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::ActorName> = murmurhash3::hash("OwnedHorseList.ActorName");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::ChargeNum> = murmurhash3::hash("OwnedHorseList.ChargeNum");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::ColorType> = murmurhash3::hash("OwnedHorseList.ColorType");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::FootType> = murmurhash3::hash("OwnedHorseList.FootType");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::HorsePower> = murmurhash3::hash("OwnedHorseList.HorsePower");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::HorseType> = murmurhash3::hash("OwnedHorseList.HorseType");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::RoomID> = murmurhash3::hash("OwnedHorseList.RoomID");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Speed> = murmurhash3::hash("OwnedHorseList.Speed");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Toughness> = murmurhash3::hash("OwnedHorseList.Toughness");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Familiarity> = murmurhash3::hash("OwnedHorseList.Familiarity");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Mane> = murmurhash3::hash("OwnedHorseList.Mane");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Rein> = murmurhash3::hash("OwnedHorseList.Rein");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Saddle> = murmurhash3::hash("OwnedHorseList.Saddle");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::IsFamiliarityChecked> = murmurhash3::hash("OwnedHorseList.IsFamiliarityChecked");