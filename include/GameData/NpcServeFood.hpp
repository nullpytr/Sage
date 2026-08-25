#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::NpcServeFood : Tag::Structure {
	struct IsRound : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsServedFood : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CurIndex : Tag::Member { using type = s32&; using adapter = s32&; };
	struct NextIndex : Tag::Member { using type = s32&; using adapter = s32&; };
	struct Price : Tag::Member { using type = s32&; using adapter = s32&; };
	struct FoodName : Tag::Member { using type = string64; using adapter = adapter<type>*; };
	struct FoodMaterialNames : Tag::Member { using type = span<adapter<string64>>; using adapter = adapter<type>*; };
	struct LotteryElapsedTime : Tag::Member { using type = u32&; using adapter = u32&; };
};/* Tag::Structure GameData::NpcServeFood close */

template <> struct Data::Structure<GameData::NpcServeFood> : GameData::NpcServeFood {
	IsRound::type IsRound;
	IsServedFood::type IsServedFood;
	CurIndex::type CurIndex;
	NextIndex::type NextIndex;
	Price::type Price;
	FoodName::type FoodName;
	FoodMaterialNames::type FoodMaterialNames;
	LotteryElapsedTime::type LotteryElapsedTime;
	
	explicit Structure(Sav& s) : 
		IsRound { s.get<struct IsRound>() },
		IsServedFood { s.get<struct IsServedFood>() },
		CurIndex { s.get<struct CurIndex>() },
		NextIndex { s.get<struct NextIndex>() },
		Price { s.get<struct Price>() },
		FoodName { s.get<struct FoodName>() },
		FoodMaterialNames { s.get<struct FoodMaterialNames>() },
		LotteryElapsedTime { s.get<struct LotteryElapsedTime>() }
	{ }
};/* Data::Structure GameData::NpcServeFood close */

template <> hash_t constexpr Data::Hashtable<GameData::NpcServeFood::IsRound> = murmurhash3::hash("NpcServeFood.IsRound");
template <> hash_t constexpr Data::Hashtable<GameData::NpcServeFood::IsServedFood> = murmurhash3::hash("NpcServeFood.IsServedFood");
template <> hash_t constexpr Data::Hashtable<GameData::NpcServeFood::CurIndex> = murmurhash3::hash("NpcServeFood.CurIndex");
template <> hash_t constexpr Data::Hashtable<GameData::NpcServeFood::NextIndex> = murmurhash3::hash("NpcServeFood.NextIndex");
template <> hash_t constexpr Data::Hashtable<GameData::NpcServeFood::Price> = murmurhash3::hash("NpcServeFood.Price");
template <> hash_t constexpr Data::Hashtable<GameData::NpcServeFood::FoodName> = murmurhash3::hash("NpcServeFood.FoodName");
template <> hash_t constexpr Data::Hashtable<GameData::NpcServeFood::FoodMaterialNames> = murmurhash3::hash("NpcServeFood.FoodMaterialNames");
template <> hash_t constexpr Data::Hashtable<GameData::NpcServeFood::LotteryElapsedTime> = murmurhash3::hash("NpcServeFood.LotteryElapsedTime");