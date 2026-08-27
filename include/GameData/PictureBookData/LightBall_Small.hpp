#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PictureBookData::LightBall_Small : Tag::Structure {
	struct State : Tag::Enum { using type = ::Enum::Scalar<State>; enum enum_type : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), }; };
};/* Tag::Structure GameData::PictureBookData::LightBall_Small close */

template <> struct Data::Structure<GameData::PictureBookData::LightBall_Small> : GameData::PictureBookData::LightBall_Small {
	Data::Member<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::LightBall_Small close */

template <> hash_t constexpr Data::Hashtable<GameData::PictureBookData::LightBall_Small::State> = murmurhash3::hash("PictureBookData.LightBall_Small.State");