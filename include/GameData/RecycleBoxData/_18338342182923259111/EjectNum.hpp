#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_18338342182923259111::EjectNum : Tag::Structure {
	struct SpObj_Cannon_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_LiftGeneratorWing_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_SpringPiston_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_TimerBomb_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_18338342182923259111::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_18338342182923259111::EjectNum> : GameData::RecycleBoxData::_18338342182923259111::EjectNum {
	Data::Member<SpObj_Cannon_Capsule_A_01> SpObj_Cannon_Capsule_A_01;
	Data::Member<SpObj_LiftGeneratorWing_Capsule_A_01> SpObj_LiftGeneratorWing_Capsule_A_01;
	Data::Member<SpObj_SpringPiston_Capsule_A_01> SpObj_SpringPiston_Capsule_A_01;
	Data::Member<SpObj_TimerBomb_Capsule_A_01> SpObj_TimerBomb_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_Cannon_Capsule_A_01 { s.get<struct SpObj_Cannon_Capsule_A_01>() },
		SpObj_LiftGeneratorWing_Capsule_A_01 { s.get<struct SpObj_LiftGeneratorWing_Capsule_A_01>() },
		SpObj_SpringPiston_Capsule_A_01 { s.get<struct SpObj_SpringPiston_Capsule_A_01>() },
		SpObj_TimerBomb_Capsule_A_01 { s.get<struct SpObj_TimerBomb_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_18338342182923259111::EjectNum close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18338342182923259111::EjectNum::SpObj_Cannon_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.18338342182923259111.EjectNum.SpObj_Cannon_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18338342182923259111::EjectNum::SpObj_LiftGeneratorWing_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.18338342182923259111.EjectNum.SpObj_LiftGeneratorWing_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18338342182923259111::EjectNum::SpObj_SpringPiston_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.18338342182923259111.EjectNum.SpObj_SpringPiston_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18338342182923259111::EjectNum::SpObj_TimerBomb_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.18338342182923259111.EjectNum.SpObj_TimerBomb_Capsule_A_01");