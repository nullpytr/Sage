#pragma once
#include <sage>

struct GameData::NpcServeFood : Tag::Structure {
	struct CurIndex : Tag::Member { using type = s32&; };
	struct FoodMaterialNames : Tag::Member { using type = adaptive_range<string64>*; };
	struct FoodName : Tag::Member { using type = string64*; };
	struct IsRound : Tag::Member { using type = bool&; };
	struct IsServedFood : Tag::Member { using type = bool&; };
	struct LotteryElapsedTime : Tag::Member { using type = u32&; };
	struct NextIndex : Tag::Member { using type = s32&; };
	struct Price : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::NpcServeFood close */

template <> struct Data::Structure<GameData::NpcServeFood> : GameData::NpcServeFood {
	Member<CurIndex> CurIndex;
	Member<FoodMaterialNames> FoodMaterialNames;
	Member<FoodName> FoodName;
	Member<IsRound> IsRound;
	Member<IsServedFood> IsServedFood;
	Member<LotteryElapsedTime> LotteryElapsedTime;
	Member<NextIndex> NextIndex;
	Member<Price> Price;
	
	explicit Structure(Sav& s) : 
		CurIndex { s.get<struct CurIndex>() },
		FoodMaterialNames { s.get<struct FoodMaterialNames>() },
		FoodName { s.get<struct FoodName>() },
		IsRound { s.get<struct IsRound>() },
		IsServedFood { s.get<struct IsServedFood>() },
		LotteryElapsedTime { s.get<struct LotteryElapsedTime>() },
		NextIndex { s.get<struct NextIndex>() },
		Price { s.get<struct Price>() }
	{ }
};/* Data::Structure GameData::NpcServeFood close */

template <> hash_value_t constexpr Data::Hashtable<GameData::NpcServeFood::CurIndex> { "NpcServeFood.CurIndex" };
template <> hash_value_t constexpr Data::Hashtable<GameData::NpcServeFood::FoodMaterialNames> { "NpcServeFood.FoodMaterialNames" };
template <> hash_value_t constexpr Data::Hashtable<GameData::NpcServeFood::FoodName> { "NpcServeFood.FoodName" };
template <> hash_value_t constexpr Data::Hashtable<GameData::NpcServeFood::IsRound> { "NpcServeFood.IsRound" };
template <> hash_value_t constexpr Data::Hashtable<GameData::NpcServeFood::IsServedFood> { "NpcServeFood.IsServedFood" };
template <> hash_value_t constexpr Data::Hashtable<GameData::NpcServeFood::LotteryElapsedTime> { "NpcServeFood.LotteryElapsedTime" };
template <> hash_value_t constexpr Data::Hashtable<GameData::NpcServeFood::NextIndex> { "NpcServeFood.NextIndex" };
template <> hash_value_t constexpr Data::Hashtable<GameData::NpcServeFood::Price> { "NpcServeFood.Price" };