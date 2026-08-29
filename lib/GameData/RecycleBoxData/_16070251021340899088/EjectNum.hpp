#pragma once
#include <sage>

struct GameData::RecycleBoxData::_16070251021340899088::EjectNum : Tag::Structure {
	struct SpObj_BalloonEnvelope_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_ControlStick_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_FastWheel_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_FastWheel_Capsule_B_01 : Tag::Member { using type = s32&; };
	struct SpObj_Rocket_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_WindGenerator_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_16070251021340899088::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_16070251021340899088::EjectNum> : GameData::RecycleBoxData::_16070251021340899088::EjectNum {
	Member<SpObj_BalloonEnvelope_Capsule_A_01> SpObj_BalloonEnvelope_Capsule_A_01;
	Member<SpObj_ControlStick_Capsule_A_01> SpObj_ControlStick_Capsule_A_01;
	Member<SpObj_FastWheel_Capsule_A_01> SpObj_FastWheel_Capsule_A_01;
	Member<SpObj_FastWheel_Capsule_B_01> SpObj_FastWheel_Capsule_B_01;
	Member<SpObj_Rocket_Capsule_A_01> SpObj_Rocket_Capsule_A_01;
	Member<SpObj_WindGenerator_Capsule_A_01> SpObj_WindGenerator_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_BalloonEnvelope_Capsule_A_01 { s.get<struct SpObj_BalloonEnvelope_Capsule_A_01>() },
		SpObj_ControlStick_Capsule_A_01 { s.get<struct SpObj_ControlStick_Capsule_A_01>() },
		SpObj_FastWheel_Capsule_A_01 { s.get<struct SpObj_FastWheel_Capsule_A_01>() },
		SpObj_FastWheel_Capsule_B_01 { s.get<struct SpObj_FastWheel_Capsule_B_01>() },
		SpObj_Rocket_Capsule_A_01 { s.get<struct SpObj_Rocket_Capsule_A_01>() },
		SpObj_WindGenerator_Capsule_A_01 { s.get<struct SpObj_WindGenerator_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_16070251021340899088::EjectNum close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_16070251021340899088::EjectNum::SpObj_BalloonEnvelope_Capsule_A_01> { "RecycleBoxData.16070251021340899088.EjectNum.SpObj_BalloonEnvelope_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_16070251021340899088::EjectNum::SpObj_ControlStick_Capsule_A_01> { "RecycleBoxData.16070251021340899088.EjectNum.SpObj_ControlStick_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_16070251021340899088::EjectNum::SpObj_FastWheel_Capsule_A_01> { "RecycleBoxData.16070251021340899088.EjectNum.SpObj_FastWheel_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_16070251021340899088::EjectNum::SpObj_FastWheel_Capsule_B_01> { "RecycleBoxData.16070251021340899088.EjectNum.SpObj_FastWheel_Capsule_B_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_16070251021340899088::EjectNum::SpObj_Rocket_Capsule_A_01> { "RecycleBoxData.16070251021340899088.EjectNum.SpObj_Rocket_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_16070251021340899088::EjectNum::SpObj_WindGenerator_Capsule_A_01> { "RecycleBoxData.16070251021340899088.EjectNum.SpObj_WindGenerator_Capsule_A_01" };