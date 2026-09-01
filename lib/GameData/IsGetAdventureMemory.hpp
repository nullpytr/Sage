#pragma once
#include <sage>

struct GameData::IsGetAdventureMemory : Tag::Structure {
	struct DmT_OP_GanonWakeUp_PreRender_Memory : Tag::Member { using type = bool&; };
	struct DmT_ZE_Birth_PreRender : Tag::Member { using type = bool&; };
	struct DmT_ZE_LieServant_PreRender : Tag::Member { using type = bool&; };
	struct DmT_ZE_Meet_PreRender : Tag::Member { using type = bool&; };
	struct DmT_ZE_Molduga_PreRender : Tag::Member { using type = bool&; };
	struct DmT_ZE_QueenDead_PreRender : Tag::Member { using type = bool&; };
	struct Dm_BZ_0005_PreRender : Tag::Member { using type = bool&; };
	struct Dm_OT_0015_PreRender : Tag::Member { using type = bool&; };
	struct Dm_SK_0003_PreRender : Tag::Member { using type = bool&; };
	struct Dm_ZE_0004_PreRender : Tag::Member { using type = bool&; };
	struct Dm_ZE_0005_PreRender : Tag::Member { using type = bool&; };
	struct Dm_ZE_0006_PreRender : Tag::Member { using type = bool&; };
	struct Dm_ZE_0007_PreRender : Tag::Member { using type = bool&; };
	struct Dm_ZE_0008_PreRender : Tag::Member { using type = bool&; };
	struct Dm_ZE_0010_PreRender : Tag::Member { using type = bool&; };
	struct Dm_ZE_0011_PreRender : Tag::Member { using type = bool&; };
	struct Dm_ZN_0033_PreRender : Tag::Member { using type = bool&; };
	struct Dm_ZN_0039_PreRender : Tag::Member { using type = bool&; };
	struct IsNeedIcon : Tag::Member { using type = bool&; };
	struct IsOpenList : Tag::Member { using type = bool&; };
};/* Tag::Structure GameData::IsGetAdventureMemory close */

template <> struct Data::Structure<GameData::IsGetAdventureMemory> : GameData::IsGetAdventureMemory {
	Member<DmT_OP_GanonWakeUp_PreRender_Memory> DmT_OP_GanonWakeUp_PreRender_Memory;
	Member<DmT_ZE_Birth_PreRender> DmT_ZE_Birth_PreRender;
	Member<DmT_ZE_LieServant_PreRender> DmT_ZE_LieServant_PreRender;
	Member<DmT_ZE_Meet_PreRender> DmT_ZE_Meet_PreRender;
	Member<DmT_ZE_Molduga_PreRender> DmT_ZE_Molduga_PreRender;
	Member<DmT_ZE_QueenDead_PreRender> DmT_ZE_QueenDead_PreRender;
	Member<Dm_BZ_0005_PreRender> Dm_BZ_0005_PreRender;
	Member<Dm_OT_0015_PreRender> Dm_OT_0015_PreRender;
	Member<Dm_SK_0003_PreRender> Dm_SK_0003_PreRender;
	Member<Dm_ZE_0004_PreRender> Dm_ZE_0004_PreRender;
	Member<Dm_ZE_0005_PreRender> Dm_ZE_0005_PreRender;
	Member<Dm_ZE_0006_PreRender> Dm_ZE_0006_PreRender;
	Member<Dm_ZE_0007_PreRender> Dm_ZE_0007_PreRender;
	Member<Dm_ZE_0008_PreRender> Dm_ZE_0008_PreRender;
	Member<Dm_ZE_0010_PreRender> Dm_ZE_0010_PreRender;
	Member<Dm_ZE_0011_PreRender> Dm_ZE_0011_PreRender;
	Member<Dm_ZN_0033_PreRender> Dm_ZN_0033_PreRender;
	Member<Dm_ZN_0039_PreRender> Dm_ZN_0039_PreRender;
	Member<IsNeedIcon> IsNeedIcon;
	Member<IsOpenList> IsOpenList;
	
	explicit Structure(Sav& s) : 
		DmT_OP_GanonWakeUp_PreRender_Memory { s.get<struct DmT_OP_GanonWakeUp_PreRender_Memory>() },
		DmT_ZE_Birth_PreRender { s.get<struct DmT_ZE_Birth_PreRender>() },
		DmT_ZE_LieServant_PreRender { s.get<struct DmT_ZE_LieServant_PreRender>() },
		DmT_ZE_Meet_PreRender { s.get<struct DmT_ZE_Meet_PreRender>() },
		DmT_ZE_Molduga_PreRender { s.get<struct DmT_ZE_Molduga_PreRender>() },
		DmT_ZE_QueenDead_PreRender { s.get<struct DmT_ZE_QueenDead_PreRender>() },
		Dm_BZ_0005_PreRender { s.get<struct Dm_BZ_0005_PreRender>() },
		Dm_OT_0015_PreRender { s.get<struct Dm_OT_0015_PreRender>() },
		Dm_SK_0003_PreRender { s.get<struct Dm_SK_0003_PreRender>() },
		Dm_ZE_0004_PreRender { s.get<struct Dm_ZE_0004_PreRender>() },
		Dm_ZE_0005_PreRender { s.get<struct Dm_ZE_0005_PreRender>() },
		Dm_ZE_0006_PreRender { s.get<struct Dm_ZE_0006_PreRender>() },
		Dm_ZE_0007_PreRender { s.get<struct Dm_ZE_0007_PreRender>() },
		Dm_ZE_0008_PreRender { s.get<struct Dm_ZE_0008_PreRender>() },
		Dm_ZE_0010_PreRender { s.get<struct Dm_ZE_0010_PreRender>() },
		Dm_ZE_0011_PreRender { s.get<struct Dm_ZE_0011_PreRender>() },
		Dm_ZN_0033_PreRender { s.get<struct Dm_ZN_0033_PreRender>() },
		Dm_ZN_0039_PreRender { s.get<struct Dm_ZN_0039_PreRender>() },
		IsNeedIcon { s.get<struct IsNeedIcon>() },
		IsOpenList { s.get<struct IsOpenList>() }
	{ }
};/* Structure Data::Structure GameData::IsGetAdventureMemory close */

