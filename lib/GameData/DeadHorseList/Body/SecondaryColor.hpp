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
};/* Data::Structure GameData::DeadHorseList::Body::SecondaryColor close */

template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::SecondaryColor::Blue> = murmurhash3::hash("DeadHorseList.Body.SecondaryColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::SecondaryColor::Green> = murmurhash3::hash("DeadHorseList.Body.SecondaryColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::SecondaryColor::Red> = murmurhash3::hash("DeadHorseList.Body.SecondaryColor.Red");