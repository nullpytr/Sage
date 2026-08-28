#pragma once
#include <sage>

struct GameData::RecycleBoxData::_18116875701019036673::EjectNum : Tag::Structure {
	struct SpObj_Chaser_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_FloatingStone_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_LiftableWaterPump_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_TimerBomb_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_18116875701019036673::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_18116875701019036673::EjectNum> : GameData::RecycleBoxData::_18116875701019036673::EjectNum {
	Member<SpObj_Chaser_Capsule_A_01> SpObj_Chaser_Capsule_A_01;
	Member<SpObj_FloatingStone_Capsule_A_01> SpObj_FloatingStone_Capsule_A_01;
	Member<SpObj_LiftableWaterPump_Capsule_A_01> SpObj_LiftableWaterPump_Capsule_A_01;
	Member<SpObj_TimerBomb_Capsule_A_01> SpObj_TimerBomb_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_Chaser_Capsule_A_01 { s.get<struct SpObj_Chaser_Capsule_A_01>() },
		SpObj_FloatingStone_Capsule_A_01 { s.get<struct SpObj_FloatingStone_Capsule_A_01>() },
		SpObj_LiftableWaterPump_Capsule_A_01 { s.get<struct SpObj_LiftableWaterPump_Capsule_A_01>() },
		SpObj_TimerBomb_Capsule_A_01 { s.get<struct SpObj_TimerBomb_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_18116875701019036673::EjectNum close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18116875701019036673::EjectNum::SpObj_Chaser_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.18116875701019036673.EjectNum.SpObj_Chaser_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18116875701019036673::EjectNum::SpObj_FloatingStone_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.18116875701019036673.EjectNum.SpObj_FloatingStone_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18116875701019036673::EjectNum::SpObj_LiftableWaterPump_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.18116875701019036673.EjectNum.SpObj_LiftableWaterPump_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_18116875701019036673::EjectNum::SpObj_TimerBomb_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.18116875701019036673.EjectNum.SpObj_TimerBomb_Capsule_A_01");