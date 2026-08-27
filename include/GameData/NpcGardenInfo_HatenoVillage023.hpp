#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::NpcGardenInfo_HatenoVillage023 : Tag::Structure {
	struct IsHarvested : Tag::Member { using type = bool&; };
	struct CurrentState : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Idle = murmurhash3::hash("Idle"), WaitForGrowth = murmurhash3::hash("WaitForGrowth"), Harvestable = murmurhash3::hash("Harvestable"), }; };
		using type = enum_t<values_t>;
	};
	struct GrowActorName : Tag::Member { using type = string64*; };
	struct LastGrowActorName : Tag::Member { using type = string64*; };
	struct GrowthElapsedTime : Tag::Member { using type = u32&; };
};/* Tag::Structure GameData::NpcGardenInfo_HatenoVillage023 close */

template <> struct Data::Structure<GameData::NpcGardenInfo_HatenoVillage023> : GameData::NpcGardenInfo_HatenoVillage023 {
	Data::Member<IsHarvested> IsHarvested;
	Data::Enum<CurrentState> CurrentState;
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
};/* Data::Structure GameData::NpcGardenInfo_HatenoVillage023 close */

template <> hash_t constexpr Data::Hashtable<GameData::NpcGardenInfo_HatenoVillage023::IsHarvested> = murmurhash3::hash("NpcGardenInfo_HatenoVillage023.IsHarvested");
template <> hash_t constexpr Data::Hashtable<GameData::NpcGardenInfo_HatenoVillage023::CurrentState> = murmurhash3::hash("NpcGardenInfo_HatenoVillage023.CurrentState");
template <> hash_t constexpr Data::Hashtable<GameData::NpcGardenInfo_HatenoVillage023::GrowActorName> = murmurhash3::hash("NpcGardenInfo_HatenoVillage023.GrowActorName");
template <> hash_t constexpr Data::Hashtable<GameData::NpcGardenInfo_HatenoVillage023::LastGrowActorName> = murmurhash3::hash("NpcGardenInfo_HatenoVillage023.LastGrowActorName");
template <> hash_t constexpr Data::Hashtable<GameData::NpcGardenInfo_HatenoVillage023::GrowthElapsedTime> = murmurhash3::hash("NpcGardenInfo_HatenoVillage023.GrowthElapsedTime");