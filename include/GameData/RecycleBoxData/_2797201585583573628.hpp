#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_2797201585583573628 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_2797201585583573628 close */

#include "_2797201585583573628/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_2797201585583573628> : GameData::RecycleBoxData::_2797201585583573628 {
	Data::Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_2797201585583573628 close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_2797201585583573628::IsVisit> = murmurhash3::hash("RecycleBoxData.2797201585583573628.IsVisit");