#pragma once
#include <sage>

struct GameData::DeadHorseList::Body::NoseColor : Tag::Structure {
	struct Blue : Tag::Member { using type = span<u32>*; };
	struct Green : Tag::Member { using type = span<u32>*; };
	struct Red : Tag::Member { using type = span<u32>*; };
};/* Tag::Structure GameData::DeadHorseList::Body::NoseColor close */

template <> struct Data::Structure<GameData::DeadHorseList::Body::NoseColor> : GameData::DeadHorseList::Body::NoseColor {
	Data::Member<Blue> Blue;
	Data::Member<Green> Green;
	Data::Member<Red> Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::DeadHorseList::Body::NoseColor close */

template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::NoseColor::Blue> = murmurhash3::hash("DeadHorseList.Body.NoseColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::NoseColor::Green> = murmurhash3::hash("DeadHorseList.Body.NoseColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::NoseColor::Red> = murmurhash3::hash("DeadHorseList.Body.NoseColor.Red");