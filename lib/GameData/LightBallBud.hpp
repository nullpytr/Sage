#pragma once
#include <sage>

struct GameData::LightBallBud : Tag::Structure {
	struct CreatedTime : Tag::Member { using type = span<u32>*; };
	struct IsValid : Tag::Member { using type = span<bool>*; };
	struct Nrm : Tag::Member { using type = span<u32>*; };
	struct Pos : Tag::Member { using type = span<u64>*; };
	struct Size : Tag::Member { using type = span<bool>*; };
};/* Tag::Structure GameData::LightBallBud close */

template <> struct Data::Structure<GameData::LightBallBud> : GameData::LightBallBud {
	Member<CreatedTime> CreatedTime;
	Member<IsValid> IsValid;
	Member<Nrm> Nrm;
	Member<Pos> Pos;
	Member<Size> Size;
	
	explicit Structure(Sav& s) : 
		CreatedTime { s.get<struct CreatedTime>() },
		IsValid { s.get<struct IsValid>() },
		Nrm { s.get<struct Nrm>() },
		Pos { s.get<struct Pos>() },
		Size { s.get<struct Size>() }
	{ }
};/* Data::Structure GameData::LightBallBud close */

template <> hash_value_t constexpr Data::Hashtable<GameData::LightBallBud::CreatedTime> { "LightBallBud.CreatedTime" };
template <> hash_value_t constexpr Data::Hashtable<GameData::LightBallBud::IsValid> { "LightBallBud.IsValid" };
template <> hash_value_t constexpr Data::Hashtable<GameData::LightBallBud::Nrm> { "LightBallBud.Nrm" };
template <> hash_value_t constexpr Data::Hashtable<GameData::LightBallBud::Pos> { "LightBallBud.Pos" };
template <> hash_value_t constexpr Data::Hashtable<GameData::LightBallBud::Size> { "LightBallBud.Size" };