#pragma once
#include <sage>

struct GameData::RecycleBoxData::_15467851743395390442 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_15467851743395390442 close */

#include "_15467851743395390442/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_15467851743395390442> : GameData::RecycleBoxData::_15467851743395390442 {
	Data::Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_15467851743395390442 close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_15467851743395390442::IsVisit> = murmurhash3::hash("RecycleBoxData.15467851743395390442.IsVisit");