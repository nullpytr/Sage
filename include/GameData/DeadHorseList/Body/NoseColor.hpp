#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::DeadHorseList::Body::NoseColor : Tag::Structure {
	struct Blue : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
	struct Green : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
	struct Red : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::DeadHorseList::Body::NoseColor close */

template <> struct Data::Structure<GameData::DeadHorseList::Body::NoseColor> : GameData::DeadHorseList::Body::NoseColor {
	Blue::type Blue;
	Green::type Green;
	Red::type Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::DeadHorseList::Body::NoseColor close */

template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::NoseColor::Blue> = murmurhash3::hash("DeadHorseList.Body.NoseColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::NoseColor::Green> = murmurhash3::hash("DeadHorseList.Body.NoseColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::NoseColor::Red> = murmurhash3::hash("DeadHorseList.Body.NoseColor.Red");