#pragma once
#include <sage>

struct GameData::PlayerStatus::Companion : Tag::Structure {
	struct Electric;
	struct Fire;
	struct Soul;
	struct Water;
	struct Wind;
};/* Tag::Structure GameData::PlayerStatus::Companion close */

#include "Companion/Electric.hpp"
#include "Companion/Fire.hpp"
#include "Companion/Soul.hpp"
#include "Companion/Water.hpp"
#include "Companion/Wind.hpp"

template <> struct Data::Structure<GameData::PlayerStatus::Companion> : GameData::PlayerStatus::Companion {
	Structure<Electric> Electric;
	Structure<Fire> Fire;
	Structure<Soul> Soul;
	Structure<Water> Water;
	Structure<Wind> Wind;
	
	explicit Structure(Sav& s) : 
		Electric { s.get<struct Electric>() },
		Fire { s.get<struct Fire>() },
		Soul { s.get<struct Soul>() },
		Water { s.get<struct Water>() },
		Wind { s.get<struct Wind>() }
	{ }
};/* Structure Data::Structure GameData::PlayerStatus::Companion close */
