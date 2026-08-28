#pragma once
#include <sage>

struct GameData::MapData::IconData::MapPinData : Tag::Structure {
	struct IsFit : Tag::Member { using type = span<bool>*; };
	struct Type : Tag::Enum {
		enum underlying_enum_t : hash_t { Invalid = murmurhash3::hash("Invalid"), Red = murmurhash3::hash("Red"), Blue = murmurhash3::hash("Blue"), Yellow = murmurhash3::hash("Yellow"), Green = murmurhash3::hash("Green"), Purple = murmurhash3::hash("Purple"), LightBlue = murmurhash3::hash("LightBlue"), };
		using type = span<enum_t<Type>>*;
	};
	struct Pos : Tag::Member { using type = span<vec3f>*; };
};/* Tag::Structure GameData::MapData::IconData::MapPinData close */

template <> struct Data::Structure<GameData::MapData::IconData::MapPinData> : GameData::MapData::IconData::MapPinData {
	Member<IsFit> IsFit;
	Enum<Type> Type;
	Member<Pos> Pos;
	
	explicit Structure(Sav& s) : 
		IsFit { s.get<struct IsFit>() },
		Type { s.get<struct Type>() },
		Pos { s.get<struct Pos>() }
	{ }
};/* Data::Structure GameData::MapData::IconData::MapPinData close */

template <> hash_t constexpr Data::Hashtable<GameData::MapData::IconData::MapPinData::IsFit> = murmurhash3::hash("MapData.IconData.MapPinData.IsFit");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::IconData::MapPinData::Type> = murmurhash3::hash("MapData.IconData.MapPinData.Type");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::IconData::MapPinData::Pos> = murmurhash3::hash("MapData.IconData.MapPinData.Pos");