#pragma once
#include <sage>

struct GameData::MapData::IconData::FrontierPoint : Tag::Structure {
	struct IsValid : Tag::Member { using type = bool&; };
	struct Pos : Tag::Member { using type = vec3f*&; };
};/* Tag::Structure GameData::MapData::IconData::FrontierPoint close */

template <> struct Data::Structure<GameData::MapData::IconData::FrontierPoint> : GameData::MapData::IconData::FrontierPoint {
	Member<IsValid> IsValid;
	Member<Pos> Pos;
	
	explicit Structure(Sav& s) : 
		IsValid { s.get<struct IsValid>() },
		Pos { s.get<struct Pos>() }
	{ }
};/* Structure Data::Structure GameData::MapData::IconData::FrontierPoint close */

template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::IconData::FrontierPoint::IsValid> { "MapData.IconData.FrontierPoint.IsValid" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::IconData::FrontierPoint::Pos> { "MapData.IconData.FrontierPoint.Pos" };