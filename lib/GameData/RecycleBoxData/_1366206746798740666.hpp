#pragma once
#include <sage>

struct GameData::RecycleBoxData::_1366206746798740666 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_1366206746798740666 close */

#include "_1366206746798740666/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_1366206746798740666> : GameData::RecycleBoxData::_1366206746798740666 {
	Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_1366206746798740666 close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1366206746798740666::IsVisit> { "RecycleBoxData.1366206746798740666.IsVisit" };