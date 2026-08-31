#pragma once
#include <sage>

struct GameData::PictureBookData::GameRomHorse00S : Tag::Structure {
	struct State : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), }; };
		using type = enum_t<State>&;
	};
};/* Tag::Structure GameData::PictureBookData::GameRomHorse00S close */

template <> struct Data::Structure<GameData::PictureBookData::GameRomHorse00S> : GameData::PictureBookData::GameRomHorse00S {
	Enum<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::GameRomHorse00S close */

template <> hash_value_t constexpr Data::Hashtable<GameData::PictureBookData::GameRomHorse00S::State> { "PictureBookData.GameRomHorse00S.State" };