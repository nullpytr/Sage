#pragma once
#include <sage>

struct GameData::FigureInfo : Tag::Structure {
	struct Body : Tag::Member { using type = span<byte>*; };
	struct Header : Tag::Member { using type = span<byte>*; };
};/* Tag::Structure GameData::FigureInfo close */

template <> struct Data::Structure<GameData::FigureInfo> : GameData::FigureInfo {
	Data::Member<Body> Body;
	Data::Member<Header> Header;
	
	explicit Structure(Sav& s) : 
		Body { s.get<struct Body>() },
		Header { s.get<struct Header>() }
	{ }
};/* Data::Structure GameData::FigureInfo close */

template <> hash_t constexpr Data::Hashtable<GameData::FigureInfo::Body> = murmurhash3::hash("FigureInfo.Body");
template <> hash_t constexpr Data::Hashtable<GameData::FigureInfo::Header> = murmurhash3::hash("FigureInfo.Header");