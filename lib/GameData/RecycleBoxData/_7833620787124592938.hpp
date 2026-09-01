#pragma once
#include <sage>

struct GameData::RecycleBoxData::_7833620787124592938 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_7833620787124592938 close */

#include "_7833620787124592938/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_7833620787124592938> : GameData::RecycleBoxData::_7833620787124592938 {
	Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s.get<struct EjectNum>() }
	{ }
};/* Structure Data::Structure GameData::RecycleBoxData::_7833620787124592938 close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_7833620787124592938::IsVisit> { "RecycleBoxData.7833620787124592938.IsVisit" };