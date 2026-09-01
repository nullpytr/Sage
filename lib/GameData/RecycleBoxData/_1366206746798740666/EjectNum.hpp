#pragma once
#include <sage>

struct GameData::RecycleBoxData::_1366206746798740666::EjectNum : Tag::Structure {
	struct SpObj_ControlStick_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_CookSet_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_EnergyBank_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_FastWheel_Capsule_B_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_1366206746798740666::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_1366206746798740666::EjectNum> : GameData::RecycleBoxData::_1366206746798740666::EjectNum {
	Member<SpObj_ControlStick_Capsule_A_01> SpObj_ControlStick_Capsule_A_01;
	Member<SpObj_CookSet_Capsule_A_01> SpObj_CookSet_Capsule_A_01;
	Member<SpObj_EnergyBank_Capsule_A_01> SpObj_EnergyBank_Capsule_A_01;
	Member<SpObj_FastWheel_Capsule_B_01> SpObj_FastWheel_Capsule_B_01;
	
	explicit Structure(Sav& s) : 
		SpObj_ControlStick_Capsule_A_01 { s.get<struct SpObj_ControlStick_Capsule_A_01>() },
		SpObj_CookSet_Capsule_A_01 { s.get<struct SpObj_CookSet_Capsule_A_01>() },
		SpObj_EnergyBank_Capsule_A_01 { s.get<struct SpObj_EnergyBank_Capsule_A_01>() },
		SpObj_FastWheel_Capsule_B_01 { s.get<struct SpObj_FastWheel_Capsule_B_01>() }
	{ }
};/* Structure Data::Structure GameData::RecycleBoxData::_1366206746798740666::EjectNum close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1366206746798740666::EjectNum::SpObj_ControlStick_Capsule_A_01> { "RecycleBoxData.1366206746798740666.EjectNum.SpObj_ControlStick_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1366206746798740666::EjectNum::SpObj_CookSet_Capsule_A_01> { "RecycleBoxData.1366206746798740666.EjectNum.SpObj_CookSet_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1366206746798740666::EjectNum::SpObj_EnergyBank_Capsule_A_01> { "RecycleBoxData.1366206746798740666.EjectNum.SpObj_EnergyBank_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1366206746798740666::EjectNum::SpObj_FastWheel_Capsule_B_01> { "RecycleBoxData.1366206746798740666.EjectNum.SpObj_FastWheel_Capsule_B_01" };