#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::LightBallBud : Tag::Structure {
	struct IsValid : Tag::Member { using type = span<bool>; using adapter = adapter<type>*; };
	struct Size : Tag::Member { using type = span<bool>; using adapter = adapter<type>*; };
	struct Pos : Tag::Member { using type = span<u64>; using adapter = adapter<type>*; };
	struct CreatedTime : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
	struct Nrm : Tag::Member { using type = span<u32>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::LightBallBud close */

template <> struct Data::Structure<GameData::LightBallBud> : GameData::LightBallBud {
	IsValid::type IsValid;
	Size::type Size;
	Pos::type Pos;
	CreatedTime::type CreatedTime;
	Nrm::type Nrm;
	
	explicit Structure(Sav& s) : 
		IsValid { s.get<struct IsValid>() },
		Size { s.get<struct Size>() },
		Pos { s.get<struct Pos>() },
		CreatedTime { s.get<struct CreatedTime>() },
		Nrm { s.get<struct Nrm>() }
	{ }
};/* Data::Structure GameData::LightBallBud close */

template <> hash_t constexpr Data::Hashtable<GameData::LightBallBud::IsValid> = murmurhash3::hash("LightBallBud.IsValid");
template <> hash_t constexpr Data::Hashtable<GameData::LightBallBud::Size> = murmurhash3::hash("LightBallBud.Size");
template <> hash_t constexpr Data::Hashtable<GameData::LightBallBud::Pos> = murmurhash3::hash("LightBallBud.Pos");
template <> hash_t constexpr Data::Hashtable<GameData::LightBallBud::CreatedTime> = murmurhash3::hash("LightBallBud.CreatedTime");
template <> hash_t constexpr Data::Hashtable<GameData::LightBallBud::Nrm> = murmurhash3::hash("LightBallBud.Nrm");