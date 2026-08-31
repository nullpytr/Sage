#pragma once
#include <sage>

struct GameData::PictureBookData::Item_Fruit_P : Tag::Structure {
	struct State : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), }; };
		using type = enum_t<State>&;
	};
};/* Tag::Structure GameData::PictureBookData::Item_Fruit_P close */

template <> struct Data::Structure<GameData::PictureBookData::Item_Fruit_P> : GameData::PictureBookData::Item_Fruit_P {
	Enum<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::Item_Fruit_P close */

template <> hash_value_t constexpr Data::Hashtable<GameData::PictureBookData::Item_Fruit_P::State> { "PictureBookData.Item_Fruit_P.State" };