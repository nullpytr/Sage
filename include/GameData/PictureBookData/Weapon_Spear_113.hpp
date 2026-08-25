#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PictureBookData::Weapon_Spear_113 : Tag::Structure {
	struct State : Tag::Enum { using type = ::Enum::Scalar<State>; using adapter = ::Enum::Scalar<State>; enum enum_type : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), }; };
};/* Tag::Structure GameData::PictureBookData::Weapon_Spear_113 close */

template <> struct Data::Structure<GameData::PictureBookData::Weapon_Spear_113> : GameData::PictureBookData::Weapon_Spear_113 {
	State::type State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::Weapon_Spear_113 close */

template <> hash_t constexpr Data::Hashtable<GameData::PictureBookData::Weapon_Spear_113::State> = murmurhash3::hash("PictureBookData.Weapon_Spear_113.State");