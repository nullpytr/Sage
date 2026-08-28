#pragma once
#include <sage>

struct GameData::MapData : Tag::Structure {
	struct IsGerudoIconEnable : Tag::Member { using type = bool&; };
	struct IsOpenFootprintMode : Tag::Member { using type = bool&; };
	struct IsOpenGround : Tag::Member { using type = bool&; };
	struct IsOpenUnderGround : Tag::Member { using type = bool&; };
	struct CurrentLayer : Tag::Enum {
		enum underlying_enum_t : hash_t { Ground = murmurhash3::hash("Ground"), Sky = murmurhash3::hash("Sky"), UnderGround = murmurhash3::hash("UnderGround"), };
		using type = enum_t<CurrentLayer>&;
	};
	struct IconData;
	struct LargeDungeon;
};/* Tag::Structure GameData::MapData close */

#include "MapData/IconData.hpp"
#include "MapData/LargeDungeon.hpp"

template <> struct Data::Structure<GameData::MapData> : GameData::MapData {
	Member<IsGerudoIconEnable> IsGerudoIconEnable;
	Member<IsOpenFootprintMode> IsOpenFootprintMode;
	Member<IsOpenGround> IsOpenGround;
	Member<IsOpenUnderGround> IsOpenUnderGround;
	Enum<CurrentLayer> CurrentLayer;
	Structure<IconData> IconData;
	Structure<LargeDungeon> LargeDungeon;
	
	explicit Structure(Sav& s) : 
		IsGerudoIconEnable { s.get<struct IsGerudoIconEnable>() },
		IsOpenFootprintMode { s.get<struct IsOpenFootprintMode>() },
		IsOpenGround { s.get<struct IsOpenGround>() },
		IsOpenUnderGround { s.get<struct IsOpenUnderGround>() },
		CurrentLayer { s.get<struct CurrentLayer>() },
		IconData { s },
		LargeDungeon { s }
	{ }
};/* Data::Structure GameData::MapData close */

template <> hash_t constexpr Data::Hashtable<GameData::MapData::IsGerudoIconEnable> = murmurhash3::hash("MapData.IsGerudoIconEnable");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::IsOpenFootprintMode> = murmurhash3::hash("MapData.IsOpenFootprintMode");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::IsOpenGround> = murmurhash3::hash("MapData.IsOpenGround");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::IsOpenUnderGround> = murmurhash3::hash("MapData.IsOpenUnderGround");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::CurrentLayer> = murmurhash3::hash("MapData.CurrentLayer");