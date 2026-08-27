#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PictureBookData::IceFruit : Tag::Structure {
	struct State : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), }; };
		using type = enum_t<values_t>;
	};
};/* Tag::Structure GameData::PictureBookData::IceFruit close */

template <> struct Data::Structure<GameData::PictureBookData::IceFruit> : GameData::PictureBookData::IceFruit {
	Data::Enum<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::IceFruit close */

template <> hash_t constexpr Data::Hashtable<GameData::PictureBookData::IceFruit::State> = murmurhash3::hash("PictureBookData.IceFruit.State");