#pragma once
#include <sage>

struct GameData::RecycleBoxData::_11115447318048549580::EjectNum : Tag::Structure {
	struct SpObj_Beamos_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_Chaser_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_FlameThrower_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_SnowMachine_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_TimerBomb_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_11115447318048549580::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_11115447318048549580::EjectNum> : GameData::RecycleBoxData::_11115447318048549580::EjectNum {
	Member<SpObj_Beamos_Capsule_A_01> SpObj_Beamos_Capsule_A_01;
	Member<SpObj_Chaser_Capsule_A_01> SpObj_Chaser_Capsule_A_01;
	Member<SpObj_FlameThrower_Capsule_A_01> SpObj_FlameThrower_Capsule_A_01;
	Member<SpObj_SnowMachine_Capsule_A_01> SpObj_SnowMachine_Capsule_A_01;
	Member<SpObj_TimerBomb_Capsule_A_01> SpObj_TimerBomb_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_Beamos_Capsule_A_01 { s.get<struct SpObj_Beamos_Capsule_A_01>() },
		SpObj_Chaser_Capsule_A_01 { s.get<struct SpObj_Chaser_Capsule_A_01>() },
		SpObj_FlameThrower_Capsule_A_01 { s.get<struct SpObj_FlameThrower_Capsule_A_01>() },
		SpObj_SnowMachine_Capsule_A_01 { s.get<struct SpObj_SnowMachine_Capsule_A_01>() },
		SpObj_TimerBomb_Capsule_A_01 { s.get<struct SpObj_TimerBomb_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_11115447318048549580::EjectNum close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_11115447318048549580::EjectNum::SpObj_Beamos_Capsule_A_01> { "RecycleBoxData.11115447318048549580.EjectNum.SpObj_Beamos_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_11115447318048549580::EjectNum::SpObj_Chaser_Capsule_A_01> { "RecycleBoxData.11115447318048549580.EjectNum.SpObj_Chaser_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_11115447318048549580::EjectNum::SpObj_FlameThrower_Capsule_A_01> { "RecycleBoxData.11115447318048549580.EjectNum.SpObj_FlameThrower_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_11115447318048549580::EjectNum::SpObj_SnowMachine_Capsule_A_01> { "RecycleBoxData.11115447318048549580.EjectNum.SpObj_SnowMachine_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_11115447318048549580::EjectNum::SpObj_TimerBomb_Capsule_A_01> { "RecycleBoxData.11115447318048549580.EjectNum.SpObj_TimerBomb_Capsule_A_01" };