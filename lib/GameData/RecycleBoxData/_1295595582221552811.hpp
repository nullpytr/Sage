#pragma once
#include <sage>

struct GameData::RecycleBoxData::_1295595582221552811 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_1295595582221552811 close */

#include "_1295595582221552811/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_1295595582221552811> : GameData::RecycleBoxData::_1295595582221552811 {
	Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s.get<struct EjectNum>() }
	{ }
};/* Structure Data::Structure GameData::RecycleBoxData::_1295595582221552811 close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1295595582221552811::IsVisit> { "RecycleBoxData.1295595582221552811.IsVisit" };