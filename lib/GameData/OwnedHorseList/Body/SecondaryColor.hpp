#pragma once
#include <sage>

struct GameData::OwnedHorseList::Body::SecondaryColor : Tag::Structure {
	struct Blue : Tag::Member { using type = span<u32>*; };
	struct Green : Tag::Member { using type = span<u32>*; };
	struct Red : Tag::Member { using type = span<u32>*; };
};/* Tag::Structure GameData::OwnedHorseList::Body::SecondaryColor close */

template <> struct Data::Structure<GameData::OwnedHorseList::Body::SecondaryColor> : GameData::OwnedHorseList::Body::SecondaryColor {
	Member<Blue> Blue;
	Member<Green> Green;
	Member<Red> Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Structure Data::Structure GameData::OwnedHorseList::Body::SecondaryColor close */

template <> hash_value_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::SecondaryColor::Blue> { "OwnedHorseList.Body.SecondaryColor.Blue" };
template <> hash_value_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::SecondaryColor::Green> { "OwnedHorseList.Body.SecondaryColor.Green" };
template <> hash_value_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::SecondaryColor::Red> { "OwnedHorseList.Body.SecondaryColor.Red" };