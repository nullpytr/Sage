#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_17433148769607751574 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_17433148769607751574 close */

#include "_17433148769607751574/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_17433148769607751574> : GameData::RecycleBoxData::_17433148769607751574 {
	Data::Member<IsVisit> IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_17433148769607751574 close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_17433148769607751574::IsVisit> = murmurhash3::hash("RecycleBoxData.17433148769607751574.IsVisit");