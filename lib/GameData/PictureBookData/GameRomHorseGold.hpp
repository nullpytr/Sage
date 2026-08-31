#pragma once
#include <sage>

struct GameData::PictureBookData::GameRomHorseGold : Tag::Structure {
	struct State : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), }; };
		using type = enum_t<State>&;
	};
};/* Tag::Structure GameData::PictureBookData::GameRomHorseGold close */

template <> struct Data::Structure<GameData::PictureBookData::GameRomHorseGold> : GameData::PictureBookData::GameRomHorseGold {
	Enum<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::GameRomHorseGold close */

template <> hash_value_t constexpr Data::Hashtable<GameData::PictureBookData::GameRomHorseGold::State> { "PictureBookData.GameRomHorseGold.State" };