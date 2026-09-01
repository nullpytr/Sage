#pragma once
#include <sage>

struct GameData::RecycleBoxData::_15575356905878991466 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_15575356905878991466 close */

#include "_15575356905878991466/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_15575356905878991466> : GameData::RecycleBoxData::_15575356905878991466 {
	Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s.get<struct EjectNum>() }
	{ }
};/* Structure Data::Structure GameData::RecycleBoxData::_15575356905878991466 close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_15575356905878991466::IsVisit> { "RecycleBoxData.15575356905878991466.IsVisit" };