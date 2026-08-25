#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::IsActivateCannon : Tag::Structure {
	struct Tower01 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower02 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower03 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower04 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower05 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower06 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower07 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower08 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower09 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower10 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower11 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower12 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower13 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower14 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower15 : Tag::Member { using type = bool&; using adapter = bool&; };
};/* Tag::Structure GameData::IsActivateCannon close */

template <> struct Data::Structure<GameData::IsActivateCannon> : GameData::IsActivateCannon {
	Tower01::type Tower01;
	Tower02::type Tower02;
	Tower03::type Tower03;
	Tower04::type Tower04;
	Tower05::type Tower05;
	Tower06::type Tower06;
	Tower07::type Tower07;
	Tower08::type Tower08;
	Tower09::type Tower09;
	Tower10::type Tower10;
	Tower11::type Tower11;
	Tower12::type Tower12;
	Tower13::type Tower13;
	Tower14::type Tower14;
	Tower15::type Tower15;
	
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
};/* Data::Structure GameData::IsActivateCannon close */

template <> hash_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower01> = murmurhash3::hash("IsActivateCannon.Tower01");
template <> hash_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower02> = murmurhash3::hash("IsActivateCannon.Tower02");
template <> hash_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower03> = murmurhash3::hash("IsActivateCannon.Tower03");
template <> hash_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower04> = murmurhash3::hash("IsActivateCannon.Tower04");
template <> hash_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower05> = murmurhash3::hash("IsActivateCannon.Tower05");
template <> hash_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower06> = murmurhash3::hash("IsActivateCannon.Tower06");
template <> hash_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower07> = murmurhash3::hash("IsActivateCannon.Tower07");
template <> hash_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower08> = murmurhash3::hash("IsActivateCannon.Tower08");
template <> hash_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower09> = murmurhash3::hash("IsActivateCannon.Tower09");
template <> hash_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower10> = murmurhash3::hash("IsActivateCannon.Tower10");
template <> hash_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower11> = murmurhash3::hash("IsActivateCannon.Tower11");
template <> hash_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower12> = murmurhash3::hash("IsActivateCannon.Tower12");
template <> hash_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower13> = murmurhash3::hash("IsActivateCannon.Tower13");
template <> hash_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower14> = murmurhash3::hash("IsActivateCannon.Tower14");
template <> hash_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower15> = murmurhash3::hash("IsActivateCannon.Tower15");