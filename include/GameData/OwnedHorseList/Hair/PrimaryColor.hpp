#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::OwnedHorseList::Hair::PrimaryColor : Tag::Structure {
	struct Blue : Tag::Member { using value_type = ::array<u32>; };
	struct Green : Tag::Member { using value_type = ::array<u32>; };
	struct Red : Tag::Member { using value_type = ::array<u32>; };
};/* Tag::Structure GameData::OwnedHorseList::Hair::PrimaryColor close */

template <> struct Data::Structure<GameData::OwnedHorseList::Hair::PrimaryColor> : GameData::OwnedHorseList::Hair::PrimaryColor {
	Blue::value_type Blue;
	Green::value_type Green;
	Red::value_type Red;
	
	explicit Structure(Sav& s) : 
		Blue { s.get<struct Blue>() },
		Green { s.get<struct Green>() },
		Red { s.get<struct Red>() }
	{ }
};/* Data::Structure GameData::OwnedHorseList::Hair::PrimaryColor close */

template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Hair::PrimaryColor::Blue> = murmurhash3::hash("OwnedHorseList.Hair.PrimaryColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Hair::PrimaryColor::Green> = murmurhash3::hash("OwnedHorseList.Hair.PrimaryColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Hair::PrimaryColor::Red> = murmurhash3::hash("OwnedHorseList.Hair.PrimaryColor.Red");