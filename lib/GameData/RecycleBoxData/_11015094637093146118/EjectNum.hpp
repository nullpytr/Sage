#pragma once
#include <sage>

struct GameData::RecycleBoxData::_11015094637093146118::EjectNum : Tag::Structure {
	struct SpObj_BalloonEnvelope_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_FloatingStone_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_LiftGeneratorWing_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_LightMirror_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_SpringPiston_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_11015094637093146118::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_11015094637093146118::EjectNum> : GameData::RecycleBoxData::_11015094637093146118::EjectNum {
	Member<SpObj_BalloonEnvelope_Capsule_A_01> SpObj_BalloonEnvelope_Capsule_A_01;
	Member<SpObj_FloatingStone_Capsule_A_01> SpObj_FloatingStone_Capsule_A_01;
	Member<SpObj_LiftGeneratorWing_Capsule_A_01> SpObj_LiftGeneratorWing_Capsule_A_01;
	Member<SpObj_LightMirror_Capsule_A_01> SpObj_LightMirror_Capsule_A_01;
	Member<SpObj_SpringPiston_Capsule_A_01> SpObj_SpringPiston_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_BalloonEnvelope_Capsule_A_01 { s.get<struct SpObj_BalloonEnvelope_Capsule_A_01>() },
		SpObj_FloatingStone_Capsule_A_01 { s.get<struct SpObj_FloatingStone_Capsule_A_01>() },
		SpObj_LiftGeneratorWing_Capsule_A_01 { s.get<struct SpObj_LiftGeneratorWing_Capsule_A_01>() },
		SpObj_LightMirror_Capsule_A_01 { s.get<struct SpObj_LightMirror_Capsule_A_01>() },
		SpObj_SpringPiston_Capsule_A_01 { s.get<struct SpObj_SpringPiston_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_11015094637093146118::EjectNum close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_11015094637093146118::EjectNum::SpObj_BalloonEnvelope_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.11015094637093146118.EjectNum.SpObj_BalloonEnvelope_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_11015094637093146118::EjectNum::SpObj_FloatingStone_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.11015094637093146118.EjectNum.SpObj_FloatingStone_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_11015094637093146118::EjectNum::SpObj_LiftGeneratorWing_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.11015094637093146118.EjectNum.SpObj_LiftGeneratorWing_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_11015094637093146118::EjectNum::SpObj_LightMirror_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.11015094637093146118.EjectNum.SpObj_LightMirror_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_11015094637093146118::EjectNum::SpObj_SpringPiston_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.11015094637093146118.EjectNum.SpObj_SpringPiston_Capsule_A_01");