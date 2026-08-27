#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::LastWildHorse::Body : Tag::Structure {
	struct EyeColor : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Black = murmurhash3::hash("Black"), Blue = murmurhash3::hash("Blue"), }; };
		using type = enum_t<values_t>;
	};
	struct Pattern : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { _00 = murmurhash3::hash("00"), _01 = murmurhash3::hash("01"), _02 = murmurhash3::hash("02"), _03 = murmurhash3::hash("03"), _04 = murmurhash3::hash("04"), _05 = murmurhash3::hash("05"), _06 = murmurhash3::hash("06"), }; };
		using type = enum_t<values_t>;
	};
	struct NoseColor;
	struct PrimaryColor;
	struct SecondaryColor;
};/* Tag::Structure GameData::LastWildHorse::Body close */

#include "Body/NoseColor.hpp"
#include "Body/PrimaryColor.hpp"
#include "Body/SecondaryColor.hpp"

template <> struct Data::Structure<GameData::LastWildHorse::Body> : GameData::LastWildHorse::Body {
	Data::Enum<EyeColor> EyeColor;
	Data::Enum<Pattern> Pattern;
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
};/* Data::Structure GameData::LastWildHorse::Body close */

template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Body::EyeColor> = murmurhash3::hash("LastWildHorse.Body.EyeColor");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Body::Pattern> = murmurhash3::hash("LastWildHorse.Body.Pattern");