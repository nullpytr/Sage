#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::OwnedHorseList::Hair : Tag::Structure {
	struct PrimaryColor;
	struct SecondaryColor;
};/* Tag::Structure GameData::OwnedHorseList::Hair close */

#include "Hair/PrimaryColor.hpp"
#include "Hair/SecondaryColor.hpp"

template <> struct Data::Structure<GameData::OwnedHorseList::Hair> : GameData::OwnedHorseList::Hair {
	Structure<PrimaryColor> PrimaryColor;
	Structure<SecondaryColor> SecondaryColor;
	
	explicit Structure(Sav& s) : 
		PrimaryColor { s },
		SecondaryColor { s }
	{ }
};/* Data::Structure GameData::OwnedHorseList::Hair close */
