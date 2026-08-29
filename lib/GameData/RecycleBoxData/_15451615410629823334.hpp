#pragma once
#include <sage>

struct GameData::RecycleBoxData::_15451615410629823334 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_15451615410629823334 close */

#include "_15451615410629823334/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_15451615410629823334> : GameData::RecycleBoxData::_15451615410629823334 {
	Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_15451615410629823334 close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_15451615410629823334::IsVisit> { "RecycleBoxData.15451615410629823334.IsVisit" };