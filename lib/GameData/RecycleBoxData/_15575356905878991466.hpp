#pragma once
#include <sage>

struct GameData::RecycleBoxData::_15575356905878991466 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_15575356905878991466 close */

#include "_15575356905878991466/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_15575356905878991466> : GameData::RecycleBoxData::_15575356905878991466 {
	Data::Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_15575356905878991466 close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_15575356905878991466::IsVisit> = murmurhash3::hash("RecycleBoxData.15575356905878991466.IsVisit");