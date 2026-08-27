#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_18338342182923259111 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_18338342182923259111 close */

#include "_18338342182923259111/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_18338342182923259111> : GameData::RecycleBoxData::_18338342182923259111 {
	Data::Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_18338342182923259111 close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18338342182923259111::IsVisit> = murmurhash3::hash("RecycleBoxData.18338342182923259111.IsVisit");