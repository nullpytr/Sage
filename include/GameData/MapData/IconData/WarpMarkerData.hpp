#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::MapData::IconData::WarpMarkerData : Tag::Structure {
	struct Index : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct Pos : Tag::Member { using type = span<vec3f>; using adapter = adapter<type>*; };
	struct Rot : Tag::Member { using type = span<vec3f>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::MapData::IconData::WarpMarkerData close */

template <> struct Data::Structure<GameData::MapData::IconData::WarpMarkerData> : GameData::MapData::IconData::WarpMarkerData {
	Index::type Index;
	Pos::type Pos;
	Rot::type Rot;
	
	explicit Structure(Sav& s) : 
		Index { s.get<struct Index>() },
		Pos { s.get<struct Pos>() },
		Rot { s.get<struct Rot>() }
	{ }
};/* Data::Structure GameData::MapData::IconData::WarpMarkerData close */

template <> hash_t constexpr Data::Hashtable<GameData::MapData::IconData::WarpMarkerData::Index> = murmurhash3::hash("MapData.IconData.WarpMarkerData.Index");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::IconData::WarpMarkerData::Pos> = murmurhash3::hash("MapData.IconData.WarpMarkerData.Pos");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::IconData::WarpMarkerData::Rot> = murmurhash3::hash("MapData.IconData.WarpMarkerData.Rot");