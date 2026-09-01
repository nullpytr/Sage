#pragma once
#include <sage>

struct GameData::IsActivateCannon : Tag::Map {
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
	using type = std::decay_t<Tower01::type>;
};/* Tag::Structure GameData::IsActivateCannon close */

template <> struct Data::Structure<GameData::IsActivateCannon> : GameData::IsActivateCannon {
	Member<Tower01> Tower01;
	Member<Tower02> Tower02;
	Member<Tower03> Tower03;
	Member<Tower04> Tower04;
	Member<Tower05> Tower05;
	Member<Tower06> Tower06;
	Member<Tower07> Tower07;
	Member<Tower08> Tower08;
	Member<Tower09> Tower09;
	Member<Tower10> Tower10;
	Member<Tower11> Tower11;
	Member<Tower12> Tower12;
	Member<Tower13> Tower13;
	Member<Tower14> Tower14;
	Member<Tower15> Tower15;
	
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

template <> hash_value_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower01> { "IsActivateCannon.Tower01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower02> { "IsActivateCannon.Tower02" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower03> { "IsActivateCannon.Tower03" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower04> { "IsActivateCannon.Tower04" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower05> { "IsActivateCannon.Tower05" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower06> { "IsActivateCannon.Tower06" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower07> { "IsActivateCannon.Tower07" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower08> { "IsActivateCannon.Tower08" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower09> { "IsActivateCannon.Tower09" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower10> { "IsActivateCannon.Tower10" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower11> { "IsActivateCannon.Tower11" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower12> { "IsActivateCannon.Tower12" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower13> { "IsActivateCannon.Tower13" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower14> { "IsActivateCannon.Tower14" };
template <> hash_value_t constexpr Data::Hashtable<GameData::IsActivateCannon::Tower15> { "IsActivateCannon.Tower15" };