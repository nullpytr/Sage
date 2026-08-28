#pragma once
#include <sage>

struct GameData::RecycleBoxData::_9420253473696152512 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_9420253473696152512 close */

#include "_9420253473696152512/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_9420253473696152512> : GameData::RecycleBoxData::_9420253473696152512 {
	Data::Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_9420253473696152512 close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_9420253473696152512::IsVisit> = murmurhash3::hash("RecycleBoxData.9420253473696152512.IsVisit");