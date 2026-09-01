#pragma once
#include <sage>

struct GameData::RecycleBoxData::_6574360356613525746::EjectNum : Tag::Structure {
	struct SpObj_BalloonEnvelope_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_CookSet_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_TimerBomb_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_WindGenerator_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_6574360356613525746::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_6574360356613525746::EjectNum> : GameData::RecycleBoxData::_6574360356613525746::EjectNum {
	Member<SpObj_BalloonEnvelope_Capsule_A_01> SpObj_BalloonEnvelope_Capsule_A_01;
	Member<SpObj_CookSet_Capsule_A_01> SpObj_CookSet_Capsule_A_01;
	Member<SpObj_TimerBomb_Capsule_A_01> SpObj_TimerBomb_Capsule_A_01;
	Member<SpObj_WindGenerator_Capsule_A_01> SpObj_WindGenerator_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_BalloonEnvelope_Capsule_A_01 { s.get<struct SpObj_BalloonEnvelope_Capsule_A_01>() },
		SpObj_CookSet_Capsule_A_01 { s.get<struct SpObj_CookSet_Capsule_A_01>() },
		SpObj_TimerBomb_Capsule_A_01 { s.get<struct SpObj_TimerBomb_Capsule_A_01>() },
		SpObj_WindGenerator_Capsule_A_01 { s.get<struct SpObj_WindGenerator_Capsule_A_01>() }
	{ }
};/* Structure Data::Structure GameData::RecycleBoxData::_6574360356613525746::EjectNum close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_6574360356613525746::EjectNum::SpObj_BalloonEnvelope_Capsule_A_01> { "RecycleBoxData.6574360356613525746.EjectNum.SpObj_BalloonEnvelope_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_6574360356613525746::EjectNum::SpObj_CookSet_Capsule_A_01> { "RecycleBoxData.6574360356613525746.EjectNum.SpObj_CookSet_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_6574360356613525746::EjectNum::SpObj_TimerBomb_Capsule_A_01> { "RecycleBoxData.6574360356613525746.EjectNum.SpObj_TimerBomb_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_6574360356613525746::EjectNum::SpObj_WindGenerator_Capsule_A_01> { "RecycleBoxData.6574360356613525746.EjectNum.SpObj_WindGenerator_Capsule_A_01" };