#pragma once
#include <sage>

struct GameData::Pouch::Armor::Content : Tag::Structure {
	struct ColorVariation : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), Blue = murmurhash3::hash("Blue"), Red = murmurhash3::hash("Red"), Yellow = murmurhash3::hash("Yellow"), White = murmurhash3::hash("White"), Black = murmurhash3::hash("Black"), Purple = murmurhash3::hash("Purple"), Green = murmurhash3::hash("Green"), LightBlue = murmurhash3::hash("LightBlue"), Navy = murmurhash3::hash("Navy"), Orange = murmurhash3::hash("Orange"), Pink = murmurhash3::hash("Pink"), Crimson = murmurhash3::hash("Crimson"), LightYellow = murmurhash3::hash("LightYellow"), Brown = murmurhash3::hash("Brown"), Gray = murmurhash3::hash("Gray"), };
		using type = span<enum_t<ColorVariation>>*;
	};
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
};/* Tag::Structure GameData::Pouch::Armor::Content close */

template <> struct Data::Structure<GameData::Pouch::Armor::Content> : GameData::Pouch::Armor::Content {
	Data::Enum<ColorVariation> ColorVariation;
	Data::Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		ColorVariation { s.get<struct ColorVariation>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::Pouch::Armor::Content close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Armor::Content::ColorVariation> = murmurhash3::hash("Pouch.Armor.Content.ColorVariation");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Armor::Content::Name> = murmurhash3::hash("Pouch.Armor.Content.Name");