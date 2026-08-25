#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::DeadHorseList::Body::PrimaryColor : Tag::Structure {
	struct Blue : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
	struct Green : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
	struct Red : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::DeadHorseList::Body::PrimaryColor close */

template <> struct Data::Structure<GameData::DeadHorseList::Body::PrimaryColor> : GameData::DeadHorseList::Body::PrimaryColor {
	Blue::type Blue;
	Green::type Green;
	Red::type Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::DeadHorseList::Body::PrimaryColor close */

template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::PrimaryColor::Blue> = murmurhash3::hash("DeadHorseList.Body.PrimaryColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::PrimaryColor::Green> = murmurhash3::hash("DeadHorseList.Body.PrimaryColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::PrimaryColor::Red> = murmurhash3::hash("DeadHorseList.Body.PrimaryColor.Red");