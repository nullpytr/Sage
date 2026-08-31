#pragma once
#include <sage>

struct GameData::PictureBookData::Animal_Insect_AA : Tag::Structure {
	struct State : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), }; };
		using type = enum_t<State>&;
	};
};/* Tag::Structure GameData::PictureBookData::Animal_Insect_AA close */

template <> struct Data::Structure<GameData::PictureBookData::Animal_Insect_AA> : GameData::PictureBookData::Animal_Insect_AA {
	Enum<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::Animal_Insect_AA close */

template <> hash_value_t constexpr Data::Hashtable<GameData::PictureBookData::Animal_Insect_AA::State> { "PictureBookData.Animal_Insect_AA.State" };