#pragma once
#include <sage>

struct GameData::RecycleBoxData::_11115447318048549580 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_11115447318048549580 close */

#include "_11115447318048549580/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_11115447318048549580> : GameData::RecycleBoxData::_11115447318048549580 {
	Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s.get<struct EjectNum>() }
	{ }
};/* Structure Data::Structure GameData::RecycleBoxData::_11115447318048549580 close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_11115447318048549580::IsVisit> { "RecycleBoxData.11115447318048549580.IsVisit" };