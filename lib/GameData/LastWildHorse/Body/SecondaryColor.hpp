#pragma once
#include <sage>

struct GameData::LastWildHorse::Body::SecondaryColor : Tag::Structure {
	struct Blue : Tag::Member { using type = u32&; };
	struct Green : Tag::Member { using type = u32&; };
	struct Red : Tag::Member { using type = u32&; };
};/* Tag::Structure GameData::LastWildHorse::Body::SecondaryColor close */

template <> struct Data::Structure<GameData::LastWildHorse::Body::SecondaryColor> : GameData::LastWildHorse::Body::SecondaryColor {
	Member<Blue> Blue;
	Member<Green> Green;
	Member<Red> Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Structure Data::Structure GameData::LastWildHorse::Body::SecondaryColor close */

template <> hash_value_t constexpr Data::Hashtable<GameData::LastWildHorse::Body::SecondaryColor::Blue> { "LastWildHorse.Body.SecondaryColor.Blue" };
template <> hash_value_t constexpr Data::Hashtable<GameData::LastWildHorse::Body::SecondaryColor::Green> { "LastWildHorse.Body.SecondaryColor.Green" };
template <> hash_value_t constexpr Data::Hashtable<GameData::LastWildHorse::Body::SecondaryColor::Red> { "LastWildHorse.Body.SecondaryColor.Red" };