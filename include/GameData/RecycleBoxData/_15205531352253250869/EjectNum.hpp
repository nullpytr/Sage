#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_15205531352253250869::EjectNum : Tag::Structure {
	struct SpObj_CookSet_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_FlameThrower_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
	struct SpObj_WindGenerator_Capsule_A_01 : Tag::Member { using type = s32&; using adapter = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_15205531352253250869::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_15205531352253250869::EjectNum> : GameData::RecycleBoxData::_15205531352253250869::EjectNum {
	SpObj_CookSet_Capsule_A_01::type SpObj_CookSet_Capsule_A_01;
	SpObj_FlameThrower_Capsule_A_01::type SpObj_FlameThrower_Capsule_A_01;
	SpObj_WindGenerator_Capsule_A_01::type SpObj_WindGenerator_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_CookSet_Capsule_A_01 { s.get<struct SpObj_CookSet_Capsule_A_01>() },
		SpObj_FlameThrower_Capsule_A_01 { s.get<struct SpObj_FlameThrower_Capsule_A_01>() },
		SpObj_WindGenerator_Capsule_A_01 { s.get<struct SpObj_WindGenerator_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_15205531352253250869::EjectNum close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_15205531352253250869::EjectNum::SpObj_CookSet_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.15205531352253250869.EjectNum.SpObj_CookSet_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_15205531352253250869::EjectNum::SpObj_FlameThrower_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.15205531352253250869.EjectNum.SpObj_FlameThrower_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_15205531352253250869::EjectNum::SpObj_WindGenerator_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.15205531352253250869.EjectNum.SpObj_WindGenerator_Capsule_A_01");