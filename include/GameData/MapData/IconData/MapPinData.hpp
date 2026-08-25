#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::MapData::IconData::MapPinData : Tag::Structure {
	struct IsFit : Tag::Member { using type = span<bool>; using adapter = adapter<type>*; };
	struct Type : Tag::Enum { using type = ::Enum::Array<Type>; using adapter = ::Enum::Array<Type>; enum enum_type : hash_t { Invalid = murmurhash3::hash("Invalid"), Red = murmurhash3::hash("Red"), Blue = murmurhash3::hash("Blue"), Yellow = murmurhash3::hash("Yellow"), Green = murmurhash3::hash("Green"), Purple = murmurhash3::hash("Purple"), LightBlue = murmurhash3::hash("LightBlue"), }; };
	struct Pos : Tag::Member { using type = span<vec3f>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::MapData::IconData::MapPinData close */

template <> struct Data::Structure<GameData::MapData::IconData::MapPinData> : GameData::MapData::IconData::MapPinData {
	IsFit::type IsFit;
	Type::type Type;
	Pos::type Pos;
	
	explicit Structure(Sav& s) : 
		IsFit { s.get<struct IsFit>() },
		Type { s.get<struct Type>() },
		Pos { s.get<struct Pos>() }
	{ }
};/* Data::Structure GameData::MapData::IconData::MapPinData close */

template <> hash_t constexpr Data::Hashtable<GameData::MapData::IconData::MapPinData::IsFit> = murmurhash3::hash("MapData.IconData.MapPinData.IsFit");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::IconData::MapPinData::Type> = murmurhash3::hash("MapData.IconData.MapPinData.Type");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::IconData::MapPinData::Pos> = murmurhash3::hash("MapData.IconData.MapPinData.Pos");