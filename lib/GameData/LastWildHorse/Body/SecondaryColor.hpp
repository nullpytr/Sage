#pragma once
#include <sage>

struct GameData::LastWildHorse::Body::SecondaryColor : Tag::Structure {
	struct Blue : Tag::Member { using type = u32&; };
	struct Green : Tag::Member { using type = u32&; };
	struct Red : Tag::Member { using type = u32&; };
};/* Tag::Structure GameData::LastWildHorse::Body::SecondaryColor close */

template <> struct Data::Structure<GameData::LastWildHorse::Body::SecondaryColor> : GameData::LastWildHorse::Body::SecondaryColor {
	Data::Member<Blue> Blue;
	Data::Member<Green> Green;
	Data::Member<Red> Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::LastWildHorse::Body::SecondaryColor close */

template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Body::SecondaryColor::Blue> = murmurhash3::hash("LastWildHorse.Body.SecondaryColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Body::SecondaryColor::Green> = murmurhash3::hash("LastWildHorse.Body.SecondaryColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Body::SecondaryColor::Red> = murmurhash3::hash("LastWildHorse.Body.SecondaryColor.Red");