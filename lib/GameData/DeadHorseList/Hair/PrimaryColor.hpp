#pragma once
#include <sage>

struct GameData::DeadHorseList::Hair::PrimaryColor : Tag::Structure {
	struct Blue : Tag::Member { using type = span<u32>*; };
	struct Green : Tag::Member { using type = span<u32>*; };
	struct Red : Tag::Member { using type = span<u32>*; };
};/* Tag::Structure GameData::DeadHorseList::Hair::PrimaryColor close */

template <> struct Data::Structure<GameData::DeadHorseList::Hair::PrimaryColor> : GameData::DeadHorseList::Hair::PrimaryColor {
	Data::Member<Blue> Blue;
	Data::Member<Green> Green;
	Data::Member<Red> Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::DeadHorseList::Hair::PrimaryColor close */

template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Hair::PrimaryColor::Blue> = murmurhash3::hash("DeadHorseList.Hair.PrimaryColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Hair::PrimaryColor::Green> = murmurhash3::hash("DeadHorseList.Hair.PrimaryColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Hair::PrimaryColor::Red> = murmurhash3::hash("DeadHorseList.Hair.PrimaryColor.Red");