#pragma once
#include <sage>

struct GameData::CustomHouse::BondInfo : Tag::Structure {
	struct UnitAIndex : Tag::Member { using type = span<s32>*; };
	struct UnitBIndex : Tag::Member { using type = span<s32>*; };
};/* Tag::Structure GameData::CustomHouse::BondInfo close */

template <> struct Data::Structure<GameData::CustomHouse::BondInfo> : GameData::CustomHouse::BondInfo {
	Data::Member<UnitAIndex> UnitAIndex;
	Data::Member<UnitBIndex> UnitBIndex;
	
	explicit Structure(Sav& s) : 
		UnitAIndex { s.get<struct UnitAIndex>() },
		UnitBIndex { s.get<struct UnitBIndex>() }
	{ }
};/* Data::Structure GameData::CustomHouse::BondInfo close */

template <> hash_t constexpr Data::Hashtable<GameData::CustomHouse::BondInfo::UnitAIndex> = murmurhash3::hash("CustomHouse.BondInfo.UnitAIndex");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouse::BondInfo::UnitBIndex> = murmurhash3::hash("CustomHouse.BondInfo.UnitBIndex");