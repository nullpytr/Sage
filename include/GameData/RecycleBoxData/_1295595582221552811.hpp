#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_1295595582221552811 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_1295595582221552811 close */

#include "_1295595582221552811/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_1295595582221552811> : GameData::RecycleBoxData::_1295595582221552811 {
	Data::Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_1295595582221552811 close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1295595582221552811::IsVisit> = murmurhash3::hash("RecycleBoxData.1295595582221552811.IsVisit");