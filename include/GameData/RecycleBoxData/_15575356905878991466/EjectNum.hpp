#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_15575356905878991466::EjectNum : Tag::Structure {
	struct SpObj_EnergyBank_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_FloatingStone_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_LiftGeneratorWing_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_TiltingDoll_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_WindGenerator_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_15575356905878991466::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_15575356905878991466::EjectNum> : GameData::RecycleBoxData::_15575356905878991466::EjectNum {
	SpObj_EnergyBank_Capsule_A_01::type SpObj_EnergyBank_Capsule_A_01;
	SpObj_FloatingStone_Capsule_A_01::type SpObj_FloatingStone_Capsule_A_01;
	SpObj_LiftGeneratorWing_Capsule_A_01::type SpObj_LiftGeneratorWing_Capsule_A_01;
	SpObj_TiltingDoll_Capsule_A_01::type SpObj_TiltingDoll_Capsule_A_01;
	SpObj_WindGenerator_Capsule_A_01::type SpObj_WindGenerator_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_EnergyBank_Capsule_A_01 { s.get<struct SpObj_EnergyBank_Capsule_A_01>() },
		SpObj_FloatingStone_Capsule_A_01 { s.get<struct SpObj_FloatingStone_Capsule_A_01>() },
		SpObj_LiftGeneratorWing_Capsule_A_01 { s.get<struct SpObj_LiftGeneratorWing_Capsule_A_01>() },
		SpObj_TiltingDoll_Capsule_A_01 { s.get<struct SpObj_TiltingDoll_Capsule_A_01>() },
		SpObj_WindGenerator_Capsule_A_01 { s.get<struct SpObj_WindGenerator_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_15575356905878991466::EjectNum close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_15575356905878991466::EjectNum::SpObj_EnergyBank_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.15575356905878991466.EjectNum.SpObj_EnergyBank_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_15575356905878991466::EjectNum::SpObj_FloatingStone_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.15575356905878991466.EjectNum.SpObj_FloatingStone_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_15575356905878991466::EjectNum::SpObj_LiftGeneratorWing_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.15575356905878991466.EjectNum.SpObj_LiftGeneratorWing_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_15575356905878991466::EjectNum::SpObj_TiltingDoll_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.15575356905878991466.EjectNum.SpObj_TiltingDoll_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_15575356905878991466::EjectNum::SpObj_WindGenerator_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.15575356905878991466.EjectNum.SpObj_WindGenerator_Capsule_A_01");