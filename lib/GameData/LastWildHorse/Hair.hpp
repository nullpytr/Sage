#pragma once
#include <sage>

struct GameData::LastWildHorse::Hair : Tag::Structure {
	struct PrimaryColor;
	struct SecondaryColor;
};/* Tag::Structure GameData::LastWildHorse::Hair close */

#include "Hair/PrimaryColor.hpp"
#include "Hair/SecondaryColor.hpp"

template <> struct Data::Structure<GameData::LastWildHorse::Hair> : GameData::LastWildHorse::Hair {
	Structure<PrimaryColor> PrimaryColor;
	Structure<SecondaryColor> SecondaryColor;
	
	explicit Structure(Sav& s) : 
		PrimaryColor { s.get<struct PrimaryColor>() },
		SecondaryColor { s.get<struct SecondaryColor>() }
	{ }
};/* Structure Data::Structure GameData::LastWildHorse::Hair close */
