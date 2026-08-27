#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::NpcGardenInfo : Tag::Structure {
	struct IsHarvested : Tag::Member { using type = bool&; };
	struct CurrentState : Tag::Enum { using type = ::Enum::Scalar<CurrentState>; enum enum_type : hash_t { Idle = murmurhash3::hash("Idle"), WaitForGrowth = murmurhash3::hash("WaitForGrowth"), Harvestable = murmurhash3::hash("Harvestable"), }; };
	struct GrowActorName : Tag::Member { using type = string64*; };
	struct LastGrowActorName : Tag::Member { using type = string64*; };
	struct GrowthElapsedTime : Tag::Member { using type = u32&; };
};/* Tag::Structure GameData::NpcGardenInfo close */

template <> struct Data::Structure<GameData::NpcGardenInfo> : GameData::NpcGardenInfo {
	Data::Member<IsHarvested> IsHarvested;
	Data::Member<CurrentState> CurrentState;
	Data::Member<GrowActorName> GrowActorName;
	Data::Member<LastGrowActorName> LastGrowActorName;
	Data::Member<GrowthElapsedTime> GrowthElapsedTime;
	
	explicit Structure(Sav& s) : 
		IsHarvested { s.get<struct IsHarvested>() },
		CurrentState { s.get<struct CurrentState>() },
		GrowActorName { s.get<struct GrowActorName>() },
		LastGrowActorName { s.get<struct LastGrowActorName>() },
		GrowthElapsedTime { s.get<struct GrowthElapsedTime>() }
	{ }
};/* Data::Structure GameData::NpcGardenInfo close */

template <> hash_t constexpr Data::Hashtable<GameData::NpcGardenInfo::IsHarvested> = murmurhash3::hash("NpcGardenInfo.IsHarvested");
template <> hash_t constexpr Data::Hashtable<GameData::NpcGardenInfo::CurrentState> = murmurhash3::hash("NpcGardenInfo.CurrentState");
template <> hash_t constexpr Data::Hashtable<GameData::NpcGardenInfo::GrowActorName> = murmurhash3::hash("NpcGardenInfo.GrowActorName");
template <> hash_t constexpr Data::Hashtable<GameData::NpcGardenInfo::LastGrowActorName> = murmurhash3::hash("NpcGardenInfo.LastGrowActorName");
template <> hash_t constexpr Data::Hashtable<GameData::NpcGardenInfo::GrowthElapsedTime> = murmurhash3::hash("NpcGardenInfo.GrowthElapsedTime");