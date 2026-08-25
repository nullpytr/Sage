#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::DeadHorseList::Body::SecondaryColor : Tag::Structure {
	struct Blue : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
	struct Green : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
	struct Red : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::DeadHorseList::Body::SecondaryColor close */

template <> struct Data::Structure<GameData::DeadHorseList::Body::SecondaryColor> : GameData::DeadHorseList::Body::SecondaryColor {
	Blue::type Blue;
	Green::type Green;
	Red::type Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::DeadHorseList::Body::SecondaryColor close */

template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::SecondaryColor::Blue> = murmurhash3::hash("DeadHorseList.Body.SecondaryColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::SecondaryColor::Green> = murmurhash3::hash("DeadHorseList.Body.SecondaryColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::SecondaryColor::Red> = murmurhash3::hash("DeadHorseList.Body.SecondaryColor.Red");