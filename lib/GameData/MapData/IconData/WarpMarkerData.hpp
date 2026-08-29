#pragma once
#include <sage>

struct GameData::MapData::IconData::WarpMarkerData : Tag::Structure {
	struct Index : Tag::Member { using type = span<s32>*; };
	struct Pos : Tag::Member { using type = span<vec3f>*; };
	struct Rot : Tag::Member { using type = span<vec3f>*; };
};/* Tag::Structure GameData::MapData::IconData::WarpMarkerData close */

template <> struct Data::Structure<GameData::MapData::IconData::WarpMarkerData> : GameData::MapData::IconData::WarpMarkerData {
	Member<Index> Index;
	Member<Pos> Pos;
	Member<Rot> Rot;
	
	explicit Structure(Sav& s) : 
		Index { s.get<struct Index>() },
		Pos { s.get<struct Pos>() },
		Rot { s.get<struct Rot>() }
	{ }
};/* Data::Structure GameData::MapData::IconData::WarpMarkerData close */

template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::IconData::WarpMarkerData::Index> { "MapData.IconData.WarpMarkerData.Index" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::IconData::WarpMarkerData::Pos> { "MapData.IconData.WarpMarkerData.Pos" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::IconData::WarpMarkerData::Rot> { "MapData.IconData.WarpMarkerData.Rot" };