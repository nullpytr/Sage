#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_1295595582221552811::EjectNum : Tag::Structure {
	struct SpObj_Cart_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_FlashLight_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_LiftGeneratorWing_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_SlipBoard_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_WindGenerator_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_1295595582221552811::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_1295595582221552811::EjectNum> : GameData::RecycleBoxData::_1295595582221552811::EjectNum {
	Data::Member<SpObj_Cart_Capsule_A_01> SpObj_Cart_Capsule_A_01;
	Data::Member<SpObj_FlashLight_Capsule_A_01> SpObj_FlashLight_Capsule_A_01;
	Data::Member<SpObj_LiftGeneratorWing_Capsule_A_01> SpObj_LiftGeneratorWing_Capsule_A_01;
	Data::Member<SpObj_SlipBoard_Capsule_A_01> SpObj_SlipBoard_Capsule_A_01;
	Data::Member<SpObj_WindGenerator_Capsule_A_01> SpObj_WindGenerator_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_Cart_Capsule_A_01 { s.get<struct SpObj_Cart_Capsule_A_01>() },
		SpObj_FlashLight_Capsule_A_01 { s.get<struct SpObj_FlashLight_Capsule_A_01>() },
		SpObj_LiftGeneratorWing_Capsule_A_01 { s.get<struct SpObj_LiftGeneratorWing_Capsule_A_01>() },
		SpObj_SlipBoard_Capsule_A_01 { s.get<struct SpObj_SlipBoard_Capsule_A_01>() },
		SpObj_WindGenerator_Capsule_A_01 { s.get<struct SpObj_WindGenerator_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_1295595582221552811::EjectNum close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1295595582221552811::EjectNum::SpObj_Cart_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.1295595582221552811.EjectNum.SpObj_Cart_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1295595582221552811::EjectNum::SpObj_FlashLight_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.1295595582221552811.EjectNum.SpObj_FlashLight_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1295595582221552811::EjectNum::SpObj_LiftGeneratorWing_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.1295595582221552811.EjectNum.SpObj_LiftGeneratorWing_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1295595582221552811::EjectNum::SpObj_SlipBoard_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.1295595582221552811.EjectNum.SpObj_SlipBoard_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1295595582221552811::EjectNum::SpObj_WindGenerator_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.1295595582221552811.EjectNum.SpObj_WindGenerator_Capsule_A_01");