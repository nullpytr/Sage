#pragma once
#include <sage>

struct GameData::PictureBookData::Animal_Bear_A : Tag::Structure {
	struct State : Tag::Enum {
		enum underlying_enum_t : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), };
		using type = enum_t<State>&;
	};
};/* Tag::Structure GameData::PictureBookData::Animal_Bear_A close */

template <> struct Data::Structure<GameData::PictureBookData::Animal_Bear_A> : GameData::PictureBookData::Animal_Bear_A {
	Enum<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::Animal_Bear_A close */

template <> hash_t constexpr Data::Hashtable<GameData::PictureBookData::Animal_Bear_A::State> = murmurhash3::hash("PictureBookData.Animal_Bear_A.State");