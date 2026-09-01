#pragma once
#include <sage>

struct GameData::DeadHorseList::Body::NoseColor : Tag::Structure {
	struct Blue : Tag::Member { using type = span<u32>*; };
	struct Green : Tag::Member { using type = span<u32>*; };
	struct Red : Tag::Member { using type = span<u32>*; };
};/* Tag::Structure GameData::DeadHorseList::Body::NoseColor close */

template <> struct Data::Structure<GameData::DeadHorseList::Body::NoseColor> : GameData::DeadHorseList::Body::NoseColor {
	Member<Blue> Blue;
	Member<Green> Green;
	Member<Red> Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Structure Data::Structure GameData::DeadHorseList::Body::NoseColor close */

template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::NoseColor::Blue> { "DeadHorseList.Body.NoseColor.Blue" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::NoseColor::Green> { "DeadHorseList.Body.NoseColor.Green" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::NoseColor::Red> { "DeadHorseList.Body.NoseColor.Red" };