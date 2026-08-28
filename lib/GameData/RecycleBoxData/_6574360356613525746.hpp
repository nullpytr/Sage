#pragma once
#include <sage>

struct GameData::RecycleBoxData::_6574360356613525746 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_6574360356613525746 close */

#include "_6574360356613525746/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_6574360356613525746> : GameData::RecycleBoxData::_6574360356613525746 {
	Data::Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_6574360356613525746 close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_6574360356613525746::IsVisit> = murmurhash3::hash("RecycleBoxData.6574360356613525746.IsVisit");