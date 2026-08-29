#pragma once
#include <sage>

struct GameData::FigureCreateInfo : Tag::Structure {
	struct Position : Tag::Member { using type = span<vec3f>*; };
	struct Rot : Tag::Member { using type = span<vec3f>*; };
};/* Tag::Structure GameData::FigureCreateInfo close */

template <> struct Data::Structure<GameData::FigureCreateInfo> : GameData::FigureCreateInfo {
	Member<Position> Position;
	Member<Rot> Rot;
	
	explicit Structure(Sav& s) : 
		Position { s.get<struct Position>() },
		Rot { s.get<struct Rot>() }
	{ }
};/* Data::Structure GameData::FigureCreateInfo close */

template <> hash_value_t constexpr Data::Hashtable<GameData::FigureCreateInfo::Position> { "FigureCreateInfo.Position" };
template <> hash_value_t constexpr Data::Hashtable<GameData::FigureCreateInfo::Rot> { "FigureCreateInfo.Rot" };