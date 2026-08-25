#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::AlbumData::Photograph : Tag::Structure {
	struct FigureHash : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct Index : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct ActorName : Tag::Member { using type = span<adapter<string64>>; using adapter = adapter<type>*; };
	struct Location : Tag::Member { using type = span<adapter<string64>>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::AlbumData::Photograph close */

template <> struct Data::Structure<GameData::AlbumData::Photograph> : GameData::AlbumData::Photograph {
	FigureHash::type FigureHash;
	Index::type Index;
	ActorName::type ActorName;
	Location::type Location;
	
	explicit Structure(Sav& s) : 
		FigureHash { s.get<struct FigureHash>() },
		Index { s.get<struct Index>() },
		ActorName { s.get<struct ActorName>() },
		Location { s.get<struct Location>() }
	{ }
};/* Data::Structure GameData::AlbumData::Photograph close */

template <> hash_t constexpr Data::Hashtable<GameData::AlbumData::Photograph::FigureHash> = murmurhash3::hash("AlbumData.Photograph.FigureHash");
template <> hash_t constexpr Data::Hashtable<GameData::AlbumData::Photograph::Index> = murmurhash3::hash("AlbumData.Photograph.Index");
template <> hash_t constexpr Data::Hashtable<GameData::AlbumData::Photograph::ActorName> = murmurhash3::hash("AlbumData.Photograph.ActorName");
template <> hash_t constexpr Data::Hashtable<GameData::AlbumData::Photograph::Location> = murmurhash3::hash("AlbumData.Photograph.Location");