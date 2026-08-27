#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PictureBookData::Enemy_Horablin_Dark : Tag::Structure {
	struct State : Tag::Enum { using type = ::Enum::Scalar<State>; enum enum_type : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), }; };
};/* Tag::Structure GameData::PictureBookData::Enemy_Horablin_Dark close */

template <> struct Data::Structure<GameData::PictureBookData::Enemy_Horablin_Dark> : GameData::PictureBookData::Enemy_Horablin_Dark {
	Data::Member<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::Enemy_Horablin_Dark close */

template <> hash_t constexpr Data::Hashtable<GameData::PictureBookData::Enemy_Horablin_Dark::State> = murmurhash3::hash("PictureBookData.Enemy_Horablin_Dark.State");