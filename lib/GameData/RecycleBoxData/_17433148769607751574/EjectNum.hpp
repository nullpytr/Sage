#pragma once
#include <sage>

struct GameData::RecycleBoxData::_17433148769607751574::EjectNum : Tag::Structure {
	struct SpObj_FastWheel_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_FlashLight_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_Rocket_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_TimerBomb_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_17433148769607751574::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_17433148769607751574::EjectNum> : GameData::RecycleBoxData::_17433148769607751574::EjectNum {
	Data::Member<SpObj_FastWheel_Capsule_A_01> SpObj_FastWheel_Capsule_A_01;
	Data::Member<SpObj_FlashLight_Capsule_A_01> SpObj_FlashLight_Capsule_A_01;
	Data::Member<SpObj_Rocket_Capsule_A_01> SpObj_Rocket_Capsule_A_01;
	Data::Member<SpObj_TimerBomb_Capsule_A_01> SpObj_TimerBomb_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_FastWheel_Capsule_A_01 { s.get<struct SpObj_FastWheel_Capsule_A_01>() },
		SpObj_FlashLight_Capsule_A_01 { s.get<struct SpObj_FlashLight_Capsule_A_01>() },
		SpObj_Rocket_Capsule_A_01 { s.get<struct SpObj_Rocket_Capsule_A_01>() },
		SpObj_TimerBomb_Capsule_A_01 { s.get<struct SpObj_TimerBomb_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_17433148769607751574::EjectNum close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_17433148769607751574::EjectNum::SpObj_FastWheel_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.17433148769607751574.EjectNum.SpObj_FastWheel_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_17433148769607751574::EjectNum::SpObj_FlashLight_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.17433148769607751574.EjectNum.SpObj_FlashLight_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_17433148769607751574::EjectNum::SpObj_Rocket_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.17433148769607751574.EjectNum.SpObj_Rocket_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_17433148769607751574::EjectNum::SpObj_TimerBomb_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.17433148769607751574.EjectNum.SpObj_TimerBomb_Capsule_A_01");