#pragma once
#include <sage>

struct GameData::RecycleBoxData::_3335311452256716214 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_3335311452256716214 close */

#include "_3335311452256716214/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_3335311452256716214> : GameData::RecycleBoxData::_3335311452256716214 {
	Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_3335311452256716214 close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_3335311452256716214::IsVisit> = murmurhash3::hash("RecycleBoxData.3335311452256716214.IsVisit");