#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_1366206746798740666 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; using adapter = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_1366206746798740666 close */

#include "_1366206746798740666/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_1366206746798740666> : GameData::RecycleBoxData::_1366206746798740666 {
	IsVisit::type IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_1366206746798740666 close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1366206746798740666::IsVisit> = murmurhash3::hash("RecycleBoxData.1366206746798740666.IsVisit");