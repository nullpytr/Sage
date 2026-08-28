#pragma once
#include <sage>

struct GameData::MapData::IconData::StampData : Tag::Structure {
	struct Pos : Tag::Member { using type = span<vec2f>*; };
	struct Layer : Tag::Enum {
		enum underlying_enum_t : hash_t { Sky = murmurhash3::hash("Sky"), Ground = murmurhash3::hash("Ground"), Underground = murmurhash3::hash("Underground"), };
		using type = span<enum_t<Layer>>*;
	};
	struct Type : Tag::Enum {
		enum underlying_enum_t : hash_t { Invalid = murmurhash3::hash("Invalid"), Sword = murmurhash3::hash("Sword"), Pot = murmurhash3::hash("Pot"), Human = murmurhash3::hash("Human"), Rhombus = murmurhash3::hash("Rhombus"), Heart = murmurhash3::hash("Heart"), Star = murmurhash3::hash("Star"), TreasureBox = murmurhash3::hash("TreasureBox"), Skull = murmurhash3::hash("Skull"), Leaf = murmurhash3::hash("Leaf"), Ore = murmurhash3::hash("Ore"), };
		using type = span<enum_t<Type>>*;
	};
};/* Tag::Structure GameData::MapData::IconData::StampData close */

template <> struct Data::Structure<GameData::MapData::IconData::StampData> : GameData::MapData::IconData::StampData {
	Member<Pos> Pos;
	Enum<Layer> Layer;
	Enum<Type> Type;
	
	explicit Structure(Sav& s) : 
		Pos { s.get<struct Pos>() },
		Layer { s.get<struct Layer>() },
		Type { s.get<struct Type>() }
	{ }
};/* Data::Structure GameData::MapData::IconData::StampData close */

template <> hash_t constexpr Data::Hashtable<GameData::MapData::IconData::StampData::Pos> = murmurhash3::hash("MapData.IconData.StampData.Pos");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::IconData::StampData::Layer> = murmurhash3::hash("MapData.IconData.StampData.Layer");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::IconData::StampData::Type> = murmurhash3::hash("MapData.IconData.StampData.Type");