#pragma once
#include <sage>

struct GameData::DongoList : Tag::Structure {
	struct UseFirstItemList : Tag::Member { using type = span<bool>*; };
	struct EatNum : Tag::Member { using type = span<s32>*; };
	struct PutItemIDList : Tag::Member { using type = span<s32>*; };
	struct LastEatTime : Tag::Member { using type = span<u32>*; };
};/* Tag::Structure GameData::DongoList close */

template <> struct Data::Structure<GameData::DongoList> : GameData::DongoList {
	Member<UseFirstItemList> UseFirstItemList;
	Member<EatNum> EatNum;
	Member<PutItemIDList> PutItemIDList;
	Member<LastEatTime> LastEatTime;
	
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