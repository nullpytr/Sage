#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::ReplaceblePicture : Tag::Structure {
	struct DeathMountainHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct EastHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ForestHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GerudoHatago_1 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GerudoHatago_2 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HeightHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HutagoHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleDepthHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LakesideHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LinkHousePicture_0 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LinkHousePicture_1 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LinkHousePicture_2 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LinkHousePicture_3 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NewHyruleWestHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NorthHatelHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RiverSideHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SnowfieldHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SouthHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TabantaBridgeHatago : Tag::Member { using type = bool&; using adapter = bool&; };
};/* Tag::Structure GameData::ReplaceblePicture close */

template <> struct Data::Structure<GameData::ReplaceblePicture> : GameData::ReplaceblePicture {
	DeathMountainHatago::type DeathMountainHatago;
	EastHatago::type EastHatago;
	ForestHatago::type ForestHatago;
	GerudoHatago_1::type GerudoHatago_1;
	GerudoHatago_2::type GerudoHatago_2;
	HeightHatago::type HeightHatago;
	HutagoHatago::type HutagoHatago;
	HyruleDepthHatago::type HyruleDepthHatago;
	LakesideHatago::type LakesideHatago;
	LinkHousePicture_0::type LinkHousePicture_0;
	LinkHousePicture_1::type LinkHousePicture_1;
	LinkHousePicture_2::type LinkHousePicture_2;
	LinkHousePicture_3::type LinkHousePicture_3;
	NewHyruleWestHatago::type NewHyruleWestHatago;
	NorthHatelHatago::type NorthHatelHatago;
	RiverSideHatago::type RiverSideHatago;
	SnowfieldHatago::type SnowfieldHatago;
	SouthHatago::type SouthHatago;
	TabantaBridgeHatago::type TabantaBridgeHatago;
	
	explicit Structure(Sav& s) : 
		DeathMountainHatago { s.get<struct DeathMountainHatago>() },
		EastHatago { s.get<struct EastHatago>() },
		ForestHatago { s.get<struct ForestHatago>() },
		GerudoHatago_1 { s.get<struct GerudoHatago_1>() },
		GerudoHatago_2 { s.get<struct GerudoHatago_2>() },
		HeightHatago { s.get<struct HeightHatago>() },
		HutagoHatago { s.get<struct HutagoHatago>() },
		HyruleDepthHatago { s.get<struct HyruleDepthHatago>() },
		LakesideHatago { s.get<struct LakesideHatago>() },
		LinkHousePicture_0 { s.get<struct LinkHousePicture_0>() },
		LinkHousePicture_1 { s.get<struct LinkHousePicture_1>() },
		LinkHousePicture_2 { s.get<struct LinkHousePicture_2>() },
		LinkHousePicture_3 { s.get<struct LinkHousePicture_3>() },
		NewHyruleWestHatago { s.get<struct NewHyruleWestHatago>() },
		NorthHatelHatago { s.get<struct NorthHatelHatago>() },
		RiverSideHatago { s.get<struct RiverSideHatago>() },
		SnowfieldHatago { s.get<struct SnowfieldHatago>() },
		SouthHatago { s.get<struct SouthHatago>() },
		TabantaBridgeHatago { s.get<struct TabantaBridgeHatago>() }
	{ }
};/* Data::Structure GameData::ReplaceblePicture close */

template <> hash_t constexpr Data::Hashtable<GameData::ReplaceblePicture::DeathMountainHatago> = murmurhash3::hash("ReplaceblePicture.DeathMountainHatago");
template <> hash_t constexpr Data::Hashtable<GameData::ReplaceblePicture::EastHatago> = murmurhash3::hash("ReplaceblePicture.EastHatago");
template <> hash_t constexpr Data::Hashtable<GameData::ReplaceblePicture::ForestHatago> = murmurhash3::hash("ReplaceblePicture.ForestHatago");
template <> hash_t constexpr Data::Hashtable<GameData::ReplaceblePicture::GerudoHatago_1> = murmurhash3::hash("ReplaceblePicture.GerudoHatago_1");
template <> hash_t constexpr Data::Hashtable<GameData::ReplaceblePicture::GerudoHatago_2> = murmurhash3::hash("ReplaceblePicture.GerudoHatago_2");
template <> hash_t constexpr Data::Hashtable<GameData::ReplaceblePicture::HeightHatago> = murmurhash3::hash("ReplaceblePicture.HeightHatago");
template <> hash_t constexpr Data::Hashtable<GameData::ReplaceblePicture::HutagoHatago> = murmurhash3::hash("ReplaceblePicture.HutagoHatago");
template <> hash_t constexpr Data::Hashtable<GameData::ReplaceblePicture::HyruleDepthHatago> = murmurhash3::hash("ReplaceblePicture.HyruleDepthHatago");
template <> hash_t constexpr Data::Hashtable<GameData::ReplaceblePicture::LakesideHatago> = murmurhash3::hash("ReplaceblePicture.LakesideHatago");
template <> hash_t constexpr Data::Hashtable<GameData::ReplaceblePicture::LinkHousePicture_0> = murmurhash3::hash("ReplaceblePicture.LinkHousePicture_0");
template <> hash_t constexpr Data::Hashtable<GameData::ReplaceblePicture::LinkHousePicture_1> = murmurhash3::hash("ReplaceblePicture.LinkHousePicture_1");
template <> hash_t constexpr Data::Hashtable<GameData::ReplaceblePicture::LinkHousePicture_2> = murmurhash3::hash("ReplaceblePicture.LinkHousePicture_2");
template <> hash_t constexpr Data::Hashtable<GameData::ReplaceblePicture::LinkHousePicture_3> = murmurhash3::hash("ReplaceblePicture.LinkHousePicture_3");
template <> hash_t constexpr Data::Hashtable<GameData::ReplaceblePicture::NewHyruleWestHatago> = murmurhash3::hash("ReplaceblePicture.NewHyruleWestHatago");
template <> hash_t constexpr Data::Hashtable<GameData::ReplaceblePicture::NorthHatelHatago> = murmurhash3::hash("ReplaceblePicture.NorthHatelHatago");
template <> hash_t constexpr Data::Hashtable<GameData::ReplaceblePicture::RiverSideHatago> = murmurhash3::hash("ReplaceblePicture.RiverSideHatago");
template <> hash_t constexpr Data::Hashtable<GameData::ReplaceblePicture::SnowfieldHatago> = murmurhash3::hash("ReplaceblePicture.SnowfieldHatago");
template <> hash_t constexpr Data::Hashtable<GameData::ReplaceblePicture::SouthHatago> = murmurhash3::hash("ReplaceblePicture.SouthHatago");
template <> hash_t constexpr Data::Hashtable<GameData::ReplaceblePicture::TabantaBridgeHatago> = murmurhash3::hash("ReplaceblePicture.TabantaBridgeHatago");