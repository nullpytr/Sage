#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::CustomHouse::HouseUnitInfo : Tag::Structure {
	struct IsUsed : Tag::Member { using type = span<bool>*; };
	struct HouseUnitType : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { TypeA = murmurhash3::hash("TypeA"), TypeB = murmurhash3::hash("TypeB"), TypeC = murmurhash3::hash("TypeC"), TypeD = murmurhash3::hash("TypeD"), TypeE = murmurhash3::hash("TypeE"), TypeF = murmurhash3::hash("TypeF"), TypeG = murmurhash3::hash("TypeG"), TypeH = murmurhash3::hash("TypeH"), TypeI = murmurhash3::hash("TypeI"), TypeJ = murmurhash3::hash("TypeJ"), TypeK = murmurhash3::hash("TypeK"), TypeL = murmurhash3::hash("TypeL"), TypeM = murmurhash3::hash("TypeM"), TypeN = murmurhash3::hash("TypeN"), TypeO = murmurhash3::hash("TypeO"), TypeP = murmurhash3::hash("TypeP"), TypeQ = murmurhash3::hash("TypeQ"), TypeR = murmurhash3::hash("TypeR"), }; };
		using type = range<enum_t<values_t>>*;
	};
	struct HouseUnitSpecificID : Tag::Member { using type = span<s32>*; };
	struct UnitPos : Tag::Member { using type = span<vec3f>*; };
	struct UnitRotX : Tag::Member { using type = span<vec3f>*; };
	struct UnitRotY : Tag::Member { using type = span<vec3f>*; };
	struct UnitRotZ : Tag::Member { using type = span<vec3f>*; };
};/* Tag::Structure GameData::CustomHouse::HouseUnitInfo close */

template <> struct Data::Structure<GameData::CustomHouse::HouseUnitInfo> : GameData::CustomHouse::HouseUnitInfo {
	Data::Member<IsUsed> IsUsed;
	Data::Enum<HouseUnitType> HouseUnitType;
	Data::Member<HouseUnitSpecificID> HouseUnitSpecificID;
	Data::Member<UnitPos> UnitPos;
	Data::Member<UnitRotX> UnitRotX;
	Data::Member<UnitRotY> UnitRotY;
	Data::Member<UnitRotZ> UnitRotZ;
	
	explicit Structure(Sav& s) : 
		IsUsed { s.get<struct IsUsed>() },
		HouseUnitType { s.get<struct HouseUnitType>() },
		HouseUnitSpecificID { s.get<struct HouseUnitSpecificID>() },
		UnitPos { s.get<struct UnitPos>() },
		UnitRotX { s.get<struct UnitRotX>() },
		UnitRotY { s.get<struct UnitRotY>() },
		UnitRotZ { s.get<struct UnitRotZ>() }
	{ }
};/* Data::Structure GameData::CustomHouse::HouseUnitInfo close */

template <> hash_t constexpr Data::Hashtable<GameData::CustomHouse::HouseUnitInfo::IsUsed> = murmurhash3::hash("CustomHouse.HouseUnitInfo.IsUsed");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouse::HouseUnitInfo::HouseUnitType> = murmurhash3::hash("CustomHouse.HouseUnitInfo.HouseUnitType");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouse::HouseUnitInfo::HouseUnitSpecificID> = murmurhash3::hash("CustomHouse.HouseUnitInfo.HouseUnitSpecificID");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouse::HouseUnitInfo::UnitPos> = murmurhash3::hash("CustomHouse.HouseUnitInfo.UnitPos");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouse::HouseUnitInfo::UnitRotX> = murmurhash3::hash("CustomHouse.HouseUnitInfo.UnitRotX");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouse::HouseUnitInfo::UnitRotY> = murmurhash3::hash("CustomHouse.HouseUnitInfo.UnitRotY");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouse::HouseUnitInfo::UnitRotZ> = murmurhash3::hash("CustomHouse.HouseUnitInfo.UnitRotZ");