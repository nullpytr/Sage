#pragma once
#include <sage>

struct GameData::IsFindTreasureMap : Tag::Structure {
	struct Armor_005_Head : Tag::Member { using type = bool&; };
	struct Armor_005_Lower : Tag::Member { using type = bool&; };
	struct Armor_005_Upper : Tag::Member { using type = bool&; };
	struct Armor_1051_Head : Tag::Member { using type = bool&; };
	struct Armor_1051_Lower : Tag::Member { using type = bool&; };
	struct Armor_1051_Upper : Tag::Member { using type = bool&; };
	struct Armor_172_Head : Tag::Member { using type = bool&; };
	struct Armor_173_Head : Tag::Member { using type = bool&; };
	struct Armor_176_Head : Tag::Member { using type = bool&; };
	struct Armor_177_Head : Tag::Member { using type = bool&; };
	struct Armor_178_Head : Tag::Member { using type = bool&; };
	struct Armor_200_Head : Tag::Member { using type = bool&; };
	struct Armor_200_Lower : Tag::Member { using type = bool&; };
	struct Armor_200_Upper : Tag::Member { using type = bool&; };
	struct Armor_205_Head : Tag::Member { using type = bool&; };
	struct Armor_205_Lower : Tag::Member { using type = bool&; };
	struct Armor_205_Upper : Tag::Member { using type = bool&; };
	struct Armor_210_Head : Tag::Member { using type = bool&; };
	struct Armor_210_Lower : Tag::Member { using type = bool&; };
	struct Armor_210_Upper : Tag::Member { using type = bool&; };
	struct Armor_215_Head : Tag::Member { using type = bool&; };
	struct Armor_215_Lower : Tag::Member { using type = bool&; };
	struct Armor_215_Upper : Tag::Member { using type = bool&; };
	struct Armor_220_Head : Tag::Member { using type = bool&; };
	struct Armor_230_Head : Tag::Member { using type = bool&; };
	struct Armor_230_Lower : Tag::Member { using type = bool&; };
	struct Armor_230_Upper : Tag::Member { using type = bool&; };
	struct Weapon_Lsword_059 : Tag::Member { using type = bool&; };
	struct Weapon_Shield_057 : Tag::Member { using type = bool&; };
	struct Weapon_Sword_058 : Tag::Member { using type = bool&; };
	struct Weapon_Sword_059 : Tag::Member { using type = bool&; };
};/* Tag::Structure GameData::IsFindTreasureMap close */

template <> struct Data::Structure<GameData::IsFindTreasureMap> : GameData::IsFindTreasureMap {
	Data::Member<Armor_005_Head> Armor_005_Head;
	Data::Member<Armor_005_Lower> Armor_005_Lower;
	Data::Member<Armor_005_Upper> Armor_005_Upper;
	Data::Member<Armor_1051_Head> Armor_1051_Head;
	Data::Member<Armor_1051_Lower> Armor_1051_Lower;
	Data::Member<Armor_1051_Upper> Armor_1051_Upper;
	Data::Member<Armor_172_Head> Armor_172_Head;
	Data::Member<Armor_173_Head> Armor_173_Head;
	Data::Member<Armor_176_Head> Armor_176_Head;
	Data::Member<Armor_177_Head> Armor_177_Head;
	Data::Member<Armor_178_Head> Armor_178_Head;
	Data::Member<Armor_200_Head> Armor_200_Head;
	Data::Member<Armor_200_Lower> Armor_200_Lower;
	Data::Member<Armor_200_Upper> Armor_200_Upper;
	Data::Member<Armor_205_Head> Armor_205_Head;
	Data::Member<Armor_205_Lower> Armor_205_Lower;
	Data::Member<Armor_205_Upper> Armor_205_Upper;
	Data::Member<Armor_210_Head> Armor_210_Head;
	Data::Member<Armor_210_Lower> Armor_210_Lower;
	Data::Member<Armor_210_Upper> Armor_210_Upper;
	Data::Member<Armor_215_Head> Armor_215_Head;
	Data::Member<Armor_215_Lower> Armor_215_Lower;
	Data::Member<Armor_215_Upper> Armor_215_Upper;
	Data::Member<Armor_220_Head> Armor_220_Head;
	Data::Member<Armor_230_Head> Armor_230_Head;
	Data::Member<Armor_230_Lower> Armor_230_Lower;
	Data::Member<Armor_230_Upper> Armor_230_Upper;
	Data::Member<Weapon_Lsword_059> Weapon_Lsword_059;
	Data::Member<Weapon_Shield_057> Weapon_Shield_057;
	Data::Member<Weapon_Sword_058> Weapon_Sword_058;
	Data::Member<Weapon_Sword_059> Weapon_Sword_059;
	
	explicit Structure(Sav& s) : 
		Armor_005_Head { s.get<struct Armor_005_Head>() },
		Armor_005_Lower { s.get<struct Armor_005_Lower>() },
		Armor_005_Upper { s.get<struct Armor_005_Upper>() },
		Armor_1051_Head { s.get<struct Armor_1051_Head>() },
		Armor_1051_Lower { s.get<struct Armor_1051_Lower>() },
		Armor_1051_Upper { s.get<struct Armor_1051_Upper>() },
		Armor_172_Head { s.get<struct Armor_172_Head>() },
		Armor_173_Head { s.get<struct Armor_173_Head>() },
		Armor_176_Head { s.get<struct Armor_176_Head>() },
		Armor_177_Head { s.get<struct Armor_177_Head>() },
		Armor_178_Head { s.get<struct Armor_178_Head>() },
		Armor_200_Head { s.get<struct Armor_200_Head>() },
		Armor_200_Lower { s.get<struct Armor_200_Lower>() },
		Armor_200_Upper { s.get<struct Armor_200_Upper>() },
		Armor_205_Head { s.get<struct Armor_205_Head>() },
		Armor_205_Lower { s.get<struct Armor_205_Lower>() },
		Armor_205_Upper { s.get<struct Armor_205_Upper>() },
		Armor_210_Head { s.get<struct Armor_210_Head>() },
		Armor_210_Lower { s.get<struct Armor_210_Lower>() },
		Armor_210_Upper { s.get<struct Armor_210_Upper>() },
		Armor_215_Head { s.get<struct Armor_215_Head>() },
		Armor_215_Lower { s.get<struct Armor_215_Lower>() },
		Armor_215_Upper { s.get<struct Armor_215_Upper>() },
		Armor_220_Head { s.get<struct Armor_220_Head>() },
		Armor_230_Head { s.get<struct Armor_230_Head>() },
		Armor_230_Lower { s.get<struct Armor_230_Lower>() },
		Armor_230_Upper { s.get<struct Armor_230_Upper>() },
		Weapon_Lsword_059 { s.get<struct Weapon_Lsword_059>() },
		Weapon_Shield_057 { s.get<struct Weapon_Shield_057>() },
		Weapon_Sword_058 { s.get<struct Weapon_Sword_058>() },
		Weapon_Sword_059 { s.get<struct Weapon_Sword_059>() }
	{ }
};/* Data::Structure GameData::IsFindTreasureMap close */

