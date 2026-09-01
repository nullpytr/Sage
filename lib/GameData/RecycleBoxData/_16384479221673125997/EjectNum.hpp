#pragma once
#include <sage>

struct GameData::RecycleBoxData::_16384479221673125997::EjectNum : Tag::Structure {
	struct SpObj_Chaser_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_ControlStick_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_ElectricBoxGenerator_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_FlashLight_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_16384479221673125997::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_16384479221673125997::EjectNum> : GameData::RecycleBoxData::_16384479221673125997::EjectNum {
	Member<SpObj_Chaser_Capsule_A_01> SpObj_Chaser_Capsule_A_01;
	Member<SpObj_ControlStick_Capsule_A_01> SpObj_ControlStick_Capsule_A_01;
	Member<SpObj_ElectricBoxGenerator_Capsule_A_01> SpObj_ElectricBoxGenerator_Capsule_A_01;
	Member<SpObj_FlashLight_Capsule_A_01> SpObj_FlashLight_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_Chaser_Capsule_A_01 { s.get<struct SpObj_Chaser_Capsule_A_01>() },
		SpObj_ControlStick_Capsule_A_01 { s.get<struct SpObj_ControlStick_Capsule_A_01>() },
		SpObj_ElectricBoxGenerator_Capsule_A_01 { s.get<struct SpObj_ElectricBoxGenerator_Capsule_A_01>() },
		SpObj_FlashLight_Capsule_A_01 { s.get<struct SpObj_FlashLight_Capsule_A_01>() }
	{ }
};/* Structure Data::Structure GameData::RecycleBoxData::_16384479221673125997::EjectNum close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_16384479221673125997::EjectNum::SpObj_Chaser_Capsule_A_01> { "RecycleBoxData.16384479221673125997.EjectNum.SpObj_Chaser_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_16384479221673125997::EjectNum::SpObj_ControlStick_Capsule_A_01> { "RecycleBoxData.16384479221673125997.EjectNum.SpObj_ControlStick_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_16384479221673125997::EjectNum::SpObj_ElectricBoxGenerator_Capsule_A_01> { "RecycleBoxData.16384479221673125997.EjectNum.SpObj_ElectricBoxGenerator_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_16384479221673125997::EjectNum::SpObj_FlashLight_Capsule_A_01> { "RecycleBoxData.16384479221673125997.EjectNum.SpObj_FlashLight_Capsule_A_01" };