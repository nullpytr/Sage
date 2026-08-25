#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::LastWildHorse::Hair::PrimaryColor : Tag::Structure {
	struct Blue : Tag::Member { using type = u32&; using adapter = u32&; };
	struct Green : Tag::Member { using type = u32&; using adapter = u32&; };
	struct Red : Tag::Member { using type = u32&; using adapter = u32&; };
};/* Tag::Structure GameData::LastWildHorse::Hair::PrimaryColor close */

template <> struct Data::Structure<GameData::LastWildHorse::Hair::PrimaryColor> : GameData::LastWildHorse::Hair::PrimaryColor {
	Blue::type Blue;
	Green::type Green;
	Red::type Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::LastWildHorse::Hair::PrimaryColor close */

template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Hair::PrimaryColor::Blue> = murmurhash3::hash("LastWildHorse.Hair.PrimaryColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Hair::PrimaryColor::Green> = murmurhash3::hash("LastWildHorse.Hair.PrimaryColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::LastWildHorse::Hair::PrimaryColor::Red> = murmurhash3::hash("LastWildHorse.Hair.PrimaryColor.Red");