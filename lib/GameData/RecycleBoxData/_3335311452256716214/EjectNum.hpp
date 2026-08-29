#pragma once
#include <sage>

struct GameData::RecycleBoxData::_3335311452256716214::EjectNum : Tag::Structure {
	struct SpObj_Cannon_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_ControlStick_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_FastWheel_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_FlashLight_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_3335311452256716214::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_3335311452256716214::EjectNum> : GameData::RecycleBoxData::_3335311452256716214::EjectNum {
	Member<SpObj_Cannon_Capsule_A_01> SpObj_Cannon_Capsule_A_01;
	Member<SpObj_ControlStick_Capsule_A_01> SpObj_ControlStick_Capsule_A_01;
	Member<SpObj_FastWheel_Capsule_A_01> SpObj_FastWheel_Capsule_A_01;
	Member<SpObj_FlashLight_Capsule_A_01> SpObj_FlashLight_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_Cannon_Capsule_A_01 { s.get<struct SpObj_Cannon_Capsule_A_01>() },
		SpObj_ControlStick_Capsule_A_01 { s.get<struct SpObj_ControlStick_Capsule_A_01>() },
		SpObj_FastWheel_Capsule_A_01 { s.get<struct SpObj_FastWheel_Capsule_A_01>() },
		SpObj_FlashLight_Capsule_A_01 { s.get<struct SpObj_FlashLight_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_3335311452256716214::EjectNum close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_3335311452256716214::EjectNum::SpObj_Cannon_Capsule_A_01> { "RecycleBoxData.3335311452256716214.EjectNum.SpObj_Cannon_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_3335311452256716214::EjectNum::SpObj_ControlStick_Capsule_A_01> { "RecycleBoxData.3335311452256716214.EjectNum.SpObj_ControlStick_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_3335311452256716214::EjectNum::SpObj_FastWheel_Capsule_A_01> { "RecycleBoxData.3335311452256716214.EjectNum.SpObj_FastWheel_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_3335311452256716214::EjectNum::SpObj_FlashLight_Capsule_A_01> { "RecycleBoxData.3335311452256716214.EjectNum.SpObj_FlashLight_Capsule_A_01" };