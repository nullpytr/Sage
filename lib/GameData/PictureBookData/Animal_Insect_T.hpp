#pragma once
#include <sage>

struct GameData::PictureBookData::Animal_Insect_T : Tag::Structure {
	struct State : Tag::Enum {
		enum underlying_enum_t : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), };
		using type = enum_t<State>&;
	};
};/* Tag::Structure GameData::PictureBookData::Animal_Insect_T close */

template <> struct Data::Structure<GameData::PictureBookData::Animal_Insect_T> : GameData::PictureBookData::Animal_Insect_T {
	Enum<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::Animal_Insect_T close */

template <> hash_value_t constexpr Data::Hashtable<GameData::PictureBookData::Animal_Insect_T::State> { "PictureBookData.Animal_Insect_T.State" };