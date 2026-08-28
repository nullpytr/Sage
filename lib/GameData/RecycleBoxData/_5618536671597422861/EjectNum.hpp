#pragma once
#include <sage>

struct GameData::RecycleBoxData::_5618536671597422861::EjectNum : Tag::Structure {
	struct SpObj_Cannon_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_Cart_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_Chaser_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_GolemHead_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_Pile_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_5618536671597422861::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_5618536671597422861::EjectNum> : GameData::RecycleBoxData::_5618536671597422861::EjectNum {
	Data::Member<SpObj_Cannon_Capsule_A_01> SpObj_Cannon_Capsule_A_01;
	Data::Member<SpObj_Cart_Capsule_A_01> SpObj_Cart_Capsule_A_01;
	Data::Member<SpObj_Chaser_Capsule_A_01> SpObj_Chaser_Capsule_A_01;
	Data::Member<SpObj_GolemHead_Capsule_A_01> SpObj_GolemHead_Capsule_A_01;
	Data::Member<SpObj_Pile_Capsule_A_01> SpObj_Pile_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_Cannon_Capsule_A_01 { s.get<struct SpObj_Cannon_Capsule_A_01>() },
		SpObj_Cart_Capsule_A_01 { s.get<struct SpObj_Cart_Capsule_A_01>() },
		SpObj_Chaser_Capsule_A_01 { s.get<struct SpObj_Chaser_Capsule_A_01>() },
		SpObj_GolemHead_Capsule_A_01 { s.get<struct SpObj_GolemHead_Capsule_A_01>() },
		SpObj_Pile_Capsule_A_01 { s.get<struct SpObj_Pile_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_5618536671597422861::EjectNum close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_5618536671597422861::EjectNum::SpObj_Cannon_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.5618536671597422861.EjectNum.SpObj_Cannon_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_5618536671597422861::EjectNum::SpObj_Cart_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.5618536671597422861.EjectNum.SpObj_Cart_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_5618536671597422861::EjectNum::SpObj_Chaser_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.5618536671597422861.EjectNum.SpObj_Chaser_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_5618536671597422861::EjectNum::SpObj_GolemHead_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.5618536671597422861.EjectNum.SpObj_GolemHead_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_5618536671597422861::EjectNum::SpObj_Pile_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.5618536671597422861.EjectNum.SpObj_Pile_Capsule_A_01");