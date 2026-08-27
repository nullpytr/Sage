#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PictureBookData::Item_PlantGet_B : Tag::Structure {
	struct State : Tag::Enum { using type = ::Enum::Scalar<State>; enum enum_type : hash_t { Unopened = murmurhash3::hash("Unopened"), TakePhoto = murmurhash3::hash("TakePhoto"), Buy = murmurhash3::hash("Buy"), }; };
};/* Tag::Structure GameData::PictureBookData::Item_PlantGet_B close */

template <> struct Data::Structure<GameData::PictureBookData::Item_PlantGet_B> : GameData::PictureBookData::Item_PlantGet_B {
	Data::Member<State> State;
	
	explicit Structure(Sav& s) : 
		State { s.get<struct State>() }
	{ }
};/* Data::Structure GameData::PictureBookData::Item_PlantGet_B close */

template <> hash_t constexpr Data::Hashtable<GameData::PictureBookData::Item_PlantGet_B::State> = murmurhash3::hash("PictureBookData.Item_PlantGet_B.State");