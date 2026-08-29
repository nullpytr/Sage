#pragma once
#include <sage>

struct GameData::AmiiboData::TouchLog : Tag::Structure {
	struct Count : Tag::Member { using type = span<s32>*; };
	struct Day : Tag::Member { using type = span<s32>*; };
	struct Hour : Tag::Member { using type = span<s32>*; };
	struct Minute : Tag::Member { using type = span<s32>*; };
	struct Month : Tag::Member { using type = span<s32>*; };
	struct UIDHash : Tag::Member { using type = span<u64>*; };
	struct Year : Tag::Member { using type = span<s32>*; };
	struct CharacterBaseID : Tag::Enum {
		enum underlying_enum_t : hash_t { Unknown = murmurhash3::hash("Unknown"), Link = murmurhash3::hash("Link"), Zelda = murmurhash3::hash("Zelda"), Ganon = murmurhash3::hash("Ganon"), WolfLink = murmurhash3::hash("WolfLink"), Darukel = murmurhash3::hash("Darukel"), Reval = murmurhash3::hash("Reval"), Mifar = murmurhash3::hash("Mifar"), Uruboza = murmurhash3::hash("Uruboza"), Guardian = murmurhash3::hash("Guardian"), Bokoblin = murmurhash3::hash("Bokoblin"), };
		using type = span<enum_t<CharacterBaseID>>*;
	};
	struct CharacterID : Tag::Enum {
		enum underlying_enum_t : hash_t { Unknown = murmurhash3::hash("Unknown"), Link = murmurhash3::hash("Link"), ToonLink = murmurhash3::hash("ToonLink"), Zelda = murmurhash3::hash("Zelda"), Sheik = murmurhash3::hash("Sheik"), Ganondorf = murmurhash3::hash("Ganondorf"), WolfLink = murmurhash3::hash("WolfLink"), Darukel = murmurhash3::hash("Darukel"), Reval = murmurhash3::hash("Reval"), Mifar = murmurhash3::hash("Mifar"), Uruboza = murmurhash3::hash("Uruboza"), Guardian = murmurhash3::hash("Guardian"), Bokoblin = murmurhash3::hash("Bokoblin"), };
		using type = span<enum_t<CharacterID>>*;
	};
	struct NumberingID : Tag::Enum {
		enum underlying_enum_t : hash_t { Unknown = murmurhash3::hash("Unknown"), NumberingID_4 = murmurhash3::hash("NumberingID_4"), NumberingID_14 = murmurhash3::hash("NumberingID_14"), NumberingID_22 = murmurhash3::hash("NumberingID_22"), NumberingID_23 = murmurhash3::hash("NumberingID_23"), NumberingID_27 = murmurhash3::hash("NumberingID_27"), NumberingID_843 = murmurhash3::hash("NumberingID_843"), NumberingID_844 = murmurhash3::hash("NumberingID_844"), NumberingID_845 = murmurhash3::hash("NumberingID_845"), NumberingID_846 = murmurhash3::hash("NumberingID_846"), NumberingID_847 = murmurhash3::hash("NumberingID_847"), NumberingID_848 = murmurhash3::hash("NumberingID_848"), NumberingID_850 = murmurhash3::hash("NumberingID_850"), NumberingID_851 = murmurhash3::hash("NumberingID_851"), NumberingID_852 = murmurhash3::hash("NumberingID_852"), NumberingID_854 = murmurhash3::hash("NumberingID_854"), NumberingID_856 = murmurhash3::hash("NumberingID_856"), NumberingID_858 = murmurhash3::hash("NumberingID_858"), NumberingID_859 = murmurhash3::hash("NumberingID_859"), NumberingID_860 = murmurhash3::hash("NumberingID_860"), NumberingID_861 = murmurhash3::hash("NumberingID_861"), NumberingID_862 = murmurhash3::hash("NumberingID_862"), NumberingID_892 = murmurhash3::hash("NumberingID_892"), NumberingID_921 = murmurhash3::hash("NumberingID_921"), NumberingID_1044 = murmurhash3::hash("NumberingID_1044"), NumberingID_1048 = murmurhash3::hash("NumberingID_1048"), NumberingID_1049 = murmurhash3::hash("NumberingID_1049"), NumberingID_1050 = murmurhash3::hash("NumberingID_1050"), };
		using type = span<enum_t<NumberingID>>*;
	};
};/* Tag::Structure GameData::AmiiboData::TouchLog close */

template <> struct Data::Structure<GameData::AmiiboData::TouchLog> : GameData::AmiiboData::TouchLog {
	Member<Count> Count;
	Member<Day> Day;
	Member<Hour> Hour;
	Member<Minute> Minute;
	Member<Month> Month;
	Member<UIDHash> UIDHash;
	Member<Year> Year;
	Enum<CharacterBaseID> CharacterBaseID;
	Enum<CharacterID> CharacterID;
	Enum<NumberingID> NumberingID;
	
	explicit Structure(Sav& s) : 
		Count { s.get<struct Count>() },
		Day { s.get<struct Day>() },
		Hour { s.get<struct Hour>() },
		Minute { s.get<struct Minute>() },
		Month { s.get<struct Month>() },
		UIDHash { s.get<struct UIDHash>() },
		Year { s.get<struct Year>() },
		CharacterBaseID { s.get<struct CharacterBaseID>() },
		CharacterID { s.get<struct CharacterID>() },
		NumberingID { s.get<struct NumberingID>() }
	{ }
};/* Data::Structure GameData::AmiiboData::TouchLog close */

template <> hash_value_t constexpr Data::Hashtable<GameData::AmiiboData::TouchLog::Count> { "AmiiboData.TouchLog.Count" };
template <> hash_value_t constexpr Data::Hashtable<GameData::AmiiboData::TouchLog::Day> { "AmiiboData.TouchLog.Day" };
template <> hash_value_t constexpr Data::Hashtable<GameData::AmiiboData::TouchLog::Hour> { "AmiiboData.TouchLog.Hour" };
template <> hash_value_t constexpr Data::Hashtable<GameData::AmiiboData::TouchLog::Minute> { "AmiiboData.TouchLog.Minute" };
template <> hash_value_t constexpr Data::Hashtable<GameData::AmiiboData::TouchLog::Month> { "AmiiboData.TouchLog.Month" };
template <> hash_value_t constexpr Data::Hashtable<GameData::AmiiboData::TouchLog::UIDHash> { "AmiiboData.TouchLog.UIDHash" };
template <> hash_value_t constexpr Data::Hashtable<GameData::AmiiboData::TouchLog::Year> { "AmiiboData.TouchLog.Year" };
template <> hash_value_t constexpr Data::Hashtable<GameData::AmiiboData::TouchLog::CharacterBaseID> { "AmiiboData.TouchLog.CharacterBaseID" };
template <> hash_value_t constexpr Data::Hashtable<GameData::AmiiboData::TouchLog::CharacterID> { "AmiiboData.TouchLog.CharacterID" };
template <> hash_value_t constexpr Data::Hashtable<GameData::AmiiboData::TouchLog::NumberingID> { "AmiiboData.TouchLog.NumberingID" };