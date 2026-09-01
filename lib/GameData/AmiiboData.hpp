#pragma once
#include <sage>

struct GameData::AmiiboData : Tag::Structure {
	struct TouchLog;
};/* Tag::Structure GameData::AmiiboData close */

#include "AmiiboData/TouchLog.hpp"

template <> struct Data::Structure<GameData::AmiiboData> : GameData::AmiiboData {
	Structure<TouchLog> TouchLog;
	
	explicit Structure(Sav& s) : 
		TouchLog { s.get<struct TouchLog>() }
	{ }
};/* Structure Data::Structure GameData::AmiiboData close */
