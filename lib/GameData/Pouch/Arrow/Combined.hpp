#pragma once
#include <sage>

struct GameData::Pouch::Arrow::Combined : Tag::Structure {
	struct Life : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
};/* Tag::Structure GameData::Pouch::Arrow::Combined close */

template <> struct Data::Structure<GameData::Pouch::Arrow::Combined> : GameData::Pouch::Arrow::Combined {
	Member<Life> Life;
	Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		Life { s.get<struct Life>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::Pouch::Arrow::Combined close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Arrow::Combined::Life> = murmurhash3::hash("Pouch.Arrow.Combined.Life");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Arrow::Combined::Name> = murmurhash3::hash("Pouch.Arrow.Combined.Name");