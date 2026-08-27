#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PictureBookData::Animal_Sunazarashi_A : Tag::Structure {
	struct State : Tag::Enum { using type = ::Enum::Scalar<State>; enum enum_type : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), }; };
};/* Tag::Structure GameData::PictureBookData::Animal_Sunazarashi_A close */

template <> struct Data::Structure<GameData::PictureBookData::Animal_Sunazarashi_A> : GameData::PictureBookData::Animal_Sunazarashi_A {
	Data::Member<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::Animal_Sunazarashi_A close */

template <> hash_t constexpr Data::Hashtable<GameData::PictureBookData::Animal_Sunazarashi_A::State> = murmurhash3::hash("PictureBookData.Animal_Sunazarashi_A.State");