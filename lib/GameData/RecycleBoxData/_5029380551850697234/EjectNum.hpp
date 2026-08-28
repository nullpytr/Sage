#pragma once
#include <sage>

struct GameData::RecycleBoxData::_5029380551850697234::EjectNum : Tag::Structure {
	struct SpObj_CookSet_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_ElectricBoxGenerator_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_EnergyBank_Capsule_A_01 : Tag::Member { using type = s32&; };
	struct SpObj_WindGenerator_Capsule_A_01 : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RecycleBoxData::_5029380551850697234::EjectNum close */

template <> struct Data::Structure<GameData::RecycleBoxData::_5029380551850697234::EjectNum> : GameData::RecycleBoxData::_5029380551850697234::EjectNum {
	Member<SpObj_CookSet_Capsule_A_01> SpObj_CookSet_Capsule_A_01;
	Member<SpObj_ElectricBoxGenerator_Capsule_A_01> SpObj_ElectricBoxGenerator_Capsule_A_01;
	Member<SpObj_EnergyBank_Capsule_A_01> SpObj_EnergyBank_Capsule_A_01;
	Member<SpObj_WindGenerator_Capsule_A_01> SpObj_WindGenerator_Capsule_A_01;
	
	explicit Structure(Sav& s) : 
		SpObj_CookSet_Capsule_A_01 { s.get<struct SpObj_CookSet_Capsule_A_01>() },
		SpObj_ElectricBoxGenerator_Capsule_A_01 { s.get<struct SpObj_ElectricBoxGenerator_Capsule_A_01>() },
		SpObj_EnergyBank_Capsule_A_01 { s.get<struct SpObj_EnergyBank_Capsule_A_01>() },
		SpObj_WindGenerator_Capsule_A_01 { s.get<struct SpObj_WindGenerator_Capsule_A_01>() }
	{ }
};/* Data::Structure GameData::RecycleBoxData::_5029380551850697234::EjectNum close */

template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_5029380551850697234::EjectNum::SpObj_CookSet_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.5029380551850697234.EjectNum.SpObj_CookSet_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_5029380551850697234::EjectNum::SpObj_ElectricBoxGenerator_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.5029380551850697234.EjectNum.SpObj_ElectricBoxGenerator_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_5029380551850697234::EjectNum::SpObj_EnergyBank_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.5029380551850697234.EjectNum.SpObj_EnergyBank_Capsule_A_01");
template <> hash_t constexpr Data::Hashtable<GameData::RecycleBoxData::_5029380551850697234::EjectNum::SpObj_WindGenerator_Capsule_A_01> = murmurhash3::hash("RecycleBoxData.5029380551850697234.EjectNum.SpObj_WindGenerator_Capsule_A_01");