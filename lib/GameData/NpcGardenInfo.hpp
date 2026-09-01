#pragma once
#include <sage>

struct GameData::NpcGardenInfo : Tag::Structure {
	struct GrowActorName : Tag::Member { using type = string64*; };
	struct GrowthElapsedTime : Tag::Member { using type = u32&; };
	struct IsHarvested : Tag::Member { using type = bool&; };
	struct LastGrowActorName : Tag::Member { using type = string64*; };
	struct CurrentState : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Idle = murmurhash3::hash("Idle"), WaitForGrowth = murmurhash3::hash("WaitForGrowth"), Harvestable = murmurhash3::hash("Harvestable"), }; };
		using type = enum_t<CurrentState>&;
	};
};/* Tag::Structure GameData::NpcGardenInfo close */

template <> struct Data::Structure<GameData::NpcGardenInfo> : GameData::NpcGardenInfo {
	Member<GrowActorName> GrowActorName;
	Member<GrowthElapsedTime> GrowthElapsedTime;
	Member<IsHarvested> IsHarvested;
	Member<LastGrowActorName> LastGrowActorName;
	Enum<CurrentState> CurrentState;
	
	explicit Structure(Sav& s) : 
		GrowActorName { s.get<struct GrowActorName>() },
		GrowthElapsedTime { s.get<struct GrowthElapsedTime>() },
		IsHarvested { s.get<struct IsHarvested>() },
		LastGrowActorName { s.get<struct LastGrowActorName>() },
		CurrentState { s.get<struct CurrentState>() }
	{ }
};/* Structure Data::Structure GameData::NpcGardenInfo close */

template <> hash_value_t constexpr Data::Hashtable<GameData::NpcGardenInfo::GrowActorName> { "NpcGardenInfo.GrowActorName" };
template <> hash_value_t constexpr Data::Hashtable<GameData::NpcGardenInfo::GrowthElapsedTime> { "NpcGardenInfo.GrowthElapsedTime" };
template <> hash_value_t constexpr Data::Hashtable<GameData::NpcGardenInfo::IsHarvested> { "NpcGardenInfo.IsHarvested" };
template <> hash_value_t constexpr Data::Hashtable<GameData::NpcGardenInfo::LastGrowActorName> { "NpcGardenInfo.LastGrowActorName" };
template <> hash_value_t constexpr Data::Hashtable<GameData::NpcGardenInfo::CurrentState> { "NpcGardenInfo.CurrentState" };