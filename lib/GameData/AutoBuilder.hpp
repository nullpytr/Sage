#pragma once
#include <sage>

struct GameData::AutoBuilder : Tag::Structure {
	struct Draft;
};/* Tag::Structure GameData::AutoBuilder close */

#include "AutoBuilder/Draft.hpp"

template <> struct Data::Structure<GameData::AutoBuilder> : GameData::AutoBuilder {
	Structure<Draft> Draft;
	
	explicit Structure(Sav& s) : 
		Draft { s }
	{ }
};/* Data::Structure GameData::AutoBuilder close */
