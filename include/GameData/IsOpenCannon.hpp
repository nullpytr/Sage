#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::IsOpenCannon : Tag::Structure {
	struct Tower01 : Tag::Member { using type = bool&; };
	struct Tower02 : Tag::Member { using type = bool&; };
	struct Tower03 : Tag::Member { using type = bool&; };
	struct Tower04 : Tag::Member { using type = bool&; };
	struct Tower05 : Tag::Member { using type = bool&; };
	struct Tower06 : Tag::Member { using type = bool&; };
	struct Tower07 : Tag::Member { using type = bool&; };
	struct Tower08 : Tag::Member { using type = bool&; };
	struct Tower09 : Tag::Member { using type = bool&; };
	struct Tower10 : Tag::Member { using type = bool&; };
	struct Tower11 : Tag::Member { using type = bool&; };
	struct Tower12 : Tag::Member { using type = bool&; };
	struct Tower13 : Tag::Member { using type = bool&; };
	struct Tower14 : Tag::Member { using type = bool&; };
	struct Tower15 : Tag::Member { using type = bool&; };
};/* Tag::Structure GameData::IsOpenCannon close */

template <> struct Data::Structure<GameData::IsOpenCannon> : GameData::IsOpenCannon {
	Data::Member<Tower01> Tower01;
	Data::Member<Tower02> Tower02;
	Data::Member<Tower03> Tower03;
	Data::Member<Tower04> Tower04;
	Data::Member<Tower05> Tower05;
	Data::Member<Tower06> Tower06;
	Data::Member<Tower07> Tower07;
	Data::Member<Tower08> Tower08;
	Data::Member<Tower09> Tower09;
	Data::Member<Tower10> Tower10;
	Data::Member<Tower11> Tower11;
	Data::Member<Tower12> Tower12;
	Data::Member<Tower13> Tower13;
	Data::Member<Tower14> Tower14;
	Data::Member<Tower15> Tower15;
	
	explicit Structure(Sav& s) : 
		Tower01 { s.get<struct Tower01>() },
		Tower02 { s.get<struct Tower02>() },
		Tower03 { s.get<struct Tower03>() },
		Tower04 { s.get<struct Tower04>() },
		Tower05 { s.get<struct Tower05>() },
		Tower06 { s.get<struct Tower06>() },
		Tower07 { s.get<struct Tower07>() },
		Tower08 { s.get<struct Tower08>() },
		Tower09 { s.get<struct Tower09>() },
		Tower10 { s.get<struct Tower10>() },
		Tower11 { s.get<struct Tower11>() },
		Tower12 { s.get<struct Tower12>() },
		Tower13 { s.get<struct Tower13>() },
		Tower14 { s.get<struct Tower14>() },
		Tower15 { s.get<struct Tower15>() }
	{ }
};/* Data::Structure GameData::IsOpenCannon close */

template <> hash_t constexpr Data::Hashtable<GameData::IsOpenCannon::Tower01> = murmurhash3::hash("IsOpenCannon.Tower01");
template <> hash_t constexpr Data::Hashtable<GameData::IsOpenCannon::Tower02> = murmurhash3::hash("IsOpenCannon.Tower02");
template <> hash_t constexpr Data::Hashtable<GameData::IsOpenCannon::Tower03> = murmurhash3::hash("IsOpenCannon.Tower03");
template <> hash_t constexpr Data::Hashtable<GameData::IsOpenCannon::Tower04> = murmurhash3::hash("IsOpenCannon.Tower04");
template <> hash_t constexpr Data::Hashtable<GameData::IsOpenCannon::Tower05> = murmurhash3::hash("IsOpenCannon.Tower05");
template <> hash_t constexpr Data::Hashtable<GameData::IsOpenCannon::Tower06> = murmurhash3::hash("IsOpenCannon.Tower06");
template <> hash_t constexpr Data::Hashtable<GameData::IsOpenCannon::Tower07> = murmurhash3::hash("IsOpenCannon.Tower07");
template <> hash_t constexpr Data::Hashtable<GameData::IsOpenCannon::Tower08> = murmurhash3::hash("IsOpenCannon.Tower08");
template <> hash_t constexpr Data::Hashtable<GameData::IsOpenCannon::Tower09> = murmurhash3::hash("IsOpenCannon.Tower09");
template <> hash_t constexpr Data::Hashtable<GameData::IsOpenCannon::Tower10> = murmurhash3::hash("IsOpenCannon.Tower10");
template <> hash_t constexpr Data::Hashtable<GameData::IsOpenCannon::Tower11> = murmurhash3::hash("IsOpenCannon.Tower11");
template <> hash_t constexpr Data::Hashtable<GameData::IsOpenCannon::Tower12> = murmurhash3::hash("IsOpenCannon.Tower12");
template <> hash_t constexpr Data::Hashtable<GameData::IsOpenCannon::Tower13> = murmurhash3::hash("IsOpenCannon.Tower13");
template <> hash_t constexpr Data::Hashtable<GameData::IsOpenCannon::Tower14> = murmurhash3::hash("IsOpenCannon.Tower14");
template <> hash_t constexpr Data::Hashtable<GameData::IsOpenCannon::Tower15> = murmurhash3::hash("IsOpenCannon.Tower15");