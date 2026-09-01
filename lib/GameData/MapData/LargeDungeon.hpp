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
		Electric { s.get<struct Electric>() },
		Fire { s.get<struct Fire>() },
		Soul { s.get<struct Soul>() },
		Test { s.get<struct Test>() },
		Water { s.get<struct Water>() },
		Wind { s.get<struct Wind>() }
	{ }
};/* Structure Data::Structure GameData::MapData::LargeDungeon close */
