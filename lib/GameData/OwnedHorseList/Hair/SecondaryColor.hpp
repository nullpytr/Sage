#pragma once
#include <sage>

struct GameData::OwnedHorseList::Hair::SecondaryColor : Tag::Structure {
	struct Blue : Tag::Member { using type = span<u32>*; };
	struct Green : Tag::Member { using type = span<u32>*; };
	struct Red : Tag::Member { using type = span<u32>*; };
};/* Tag::Structure GameData::OwnedHorseList::Hair::SecondaryColor close */

template <> struct Data::Structure<GameData::OwnedHorseList::Hair::SecondaryColor> : GameData::OwnedHorseList::Hair::SecondaryColor {
	Member<Blue> Blue;
	Member<Green> Green;
	Member<Red> Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::OwnedHorseList::Hair::SecondaryColor close */

template <> hash_value_t constexpr Data::Hashtable<GameData::OwnedHorseList::Hair::SecondaryColor::Blue> { "OwnedHorseList.Hair.SecondaryColor.Blue" };
template <> hash_value_t constexpr Data::Hashtable<GameData::OwnedHorseList::Hair::SecondaryColor::Green> { "OwnedHorseList.Hair.SecondaryColor.Green" };
template <> hash_value_t constexpr Data::Hashtable<GameData::OwnedHorseList::Hair::SecondaryColor::Red> { "OwnedHorseList.Hair.SecondaryColor.Red" };