#pragma once
#include <sage>

struct GameData::PictureBookData::Animal_Boar_B : Tag::Structure {
	struct State : Tag::Enum {
		enum underlying_enum_t : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), };
		using type = enum_t<State>&;
	};
};/* Tag::Structure GameData::PictureBookData::Animal_Boar_B close */

template <> struct Data::Structure<GameData::PictureBookData::Animal_Boar_B> : GameData::PictureBookData::Animal_Boar_B {
	Data::Enum<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::Animal_Boar_B close */

template <> hash_t constexpr Data::Hashtable<GameData::PictureBookData::Animal_Boar_B::State> = murmurhash3::hash("PictureBookData.Animal_Boar_B.State");