template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_005_Head> = murmurhash3::hash("IsFindTreasureMap.Armor_005_Head");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_005_Lower> = murmurhash3::hash("IsFindTreasureMap.Armor_005_Lower");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_005_Upper> = murmurhash3::hash("IsFindTreasureMap.Armor_005_Upper");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_1051_Head> = murmurhash3::hash("IsFindTreasureMap.Armor_1051_Head");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_1051_Lower> = murmurhash3::hash("IsFindTreasureMap.Armor_1051_Lower");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_1051_Upper> = murmurhash3::hash("IsFindTreasureMap.Armor_1051_Upper");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_172_Head> = murmurhash3::hash("IsFindTreasureMap.Armor_172_Head");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_173_Head> = murmurhash3::hash("IsFindTreasureMap.Armor_173_Head");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_176_Head> = murmurhash3::hash("IsFindTreasureMap.Armor_176_Head");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_177_Head> = murmurhash3::hash("IsFindTreasureMap.Armor_177_Head");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_178_Head> = murmurhash3::hash("IsFindTreasureMap.Armor_178_Head");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_200_Head> = murmurhash3::hash("IsFindTreasureMap.Armor_200_Head");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_200_Lower> = murmurhash3::hash("IsFindTreasureMap.Armor_200_Lower");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_200_Upper> = murmurhash3::hash("IsFindTreasureMap.Armor_200_Upper");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_205_Head> = murmurhash3::hash("IsFindTreasureMap.Armor_205_Head");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_205_Lower> = murmurhash3::hash("IsFindTreasureMap.Armor_205_Lower");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_205_Upper> = murmurhash3::hash("IsFindTreasureMap.Armor_205_Upper");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_210_Head> = murmurhash3::hash("IsFindTreasureMap.Armor_210_Head");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_210_Lower> = murmurhash3::hash("IsFindTreasureMap.Armor_210_Lower");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_210_Upper> = murmurhash3::hash("IsFindTreasureMap.Armor_210_Upper");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_215_Head> = murmurhash3::hash("IsFindTreasureMap.Armor_215_Head");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_215_Lower> = murmurhash3::hash("IsFindTreasureMap.Armor_215_Lower");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_215_Upper> = murmurhash3::hash("IsFindTreasureMap.Armor_215_Upper");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_220_Head> = murmurhash3::hash("IsFindTreasureMap.Armor_220_Head");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_230_Head> = murmurhash3::hash("IsFindTreasureMap.Armor_230_Head");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_230_Lower> = murmurhash3::hash("IsFindTreasureMap.Armor_230_Lower");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Armor_230_Upper> = murmurhash3::hash("IsFindTreasureMap.Armor_230_Upper");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Weapon_Lsword_059> = murmurhash3::hash("IsFindTreasureMap.Weapon_Lsword_059");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Weapon_Shield_057> = murmurhash3::hash("IsFindTreasureMap.Weapon_Shield_057");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Weapon_Sword_058> = murmurhash3::hash("IsFindTreasureMap.Weapon_Sword_058");
template <> hash_t constexpr Data::Hashtable<GameData::IsFindTreasureMap::Weapon_Sword_059> = murmurhash3::hash("IsFindTreasureMap.Weapon_Sword_059");