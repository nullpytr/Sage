#pragma once
#include <sage>

struct GameData::RecycleBoxData::_5456563061356513399::EjectNum : Tag::Structure {
	struct SpObj_EnergyBank_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_FastWheel_Capsule_B_01 : Tag::Member { using type = s32&; };
	struct SpObj_LiftableWaterPump_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_WindGenerator_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_5456563061356513399::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_5456563061356513399::EjectNum> : GameData::RecycleBoxData::_5456563061356513399::EjectNum {
	Member<SpObj_EnergyBank_Capsule_A_01> SpObj_EnergyBank_Capsule_A_01;
	Member<SpObj_FastWheel_Capsule_B_01> SpObj_FastWheel_Capsule_B_01;
	Member<SpObj_LiftableWaterPump_Capsule_A_01> SpObj_LiftableWaterPump_Capsule_A_01;
	Member<SpObj_WindGenerator_Capsule_A_01> SpObj_WindGenerator_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_EnergyBank_Capsule_A_01 { s.get<struct SpObj_EnergyBank_Capsule_A_01>() },
		SpObj_FastWheel_Capsule_B_01 { s.get<struct SpObj_FastWheel_Capsule_B_01>() },
		SpObj_LiftableWaterPump_Capsule_A_01 { s.get<struct SpObj_LiftableWaterPump_Capsule_A_01>() },
		SpObj_WindGenerator_Capsule_A_01 { s.get<struct SpObj_WindGenerator_Capsule_A_01>() }
	{ }
};/* Structure Data::Structure GameData::RecycleBoxData::_5456563061356513399::EjectNum close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_5456563061356513399::EjectNum::SpObj_EnergyBank_Capsule_A_01> { "RecycleBoxData.5456563061356513399.EjectNum.SpObj_EnergyBank_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_5456563061356513399::EjectNum::SpObj_FastWheel_Capsule_B_01> { "RecycleBoxData.5456563061356513399.EjectNum.SpObj_FastWheel_Capsule_B_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_5456563061356513399::EjectNum::SpObj_LiftableWaterPump_Capsule_A_01> { "RecycleBoxData.5456563061356513399.EjectNum.SpObj_LiftableWaterPump_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_5456563061356513399::EjectNum::SpObj_WindGenerator_Capsule_A_01> { "RecycleBoxData.5456563061356513399.EjectNum.SpObj_WindGenerator_Capsule_A_01" };