#pragma once
#include <sage>

struct GameData::OwnedHorseList::Hair::PrimaryColor : Tag::Structure {
	struct Blue : Tag::Member { using type = span<u32>*; };
	struct Green : Tag::Member { using type = span<u32>*; };
	struct Red : Tag::Member { using type = span<u32>*; };
};/* Tag::Structure GameData::OwnedHorseList::Hair::PrimaryColor close */

template <> struct Data::Structure<GameData::OwnedHorseList::Hair::PrimaryColor> : GameData::OwnedHorseList::Hair::PrimaryColor {
	Member<Blue> Blue;
	Member<Green> Green;
	Member<Red> Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::OwnedHorseList::Hair::PrimaryColor close */

template <> hash_value_t constexpr Data::Hashtable<GameData::OwnedHorseList::Hair::PrimaryColor::Blue> { "OwnedHorseList.Hair.PrimaryColor.Blue" };
template <> hash_value_t constexpr Data::Hashtable<GameData::OwnedHorseList::Hair::PrimaryColor::Green> { "OwnedHorseList.Hair.PrimaryColor.Green" };
template <> hash_value_t constexpr Data::Hashtable<GameData::OwnedHorseList::Hair::PrimaryColor::Red> { "OwnedHorseList.Hair.PrimaryColor.Red" };