#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_15205531352253250869 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; using adapter = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_15205531352253250869 close */

#include "_15205531352253250869/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_15205531352253250869> : GameData::RecycleBoxData::_15205531352253250869 {
	IsVisit::type IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_15205531352253250869 close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_15205531352253250869::IsVisit> = murmurhash3::hash("RecycleBoxData.15205531352253250869.IsVisit");