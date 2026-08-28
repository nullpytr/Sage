#pragma once
#include <sage>

struct GameData::LightBallBud : Tag::Structure {
	struct IsValid : Tag::Member { using type = span<bool>*; };
	struct Size : Tag::Member { using type = span<bool>*; };
	struct Pos : Tag::Member { using type = span<u64>*; };
	struct CreatedTime : Tag::Member { using type = span<u32>*; };
	struct Nrm : Tag::Member { using type = span<u32>*; };
};/* Tag::Structure GameData::LightBallBud close */

template <> struct Data::Structure<GameData::LightBallBud> : GameData::LightBallBud {
	Data::Member<IsValid> IsValid;
	Data::Member<Size> Size;
	Data::Member<Pos> Pos;
	Data::Member<CreatedTime> CreatedTime;
	Data::Member<Nrm> Nrm;
	
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