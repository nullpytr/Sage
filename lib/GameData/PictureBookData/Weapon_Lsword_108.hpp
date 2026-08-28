#pragma once
#include <sage>

struct GameData::PictureBookData::Weapon_Lsword_108 : Tag::Structure {
	struct State : Tag::Enum {
		enum underlying_enum_t : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), };
		using type = enum_t<State>&;
	};
};/* Tag::Structure GameData::PictureBookData::Weapon_Lsword_108 close */

template <> struct Data::Structure<GameData::PictureBookData::Weapon_Lsword_108> : GameData::PictureBookData::Weapon_Lsword_108 {
	Data::Enum<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::Weapon_Lsword_108 close */

template <> hash_t constexpr Data::Hashtable<GameData::PictureBookData::Weapon_Lsword_108::State> = murmurhash3::hash("PictureBookData.Weapon_Lsword_108.State");