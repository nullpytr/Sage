#pragma once
#include <sage>

struct GameData::RecycleBoxData::_15451615410629823334::EjectNum : Tag::Structure {
	struct SpObj_EnergyBank_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_LiftGeneratorWing_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_LightMirror_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_SnowMachine_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_15451615410629823334::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_15451615410629823334::EjectNum> : GameData::RecycleBoxData::_15451615410629823334::EjectNum {
	Member<SpObj_EnergyBank_Capsule_A_01> SpObj_EnergyBank_Capsule_A_01;
	Member<SpObj_LiftGeneratorWing_Capsule_A_01> SpObj_LiftGeneratorWing_Capsule_A_01;
	Member<SpObj_LightMirror_Capsule_A_01> SpObj_LightMirror_Capsule_A_01;
	Member<SpObj_SnowMachine_Capsule_A_01> SpObj_SnowMachine_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_EnergyBank_Capsule_A_01 { s.get<struct SpObj_EnergyBank_Capsule_A_01>() },
		SpObj_LiftGeneratorWing_Capsule_A_01 { s.get<struct SpObj_LiftGeneratorWing_Capsule_A_01>() },
		SpObj_LightMirror_Capsule_A_01 { s.get<struct SpObj_LightMirror_Capsule_A_01>() },
		SpObj_SnowMachine_Capsule_A_01 { s.get<struct SpObj_SnowMachine_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_15451615410629823334::EjectNum close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_15451615410629823334::EjectNum::SpObj_EnergyBank_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.15451615410629823334.EjectNum.SpObj_EnergyBank_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_15451615410629823334::EjectNum::SpObj_LiftGeneratorWing_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.15451615410629823334.EjectNum.SpObj_LiftGeneratorWing_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_15451615410629823334::EjectNum::SpObj_LightMirror_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.15451615410629823334.EjectNum.SpObj_LightMirror_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_15451615410629823334::EjectNum::SpObj_SnowMachine_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.15451615410629823334.EjectNum.SpObj_SnowMachine_Capsule_A_01");