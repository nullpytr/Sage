#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData : Tag::Structure {
	struct OwnedHorseList;
};/* Tag::Structure GameData close */

#include "GameData/OwnedHorseList.hpp"

template <> struct Data::Structure<GameData> : GameData {
	Structure<OwnedHorseList> OwnedHorseList;
	
	explicit Structure(Sav& s) : 
		OwnedHorseList { s }
	{ }
};/* Data::Structure GameData close */
