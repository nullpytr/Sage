#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PictureBookData::BeeHome : Tag::Structure {
	struct State : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), }; };
		using type = enum_t<values_t>;
	};
};/* Tag::Structure GameData::PictureBookData::BeeHome close */

template <> struct Data::Structure<GameData::PictureBookData::BeeHome> : GameData::PictureBookData::BeeHome {
	Data::Enum<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::BeeHome close */

template <> hash_t constexpr Data::Hashtable<GameData::PictureBookData::BeeHome::State> = murmurhash3::hash("PictureBookData.BeeHome.State");