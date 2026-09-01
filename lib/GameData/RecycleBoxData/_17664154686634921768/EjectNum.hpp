#pragma once
#include <sage>

struct GameData::RecycleBoxData::_17664154686634921768::EjectNum : Tag::Structure {
	struct SpObj_CookSet_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_FlameThrower_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_Rocket_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_TimerBomb_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_17664154686634921768::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_17664154686634921768::EjectNum> : GameData::RecycleBoxData::_17664154686634921768::EjectNum {
	Member<SpObj_CookSet_Capsule_A_01> SpObj_CookSet_Capsule_A_01;
	Member<SpObj_FlameThrower_Capsule_A_01> SpObj_FlameThrower_Capsule_A_01;
	Member<SpObj_Rocket_Capsule_A_01> SpObj_Rocket_Capsule_A_01;
	Member<SpObj_TimerBomb_Capsule_A_01> SpObj_TimerBomb_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_CookSet_Capsule_A_01 { s.get<struct SpObj_CookSet_Capsule_A_01>() },
		SpObj_FlameThrower_Capsule_A_01 { s.get<struct SpObj_FlameThrower_Capsule_A_01>() },
		SpObj_Rocket_Capsule_A_01 { s.get<struct SpObj_Rocket_Capsule_A_01>() },
		SpObj_TimerBomb_Capsule_A_01 { s.get<struct SpObj_TimerBomb_Capsule_A_01>() }
	{ }
};/* Structure Data::Structure GameData::RecycleBoxData::_17664154686634921768::EjectNum close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_17664154686634921768::EjectNum::SpObj_CookSet_Capsule_A_01> { "RecycleBoxData.17664154686634921768.EjectNum.SpObj_CookSet_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_17664154686634921768::EjectNum::SpObj_FlameThrower_Capsule_A_01> { "RecycleBoxData.17664154686634921768.EjectNum.SpObj_FlameThrower_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_17664154686634921768::EjectNum::SpObj_Rocket_Capsule_A_01> { "RecycleBoxData.17664154686634921768.EjectNum.SpObj_Rocket_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_17664154686634921768::EjectNum::SpObj_TimerBomb_Capsule_A_01> { "RecycleBoxData.17664154686634921768.EjectNum.SpObj_TimerBomb_Capsule_A_01" };