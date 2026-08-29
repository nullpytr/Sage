#pragma once
#include <sage>

struct GameData::RecycleBoxData::_18046809928678434263 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_18046809928678434263 close */

#include "_18046809928678434263/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_18046809928678434263> : GameData::RecycleBoxData::_18046809928678434263 {
	Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_18046809928678434263 close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18046809928678434263::IsVisit> { "RecycleBoxData.18046809928678434263.IsVisit" };