#pragma once
#include <sage>

struct GameData::RecycleBoxData::_81618141019492151 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_81618141019492151 close */

#include "_81618141019492151/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_81618141019492151> : GameData::RecycleBoxData::_81618141019492151 {
	Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_81618141019492151 close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_81618141019492151::IsVisit> { "RecycleBoxData.81618141019492151.IsVisit" };