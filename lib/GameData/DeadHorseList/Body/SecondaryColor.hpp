#pragma once
#include <sage>

struct GameData::DeadHorseList::Body::SecondaryColor : Tag::Structure {
	struct Blue : Tag::Member { using type = span<u32>*; };
	struct Green : Tag::Member { using type = span<u32>*; };
	struct Red : Tag::Member { using type = span<u32>*; };
};/* Tag::Structure GameData::DeadHorseList::Body::SecondaryColor close */

template <> struct Data::Structure<GameData::DeadHorseList::Body::SecondaryColor> : GameData::DeadHorseList::Body::SecondaryColor {
	Member<Blue> Blue;
	Member<Green> Green;
	Member<Red> Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Structure Data::Structure GameData::DeadHorseList::Body::SecondaryColor close */

template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::SecondaryColor::Blue> { "DeadHorseList.Body.SecondaryColor.Blue" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::SecondaryColor::Green> { "DeadHorseList.Body.SecondaryColor.Green" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::SecondaryColor::Red> { "DeadHorseList.Body.SecondaryColor.Red" };