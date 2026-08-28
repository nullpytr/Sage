#pragma once
#include <sage>

struct GameData::LastWildHorse::Body::PrimaryColor : Tag::Structure {
	struct Blue : Tag::Member { using type = u32&; };
	struct Green : Tag::Member { using type = u32&; };
	struct Red : Tag::Member { using type = u32&; };
};/* Tag::Structure GameData::LastWildHorse::Body::PrimaryColor close */

template <> struct Data::Structure<GameData::LastWildHorse::Body::PrimaryColor> : GameData::LastWildHorse::Body::PrimaryColor {
	Data::Member<Blue> Blue;
	Data::Member<Green> Green;
	Data::Member<Red> Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::LastWildHorse::Body::PrimaryColor close */

template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Body::PrimaryColor::Blue> = murmurhash3::hash("LastWildHorse.Body.PrimaryColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Body::PrimaryColor::Green> = murmurhash3::hash("LastWildHorse.Body.PrimaryColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Body::PrimaryColor::Red> = murmurhash3::hash("LastWildHorse.Body.PrimaryColor.Red");