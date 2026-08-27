#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PictureBookData::Enemy_Ganondorf : Tag::Structure {
	struct State : Tag::Enum { using type = ::Enum::Scalar<State>; enum enum_type : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), }; };
};/* Tag::Structure GameData::PictureBookData::Enemy_Ganondorf close */

template <> struct Data::Structure<GameData::PictureBookData::Enemy_Ganondorf> : GameData::PictureBookData::Enemy_Ganondorf {
	Data::Member<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::Enemy_Ganondorf close */

template <> hash_t constexpr Data::Hashtable<GameData::PictureBookData::Enemy_Ganondorf::State> = murmurhash3::hash("PictureBookData.Enemy_Ganondorf.State");