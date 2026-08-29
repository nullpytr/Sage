#pragma once
#include <sage>

struct GameData::DongoList : Tag::Structure {
	struct EatNum : Tag::Member { using type = span<s32>*; };
	struct LastEatTime : Tag::Member { using type = span<u32>*; };
	struct PutItemIDList : Tag::Member { using type = span<s32>*; };
	struct UseFirstItemList : Tag::Member { using type = span<bool>*; };
};/* Tag::Structure GameData::DongoList close */

template <> struct Data::Structure<GameData::DongoList> : GameData::DongoList {
	Member<EatNum> EatNum;
	Member<LastEatTime> LastEatTime;
	Member<PutItemIDList> PutItemIDList;
	Member<UseFirstItemList> UseFirstItemList;
	
	explicit Structure(Sav& s) : 
		EatNum { s.get<struct EatNum>() },
		LastEatTime { s.get<struct LastEatTime>() },
		PutItemIDList { s.get<struct PutItemIDList>() },
		UseFirstItemList { s.get<struct UseFirstItemList>() }
	{ }
};/* Data::Structure GameData::DongoList close */

template <> hash_value_t constexpr Data::Hashtable<GameData::DongoList::EatNum> { "DongoList.EatNum" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DongoList::LastEatTime> { "DongoList.LastEatTime" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DongoList::PutItemIDList> { "DongoList.PutItemIDList" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DongoList::UseFirstItemList> { "DongoList.UseFirstItemList" };