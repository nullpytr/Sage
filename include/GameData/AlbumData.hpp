#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::AlbumData : Tag::Structure {
	struct Photograph;
};/* Tag::Structure GameData::AlbumData close */

#include "AlbumData/Photograph.hpp"

template <> struct Data::Structure<GameData::AlbumData> : GameData::AlbumData {
	Structure<Photograph> Photograph;
	
	explicit Structure(Sav& s) : 
		Photograph { s }
	{ }
};/* Data::Structure GameData::AlbumData close */
