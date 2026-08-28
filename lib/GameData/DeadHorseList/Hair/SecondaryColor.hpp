#pragma once
#include <sage>

struct GameData::DeadHorseList::Hair::SecondaryColor : Tag::Structure {
	struct Blue : Tag::Member { using type = span<u32>*; };
	struct Green : Tag::Member { using type = span<u32>*; };
	struct Red : Tag::Member { using type = span<u32>*; };
};/* Tag::Structure GameData::DeadHorseList::Hair::SecondaryColor close */

template <> struct Data::Structure<GameData::DeadHorseList::Hair::SecondaryColor> : GameData::DeadHorseList::Hair::SecondaryColor {
	Data::Member<Blue> Blue;
	Data::Member<Green> Green;
	Data::Member<Red> Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::DeadHorseList::Hair::SecondaryColor close */

template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Hair::SecondaryColor::Blue> = murmurhash3::hash("DeadHorseList.Hair.SecondaryColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Hair::SecondaryColor::Green> = murmurhash3::hash("DeadHorseList.Hair.SecondaryColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Hair::SecondaryColor::Red> = murmurhash3::hash("DeadHorseList.Hair.SecondaryColor.Red");