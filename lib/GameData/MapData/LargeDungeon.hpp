#pragma once
#include <sage>

struct GameData::MapData::LargeDungeon : Tag::Structure {
	struct Electric;
	struct Fire;
	struct Soul;
	struct Test;
	struct Water;
	struct Wind;
};/* Tag::Structure GameData::MapData::LargeDungeon close */

#include "LargeDungeon/Electric.hpp"
#include "LargeDungeon/Fire.hpp"
#include "LargeDungeon/Soul.hpp"
#include "LargeDungeon/Test.hpp"
#include "LargeDungeon/Water.hpp"
#include "LargeDungeon/Wind.hpp"

template <> struct Data::Structure<GameData::MapData::LargeDungeon> : GameData::MapData::LargeDungeon {
	Structure<Electric> Electric;
	Structure<Fire> Fire;
	Structure<Soul> Soul;
	Structure<Test> Test;
	Structure<Water> Water;
	Structure<Wind> Wind;
	
	explicit Structure(Sav& s) : 
		Electric { s },
		Fire { s },
		Soul { s },
		Test { s },
		Water { s },
		Wind { s }
	{ }
};/* Data::Structure GameData::MapData::LargeDungeon close */
