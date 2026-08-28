#pragma once
#include <sage>

struct GameData::RecycleBoxData::_1356218468874614116::EjectNum : Tag::Structure {
	struct SpObj_BalloonEnvelope_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_Cart_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_GolemHead_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_LiftableWaterPump_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_TiltingDoll_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_1356218468874614116::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_1356218468874614116::EjectNum> : GameData::RecycleBoxData::_1356218468874614116::EjectNum {
	Data::Member<SpObj_BalloonEnvelope_Capsule_A_01> SpObj_BalloonEnvelope_Capsule_A_01;
	Data::Member<SpObj_Cart_Capsule_A_01> SpObj_Cart_Capsule_A_01;
	Data::Member<SpObj_GolemHead_Capsule_A_01> SpObj_GolemHead_Capsule_A_01;
	Data::Member<SpObj_LiftableWaterPump_Capsule_A_01> SpObj_LiftableWaterPump_Capsule_A_01;
	Data::Member<SpObj_TiltingDoll_Capsule_A_01> SpObj_TiltingDoll_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_BalloonEnvelope_Capsule_A_01 { s.get<struct SpObj_BalloonEnvelope_Capsule_A_01>() },
		SpObj_Cart_Capsule_A_01 { s.get<struct SpObj_Cart_Capsule_A_01>() },
		SpObj_GolemHead_Capsule_A_01 { s.get<struct SpObj_GolemHead_Capsule_A_01>() },
		SpObj_LiftableWaterPump_Capsule_A_01 { s.get<struct SpObj_LiftableWaterPump_Capsule_A_01>() },
		SpObj_TiltingDoll_Capsule_A_01 { s.get<struct SpObj_TiltingDoll_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_1356218468874614116::EjectNum close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1356218468874614116::EjectNum::SpObj_BalloonEnvelope_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.1356218468874614116.EjectNum.SpObj_BalloonEnvelope_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1356218468874614116::EjectNum::SpObj_Cart_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.1356218468874614116.EjectNum.SpObj_Cart_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1356218468874614116::EjectNum::SpObj_GolemHead_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.1356218468874614116.EjectNum.SpObj_GolemHead_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1356218468874614116::EjectNum::SpObj_LiftableWaterPump_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.1356218468874614116.EjectNum.SpObj_LiftableWaterPump_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_1356218468874614116::EjectNum::SpObj_TiltingDoll_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.1356218468874614116.EjectNum.SpObj_TiltingDoll_Capsule_A_01");