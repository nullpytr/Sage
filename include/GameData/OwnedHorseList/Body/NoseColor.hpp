#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::OwnedHorseList::Body::NoseColor : Tag::Structure {
	struct Blue : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
	struct Green : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
	struct Red : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::OwnedHorseList::Body::NoseColor close */

template <> struct Data::Structure<GameData::OwnedHorseList::Body::NoseColor> : GameData::OwnedHorseList::Body::NoseColor {
	Blue::type Blue;
	Green::type Green;
	Red::type Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::OwnedHorseList::Body::NoseColor close */

template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::NoseColor::Blue> = murmurhash3::hash("OwnedHorseList.Body.NoseColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::NoseColor::Green> = murmurhash3::hash("OwnedHorseList.Body.NoseColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::NoseColor::Red> = murmurhash3::hash("OwnedHorseList.Body.NoseColor.Red");