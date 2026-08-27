#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_5456563061356513399 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_5456563061356513399 close */

#include "_5456563061356513399/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_5456563061356513399> : GameData::RecycleBoxData::_5456563061356513399 {
	Data::Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_5456563061356513399 close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_5456563061356513399::IsVisit> = murmurhash3::hash("RecycleBoxData.5456563061356513399.IsVisit");