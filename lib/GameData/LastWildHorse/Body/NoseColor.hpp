#pragma once
#include <sage>

struct GameData::LastWildHorse::Body::NoseColor : Tag::Structure {
	struct Blue : Tag::Member { using type = u32&; };
	struct Green : Tag::Member { using type = u32&; };
	struct Red : Tag::Member { using type = u32&; };
};/* Tag::Structure GameData::LastWildHorse::Body::NoseColor close */

template <> struct Data::Structure<GameData::LastWildHorse::Body::NoseColor> : GameData::LastWildHorse::Body::NoseColor {
	Member<Blue> Blue;
	Member<Green> Green;
	Member<Red> Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::LastWildHorse::Body::NoseColor close */

template <> hash_value_t constexpr Data::Hashtable<GameData::LastWildHorse::Body::NoseColor::Blue> { "LastWildHorse.Body.NoseColor.Blue" };
template <> hash_value_t constexpr Data::Hashtable<GameData::LastWildHorse::Body::NoseColor::Green> { "LastWildHorse.Body.NoseColor.Green" };
template <> hash_value_t constexpr Data::Hashtable<GameData::LastWildHorse::Body::NoseColor::Red> { "LastWildHorse.Body.NoseColor.Red" };