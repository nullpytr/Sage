#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::KeyCrystalDungeonUnlocked : Tag::Structure {
	struct Dungeon000 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon006 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon054 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon066 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon071 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon078 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon079 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon085 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon088 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon089 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon092 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon093 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon098 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon099 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon100 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon101 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon103 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon107 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon108 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon110 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon111 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon112 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon115 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon117 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon123 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon127 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon131 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon132 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon134 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon145 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon149 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon150 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon151 : Tag::Member { using type = bool&; using adapter = bool&; };
};/* Tag::Structure GameData::KeyCrystalDungeonUnlocked close */

template <> struct Data::Structure<GameData::KeyCrystalDungeonUnlocked> : GameData::KeyCrystalDungeonUnlocked {
	Dungeon000::type Dungeon000;
	Dungeon006::type Dungeon006;
	Dungeon054::type Dungeon054;
	Dungeon066::type Dungeon066;
	Dungeon071::type Dungeon071;
	Dungeon078::type Dungeon078;
	Dungeon079::type Dungeon079;
	Dungeon085::type Dungeon085;
	Dungeon088::type Dungeon088;
	Dungeon089::type Dungeon089;
	Dungeon092::type Dungeon092;
	Dungeon093::type Dungeon093;
	Dungeon098::type Dungeon098;
	Dungeon099::type Dungeon099;
	Dungeon100::type Dungeon100;
	Dungeon101::type Dungeon101;
	Dungeon103::type Dungeon103;
	Dungeon107::type Dungeon107;
	Dungeon108::type Dungeon108;
	Dungeon110::type Dungeon110;
	Dungeon111::type Dungeon111;
	Dungeon112::type Dungeon112;
	Dungeon115::type Dungeon115;
	Dungeon117::type Dungeon117;
	Dungeon123::type Dungeon123;
	Dungeon127::type Dungeon127;
	Dungeon131::type Dungeon131;
	Dungeon132::type Dungeon132;
	Dungeon134::type Dungeon134;
	Dungeon145::type Dungeon145;
	Dungeon149::type Dungeon149;
	Dungeon150::type Dungeon150;
	Dungeon151::type Dungeon151;
	
	explicit Structure(Sav& s) : 
		Dungeon000 { s.get<struct Dungeon000>() },
		Dungeon006 { s.get<struct Dungeon006>() },
		Dungeon054 { s.get<struct Dungeon054>() },
		Dungeon066 { s.get<struct Dungeon066>() },
		Dungeon071 { s.get<struct Dungeon071>() },
		Dungeon078 { s.get<struct Dungeon078>() },
		Dungeon079 { s.get<struct Dungeon079>() },
		Dungeon085 { s.get<struct Dungeon085>() },
		Dungeon088 { s.get<struct Dungeon088>() },
		Dungeon089 { s.get<struct Dungeon089>() },
		Dungeon092 { s.get<struct Dungeon092>() },
		Dungeon093 { s.get<struct Dungeon093>() },
		Dungeon098 { s.get<struct Dungeon098>() },
		Dungeon099 { s.get<struct Dungeon099>() },
		Dungeon100 { s.get<struct Dungeon100>() },
		Dungeon101 { s.get<struct Dungeon101>() },
		Dungeon103 { s.get<struct Dungeon103>() },
		Dungeon107 { s.get<struct Dungeon107>() },
		Dungeon108 { s.get<struct Dungeon108>() },
		Dungeon110 { s.get<struct Dungeon110>() },
		Dungeon111 { s.get<struct Dungeon111>() },
		Dungeon112 { s.get<struct Dungeon112>() },
		Dungeon115 { s.get<struct Dungeon115>() },
		Dungeon117 { s.get<struct Dungeon117>() },
		Dungeon123 { s.get<struct Dungeon123>() },
		Dungeon127 { s.get<struct Dungeon127>() },
		Dungeon131 { s.get<struct Dungeon131>() },
		Dungeon132 { s.get<struct Dungeon132>() },
		Dungeon134 { s.get<struct Dungeon134>() },
		Dungeon145 { s.get<struct Dungeon145>() },
		Dungeon149 { s.get<struct Dungeon149>() },
		Dungeon150 { s.get<struct Dungeon150>() },
		Dungeon151 { s.get<struct Dungeon151>() }
	{ }
};/* Data::Structure GameData::KeyCrystalDungeonUnlocked close */

template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon000> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon000");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon006> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon006");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon054> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon054");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon066> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon066");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon071> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon071");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon078> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon078");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon079> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon079");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon085> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon085");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon088> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon088");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon089> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon089");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon092> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon092");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon093> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon093");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon098> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon098");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon099> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon099");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon100> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon100");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon101> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon101");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon103> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon103");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon107> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon107");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon108> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon108");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon110> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon110");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon111> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon111");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon112> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon112");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon115> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon115");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon117> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon117");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon123> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon123");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon127> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon127");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon131> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon131");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon132> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon132");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon134> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon134");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon145> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon145");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon149> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon149");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon150> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon150");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon151> = murmurhash3::hash("KeyCrystalDungeonUnlocked.Dungeon151");