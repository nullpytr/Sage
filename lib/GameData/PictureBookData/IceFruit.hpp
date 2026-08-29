#pragma once
#include <sage>

struct GameData::PictureBookData::IceFruit : Tag::Structure {
	struct State : Tag::Enum {
		enum underlying_enum_t : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), };
		using type = enum_t<State>&;
	};
};/* Tag::Structure GameData::PictureBookData::IceFruit close */

template <> struct Data::Structure<GameData::PictureBookData::IceFruit> : GameData::PictureBookData::IceFruit {
	Enum<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::IceFruit close */

template <> hash_value_t constexpr Data::Hashtable<GameData::PictureBookData::IceFruit::State> { "PictureBookData.IceFruit.State" };