#pragma once
#include <sage>

struct GameData::CustomHouse::BondInfo : Tag::Structure {
	struct UnitAIndex : Tag::Member { using type = span<s32>*; };
	struct UnitBIndex : Tag::Member { using type = span<s32>*; };
};/* Tag::Structure GameData::CustomHouse::BondInfo close */

template <> struct Data::Structure<GameData::CustomHouse::BondInfo> : GameData::CustomHouse::BondInfo {
	Member<UnitAIndex> UnitAIndex;
	Member<UnitBIndex> UnitBIndex;
	
	explicit Structure(Sav& s) : 
		UnitAIndex { s.get<struct UnitAIndex>() },
		UnitBIndex { s.get<struct UnitBIndex>() }
	{ }
};/* Data::Structure GameData::CustomHouse::BondInfo close */

template <> hash_value_t constexpr Data::Hashtable<GameData::CustomHouse::BondInfo::UnitAIndex> { "CustomHouse.BondInfo.UnitAIndex" };
template <> hash_value_t constexpr Data::Hashtable<GameData::CustomHouse::BondInfo::UnitBIndex> { "CustomHouse.BondInfo.UnitBIndex" };