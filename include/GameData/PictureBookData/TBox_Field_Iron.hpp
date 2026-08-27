#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PictureBookData::TBox_Field_Iron : Tag::Structure {
	struct State : Tag::Enum { using type = ::Enum::Scalar<State>; enum enum_type : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), }; };
};/* Tag::Structure GameData::PictureBookData::TBox_Field_Iron close */

template <> struct Data::Structure<GameData::PictureBookData::TBox_Field_Iron> : GameData::PictureBookData::TBox_Field_Iron {
	Data::Member<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::TBox_Field_Iron close */

template <> hash_t constexpr Data::Hashtable<GameData::PictureBookData::TBox_Field_Iron::State> = murmurhash3::hash("PictureBookData.TBox_Field_Iron.State");