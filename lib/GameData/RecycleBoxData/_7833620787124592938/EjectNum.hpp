#pragma once
#include <sage>

struct GameData::RecycleBoxData::_7833620787124592938::EjectNum : Tag::Structure {
	struct SpObj_Beamos_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_Cart_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_LiftGeneratorWing_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_WindGenerator_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_7833620787124592938::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_7833620787124592938::EjectNum> : GameData::RecycleBoxData::_7833620787124592938::EjectNum {
	Member<SpObj_Beamos_Capsule_A_01> SpObj_Beamos_Capsule_A_01;
	Member<SpObj_Cart_Capsule_A_01> SpObj_Cart_Capsule_A_01;
	Member<SpObj_LiftGeneratorWing_Capsule_A_01> SpObj_LiftGeneratorWing_Capsule_A_01;
	Member<SpObj_WindGenerator_Capsule_A_01> SpObj_WindGenerator_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_Beamos_Capsule_A_01 { s.get<struct SpObj_Beamos_Capsule_A_01>() },
		SpObj_Cart_Capsule_A_01 { s.get<struct SpObj_Cart_Capsule_A_01>() },
		SpObj_LiftGeneratorWing_Capsule_A_01 { s.get<struct SpObj_LiftGeneratorWing_Capsule_A_01>() },
		SpObj_WindGenerator_Capsule_A_01 { s.get<struct SpObj_WindGenerator_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_7833620787124592938::EjectNum close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_7833620787124592938::EjectNum::SpObj_Beamos_Capsule_A_01> { "RecycleBoxData.7833620787124592938.EjectNum.SpObj_Beamos_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_7833620787124592938::EjectNum::SpObj_Cart_Capsule_A_01> { "RecycleBoxData.7833620787124592938.EjectNum.SpObj_Cart_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_7833620787124592938::EjectNum::SpObj_LiftGeneratorWing_Capsule_A_01> { "RecycleBoxData.7833620787124592938.EjectNum.SpObj_LiftGeneratorWing_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_7833620787124592938::EjectNum::SpObj_WindGenerator_Capsule_A_01> { "RecycleBoxData.7833620787124592938.EjectNum.SpObj_WindGenerator_Capsule_A_01" };