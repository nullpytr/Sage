#pragma once
#include <sage>

struct GameData::LastWildHorse::Hair::SecondaryColor : Tag::Structure {
	struct Blue : Tag::Member { using type = u32&; };
	struct Green : Tag::Member { using type = u32&; };
	struct Red : Tag::Member { using type = u32&; };
};/* Tag::Structure GameData::LastWildHorse::Hair::SecondaryColor close */

template <> struct Data::Structure<GameData::LastWildHorse::Hair::SecondaryColor> : GameData::LastWildHorse::Hair::SecondaryColor {
	Member<Blue> Blue;
	Member<Green> Green;
	Member<Red> Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::LastWildHorse::Hair::SecondaryColor close */

template <> hash_value_t constexpr Data::Hashtable<GameData::LastWildHorse::Hair::SecondaryColor::Blue> { "LastWildHorse.Hair.SecondaryColor.Blue" };
template <> hash_value_t constexpr Data::Hashtable<GameData::LastWildHorse::Hair::SecondaryColor::Green> { "LastWildHorse.Hair.SecondaryColor.Green" };
template <> hash_value_t constexpr Data::Hashtable<GameData::LastWildHorse::Hair::SecondaryColor::Red> { "LastWildHorse.Hair.SecondaryColor.Red" };