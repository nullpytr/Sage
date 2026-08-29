#pragma once
#include <sage>

struct GameData::RecycleBoxData::_18338342182923259111 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_18338342182923259111 close */

#include "_18338342182923259111/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_18338342182923259111> : GameData::RecycleBoxData::_18338342182923259111 {
	Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_18338342182923259111 close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18338342182923259111::IsVisit> { "RecycleBoxData.18338342182923259111.IsVisit" };