#pragma once
#include <sage>

struct GameData::RecycleBoxData::_18190666740725697704 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_18190666740725697704 close */

#include "_18190666740725697704/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_18190666740725697704> : GameData::RecycleBoxData::_18190666740725697704 {
	Data::Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_18190666740725697704 close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18190666740725697704::IsVisit> = murmurhash3::hash("RecycleBoxData.18190666740725697704.IsVisit");