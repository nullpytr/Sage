#pragma once
#include <sage>

struct GameData::RecycleBoxData::_11015094637093146118 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_11015094637093146118 close */

#include "_11015094637093146118/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_11015094637093146118> : GameData::RecycleBoxData::_11015094637093146118 {
	Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_11015094637093146118 close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_11015094637093146118::IsVisit> { "RecycleBoxData.11015094637093146118.IsVisit" };