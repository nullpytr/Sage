#pragma once
#include <sage>

struct GameData::RecycleBoxData::_12031291170945200222 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_12031291170945200222 close */

#include "_12031291170945200222/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_12031291170945200222> : GameData::RecycleBoxData::_12031291170945200222 {
	Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_12031291170945200222 close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_12031291170945200222::IsVisit> { "RecycleBoxData.12031291170945200222.IsVisit" };