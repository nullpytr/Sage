#pragma once
#include <sage>

struct GameData::DefeatedEnemyNum : Tag::Structure {
	struct Enemy_CaveMaster_000 : Tag::Member { using type = s32&; };
	struct Enemy_CaveMaster_Middle : Tag::Member { using type = s32&; };
	struct Enemy_CaveMaster_Senior : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::DefeatedEnemyNum close */

template <> struct Data::Structure<GameData::DefeatedEnemyNum> : GameData::DefeatedEnemyNum {
	Member<Enemy_CaveMaster_000> Enemy_CaveMaster_000;
	Member<Enemy_CaveMaster_Middle> Enemy_CaveMaster_Middle;
	Member<Enemy_CaveMaster_Senior> Enemy_CaveMaster_Senior;
	
	explicit Structure(Sav& s) : 
		Enemy_CaveMaster_000 { s.get<struct Enemy_CaveMaster_000>() },
		Enemy_CaveMaster_Middle { s.get<struct Enemy_CaveMaster_Middle>() },
		Enemy_CaveMaster_Senior { s.get<struct Enemy_CaveMaster_Senior>() }
	{ }
};/* Data::Structure GameData::DefeatedEnemyNum close */

template <> hash_value_t constexpr Data::Hashtable<GameData::DefeatedEnemyNum::Enemy_CaveMaster_000> { "DefeatedEnemyNum.Enemy_CaveMaster_000" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DefeatedEnemyNum::Enemy_CaveMaster_Middle> { "DefeatedEnemyNum.Enemy_CaveMaster_Middle" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DefeatedEnemyNum::Enemy_CaveMaster_Senior> { "DefeatedEnemyNum.Enemy_CaveMaster_Senior" };