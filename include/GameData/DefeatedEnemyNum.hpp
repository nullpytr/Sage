#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::DefeatedEnemyNum : Tag::Structure {
	struct Enemy_CaveMaster_000 : Tag::Member { using type = s32&; };
	struct Enemy_CaveMaster_Middle : Tag::Member { using type = s32&; };
	struct Enemy_CaveMaster_Senior : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::DefeatedEnemyNum close */

template <> struct Data::Structure<GameData::DefeatedEnemyNum> : GameData::DefeatedEnemyNum {
	Data::Member<Enemy_CaveMaster_000> Enemy_CaveMaster_000;
	Data::Member<Enemy_CaveMaster_Middle> Enemy_CaveMaster_Middle;
	Data::Member<Enemy_CaveMaster_Senior> Enemy_CaveMaster_Senior;
	
	explicit Structure(Sav& s) : 
		Enemy_CaveMaster_000 { s.get<struct Enemy_CaveMaster_000>() },
		Enemy_CaveMaster_Middle { s.get<struct Enemy_CaveMaster_Middle>() },
		Enemy_CaveMaster_Senior { s.get<struct Enemy_CaveMaster_Senior>() }
	{ }
};/* Data::Structure GameData::DefeatedEnemyNum close */

template <> hash_t constexpr Data::Hashtable<GameData::DefeatedEnemyNum::Enemy_CaveMaster_000> = murmurhash3::hash("DefeatedEnemyNum.Enemy_CaveMaster_000");
template <> hash_t constexpr Data::Hashtable<GameData::DefeatedEnemyNum::Enemy_CaveMaster_Middle> = murmurhash3::hash("DefeatedEnemyNum.Enemy_CaveMaster_Middle");
template <> hash_t constexpr Data::Hashtable<GameData::DefeatedEnemyNum::Enemy_CaveMaster_Senior> = murmurhash3::hash("DefeatedEnemyNum.Enemy_CaveMaster_Senior");