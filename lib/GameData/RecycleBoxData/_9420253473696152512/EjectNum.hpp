#pragma once
#include <sage>

struct GameData::RecycleBoxData::_9420253473696152512::EjectNum : Tag::Structure {
	struct SpObj_Beamos_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_ControlStick_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_LiftableWaterPump_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_SpringPiston_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_9420253473696152512::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_9420253473696152512::EjectNum> : GameData::RecycleBoxData::_9420253473696152512::EjectNum {
	Data::Member<SpObj_Beamos_Capsule_A_01> SpObj_Beamos_Capsule_A_01;
	Data::Member<SpObj_ControlStick_Capsule_A_01> SpObj_ControlStick_Capsule_A_01;
	Data::Member<SpObj_LiftableWaterPump_Capsule_A_01> SpObj_LiftableWaterPump_Capsule_A_01;
	Data::Member<SpObj_SpringPiston_Capsule_A_01> SpObj_SpringPiston_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_Beamos_Capsule_A_01 { s.get<struct SpObj_Beamos_Capsule_A_01>() },
		SpObj_ControlStick_Capsule_A_01 { s.get<struct SpObj_ControlStick_Capsule_A_01>() },
		SpObj_LiftableWaterPump_Capsule_A_01 { s.get<struct SpObj_LiftableWaterPump_Capsule_A_01>() },
		SpObj_SpringPiston_Capsule_A_01 { s.get<struct SpObj_SpringPiston_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_9420253473696152512::EjectNum close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_9420253473696152512::EjectNum::SpObj_Beamos_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.9420253473696152512.EjectNum.SpObj_Beamos_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_9420253473696152512::EjectNum::SpObj_ControlStick_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.9420253473696152512.EjectNum.SpObj_ControlStick_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_9420253473696152512::EjectNum::SpObj_LiftableWaterPump_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.9420253473696152512.EjectNum.SpObj_LiftableWaterPump_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_9420253473696152512::EjectNum::SpObj_SpringPiston_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.9420253473696152512.EjectNum.SpObj_SpringPiston_Capsule_A_01");