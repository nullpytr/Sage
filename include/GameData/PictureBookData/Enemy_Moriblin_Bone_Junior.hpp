#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PictureBookData::Enemy_Moriblin_Bone_Junior : Tag::Structure {
	struct State : Tag::Enum { using type = ::Enum::Scalar<State>; using adapter = ::Enum::Scalar<State>; enum enum_type : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), }; };
};/* Tag::Structure GameData::PictureBookData::Enemy_Moriblin_Bone_Junior close */

template <> struct Data::Structure<GameData::PictureBookData::Enemy_Moriblin_Bone_Junior> : GameData::PictureBookData::Enemy_Moriblin_Bone_Junior {
	State::type State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::Enemy_Moriblin_Bone_Junior close */

template <> hash_t constexpr Data::Hashtable<GameData::PictureBookData::Enemy_Moriblin_Bone_Junior::State> = murmurhash3::hash("PictureBookData.Enemy_Moriblin_Bone_Junior.State");