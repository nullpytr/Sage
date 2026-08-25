#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_1974508051681740815::EjectNum : Tag::Structure {
	struct SpObj_EnergyBank_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_FlameThrower_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_FlashLight_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_GolemHead_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_1974508051681740815::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_1974508051681740815::EjectNum> : GameData::RecycleBoxData::_1974508051681740815::EjectNum {
	SpObj_EnergyBank_Capsule_A_01::type SpObj_EnergyBank_Capsule_A_01;
	SpObj_FlameThrower_Capsule_A_01::type SpObj_FlameThrower_Capsule_A_01;
	SpObj_FlashLight_Capsule_A_01::type SpObj_FlashLight_Capsule_A_01;
	SpObj_GolemHead_Capsule_A_01::type SpObj_GolemHead_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_EnergyBank_Capsule_A_01 { s.get<struct SpObj_EnergyBank_Capsule_A_01>() },
		SpObj_FlameThrower_Capsule_A_01 { s.get<struct SpObj_FlameThrower_Capsule_A_01>() },
		SpObj_FlashLight_Capsule_A_01 { s.get<struct SpObj_FlashLight_Capsule_A_01>() },
		SpObj_GolemHead_Capsule_A_01 { s.get<struct SpObj_GolemHead_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_1974508051681740815::EjectNum close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1974508051681740815::EjectNum::SpObj_EnergyBank_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.1974508051681740815.EjectNum.SpObj_EnergyBank_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1974508051681740815::EjectNum::SpObj_FlameThrower_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.1974508051681740815.EjectNum.SpObj_FlameThrower_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1974508051681740815::EjectNum::SpObj_FlashLight_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.1974508051681740815.EjectNum.SpObj_FlashLight_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1974508051681740815::EjectNum::SpObj_GolemHead_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.1974508051681740815.EjectNum.SpObj_GolemHead_Capsule_A_01");