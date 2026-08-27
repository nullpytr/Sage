#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::RecycleBoxData::_18190666740725697704::EjectNum : Tag::Structure {
	struct SpObj_FastWheel_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_LiftGeneratorWing_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_LightMirror_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_SnowMachine_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_18190666740725697704::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_18190666740725697704::EjectNum> : GameData::RecycleBoxData::_18190666740725697704::EjectNum {
	Data::Member<SpObj_FastWheel_Capsule_A_01> SpObj_FastWheel_Capsule_A_01;
	Data::Member<SpObj_LiftGeneratorWing_Capsule_A_01> SpObj_LiftGeneratorWing_Capsule_A_01;
	Data::Member<SpObj_LightMirror_Capsule_A_01> SpObj_LightMirror_Capsule_A_01;
	Data::Member<SpObj_SnowMachine_Capsule_A_01> SpObj_SnowMachine_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_FastWheel_Capsule_A_01 { s.get<struct SpObj_FastWheel_Capsule_A_01>() },
		SpObj_LiftGeneratorWing_Capsule_A_01 { s.get<struct SpObj_LiftGeneratorWing_Capsule_A_01>() },
		SpObj_LightMirror_Capsule_A_01 { s.get<struct SpObj_LightMirror_Capsule_A_01>() },
		SpObj_SnowMachine_Capsule_A_01 { s.get<struct SpObj_SnowMachine_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_18190666740725697704::EjectNum close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18190666740725697704::EjectNum::SpObj_FastWheel_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.18190666740725697704.EjectNum.SpObj_FastWheel_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18190666740725697704::EjectNum::SpObj_LiftGeneratorWing_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.18190666740725697704.EjectNum.SpObj_LiftGeneratorWing_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18190666740725697704::EjectNum::SpObj_LightMirror_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.18190666740725697704.EjectNum.SpObj_LightMirror_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18190666740725697704::EjectNum::SpObj_SnowMachine_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.18190666740725697704.EjectNum.SpObj_SnowMachine_Capsule_A_01");