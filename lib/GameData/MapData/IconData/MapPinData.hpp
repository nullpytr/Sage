#pragma once
#include <sage>

struct GameData::MapData::IconData::MapPinData : Tag::Structure {
	struct IsFit : Tag::Member { using type = span<bool>*; };
	struct Pos : Tag::Member { using type = span<vec3f>*; };
	struct Type : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Invalid = murmurhash3::hash("Invalid"), Red = murmurhash3::hash("Red"), Blue = murmurhash3::hash("Blue"), Yellow = murmurhash3::hash("Yellow"), Green = murmurhash3::hash("Green"), Purple = murmurhash3::hash("Purple"), LightBlue = murmurhash3::hash("LightBlue"), }; };
		using type = span<enum_t<Type>>*;
	};
};/* Tag::Structure GameData::MapData::IconData::MapPinData close */

template <> struct Data::Structure<GameData::MapData::IconData::MapPinData> : GameData::MapData::IconData::MapPinData {
	Member<IsFit> IsFit;
	Member<Pos> Pos;
	Enum<Type> Type;
	
	explicit Structure(Sav& s) : 
		IsFit { s.get<struct IsFit>() },
		Pos { s.get<struct Pos>() },
		Type { s.get<struct Type>() }
	{ }
};/* Structure Data::Structure GameData::MapData::IconData::MapPinData close */

template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::IconData::MapPinData::IsFit> { "MapData.IconData.MapPinData.IsFit" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::IconData::MapPinData::Pos> { "MapData.IconData.MapPinData.Pos" };
template <> hash_value_t constexpr Data::Hashtable<GameData::MapData::IconData::MapPinData::Type> { "MapData.IconData.MapPinData.Type" };