#pragma once
#include <sage>

struct GameData::LastWildHorse::Body::PrimaryColor : Tag::Structure {
	struct Blue : Tag::Member { using type = u32&; };
	struct Green : Tag::Member { using type = u32&; };
	struct Red : Tag::Member { using type = u32&; };
};/* Tag::Structure GameData::LastWildHorse::Body::PrimaryColor close */

template <> struct Data::Structure<GameData::LastWildHorse::Body::PrimaryColor> : GameData::LastWildHorse::Body::PrimaryColor {
	Member<Blue> Blue;
	Member<Green> Green;
	Member<Red> Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::LastWildHorse::Body::PrimaryColor close */

template <> hash_value_t constexpr Data::Hashtable<GameData::LastWildHorse::Body::PrimaryColor::Blue> { "LastWildHorse.Body.PrimaryColor.Blue" };
template <> hash_value_t constexpr Data::Hashtable<GameData::LastWildHorse::Body::PrimaryColor::Green> { "LastWildHorse.Body.PrimaryColor.Green" };
template <> hash_value_t constexpr Data::Hashtable<GameData::LastWildHorse::Body::PrimaryColor::Red> { "LastWildHorse.Body.PrimaryColor.Red" };