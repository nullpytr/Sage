#pragma once
#include <sage>

struct GameData::DeadHorseList::Hair : Tag::Structure {
	struct PrimaryColor;
	struct SecondaryColor;
};/* Tag::Structure GameData::DeadHorseList::Hair close */

#include "Hair/PrimaryColor.hpp"
#include "Hair/SecondaryColor.hpp"

template <> struct Data::Structure<GameData::DeadHorseList::Hair> : GameData::DeadHorseList::Hair {
	Structure<PrimaryColor> PrimaryColor;
	Structure<SecondaryColor> SecondaryColor;
	
	explicit Structure(Sav& s) : 
		PrimaryColor { s },
		SecondaryColor { s }
	{ }
};/* Data::Structure GameData::DeadHorseList::Hair close */
