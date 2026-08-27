#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_18046809928678434263::EjectNum : Tag::Structure {
	struct SpObj_ControlStick_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_FastWheel_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_FastWheel_Capsule_B_01 : Tag::Member { using type = s32&; };
	struct SpObj_GolemHead_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_LiftGeneratorWing_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_Rocket_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_18046809928678434263::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_18046809928678434263::EjectNum> : GameData::RecycleBoxData::_18046809928678434263::EjectNum {
	Data::Member<SpObj_ControlStick_Capsule_A_01> SpObj_ControlStick_Capsule_A_01;
	Data::Member<SpObj_FastWheel_Capsule_A_01> SpObj_FastWheel_Capsule_A_01;
	Data::Member<SpObj_FastWheel_Capsule_B_01> SpObj_FastWheel_Capsule_B_01;
	Data::Member<SpObj_GolemHead_Capsule_A_01> SpObj_GolemHead_Capsule_A_01;
	Data::Member<SpObj_LiftGeneratorWing_Capsule_A_01> SpObj_LiftGeneratorWing_Capsule_A_01;
	Data::Member<SpObj_Rocket_Capsule_A_01> SpObj_Rocket_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_ControlStick_Capsule_A_01 { s.get<struct SpObj_ControlStick_Capsule_A_01>() },
		SpObj_FastWheel_Capsule_A_01 { s.get<struct SpObj_FastWheel_Capsule_A_01>() },
		SpObj_FastWheel_Capsule_B_01 { s.get<struct SpObj_FastWheel_Capsule_B_01>() },
		SpObj_GolemHead_Capsule_A_01 { s.get<struct SpObj_GolemHead_Capsule_A_01>() },
		SpObj_LiftGeneratorWing_Capsule_A_01 { s.get<struct SpObj_LiftGeneratorWing_Capsule_A_01>() },
		SpObj_Rocket_Capsule_A_01 { s.get<struct SpObj_Rocket_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_18046809928678434263::EjectNum close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18046809928678434263::EjectNum::SpObj_ControlStick_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.18046809928678434263.EjectNum.SpObj_ControlStick_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18046809928678434263::EjectNum::SpObj_FastWheel_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.18046809928678434263.EjectNum.SpObj_FastWheel_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18046809928678434263::EjectNum::SpObj_FastWheel_Capsule_B_01> = murmurhash3::hash("RecycleBoxData.18046809928678434263.EjectNum.SpObj_FastWheel_Capsule_B_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18046809928678434263::EjectNum::SpObj_GolemHead_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.18046809928678434263.EjectNum.SpObj_GolemHead_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18046809928678434263::EjectNum::SpObj_LiftGeneratorWing_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.18046809928678434263.EjectNum.SpObj_LiftGeneratorWing_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18046809928678434263::EjectNum::SpObj_Rocket_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.18046809928678434263.EjectNum.SpObj_Rocket_Capsule_A_01");