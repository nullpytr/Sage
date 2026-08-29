#pragma once
#include <sage>

struct GameData::DeadHorseList::Body : Tag::Structure {
	struct EyeColor : Tag::Enum {
		enum underlying_enum_t : hash_t { Black = murmurhash3::hash("Black"), Blue = murmurhash3::hash("Blue"), };
		using type = span<enum_t<EyeColor>>*;
	};
	struct Pattern : Tag::Enum {
		enum underlying_enum_t : hash_t { _00 = murmurhash3::hash("00"), _01 = murmurhash3::hash("01"), _02 = murmurhash3::hash("02"), _03 = murmurhash3::hash("03"), _04 = murmurhash3::hash("04"), _05 = murmurhash3::hash("05"), _06 = murmurhash3::hash("06"), };
		using type = span<enum_t<Pattern>>*;
	};
	struct NoseColor;
	struct PrimaryColor;
	struct SecondaryColor;
};/* Tag::Structure GameData::DeadHorseList::Body close */

#include "Body/NoseColor.hpp"
#include "Body/PrimaryColor.hpp"
#include "Body/SecondaryColor.hpp"

template <> struct Data::Structure<GameData::DeadHorseList::Body> : GameData::DeadHorseList::Body {
	Enum<EyeColor> EyeColor;
	Enum<Pattern> Pattern;
	Structure<NoseColor> NoseColor;
	Structure<PrimaryColor> PrimaryColor;
	Structure<SecondaryColor> SecondaryColor;
	
	explicit Structure(Sav& s) : 
		EyeColor { s.get<struct EyeColor>() },
		Pattern { s.get<struct Pattern>() },
		NoseColor { s },
		PrimaryColor { s },
		SecondaryColor { s }
	{ }
};/* Data::Structure GameData::DeadHorseList::Body close */

template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::EyeColor> { "DeadHorseList.Body.EyeColor" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::Pattern> { "DeadHorseList.Body.Pattern" };