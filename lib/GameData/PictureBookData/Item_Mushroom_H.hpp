#pragma once
#include <sage>

struct GameData::PictureBookData::Item_Mushroom_H : Tag::Structure {
	struct State : Tag::Enum {
		enum underlying_enum_t : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), };
		using type = enum_t<State>&;
	};
};/* Tag::Structure GameData::PictureBookData::Item_Mushroom_H close */

template <> struct Data::Structure<GameData::PictureBookData::Item_Mushroom_H> : GameData::PictureBookData::Item_Mushroom_H {
	Enum<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::Item_Mushroom_H close */

template <> hash_value_t constexpr Data::Hashtable<GameData::PictureBookData::Item_Mushroom_H::State> { "PictureBookData.Item_Mushroom_H.State" };