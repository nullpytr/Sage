#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::MapData::IconData::StampData : Tag::Structure {
	struct Layer : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Sky = murmurhash3::hash("Sky"), Ground = murmurhash3::hash("Ground"), Underground = murmurhash3::hash("Underground"), }; };
		using type = range<enum_t<values_t>>*;
	};
	struct Type : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Invalid = murmurhash3::hash("Invalid"), Sword = murmurhash3::hash("Sword"), Pot = murmurhash3::hash("Pot"), Human = murmurhash3::hash("Human"), Rhombus = murmurhash3::hash("Rhombus"), Heart = murmurhash3::hash("Heart"), Star = murmurhash3::hash("Star"), TreasureBox = murmurhash3::hash("TreasureBox"), Skull = murmurhash3::hash("Skull"), Leaf = murmurhash3::hash("Leaf"), Ore = murmurhash3::hash("Ore"), }; };
		using type = range<enum_t<values_t>>*;
	};
	struct Pos : Tag::Member { using type = span<vec2f>*; };
};/* Tag::Structure GameData::MapData::IconData::StampData close */

template <> struct Data::Structure<GameData::MapData::IconData::StampData> : GameData::MapData::IconData::StampData {
	Data::Enum<Layer> Layer;
	Data::Enum<Type> Type;
	Data::Member<Pos> Pos;
	
	explicit Structure(Sav& s) : 
		Layer { s.get<struct Layer>() },
		Type { s.get<struct Type>() },
		Pos { s.get<struct Pos>() }
	{ }
};/* Data::Structure GameData::MapData::IconData::StampData close */

template <> hash_t constexpr Data::Hashtable<GameData::MapData::IconData::StampData::Layer> = murmurhash3::hash("MapData.IconData.StampData.Layer");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::IconData::StampData::Type> = murmurhash3::hash("MapData.IconData.StampData.Type");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::IconData::StampData::Pos> = murmurhash3::hash("MapData.IconData.StampData.Pos");