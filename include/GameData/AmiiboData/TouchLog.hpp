#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::AmiiboData::TouchLog : Tag::Structure {
	struct CharacterBaseID : Tag::Enum { using type = ::Enum::Array<CharacterBaseID>; using adapter = ::Enum::Array<CharacterBaseID>; enum enum_type : hash_t { Unknown = murmurhash3::hash("Unknown"), Link = murmurhash3::hash("Link"), Zelda = murmurhash3::hash("Zelda"), Ganon = murmurhash3::hash("Ganon"), WolfLink = murmurhash3::hash("WolfLink"), Darukel = murmurhash3::hash("Darukel"), Reval = murmurhash3::hash("Reval"), Mifar = murmurhash3::hash("Mifar"), Uruboza = murmurhash3::hash("Uruboza"), Guardian = murmurhash3::hash("Guardian"), Bokoblin = murmurhash3::hash("Bokoblin"), }; };
	struct CharacterID : Tag::Enum { using type = ::Enum::Array<CharacterID>; using adapter = ::Enum::Array<CharacterID>; enum enum_type : hash_t { Unknown = murmurhash3::hash("Unknown"), Link = murmurhash3::hash("Link"), ToonLink = murmurhash3::hash("ToonLink"), Zelda = murmurhash3::hash("Zelda"), Sheik = murmurhash3::hash("Sheik"), Ganondorf = murmurhash3::hash("Ganondorf"), WolfLink = murmurhash3::hash("WolfLink"), Darukel = murmurhash3::hash("Darukel"), Reval = murmurhash3::hash("Reval"), Mifar = murmurhash3::hash("Mifar"), Uruboza = murmurhash3::hash("Uruboza"), Guardian = murmurhash3::hash("Guardian"), Bokoblin = murmurhash3::hash("Bokoblin"), }; };
	struct NumberingID : Tag::Enum { using type = ::Enum::Array<NumberingID>; using adapter = ::Enum::Array<NumberingID>; enum enum_type : hash_t { Unknown = murmurhash3::hash("Unknown"), NumberingID_4 = murmurhash3::hash("NumberingID_4"), NumberingID_14 = murmurhash3::hash("NumberingID_14"), NumberingID_22 = murmurhash3::hash("NumberingID_22"), NumberingID_23 = murmurhash3::hash("NumberingID_23"), NumberingID_27 = murmurhash3::hash("NumberingID_27"), NumberingID_843 = murmurhash3::hash("NumberingID_843"), NumberingID_844 = murmurhash3::hash("NumberingID_844"), NumberingID_845 = murmurhash3::hash("NumberingID_845"), NumberingID_846 = murmurhash3::hash("NumberingID_846"), NumberingID_847 = murmurhash3::hash("NumberingID_847"), NumberingID_848 = murmurhash3::hash("NumberingID_848"), NumberingID_850 = murmurhash3::hash("NumberingID_850"), NumberingID_851 = murmurhash3::hash("NumberingID_851"), NumberingID_852 = murmurhash3::hash("NumberingID_852"), NumberingID_854 = murmurhash3::hash("NumberingID_854"), NumberingID_856 = murmurhash3::hash("NumberingID_856"), NumberingID_858 = murmurhash3::hash("NumberingID_858"), NumberingID_859 = murmurhash3::hash("NumberingID_859"), NumberingID_860 = murmurhash3::hash("NumberingID_860"), NumberingID_861 = murmurhash3::hash("NumberingID_861"), NumberingID_862 = murmurhash3::hash("NumberingID_862"), NumberingID_892 = murmurhash3::hash("NumberingID_892"), NumberingID_921 = murmurhash3::hash("NumberingID_921"), NumberingID_1044 = murmurhash3::hash("NumberingID_1044"), NumberingID_1048 = murmurhash3::hash("NumberingID_1048"), NumberingID_1049 = murmurhash3::hash("NumberingID_1049"), NumberingID_1050 = murmurhash3::hash("NumberingID_1050"), }; };
	struct Count : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct Day : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct Hour : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct Minute : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct Month : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct Year : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct UIDHash : Tag::Member { using type = span<u64>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::AmiiboData::TouchLog close */

template <> struct Data::Structure<GameData::AmiiboData::TouchLog> : GameData::AmiiboData::TouchLog {
	CharacterBaseID::type CharacterBaseID;
	CharacterID::type CharacterID;
	NumberingID::type NumberingID;
	Count::type Count;
	Day::type Day;
	Hour::type Hour;
	Minute::type Minute;
	Month::type Month;
	Year::type Year;
	UIDHash::type UIDHash;
	
	explicit Structure(Sav& s) : 
		CharacterBaseID { s.get<struct CharacterBaseID>() },
		CharacterID { s.get<struct CharacterID>() },
		NumberingID { s.get<struct NumberingID>() },
		Count { s.get<struct Count>() },
		Day { s.get<struct Day>() },
		Hour { s.get<struct Hour>() },
		Minute { s.get<struct Minute>() },
		Month { s.get<struct Month>() },
		Year { s.get<struct Year>() },
		UIDHash { s.get<struct UIDHash>() }
	{ }
};/* Data::Structure GameData::AmiiboData::TouchLog close */

template <> hash_t constexpr Data::Hashtable<GameData::AmiiboData::TouchLog::CharacterBaseID> = murmurhash3::hash("AmiiboData.TouchLog.CharacterBaseID");
template <> hash_t constexpr Data::Hashtable<GameData::AmiiboData::TouchLog::CharacterID> = murmurhash3::hash("AmiiboData.TouchLog.CharacterID");
template <> hash_t constexpr Data::Hashtable<GameData::AmiiboData::TouchLog::NumberingID> = murmurhash3::hash("AmiiboData.TouchLog.NumberingID");
template <> hash_t constexpr Data::Hashtable<GameData::AmiiboData::TouchLog::Count> = murmurhash3::hash("AmiiboData.TouchLog.Count");
template <> hash_t constexpr Data::Hashtable<GameData::AmiiboData::TouchLog::Day> = murmurhash3::hash("AmiiboData.TouchLog.Day");
template <> hash_t constexpr Data::Hashtable<GameData::AmiiboData::TouchLog::Hour> = murmurhash3::hash("AmiiboData.TouchLog.Hour");
template <> hash_t constexpr Data::Hashtable<GameData::AmiiboData::TouchLog::Minute> = murmurhash3::hash("AmiiboData.TouchLog.Minute");
template <> hash_t constexpr Data::Hashtable<GameData::AmiiboData::TouchLog::Month> = murmurhash3::hash("AmiiboData.TouchLog.Month");
template <> hash_t constexpr Data::Hashtable<GameData::AmiiboData::TouchLog::Year> = murmurhash3::hash("AmiiboData.TouchLog.Year");
template <> hash_t constexpr Data::Hashtable<GameData::AmiiboData::TouchLog::UIDHash> = murmurhash3::hash("AmiiboData.TouchLog.UIDHash");