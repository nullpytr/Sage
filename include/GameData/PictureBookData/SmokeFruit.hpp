#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PictureBookData::SmokeFruit : Tag::Structure {
	struct State : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), }; };
		using type = enum_t<values_t>;
	};
};/* Tag::Structure GameData::PictureBookData::SmokeFruit close */

template <> struct Data::Structure<GameData::PictureBookData::SmokeFruit> : GameData::PictureBookData::SmokeFruit {
	Data::Enum<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::SmokeFruit close */

template <> hash_t constexpr Data::Hashtable<GameData::PictureBookData::SmokeFruit::State> = murmurhash3::hash("PictureBookData.SmokeFruit.State");