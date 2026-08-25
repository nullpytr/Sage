#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::MapData::IconData : Tag::Structure {
	struct FrontierPoint;
	struct MapPinData;
	struct StampData;
	struct WarpMarkerData;
};/* Tag::Structure GameData::MapData::IconData close */

#include "IconData/FrontierPoint.hpp"
#include "IconData/MapPinData.hpp"
#include "IconData/StampData.hpp"
#include "IconData/WarpMarkerData.hpp"

template <> struct Data::Structure<GameData::MapData::IconData> : GameData::MapData::IconData {
	Structure<FrontierPoint> FrontierPoint;
	Structure<MapPinData> MapPinData;
	Structure<StampData> StampData;
	Structure<WarpMarkerData> WarpMarkerData;
	
	explicit Structure(Sav& s) : 
		FrontierPoint { s },
		MapPinData { s },
		StampData { s },
		WarpMarkerData { s }
	{ }
};/* Data::Structure GameData::MapData::IconData close */
