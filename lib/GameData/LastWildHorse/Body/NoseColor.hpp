#pragma once
#include <sage>

struct GameData::LastWildHorse::Body::NoseColor : Tag::Structure {
	struct Blue : Tag::Member { using type = u32&; };
	struct Green : Tag::Member { using type = u32&; };
	struct Red : Tag::Member { using type = u32&; };
};/* Tag::Structure GameData::LastWildHorse::Body::NoseColor close */

template <> struct Data::Structure<GameData::LastWildHorse::Body::NoseColor> : GameData::LastWildHorse::Body::NoseColor {
	Data::Member<Blue> Blue;
	Data::Member<Green> Green;
	Data::Member<Red> Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::LastWildHorse::Body::NoseColor close */

template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Body::NoseColor::Blue> = murmurhash3::hash("LastWildHorse.Body.NoseColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Body::NoseColor::Green> = murmurhash3::hash("LastWildHorse.Body.NoseColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Body::NoseColor::Red> = murmurhash3::hash("LastWildHorse.Body.NoseColor.Red");