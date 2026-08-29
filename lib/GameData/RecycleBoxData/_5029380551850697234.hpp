#pragma once
#include <sage>

struct GameData::RecycleBoxData::_5029380551850697234 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_5029380551850697234 close */

#include "_5029380551850697234/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_5029380551850697234> : GameData::RecycleBoxData::_5029380551850697234 {
	Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_5029380551850697234 close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_5029380551850697234::IsVisit> { "RecycleBoxData.5029380551850697234.IsVisit" };