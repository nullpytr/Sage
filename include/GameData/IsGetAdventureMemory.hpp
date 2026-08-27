#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::IsGetAdventureMemory : Tag::Structure {
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
	struct DmT_OP_GanonWakeUp_PreRender_Memory : Tag::Member { using type = bool&; };
	struct DmT_ZE_Birth_PreRender : Tag::Member { using type = bool&; };
	struct DmT_ZE_LieServant_PreRender : Tag::Member { using type = bool&; };
	struct DmT_ZE_Meet_PreRender : Tag::Member { using type = bool&; };
	struct DmT_ZE_Molduga_PreRender : Tag::Member { using type = bool&; };
	struct DmT_ZE_QueenDead_PreRender : Tag::Member { using type = bool&; };
	struct IsNeedIcon : Tag::Member { using type = bool&; };
	struct IsOpenList : Tag::Member { using type = bool&; };
};/* Tag::Structure GameData::IsGetAdventureMemory close */

template <> struct Data::Structure<GameData::IsGetAdventureMemory> : GameData::IsGetAdventureMemory {
	Data::Member<Dm_BZ_0005_PreRender> Dm_BZ_0005_PreRender;
	Data::Member<Dm_OT_0015_PreRender> Dm_OT_0015_PreRender;
	Data::Member<Dm_SK_0003_PreRender> Dm_SK_0003_PreRender;
	Data::Member<Dm_ZE_0004_PreRender> Dm_ZE_0004_PreRender;
	Data::Member<Dm_ZE_0005_PreRender> Dm_ZE_0005_PreRender;
	Data::Member<Dm_ZE_0006_PreRender> Dm_ZE_0006_PreRender;
	Data::Member<Dm_ZE_0007_PreRender> Dm_ZE_0007_PreRender;
	Data::Member<Dm_ZE_0008_PreRender> Dm_ZE_0008_PreRender;
	Data::Member<Dm_ZE_0010_PreRender> Dm_ZE_0010_PreRender;
	Data::Member<Dm_ZE_0011_PreRender> Dm_ZE_0011_PreRender;
	Data::Member<Dm_ZN_0033_PreRender> Dm_ZN_0033_PreRender;
	Data::Member<Dm_ZN_0039_PreRender> Dm_ZN_0039_PreRender;
	Data::Member<DmT_OP_GanonWakeUp_PreRender_Memory> DmT_OP_GanonWakeUp_PreRender_Memory;
	Data::Member<DmT_ZE_Birth_PreRender> DmT_ZE_Birth_PreRender;
	Data::Member<DmT_ZE_LieServant_PreRender> DmT_ZE_LieServant_PreRender;
	Data::Member<DmT_ZE_Meet_PreRender> DmT_ZE_Meet_PreRender;
	Data::Member<DmT_ZE_Molduga_PreRender> DmT_ZE_Molduga_PreRender;
	Data::Member<DmT_ZE_QueenDead_PreRender> DmT_ZE_QueenDead_PreRender;
	Data::Member<IsNeedIcon> IsNeedIcon;
	Data::Member<IsOpenList> IsOpenList;
	
	explicit Structure(Sav& s) : 
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
		DmT_OP_GanonWakeUp_PreRender_Memory { s.get<struct DmT_OP_GanonWakeUp_PreRender_Memory>() },
		DmT_ZE_Birth_PreRender { s.get<struct DmT_ZE_Birth_PreRender>() },
		DmT_ZE_LieServant_PreRender { s.get<struct DmT_ZE_LieServant_PreRender>() },
		DmT_ZE_Meet_PreRender { s.get<struct DmT_ZE_Meet_PreRender>() },
		DmT_ZE_Molduga_PreRender { s.get<struct DmT_ZE_Molduga_PreRender>() },
		DmT_ZE_QueenDead_PreRender { s.get<struct DmT_ZE_QueenDead_PreRender>() },
		IsNeedIcon { s.get<struct IsNeedIcon>() },
		IsOpenList { s.get<struct IsOpenList>() }
	{ }
};/* Data::Structure GameData::IsGetAdventureMemory close */

template <> hash_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_BZ_0005_PreRender> = murmurhash3::hash("IsGetAdventureMemory.Dm_BZ_0005_PreRender");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_OT_0015_PreRender> = murmurhash3::hash("IsGetAdventureMemory.Dm_OT_0015_PreRender");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_SK_0003_PreRender> = murmurhash3::hash("IsGetAdventureMemory.Dm_SK_0003_PreRender");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_ZE_0004_PreRender> = murmurhash3::hash("IsGetAdventureMemory.Dm_ZE_0004_PreRender");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_ZE_0005_PreRender> = murmurhash3::hash("IsGetAdventureMemory.Dm_ZE_0005_PreRender");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_ZE_0006_PreRender> = murmurhash3::hash("IsGetAdventureMemory.Dm_ZE_0006_PreRender");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_ZE_0007_PreRender> = murmurhash3::hash("IsGetAdventureMemory.Dm_ZE_0007_PreRender");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_ZE_0008_PreRender> = murmurhash3::hash("IsGetAdventureMemory.Dm_ZE_0008_PreRender");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_ZE_0010_PreRender> = murmurhash3::hash("IsGetAdventureMemory.Dm_ZE_0010_PreRender");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_ZE_0011_PreRender> = murmurhash3::hash("IsGetAdventureMemory.Dm_ZE_0011_PreRender");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_ZN_0033_PreRender> = murmurhash3::hash("IsGetAdventureMemory.Dm_ZN_0033_PreRender");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::Dm_ZN_0039_PreRender> = murmurhash3::hash("IsGetAdventureMemory.Dm_ZN_0039_PreRender");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::DmT_OP_GanonWakeUp_PreRender_Memory> = murmurhash3::hash("IsGetAdventureMemory.DmT_OP_GanonWakeUp_PreRender_Memory");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::DmT_ZE_Birth_PreRender> = murmurhash3::hash("IsGetAdventureMemory.DmT_ZE_Birth_PreRender");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::DmT_ZE_LieServant_PreRender> = murmurhash3::hash("IsGetAdventureMemory.DmT_ZE_LieServant_PreRender");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::DmT_ZE_Meet_PreRender> = murmurhash3::hash("IsGetAdventureMemory.DmT_ZE_Meet_PreRender");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::DmT_ZE_Molduga_PreRender> = murmurhash3::hash("IsGetAdventureMemory.DmT_ZE_Molduga_PreRender");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::DmT_ZE_QueenDead_PreRender> = murmurhash3::hash("IsGetAdventureMemory.DmT_ZE_QueenDead_PreRender");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::IsNeedIcon> = murmurhash3::hash("IsGetAdventureMemory.IsNeedIcon");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetAdventureMemory::IsOpenList> = murmurhash3::hash("IsGetAdventureMemory.IsOpenList");