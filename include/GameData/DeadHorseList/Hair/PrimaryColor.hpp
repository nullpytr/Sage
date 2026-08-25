#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::DeadHorseList::Hair::PrimaryColor : Tag::Structure {
	struct Blue : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
	struct Green : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
	struct Red : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::DeadHorseList::Hair::PrimaryColor close */

template <> struct Data::Structure<GameData::DeadHorseList::Hair::PrimaryColor> : GameData::DeadHorseList::Hair::PrimaryColor {
	Blue::type Blue;
	Green::type Green;
	Red::type Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::DeadHorseList::Hair::PrimaryColor close */

template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Hair::PrimaryColor::Blue> = murmurhash3::hash("DeadHorseList.Hair.PrimaryColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Hair::PrimaryColor::Green> = murmurhash3::hash("DeadHorseList.Hair.PrimaryColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Hair::PrimaryColor::Red> = murmurhash3::hash("DeadHorseList.Hair.PrimaryColor.Red");