#pragma once
#include <sage>

struct GameData::PictureBookData::Item_Enemy_216 : Tag::Structure {
	struct State : Tag::Enum {
		enum underlying_enum_t : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), };
		using type = enum_t<State>&;
	};
};/* Tag::Structure GameData::PictureBookData::Item_Enemy_216 close */

template <> struct Data::Structure<GameData::PictureBookData::Item_Enemy_216> : GameData::PictureBookData::Item_Enemy_216 {
	Enum<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::Item_Enemy_216 close */

template <> hash_t constexpr Data::Hashtable<GameData::PictureBookData::Item_Enemy_216::State> = murmurhash3::hash("PictureBookData.Item_Enemy_216.State");