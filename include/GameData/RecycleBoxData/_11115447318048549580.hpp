#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_11115447318048549580 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_11115447318048549580 close */

#include "_11115447318048549580/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_11115447318048549580> : GameData::RecycleBoxData::_11115447318048549580 {
	Data::Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_11115447318048549580 close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_11115447318048549580::IsVisit> = murmurhash3::hash("RecycleBoxData.11115447318048549580.IsVisit");