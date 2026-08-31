#pragma once
#include <sage>

struct GameData::PictureBookData::Enemy_Ganondorf : Tag::Structure {
	struct State : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), }; };
		using type = enum_t<State>&;
	};
};/* Tag::Structure GameData::PictureBookData::Enemy_Ganondorf close */

template <> struct Data::Structure<GameData::PictureBookData::Enemy_Ganondorf> : GameData::PictureBookData::Enemy_Ganondorf {
	Enum<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::Enemy_Ganondorf close */

template <> hash_value_t constexpr Data::Hashtable<GameData::PictureBookData::Enemy_Ganondorf::State> { "PictureBookData.Enemy_Ganondorf.State" };