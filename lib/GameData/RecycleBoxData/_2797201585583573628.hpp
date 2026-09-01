#pragma once
#include <sage>

struct GameData::RecycleBoxData::_2797201585583573628 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_2797201585583573628 close */

#include "_2797201585583573628/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_2797201585583573628> : GameData::RecycleBoxData::_2797201585583573628 {
	Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s.get<struct EjectNum>() }
	{ }
};/* Structure Data::Structure GameData::RecycleBoxData::_2797201585583573628 close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_2797201585583573628::IsVisit> { "RecycleBoxData.2797201585583573628.IsVisit" };