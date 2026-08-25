#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_3335311452256716214::EjectNum : Tag::Structure {
	struct SpObj_Cannon_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_ControlStick_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_FastWheel_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_FlashLight_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_3335311452256716214::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_3335311452256716214::EjectNum> : GameData::RecycleBoxData::_3335311452256716214::EjectNum {
	SpObj_Cannon_Capsule_A_01::type SpObj_Cannon_Capsule_A_01;
	SpObj_ControlStick_Capsule_A_01::type SpObj_ControlStick_Capsule_A_01;
	SpObj_FastWheel_Capsule_A_01::type SpObj_FastWheel_Capsule_A_01;
	SpObj_FlashLight_Capsule_A_01::type SpObj_FlashLight_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_Cannon_Capsule_A_01 { s.get<struct SpObj_Cannon_Capsule_A_01>() },
		SpObj_ControlStick_Capsule_A_01 { s.get<struct SpObj_ControlStick_Capsule_A_01>() },
		SpObj_FastWheel_Capsule_A_01 { s.get<struct SpObj_FastWheel_Capsule_A_01>() },
		SpObj_FlashLight_Capsule_A_01 { s.get<struct SpObj_FlashLight_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_3335311452256716214::EjectNum close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_3335311452256716214::EjectNum::SpObj_Cannon_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.3335311452256716214.EjectNum.SpObj_Cannon_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_3335311452256716214::EjectNum::SpObj_ControlStick_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.3335311452256716214.EjectNum.SpObj_ControlStick_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_3335311452256716214::EjectNum::SpObj_FastWheel_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.3335311452256716214.EjectNum.SpObj_FastWheel_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_3335311452256716214::EjectNum::SpObj_FlashLight_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.3335311452256716214.EjectNum.SpObj_FlashLight_Capsule_A_01");