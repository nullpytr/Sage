#pragma once
#include <sage>

struct GameData::RecycleBoxData::_1974508051681740815::EjectNum : Tag::Structure {
	struct SpObj_EnergyBank_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_FlameThrower_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_FlashLight_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_GolemHead_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_1974508051681740815::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_1974508051681740815::EjectNum> : GameData::RecycleBoxData::_1974508051681740815::EjectNum {
	Member<SpObj_EnergyBank_Capsule_A_01> SpObj_EnergyBank_Capsule_A_01;
	Member<SpObj_FlameThrower_Capsule_A_01> SpObj_FlameThrower_Capsule_A_01;
	Member<SpObj_FlashLight_Capsule_A_01> SpObj_FlashLight_Capsule_A_01;
	Member<SpObj_GolemHead_Capsule_A_01> SpObj_GolemHead_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_EnergyBank_Capsule_A_01 { s.get<struct SpObj_EnergyBank_Capsule_A_01>() },
		SpObj_FlameThrower_Capsule_A_01 { s.get<struct SpObj_FlameThrower_Capsule_A_01>() },
		SpObj_FlashLight_Capsule_A_01 { s.get<struct SpObj_FlashLight_Capsule_A_01>() },
		SpObj_GolemHead_Capsule_A_01 { s.get<struct SpObj_GolemHead_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_1974508051681740815::EjectNum close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1974508051681740815::EjectNum::SpObj_EnergyBank_Capsule_A_01> { "RecycleBoxData.1974508051681740815.EjectNum.SpObj_EnergyBank_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1974508051681740815::EjectNum::SpObj_FlameThrower_Capsule_A_01> { "RecycleBoxData.1974508051681740815.EjectNum.SpObj_FlameThrower_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1974508051681740815::EjectNum::SpObj_FlashLight_Capsule_A_01> { "RecycleBoxData.1974508051681740815.EjectNum.SpObj_FlashLight_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1974508051681740815::EjectNum::SpObj_GolemHead_Capsule_A_01> { "RecycleBoxData.1974508051681740815.EjectNum.SpObj_GolemHead_Capsule_A_01" };