#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::Pouch::Shield::Content::Combined : Tag::Structure {
	struct Life : Tag::Member { using type = span<s32>*; };
	struct Name : Tag::Member { using type = span<layout<string64>>*; };
};/* Tag::Structure GameData::Pouch::Shield::Content::Combined close */

template <> struct Data::Structure<GameData::Pouch::Shield::Content::Combined> : GameData::Pouch::Shield::Content::Combined {
	Data::Member<Life> Life;
	Data::Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		Life { s.get<struct Life>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::Pouch::Shield::Content::Combined close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Shield::Content::Combined::Life> = murmurhash3::hash("Pouch.Shield.Content.Combined.Life");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Shield::Content::Combined::Name> = murmurhash3::hash("Pouch.Shield.Content.Combined.Name");