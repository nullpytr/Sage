#pragma once
#include <sage>

struct GameData::AlbumData::Photograph : Tag::Structure {
	struct ActorName : Tag::Member { using type = adaptive_range<string64>*; };
	struct FigureHash : Tag::Member { using type = span<s32>*; };
	struct Index : Tag::Member { using type = span<s32>*; };
	struct Location : Tag::Member { using type = adaptive_range<string64>*; };
};/* Tag::Structure GameData::AlbumData::Photograph close */

template <> struct Data::Structure<GameData::AlbumData::Photograph> : GameData::AlbumData::Photograph {
	Member<ActorName> ActorName;
	Member<FigureHash> FigureHash;
	Member<Index> Index;
	Member<Location> Location;
	
	explicit Structure(Sav& s) : 
		ActorName { s.get<struct ActorName>() },
		FigureHash { s.get<struct FigureHash>() },
		Index { s.get<struct Index>() },
		Location { s.get<struct Location>() }
	{ }
};/* Data::Structure GameData::AlbumData::Photograph close */

template <> hash_value_t constexpr Data::Hashtable<GameData::AlbumData::Photograph::ActorName> { "AlbumData.Photograph.ActorName" };
template <> hash_value_t constexpr Data::Hashtable<GameData::AlbumData::Photograph::FigureHash> { "AlbumData.Photograph.FigureHash" };
template <> hash_value_t constexpr Data::Hashtable<GameData::AlbumData::Photograph::Index> { "AlbumData.Photograph.Index" };
template <> hash_value_t constexpr Data::Hashtable<GameData::AlbumData::Photograph::Location> { "AlbumData.Photograph.Location" };