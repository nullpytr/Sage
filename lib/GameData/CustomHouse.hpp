#pragma once
#include <sage>

struct GameData::CustomHouse : Tag::Structure {
	struct IsBuildMode : Tag::Member { using type = bool&; };
	struct HouseUnitInfo;
	struct BondInfo;
	struct UsedHouseUnitNumAll : Tag::Member { using type = u32&; };
	struct OwnHouseUnitCount : Tag::Member { using type = span<u32>*; };
};/* Tag::Structure GameData::CustomHouse close */

#include "CustomHouse/HouseUnitInfo.hpp"
#include "CustomHouse/BondInfo.hpp"

template <> struct Data::Structure<GameData::CustomHouse> : GameData::CustomHouse {
	Member<IsBuildMode> IsBuildMode;
	Structure<HouseUnitInfo> HouseUnitInfo;
	Structure<BondInfo> BondInfo;
	Member<UsedHouseUnitNumAll> UsedHouseUnitNumAll;
	Member<OwnHouseUnitCount> OwnHouseUnitCount;
	
	explicit Structure(Sav& s) : 
		IsBuildMode { s.get<struct IsBuildMode>() },
		HouseUnitInfo { s },
		BondInfo { s },
		UsedHouseUnitNumAll { s.get<struct UsedHouseUnitNumAll>() },
		OwnHouseUnitCount { s.get<struct OwnHouseUnitCount>() }
	{ }
};/* Data::Structure GameData::CustomHouse close */

template <> hash_t constexpr Data::Hashtable<GameData::CustomHouse::IsBuildMode> = murmurhash3::hash("CustomHouse.IsBuildMode");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouse::UsedHouseUnitNumAll> = murmurhash3::hash("CustomHouse.UsedHouseUnitNumAll");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouse::OwnHouseUnitCount> = murmurhash3::hash("CustomHouse.OwnHouseUnitCount");