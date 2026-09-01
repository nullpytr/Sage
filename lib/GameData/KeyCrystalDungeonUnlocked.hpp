#pragma once
#include <sage>

struct GameData::KeyCrystalDungeonUnlocked : Tag::Map {
	struct Dungeon000 : Tag::Member { using type = bool&; };
	struct Dungeon006 : Tag::Member { using type = bool&; };
	struct Dungeon054 : Tag::Member { using type = bool&; };
	struct Dungeon066 : Tag::Member { using type = bool&; };
	struct Dungeon071 : Tag::Member { using type = bool&; };
	struct Dungeon078 : Tag::Member { using type = bool&; };
	struct Dungeon079 : Tag::Member { using type = bool&; };
	struct Dungeon085 : Tag::Member { using type = bool&; };
	struct Dungeon088 : Tag::Member { using type = bool&; };
	struct Dungeon089 : Tag::Member { using type = bool&; };
	struct Dungeon092 : Tag::Member { using type = bool&; };
	struct Dungeon093 : Tag::Member { using type = bool&; };
	struct Dungeon098 : Tag::Member { using type = bool&; };
	struct Dungeon099 : Tag::Member { using type = bool&; };
	struct Dungeon100 : Tag::Member { using type = bool&; };
	struct Dungeon101 : Tag::Member { using type = bool&; };
	struct Dungeon103 : Tag::Member { using type = bool&; };
	struct Dungeon107 : Tag::Member { using type = bool&; };
	struct Dungeon108 : Tag::Member { using type = bool&; };
	struct Dungeon110 : Tag::Member { using type = bool&; };
	struct Dungeon111 : Tag::Member { using type = bool&; };
	struct Dungeon112 : Tag::Member { using type = bool&; };
	struct Dungeon115 : Tag::Member { using type = bool&; };
	struct Dungeon117 : Tag::Member { using type = bool&; };
	struct Dungeon123 : Tag::Member { using type = bool&; };
	struct Dungeon127 : Tag::Member { using type = bool&; };
	struct Dungeon131 : Tag::Member { using type = bool&; };
	struct Dungeon132 : Tag::Member { using type = bool&; };
	struct Dungeon134 : Tag::Member { using type = bool&; };
	struct Dungeon145 : Tag::Member { using type = bool&; };
	struct Dungeon149 : Tag::Member { using type = bool&; };
	struct Dungeon150 : Tag::Member { using type = bool&; };
	struct Dungeon151 : Tag::Member { using type = bool&; };
	using type = std::decay_t<Dungeon000::type>;
};/* Tag::Map GameData::KeyCrystalDungeonUnlocked close */

template <> struct Data::Structure<GameData::KeyCrystalDungeonUnlocked> : GameData::KeyCrystalDungeonUnlocked {
	Member<Dungeon000> Dungeon000;
	Member<Dungeon006> Dungeon006;
	Member<Dungeon054> Dungeon054;
	Member<Dungeon066> Dungeon066;
	Member<Dungeon071> Dungeon071;
	Member<Dungeon078> Dungeon078;
	Member<Dungeon079> Dungeon079;
	Member<Dungeon085> Dungeon085;
	Member<Dungeon088> Dungeon088;
	Member<Dungeon089> Dungeon089;
	Member<Dungeon092> Dungeon092;
	Member<Dungeon093> Dungeon093;
	Member<Dungeon098> Dungeon098;
	Member<Dungeon099> Dungeon099;
	Member<Dungeon100> Dungeon100;
	Member<Dungeon101> Dungeon101;
	Member<Dungeon103> Dungeon103;
	Member<Dungeon107> Dungeon107;
	Member<Dungeon108> Dungeon108;
	Member<Dungeon110> Dungeon110;
	Member<Dungeon111> Dungeon111;
	Member<Dungeon112> Dungeon112;
	Member<Dungeon115> Dungeon115;
	Member<Dungeon117> Dungeon117;
	Member<Dungeon123> Dungeon123;
	Member<Dungeon127> Dungeon127;
	Member<Dungeon131> Dungeon131;
	Member<Dungeon132> Dungeon132;
	Member<Dungeon134> Dungeon134;
	Member<Dungeon145> Dungeon145;
	Member<Dungeon149> Dungeon149;
	Member<Dungeon150> Dungeon150;
	Member<Dungeon151> Dungeon151;
	
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
};/* Map Data::Structure GameData::KeyCrystalDungeonUnlocked close */

template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon000> { "KeyCrystalDungeonUnlocked.Dungeon000" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon006> { "KeyCrystalDungeonUnlocked.Dungeon006" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon054> { "KeyCrystalDungeonUnlocked.Dungeon054" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon066> { "KeyCrystalDungeonUnlocked.Dungeon066" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon071> { "KeyCrystalDungeonUnlocked.Dungeon071" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon078> { "KeyCrystalDungeonUnlocked.Dungeon078" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon079> { "KeyCrystalDungeonUnlocked.Dungeon079" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon085> { "KeyCrystalDungeonUnlocked.Dungeon085" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon088> { "KeyCrystalDungeonUnlocked.Dungeon088" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon089> { "KeyCrystalDungeonUnlocked.Dungeon089" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon092> { "KeyCrystalDungeonUnlocked.Dungeon092" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon093> { "KeyCrystalDungeonUnlocked.Dungeon093" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon098> { "KeyCrystalDungeonUnlocked.Dungeon098" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon099> { "KeyCrystalDungeonUnlocked.Dungeon099" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon100> { "KeyCrystalDungeonUnlocked.Dungeon100" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon101> { "KeyCrystalDungeonUnlocked.Dungeon101" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon103> { "KeyCrystalDungeonUnlocked.Dungeon103" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon107> { "KeyCrystalDungeonUnlocked.Dungeon107" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon108> { "KeyCrystalDungeonUnlocked.Dungeon108" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon110> { "KeyCrystalDungeonUnlocked.Dungeon110" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon111> { "KeyCrystalDungeonUnlocked.Dungeon111" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon112> { "KeyCrystalDungeonUnlocked.Dungeon112" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon115> { "KeyCrystalDungeonUnlocked.Dungeon115" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon117> { "KeyCrystalDungeonUnlocked.Dungeon117" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon123> { "KeyCrystalDungeonUnlocked.Dungeon123" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon127> { "KeyCrystalDungeonUnlocked.Dungeon127" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon131> { "KeyCrystalDungeonUnlocked.Dungeon131" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon132> { "KeyCrystalDungeonUnlocked.Dungeon132" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon134> { "KeyCrystalDungeonUnlocked.Dungeon134" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon145> { "KeyCrystalDungeonUnlocked.Dungeon145" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon149> { "KeyCrystalDungeonUnlocked.Dungeon149" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon150> { "KeyCrystalDungeonUnlocked.Dungeon150" };
template <> hash_value_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonUnlocked::Dungeon151> { "KeyCrystalDungeonUnlocked.Dungeon151" };