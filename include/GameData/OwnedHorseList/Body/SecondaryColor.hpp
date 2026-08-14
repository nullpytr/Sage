#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::OwnedHorseList::Body::SecondaryColor : Tag::Structure {
	struct Blue : Tag::Member { using value_type = ::array<u32>; };
	struct Green : Tag::Member { using value_type = ::array<u32>; };
	struct Red : Tag::Member { using value_type = ::array<u32>; };
};/* Tag::Structure GameData::OwnedHorseList::Body::SecondaryColor close */

template <> struct Data::Structure<GameData::OwnedHorseList::Body::SecondaryColor> : GameData::OwnedHorseList::Body::SecondaryColor {
	Blue::value_type Blue;
	Green::value_type Green;
	Red::value_type Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::OwnedHorseList::Body::SecondaryColor close */

template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::SecondaryColor::Blue> = murmurhash3::hash("OwnedHorseList.Body.SecondaryColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::SecondaryColor::Green> = murmurhash3::hash("OwnedHorseList.Body.SecondaryColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::SecondaryColor::Red> = murmurhash3::hash("OwnedHorseList.Body.SecondaryColor.Red");