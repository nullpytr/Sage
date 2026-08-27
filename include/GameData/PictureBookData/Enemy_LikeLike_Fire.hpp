#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PictureBookData::Enemy_LikeLike_Fire : Tag::Structure {
	struct State : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), }; };
		using type = enum_t<values_t>;
	};
};/* Tag::Structure GameData::PictureBookData::Enemy_LikeLike_Fire close */

template <> struct Data::Structure<GameData::PictureBookData::Enemy_LikeLike_Fire> : GameData::PictureBookData::Enemy_LikeLike_Fire {
	Data::Enum<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::Enemy_LikeLike_Fire close */

template <> hash_t constexpr Data::Hashtable<GameData::PictureBookData::Enemy_LikeLike_Fire::State> = murmurhash3::hash("PictureBookData.Enemy_LikeLike_Fire.State");