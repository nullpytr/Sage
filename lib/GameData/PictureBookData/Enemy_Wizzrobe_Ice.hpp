#pragma once
#include <sage>

struct GameData::PictureBookData::Enemy_Wizzrobe_Ice : Tag::Structure {
	struct State : Tag::Enum {
		enum underlying_enum_t : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), };
		using type = enum_t<State>&;
	};
};/* Tag::Structure GameData::PictureBookData::Enemy_Wizzrobe_Ice close */

template <> struct Data::Structure<GameData::PictureBookData::Enemy_Wizzrobe_Ice> : GameData::PictureBookData::Enemy_Wizzrobe_Ice {
	Enum<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::Enemy_Wizzrobe_Ice close */

template <> hash_value_t constexpr Data::Hashtable<GameData::PictureBookData::Enemy_Wizzrobe_Ice::State> { "PictureBookData.Enemy_Wizzrobe_Ice.State" };