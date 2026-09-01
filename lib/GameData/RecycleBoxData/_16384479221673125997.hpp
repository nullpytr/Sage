#pragma once
#include <sage>

struct GameData::RecycleBoxData::_16384479221673125997 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_16384479221673125997 close */

#include "_16384479221673125997/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_16384479221673125997> : GameData::RecycleBoxData::_16384479221673125997 {
	Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s.get<struct EjectNum>() }
	{ }
};/* Structure Data::Structure GameData::RecycleBoxData::_16384479221673125997 close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_16384479221673125997::IsVisit> { "RecycleBoxData.16384479221673125997.IsVisit" };