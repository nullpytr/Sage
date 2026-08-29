#pragma once
#include <sage>

struct GameData::PictureBookData::SmokeFruit : Tag::Structure {
	struct State : Tag::Enum {
		enum underlying_enum_t : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), };
		using type = enum_t<State>&;
	};
};/* Tag::Structure GameData::PictureBookData::SmokeFruit close */

template <> struct Data::Structure<GameData::PictureBookData::SmokeFruit> : GameData::PictureBookData::SmokeFruit {
	Enum<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::SmokeFruit close */

template <> hash_value_t constexpr Data::Hashtable<GameData::PictureBookData::SmokeFruit::State> { "PictureBookData.SmokeFruit.State" };