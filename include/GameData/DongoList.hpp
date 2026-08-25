#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::DongoList : Tag::Structure {
	struct UseFirstItemList : Tag::Member { using type = span<bool>; using adapter = adapter<type>*; };
	struct EatNum : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct PutItemIDList : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct LastEatTime : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::DongoList close */

template <> struct Data::Structure<GameData::DongoList> : GameData::DongoList {
	UseFirstItemList::type UseFirstItemList;
	EatNum::type EatNum;
	PutItemIDList::type PutItemIDList;
	LastEatTime::type LastEatTime;
	
	explicit Structure(Sav& s) : 
		UseFirstItemList { s.get<struct UseFirstItemList>() },
		EatNum { s.get<struct EatNum>() },
		PutItemIDList { s.get<struct PutItemIDList>() },
		LastEatTime { s.get<struct LastEatTime>() }
	{ }
};/* Data::Structure GameData::DongoList close */

template <> hash_t constexpr Data::Hashtable<GameData::DongoList::UseFirstItemList> = murmurhash3::hash("DongoList.UseFirstItemList");
template <> hash_t constexpr Data::Hashtable<GameData::DongoList::EatNum> = murmurhash3::hash("DongoList.EatNum");
template <> hash_t constexpr Data::Hashtable<GameData::DongoList::PutItemIDList> = murmurhash3::hash("DongoList.PutItemIDList");
template <> hash_t constexpr Data::Hashtable<GameData::DongoList::LastEatTime> = murmurhash3::hash("DongoList.LastEatTime");