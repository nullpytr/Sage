#pragma once
#include <sage>

struct GameData::CustomHouse : Tag::Structure {
	struct IsBuildMode : Tag::Member { using type = bool&; };
	struct OwnHouseUnitCount : Tag::Member { using type = span<u32>*; };
	struct UsedHouseUnitNumAll : Tag::Member { using type = u32&; };
	struct BondInfo;
	struct HouseUnitInfo;
};/* Tag::Structure GameData::CustomHouse close */

#include "CustomHouse/BondInfo.hpp"
#include "CustomHouse/HouseUnitInfo.hpp"

template <> struct Data::Structure<GameData::CustomHouse> : GameData::CustomHouse {
	Member<IsBuildMode> IsBuildMode;
	Member<OwnHouseUnitCount> OwnHouseUnitCount;
	Member<UsedHouseUnitNumAll> UsedHouseUnitNumAll;
	Structure<BondInfo> BondInfo;
	Structure<HouseUnitInfo> HouseUnitInfo;
	
	explicit Structure(Sav& s) : 
		IsBuildMode { s.get<struct IsBuildMode>() },
		OwnHouseUnitCount { s.get<struct OwnHouseUnitCount>() },
		UsedHouseUnitNumAll { s.get<struct UsedHouseUnitNumAll>() },
		BondInfo { s },
		HouseUnitInfo { s }
	{ }
};/* Data::Structure GameData::CustomHouse close */

template <> hash_t constexpr Data::Hashtable<GameData::CustomHouse::IsBuildMode> = murmurhash3::hash("CustomHouse.IsBuildMode");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouse::OwnHouseUnitCount> = murmurhash3::hash("CustomHouse.OwnHouseUnitCount");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouse::UsedHouseUnitNumAll> = murmurhash3::hash("CustomHouse.UsedHouseUnitNumAll");