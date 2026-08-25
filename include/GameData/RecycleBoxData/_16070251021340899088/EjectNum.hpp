#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_16070251021340899088::EjectNum : Tag::Structure {
	struct SpObj_BalloonEnvelope_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_ControlStick_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_FastWheel_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_FastWheel_Capsule_B_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_Rocket_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_WindGenerator_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_16070251021340899088::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_16070251021340899088::EjectNum> : GameData::RecycleBoxData::_16070251021340899088::EjectNum {
	SpObj_BalloonEnvelope_Capsule_A_01::type SpObj_BalloonEnvelope_Capsule_A_01;
	SpObj_ControlStick_Capsule_A_01::type SpObj_ControlStick_Capsule_A_01;
	SpObj_FastWheel_Capsule_A_01::type SpObj_FastWheel_Capsule_A_01;
	SpObj_FastWheel_Capsule_B_01::type SpObj_FastWheel_Capsule_B_01;
	SpObj_Rocket_Capsule_A_01::type SpObj_Rocket_Capsule_A_01;
	SpObj_WindGenerator_Capsule_A_01::type SpObj_WindGenerator_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_BalloonEnvelope_Capsule_A_01 { s.get<struct SpObj_BalloonEnvelope_Capsule_A_01>() },
		SpObj_ControlStick_Capsule_A_01 { s.get<struct SpObj_ControlStick_Capsule_A_01>() },
		SpObj_FastWheel_Capsule_A_01 { s.get<struct SpObj_FastWheel_Capsule_A_01>() },
		SpObj_FastWheel_Capsule_B_01 { s.get<struct SpObj_FastWheel_Capsule_B_01>() },
		SpObj_Rocket_Capsule_A_01 { s.get<struct SpObj_Rocket_Capsule_A_01>() },
		SpObj_WindGenerator_Capsule_A_01 { s.get<struct SpObj_WindGenerator_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_16070251021340899088::EjectNum close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_16070251021340899088::EjectNum::SpObj_BalloonEnvelope_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.16070251021340899088.EjectNum.SpObj_BalloonEnvelope_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_16070251021340899088::EjectNum::SpObj_ControlStick_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.16070251021340899088.EjectNum.SpObj_ControlStick_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_16070251021340899088::EjectNum::SpObj_FastWheel_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.16070251021340899088.EjectNum.SpObj_FastWheel_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_16070251021340899088::EjectNum::SpObj_FastWheel_Capsule_B_01> = murmurhash3::hash("RecycleBoxData.16070251021340899088.EjectNum.SpObj_FastWheel_Capsule_B_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_16070251021340899088::EjectNum::SpObj_Rocket_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.16070251021340899088.EjectNum.SpObj_Rocket_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_16070251021340899088::EjectNum::SpObj_WindGenerator_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.16070251021340899088.EjectNum.SpObj_WindGenerator_Capsule_A_01");