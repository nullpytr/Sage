#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::OwnedHorseList::Body::PrimaryColor : Tag::Structure {
	struct Blue : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
	struct Green : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
	struct Red : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::OwnedHorseList::Body::PrimaryColor close */

template <> struct Data::Structure<GameData::OwnedHorseList::Body::PrimaryColor> : GameData::OwnedHorseList::Body::PrimaryColor {
	Blue::type Blue;
	Green::type Green;
	Red::type Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::OwnedHorseList::Body::PrimaryColor close */

template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::PrimaryColor::Blue> = murmurhash3::hash("OwnedHorseList.Body.PrimaryColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::PrimaryColor::Green> = murmurhash3::hash("OwnedHorseList.Body.PrimaryColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::PrimaryColor::Red> = murmurhash3::hash("OwnedHorseList.Body.PrimaryColor.Red");