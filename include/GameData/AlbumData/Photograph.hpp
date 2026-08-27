#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::AlbumData::Photograph : Tag::Structure {
	struct FigureHash : Tag::Member { using type = span<s32>*; };
	struct Index : Tag::Member { using type = span<s32>*; };
	struct ActorName : Tag::Member { using type = range<string64>*; };
	struct Location : Tag::Member { using type = range<string64>*; };
};/* Tag::Structure GameData::AlbumData::Photograph close */

template <> struct Data::Structure<GameData::AlbumData::Photograph> : GameData::AlbumData::Photograph {
	Data::Member<FigureHash> FigureHash;
	Data::Member<Index> Index;
	Data::Member<ActorName> ActorName;
	Data::Member<Location> Location;
	
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