#pragma once
#include <sage>

struct GameData::RecycleBoxData::_18210954504481072128 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_18210954504481072128 close */

#include "_18210954504481072128/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_18210954504481072128> : GameData::RecycleBoxData::_18210954504481072128 {
	Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s.get<struct EjectNum>() }
	{ }
};/* Structure Data::Structure GameData::RecycleBoxData::_18210954504481072128 close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18210954504481072128::IsVisit> { "RecycleBoxData.18210954504481072128.IsVisit" };