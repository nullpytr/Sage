#pragma once
#include <sage>

struct GameData::PictureBookData::Enemy_LikeLike_Crack : Tag::Structure {
	struct State : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), }; };
		using type = enum_t<State>&;
	};
};/* Tag::Structure GameData::PictureBookData::Enemy_LikeLike_Crack close */

template <> struct Data::Structure<GameData::PictureBookData::Enemy_LikeLike_Crack> : GameData::PictureBookData::Enemy_LikeLike_Crack {
	Enum<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::Enemy_LikeLike_Crack close */

template <> hash_value_t constexpr Data::Hashtable<GameData::PictureBookData::Enemy_LikeLike_Crack::State> { "PictureBookData.Enemy_LikeLike_Crack.State" };