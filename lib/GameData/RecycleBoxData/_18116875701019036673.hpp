#pragma once
#include <sage>

struct GameData::RecycleBoxData::_18116875701019036673 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_18116875701019036673 close */

#include "_18116875701019036673/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_18116875701019036673> : GameData::RecycleBoxData::_18116875701019036673 {
	Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_18116875701019036673 close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18116875701019036673::IsVisit> { "RecycleBoxData.18116875701019036673.IsVisit" };