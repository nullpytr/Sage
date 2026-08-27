#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_16384479221673125997 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_16384479221673125997 close */

#include "_16384479221673125997/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_16384479221673125997> : GameData::RecycleBoxData::_16384479221673125997 {
	Data::Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_16384479221673125997 close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_16384479221673125997::IsVisit> = murmurhash3::hash("RecycleBoxData.16384479221673125997.IsVisit");