template <> hash_value_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::DmT_OP_GanonWakeUp_PreRender_Memory> { "IsGetAdventureMemory.DmT_OP_GanonWakeUp_PreRender_Memory" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::DmT_ZE_Birth_PreRender> { "IsGetAdventureMemory.DmT_ZE_Birth_PreRender" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::DmT_ZE_LieServant_PreRender> { "IsGetAdventureMemory.DmT_ZE_LieServant_PreRender" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::DmT_ZE_Meet_PreRender> { "IsGetAdventureMemory.DmT_ZE_Meet_PreRender" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::DmT_ZE_Molduga_PreRender> { "IsGetAdventureMemory.DmT_ZE_Molduga_PreRender" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::DmT_ZE_QueenDead_PreRender> { "IsGetAdventureMemory.DmT_ZE_QueenDead_PreRender" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_BZ_0005_PreRender> { "IsGetAdventureMemory.Dm_BZ_0005_PreRender" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_OT_0015_PreRender> { "IsGetAdventureMemory.Dm_OT_0015_PreRender" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_SK_0003_PreRender> { "IsGetAdventureMemory.Dm_SK_0003_PreRender" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_ZE_0004_PreRender> { "IsGetAdventureMemory.Dm_ZE_0004_PreRender" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_ZE_0005_PreRender> { "IsGetAdventureMemory.Dm_ZE_0005_PreRender" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_ZE_0006_PreRender> { "IsGetAdventureMemory.Dm_ZE_0006_PreRender" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_ZE_0007_PreRender> { "IsGetAdventureMemory.Dm_ZE_0007_PreRender" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_ZE_0008_PreRender> { "IsGetAdventureMemory.Dm_ZE_0008_PreRender" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_ZE_0010_PreRender> { "IsGetAdventureMemory.Dm_ZE_0010_PreRender" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_ZE_0011_PreRender> { "IsGetAdventureMemory.Dm_ZE_0011_PreRender" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_ZN_0033_PreRender> { "IsGetAdventureMemory.Dm_ZN_0033_PreRender" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_ZN_0039_PreRender> { "IsGetAdventureMemory.Dm_ZN_0039_PreRender" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::IsNeedIcon> { "IsGetAdventureMemory.IsNeedIcon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::IsOpenList> { "IsGetAdventureMemory.IsOpenList" };