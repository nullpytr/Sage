#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::MapData::IconData::FrontierPoint : Tag::Structure {
	struct IsValid : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pos : Tag::Member { using type = vec3f; using adapter = vec3f*; };
};/* Tag::Structure GameData::MapData::IconData::FrontierPoint close */

template <> struct Data::Structure<GameData::MapData::IconData::FrontierPoint> : GameData::MapData::IconData::FrontierPoint {
	IsValid::type IsValid;
	Pos::type Pos;
	
	explicit Structure(Sav& s) : 
		IsValid { s.get<struct IsValid>() },
		Pos { s.get<struct Pos>() }
	{ }
};/* Data::Structure GameData::MapData::IconData::FrontierPoint close */

template <> hash_t constexpr Data::Hashtable<GameData::MapData::IconData::FrontierPoint::IsValid> = murmurhash3::hash("MapData.IconData.FrontierPoint.IsValid");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::IconData::FrontierPoint::Pos> = murmurhash3::hash("MapData.IconData.FrontierPoint.Pos");