#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::OwnedHorseList::Hair::SecondaryColor : Tag::Structure {
	struct Blue : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
	struct Green : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
	struct Red : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::OwnedHorseList::Hair::SecondaryColor close */

template <> struct Data::Structure<GameData::OwnedHorseList::Hair::SecondaryColor> : GameData::OwnedHorseList::Hair::SecondaryColor {
	Blue::type Blue;
	Green::type Green;
	Red::type Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::OwnedHorseList::Hair::SecondaryColor close */

template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Hair::SecondaryColor::Blue> = murmurhash3::hash("OwnedHorseList.Hair.SecondaryColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Hair::SecondaryColor::Green> = murmurhash3::hash("OwnedHorseList.Hair.SecondaryColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Hair::SecondaryColor::Red> = murmurhash3::hash("OwnedHorseList.Hair.SecondaryColor.Red");