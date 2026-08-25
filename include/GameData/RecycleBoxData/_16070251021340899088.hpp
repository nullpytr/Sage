#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_16070251021340899088 : Tag::Structure {
	struct IsVisit : Tag::Member { using type = bool&; using adapter = bool&; };
	struct EjectNum;
};/* Tag::Structure GameData::RecycleBoxData::_16070251021340899088 close */

#include "_16070251021340899088/EjectNum.hpp"

template <> struct Data::Structure<GameData::RecycleBoxData::_16070251021340899088> : GameData::RecycleBoxData::_16070251021340899088 {
	IsVisit::type IsVisit;
	Structure<EjectNum> EjectNum;
	
	explicit Structure(Sav& s) : 
		IsVisit { s.get<struct IsVisit>() },
		EjectNum { s }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_16070251021340899088 close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_16070251021340899088::IsVisit> = murmurhash3::hash("RecycleBoxData.16070251021340899088.IsVisit");