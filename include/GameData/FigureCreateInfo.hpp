#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::FigureCreateInfo : Tag::Structure {
	struct Position : Tag::Member { using type = span<vec3f>; using adapter = adapter<type>*; };
	struct Rot : Tag::Member { using type = span<vec3f>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::FigureCreateInfo close */

template <> struct Data::Structure<GameData::FigureCreateInfo> : GameData::FigureCreateInfo {
	Position::type Position;
	Rot::type Rot;
	
	explicit Structure(Sav& s) : 
		Position { s.get<struct Position>() },
		Rot { s.get<struct Rot>() }
	{ }
};/* Data::Structure GameData::FigureCreateInfo close */

template <> hash_t constexpr Data::Hashtable<GameData::FigureCreateInfo::Position> = murmurhash3::hash("FigureCreateInfo.Position");
template <> hash_t constexpr Data::Hashtable<GameData::FigureCreateInfo::Rot> = murmurhash3::hash("FigureCreateInfo.Rot");