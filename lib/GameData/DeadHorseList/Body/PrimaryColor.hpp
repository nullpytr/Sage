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
};/* Data::Structure GameData::DeadHorseList::Body::PrimaryColor close */

template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::PrimaryColor::Blue> = murmurhash3::hash("DeadHorseList.Body.PrimaryColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::PrimaryColor::Green> = murmurhash3::hash("DeadHorseList.Body.PrimaryColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::DeadHorseList::Body::PrimaryColor::Red> = murmurhash3::hash("DeadHorseList.Body.PrimaryColor.Red");