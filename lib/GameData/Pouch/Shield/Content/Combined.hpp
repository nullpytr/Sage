#pragma once
#include <sage>

struct GameData::Pouch::Shield::Content::Combined : Tag::Structure {
	struct Life : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = adaptive_range<string64>*; };
};/* Tag::Structure GameData::Pouch::Shield::Content::Combined close */

template <> struct Data::Structure<GameData::Pouch::Shield::Content::Combined> : GameData::Pouch::Shield::Content::Combined {
	Member<Life> Life;
	Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		Life { s.get<struct Life>() },
		Name { s.get<struct Name>() }
	{ }
};/* Structure Data::Structure GameData::Pouch::Shield::Content::Combined close */

template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Shield::Content::Combined::Life> { "Pouch.Shield.Content.Combined.Life" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Shield::Content::Combined::Name> { "Pouch.Shield.Content.Combined.Name" };