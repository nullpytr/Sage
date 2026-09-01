#pragma once
#include <sage>

struct GameData::RecycleBoxData::_5618536671597422861 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_5618536671597422861 close */

#include "_5618536671597422861/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_5618536671597422861> : GameData::RecycleBoxData::_5618536671597422861 {
	Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s.get<struct EjectNum>() }
	{ }
};/* Structure Data::Structure GameData::RecycleBoxData::_5618536671597422861 close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_5618536671597422861::IsVisit> { "RecycleBoxData.5618536671597422861.IsVisit" };