#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_12031291170945200222::EjectNum : Tag::Structure {
	struct SpObj_Cart_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_ControlStick_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_LiftGeneratorWing_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_WindGenerator_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_12031291170945200222::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_12031291170945200222::EjectNum> : GameData::RecycleBoxData::_12031291170945200222::EjectNum {
	SpObj_Cart_Capsule_A_01::type SpObj_Cart_Capsule_A_01;
	SpObj_ControlStick_Capsule_A_01::type SpObj_ControlStick_Capsule_A_01;
	SpObj_LiftGeneratorWing_Capsule_A_01::type SpObj_LiftGeneratorWing_Capsule_A_01;
	SpObj_WindGenerator_Capsule_A_01::type SpObj_WindGenerator_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_Cart_Capsule_A_01 { s.get<struct SpObj_Cart_Capsule_A_01>() },
		SpObj_ControlStick_Capsule_A_01 { s.get<struct SpObj_ControlStick_Capsule_A_01>() },
		SpObj_LiftGeneratorWing_Capsule_A_01 { s.get<struct SpObj_LiftGeneratorWing_Capsule_A_01>() },
		SpObj_WindGenerator_Capsule_A_01 { s.get<struct SpObj_WindGenerator_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_12031291170945200222::EjectNum close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_12031291170945200222::EjectNum::SpObj_Cart_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.12031291170945200222.EjectNum.SpObj_Cart_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_12031291170945200222::EjectNum::SpObj_ControlStick_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.12031291170945200222.EjectNum.SpObj_ControlStick_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_12031291170945200222::EjectNum::SpObj_LiftGeneratorWing_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.12031291170945200222.EjectNum.SpObj_LiftGeneratorWing_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_12031291170945200222::EjectNum::SpObj_WindGenerator_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.12031291170945200222.EjectNum.SpObj_WindGenerator_Capsule_A_01");