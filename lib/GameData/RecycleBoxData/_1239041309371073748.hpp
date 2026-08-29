#pragma once
#include <sage>

struct GameData::RecycleBoxData::_1239041309371073748 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_1239041309371073748 close */

#include "_1239041309371073748/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_1239041309371073748> : GameData::RecycleBoxData::_1239041309371073748 {
	Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_1239041309371073748 close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1239041309371073748::IsVisit> { "RecycleBoxData.1239041309371073748.IsVisit" };