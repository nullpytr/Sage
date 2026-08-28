#pragma once
#include <sage>

struct GameData::PictureBookData::Enemy_Horablin_Dark : Tag::Structure {
	struct State : Tag::Enum {
		enum underlying_enum_t : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), };
		using type = enum_t<State>&;
	};
};/* Tag::Structure GameData::PictureBookData::Enemy_Horablin_Dark close */

template <> struct Data::Structure<GameData::PictureBookData::Enemy_Horablin_Dark> : GameData::PictureBookData::Enemy_Horablin_Dark {
	Enum<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::Enemy_Horablin_Dark close */

template <> hash_t constexpr Data::Hashtable<GameData::PictureBookData::Enemy_Horablin_Dark::State> = murmurhash3::hash("PictureBookData.Enemy_Horablin_Dark.State");