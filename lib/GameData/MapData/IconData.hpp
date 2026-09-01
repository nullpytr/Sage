#pragma once
#include <sage>

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
		FrontierPoint { s.get<struct FrontierPoint>() },
		MapPinData { s.get<struct MapPinData>() },
		StampData { s.get<struct StampData>() },
		WarpMarkerData { s.get<struct WarpMarkerData>() }
	{ }
};/* Structure Data::Structure GameData::MapData::IconData close */
