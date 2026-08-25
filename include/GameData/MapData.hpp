#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::MapData : Tag::Structure {
	struct IconData;
	struct IsGerudoIconEnable : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsOpenFootprintMode : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsOpenGround : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsOpenUnderGround : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeon;
	struct CurrentLayer : Tag::Enum { using type = ::Enum::Scalar<CurrentLayer>; using adapter = ::Enum::Scalar<CurrentLayer>; enum enum_type : hash_t { Ground = murmurhash3::hash("Ground"), Sky = murmurhash3::hash("Sky"), UnderGround = murmurhash3::hash("UnderGround"), }; };
};/* Tag::Structure GameData::MapData close */

#include "MapData/IconData.hpp"
#include "MapData/LargeDungeon.hpp"

template <> struct Data::Structure<GameData::MapData> : GameData::MapData {
	Structure<IconData> IconData;
	IsGerudoIconEnable::type IsGerudoIconEnable;
	IsOpenFootprintMode::type IsOpenFootprintMode;
	IsOpenGround::type IsOpenGround;
	IsOpenUnderGround::type IsOpenUnderGround;
	Structure<LargeDungeon> LargeDungeon;
	CurrentLayer::type CurrentLayer;
	
	explicit Structure(Sav& s) : 
		IconData { s },
		IsGerudoIconEnable { s.get<struct IsGerudoIconEnable>() },
		IsOpenFootprintMode { s.get<struct IsOpenFootprintMode>() },
		IsOpenGround { s.get<struct IsOpenGround>() },
		IsOpenUnderGround { s.get<struct IsOpenUnderGround>() },
		LargeDungeon { s },
		CurrentLayer { s.get<struct CurrentLayer>() }
	{ }
};/* Data::Structure GameData::MapData close */

template <> hash_t constexpr Data::Hashtable<GameData::MapData::IsGerudoIconEnable> = murmurhash3::hash("MapData.IsGerudoIconEnable");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::IsOpenFootprintMode> = murmurhash3::hash("MapData.IsOpenFootprintMode");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::IsOpenGround> = murmurhash3::hash("MapData.IsOpenGround");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::IsOpenUnderGround> = murmurhash3::hash("MapData.IsOpenUnderGround");
template <> hash_t constexpr Data::Hashtable<GameData::MapData::CurrentLayer> = murmurhash3::hash("MapData.CurrentLayer");