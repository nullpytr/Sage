#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_81618141019492151::EjectNum : Tag::Structure {
	struct SpObj_ElectricBoxGenerator_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_Pile_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_SlipBoard_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_SnowMachine_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_TiltingDoll_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_81618141019492151::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_81618141019492151::EjectNum> : GameData::RecycleBoxData::_81618141019492151::EjectNum {
	SpObj_ElectricBoxGenerator_Capsule_A_01::type SpObj_ElectricBoxGenerator_Capsule_A_01;
	SpObj_Pile_Capsule_A_01::type SpObj_Pile_Capsule_A_01;
	SpObj_SlipBoard_Capsule_A_01::type SpObj_SlipBoard_Capsule_A_01;
	SpObj_SnowMachine_Capsule_A_01::type SpObj_SnowMachine_Capsule_A_01;
	SpObj_TiltingDoll_Capsule_A_01::type SpObj_TiltingDoll_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_ElectricBoxGenerator_Capsule_A_01 { s.get<struct SpObj_ElectricBoxGenerator_Capsule_A_01>() },
		SpObj_Pile_Capsule_A_01 { s.get<struct SpObj_Pile_Capsule_A_01>() },
		SpObj_SlipBoard_Capsule_A_01 { s.get<struct SpObj_SlipBoard_Capsule_A_01>() },
		SpObj_SnowMachine_Capsule_A_01 { s.get<struct SpObj_SnowMachine_Capsule_A_01>() },
		SpObj_TiltingDoll_Capsule_A_01 { s.get<struct SpObj_TiltingDoll_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_81618141019492151::EjectNum close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_81618141019492151::EjectNum::SpObj_ElectricBoxGenerator_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.81618141019492151.EjectNum.SpObj_ElectricBoxGenerator_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_81618141019492151::EjectNum::SpObj_Pile_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.81618141019492151.EjectNum.SpObj_Pile_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_81618141019492151::EjectNum::SpObj_SlipBoard_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.81618141019492151.EjectNum.SpObj_SlipBoard_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_81618141019492151::EjectNum::SpObj_SnowMachine_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.81618141019492151.EjectNum.SpObj_SnowMachine_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_81618141019492151::EjectNum::SpObj_TiltingDoll_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.81618141019492151.EjectNum.SpObj_TiltingDoll_Capsule_A_01");