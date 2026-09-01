#pragma once
#include <sage>

struct GameData::RecycleBoxData::_15205531352253250869::EjectNum : Tag::Structure {
	struct SpObj_CookSet_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_FlameThrower_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_WindGenerator_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_15205531352253250869::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_15205531352253250869::EjectNum> : GameData::RecycleBoxData::_15205531352253250869::EjectNum {
	Member<SpObj_CookSet_Capsule_A_01> SpObj_CookSet_Capsule_A_01;
	Member<SpObj_FlameThrower_Capsule_A_01> SpObj_FlameThrower_Capsule_A_01;
	Member<SpObj_WindGenerator_Capsule_A_01> SpObj_WindGenerator_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_CookSet_Capsule_A_01 { s.get<struct SpObj_CookSet_Capsule_A_01>() },
		SpObj_FlameThrower_Capsule_A_01 { s.get<struct SpObj_FlameThrower_Capsule_A_01>() },
		SpObj_WindGenerator_Capsule_A_01 { s.get<struct SpObj_WindGenerator_Capsule_A_01>() }
	{ }
};/* Structure Data::Structure GameData::RecycleBoxData::_15205531352253250869::EjectNum close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_15205531352253250869::EjectNum::SpObj_CookSet_Capsule_A_01> { "RecycleBoxData.15205531352253250869.EjectNum.SpObj_CookSet_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_15205531352253250869::EjectNum::SpObj_FlameThrower_Capsule_A_01> { "RecycleBoxData.15205531352253250869.EjectNum.SpObj_FlameThrower_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_15205531352253250869::EjectNum::SpObj_WindGenerator_Capsule_A_01> { "RecycleBoxData.15205531352253250869.EjectNum.SpObj_WindGenerator_Capsule_A_01" };