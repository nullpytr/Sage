#pragma once
#include <sage>

struct GameData::RecycleBoxData::_2797201585583573628::EjectNum : Tag::Structure {
	struct SpObj_Beamos_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_ControlStick_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_LightMirror_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_Pile_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_SlipBoard_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_2797201585583573628::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_2797201585583573628::EjectNum> : GameData::RecycleBoxData::_2797201585583573628::EjectNum {
	Member<SpObj_Beamos_Capsule_A_01> SpObj_Beamos_Capsule_A_01;
	Member<SpObj_ControlStick_Capsule_A_01> SpObj_ControlStick_Capsule_A_01;
	Member<SpObj_LightMirror_Capsule_A_01> SpObj_LightMirror_Capsule_A_01;
	Member<SpObj_Pile_Capsule_A_01> SpObj_Pile_Capsule_A_01;
	Member<SpObj_SlipBoard_Capsule_A_01> SpObj_SlipBoard_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_Beamos_Capsule_A_01 { s.get<struct SpObj_Beamos_Capsule_A_01>() },
		SpObj_ControlStick_Capsule_A_01 { s.get<struct SpObj_ControlStick_Capsule_A_01>() },
		SpObj_LightMirror_Capsule_A_01 { s.get<struct SpObj_LightMirror_Capsule_A_01>() },
		SpObj_Pile_Capsule_A_01 { s.get<struct SpObj_Pile_Capsule_A_01>() },
		SpObj_SlipBoard_Capsule_A_01 { s.get<struct SpObj_SlipBoard_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_2797201585583573628::EjectNum close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_2797201585583573628::EjectNum::SpObj_Beamos_Capsule_A_01> { "RecycleBoxData.2797201585583573628.EjectNum.SpObj_Beamos_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_2797201585583573628::EjectNum::SpObj_ControlStick_Capsule_A_01> { "RecycleBoxData.2797201585583573628.EjectNum.SpObj_ControlStick_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_2797201585583573628::EjectNum::SpObj_LightMirror_Capsule_A_01> { "RecycleBoxData.2797201585583573628.EjectNum.SpObj_LightMirror_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_2797201585583573628::EjectNum::SpObj_Pile_Capsule_A_01> { "RecycleBoxData.2797201585583573628.EjectNum.SpObj_Pile_Capsule_A_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RecycleBoxData::_2797201585583573628::EjectNum::SpObj_SlipBoard_Capsule_A_01> { "RecycleBoxData.2797201585583573628.EjectNum.SpObj_SlipBoard_Capsule_A_01" };