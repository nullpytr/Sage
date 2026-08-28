#pragma once
#include <sage>

struct GameData::RecycleBoxData::_18210954504481072128::EjectNum : Tag::Structure {
	struct SpObj_BalloonEnvelope_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_FastWheel_Capsule_B_01 : Tag::Member { using type = s32&; };
	struct SpObj_TiltingDoll_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_WindGenerator_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_18210954504481072128::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_18210954504481072128::EjectNum> : GameData::RecycleBoxData::_18210954504481072128::EjectNum {
	Data::Member<SpObj_BalloonEnvelope_Capsule_A_01> SpObj_BalloonEnvelope_Capsule_A_01;
	Data::Member<SpObj_FastWheel_Capsule_B_01> SpObj_FastWheel_Capsule_B_01;
	Data::Member<SpObj_TiltingDoll_Capsule_A_01> SpObj_TiltingDoll_Capsule_A_01;
	Data::Member<SpObj_WindGenerator_Capsule_A_01> SpObj_WindGenerator_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_BalloonEnvelope_Capsule_A_01 { s.get<struct SpObj_BalloonEnvelope_Capsule_A_01>() },
		SpObj_FastWheel_Capsule_B_01 { s.get<struct SpObj_FastWheel_Capsule_B_01>() },
		SpObj_TiltingDoll_Capsule_A_01 { s.get<struct SpObj_TiltingDoll_Capsule_A_01>() },
		SpObj_WindGenerator_Capsule_A_01 { s.get<struct SpObj_WindGenerator_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_18210954504481072128::EjectNum close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18210954504481072128::EjectNum::SpObj_BalloonEnvelope_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.18210954504481072128.EjectNum.SpObj_BalloonEnvelope_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18210954504481072128::EjectNum::SpObj_FastWheel_Capsule_B_01> = murmurhash3::hash("RecycleBoxData.18210954504481072128.EjectNum.SpObj_FastWheel_Capsule_B_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18210954504481072128::EjectNum::SpObj_TiltingDoll_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.18210954504481072128.EjectNum.SpObj_TiltingDoll_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18210954504481072128::EjectNum::SpObj_WindGenerator_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.18210954504481072128.EjectNum.SpObj_WindGenerator_Capsule_A_01");