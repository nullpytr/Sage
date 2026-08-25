#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::LastWildHorse::Hair::SecondaryColor : Tag::Structure {
	struct Blue : Tag::Member { using type = u32&; using adapter = u32&; };
	struct Green : Tag::Member { using type = u32&; using adapter = u32&; };
	struct Red : Tag::Member { using type = u32&; using adapter = u32&; };
};/* Tag::Structure GameData::LastWildHorse::Hair::SecondaryColor close */

template <> struct Data::Structure<GameData::LastWildHorse::Hair::SecondaryColor> : GameData::LastWildHorse::Hair::SecondaryColor {
	Blue::type Blue;
	Green::type Green;
	Red::type Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::LastWildHorse::Hair::SecondaryColor close */

template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Hair::SecondaryColor::Blue> = murmurhash3::hash("LastWildHorse.Hair.SecondaryColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Hair::SecondaryColor::Green> = murmurhash3::hash("LastWildHorse.Hair.SecondaryColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Hair::SecondaryColor::Red> = murmurhash3::hash("LastWildHorse.Hair.SecondaryColor.Red");