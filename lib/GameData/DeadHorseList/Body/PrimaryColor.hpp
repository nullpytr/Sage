#pragma once
#include <sage>

struct GameData::DeadHorseList::Body::PrimaryColor : Tag::Structure {
	struct Blue : Tag::Member { using type = span<u32>*; };
	struct Green : Tag::Member { using type = span<u32>*; };
	struct Red : Tag::Member { using type = span<u32>*; };
};/* Tag::Structure GameData::DeadHorseList::Body::PrimaryColor close */

template <> struct Data::Structure<GameData::DeadHorseList::Body::PrimaryColor> : GameData::DeadHorseList::Body::PrimaryColor {
	Member<Blue> Blue;
	Member<Green> Green;
	Member<Red> Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Structure Data::Structure GameData::DeadHorseList::Body::PrimaryColor close */

template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::PrimaryColor::Blue> { "DeadHorseList.Body.PrimaryColor.Blue" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::PrimaryColor::Green> { "DeadHorseList.Body.PrimaryColor.Green" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::PrimaryColor::Red> { "DeadHorseList.Body.PrimaryColor.Red" };