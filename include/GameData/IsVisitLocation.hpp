#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::IsVisitLocation : Tag::Structure {
	struct AagetoMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct AdeyaLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct AdeyaVillage : Tag::Member { using type = bool&; using adapter = bool&; };
	struct AgePlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct AgunaiLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct AkazaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Akkare_OctaPond : Tag::Member { using type = bool&; using adapter = bool&; };
	struct AkkareBigBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct AkkareGarrison : Tag::Member { using type = bool&; using adapter = bool&; };
	struct AkkareZhai : Tag::Member { using type = bool&; using adapter = bool&; };
	struct AkkareZhaiBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct AmimePlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct AmonenePlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct AnbonBeach : Tag::Member { using type = bool&; using adapter = bool&; };
	struct AnchoBeach : Tag::Member { using type = bool&; using adapter = bool&; };
	struct AncientLabo : Tag::Member { using type = bool&; using adapter = bool&; };
	struct AncientTimeShrine : Tag::Member { using type = bool&; using adapter = bool&; };
	struct AnoleLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct AnoleTunnel : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ArafuraPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct AraisoBeach : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ArmorOfLambda_01 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ArmorOfLambda_04 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ArmorOfLambda_07 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Assassin : Tag::Member { using type = bool&; using adapter = bool&; };
	struct AzimetosPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BachimakuMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BaconCliff : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BameHill : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BanmezaLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BantaValley : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Bar : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BarakkiPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BarumePlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BaseCamp_Shelter : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BatteryExchangeShop_00 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BatteryExchangeShop_01 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BeginningIsland : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BigalLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BigBrotherBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BiginaTrees : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BigTree : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BiridinHill : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BironSnow : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BituoValley : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BlindForest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BlizzarValley : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BokoboLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BonrasForest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BoraraCape : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BottuBay : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BraveFountain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BrostarPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BuhaIslands : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BuibuiTrees : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BuichadaPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BuidaLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BumiPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct BuramuPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CastleTownMark : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Akkala_0000 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Akkala_0003 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Akkala_0005 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Akkala_0007 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Akkala_0010 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Akkala_0011 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Akkala_0014 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Akkala_0017 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_CentralHyrule_0008 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_CentralHyrule_0009 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_CentralHyrule_0011 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_CentralHyrule_0013 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_CentralHyrule_0017 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_CentralHyrule_0018 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_CentralHyrule_0019 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_CentralHyrule_0020 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_CentralHyrule_0021 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_CentralHyrule_0022 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_CentralHyrule_0023 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_CentralHyrule_0030 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Eldin_0020 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Eldin_0021 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Eldin_0022 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Eldin_0023 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Eldin_0025 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Eldin_0026 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Eldin_0027 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Eldin_0028 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Eldin_0029 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Eldin_0030 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Eldin_0031 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Eldin_0033 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Eldin_0034 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Eldin_0035 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Eldin_0037 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Eldin_0038 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Eldin_0039 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Firone_0002 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Firone_0008 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Firone_0009 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Firone_0016 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Firone_0020 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Firone_0022 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Firone_0023 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Firone_0024 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Firone_0029 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_FirstPlateau_0001 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_FirstPlateau_0002 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoDesert_0007 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoDesert_0008 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoDesert_0015 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoDesert_0022 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoDesert_0030 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoDesert_0031 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoDesert_0032 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoDesert_0035 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoDesert_0036 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoDesert_0037 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoDesert_0039 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoDesert_0040 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoDesert_0041 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoDesert_0043 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoDesert_0044 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoDesert_0045 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoDesert_0046 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoDesert_0049 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoDesert_0050 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoDesert_0051 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoHighlands_0002 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoHighlands_0008 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoHighlands_0014 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_GerudoHighlands_0017 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HateruEast_0000 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HateruEast_0002 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HateruEast_0006 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HateruEast_0007 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HateruEast_0008 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HateruEast_0009 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HateruEast_0013 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HateruEast_0014 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HateruEast_0016 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HateruWest_0002 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HateruWest_0005 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HateruWest_0006 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HateruWest_0008 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HateruWest_0011 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HateruWest_0012 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Hebra_0000 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Hebra_0013 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Hebra_0015 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Hebra_0016 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Hebra_0019 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Hebra_0021 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Hebra_0022 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Hebra_0023 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Hebra_0025 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Hebra_0026 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Hebra_0030 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Hebra_0035 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Hebra_0036 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Hebra_0037 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Hebra_0039 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Hebra_0040 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Hebra_0041 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HyruleForest_0001 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HyruleForest_0006 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HyruleForest_0007 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HyruleForest_0008 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HyruleRidge_0000 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HyruleRidge_0002 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HyruleRidge_0003 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HyruleRidge_0004 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HyruleRidge_0005 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HyruleRidge_0006 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HyruleRidge_0007 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_HyruleRidge_0008 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Lanayru_0006 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Lanayru_0008 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Lanayru_0014 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Lanayru_0019 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Lanayru_0024 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Lanayru_0032 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Lanayru_0033 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Lanayru_0035 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Lanayru_0036 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Lanayru_0048 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Lanayru_0049 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Lanayru_0050 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Lanayru_0052 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Lanayru_0053 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Lanayru_0055 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Lanayru_0057 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Lanayru_0060 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Lanayru_0061 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Lanayru_0063 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_LanayruMountain_0002 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_LanayruMountain_0006 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_LanayruMountain_0008 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_LanayruMountain_0010 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_LanayruMountain_0014 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_LanayruMountain_0016 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_LanayruMountain_0022 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_LanayruMountain_0024 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_LanayruMountain_0025 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_LanayruMountain_0026 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Tabantha_0001 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Tabantha_0002 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cave_Tabantha_0003 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CDungeon : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CentralExchange : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ChagaraMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint000 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint001 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint002 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint003 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint004 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint005 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint006 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint007 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint008 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint009 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint010 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint011 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint012 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint013 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint014 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint016 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint017 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint018 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint019 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint020 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint021 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint022 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint023 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint024 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint025 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint026 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint027 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint028 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint029 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint030 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint031 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint032 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint033 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint035 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint036 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint037 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint039 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint040 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint041 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint042 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint044 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint046 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint047 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint048 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint049 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint051 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint053 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint054 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint056 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint057 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint058 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint059 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint064 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint065 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint067 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint068 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint070 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint072 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint073 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint074 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint075 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint076 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint077 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint078 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint079 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint080 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint081 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint084 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint085 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint086 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint087 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint088 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint089 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint090 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint091 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint092 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint094 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint095 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint096 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint097 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint098 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint100 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint101 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint102 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint103 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint104 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint106 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint107 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint108 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint111 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint112 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint113 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint114 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint115 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint116 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint118 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint119 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint120 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint122 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint123 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint124 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint125 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint126 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint129 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint130 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint131 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint132 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint133 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint134 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint135 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint136 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint137 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint138 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint139 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint140 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint141 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint142 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint143 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint144 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CheckPoint147 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ChirakaVillage : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ChuonoPond : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Circuit_Ichikara : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Circuit_Uotori : Tag::Member { using type = bool&; using adapter = bool&; };
	struct City_BaseCamp : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cohorint : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Cokiri : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CookingShop : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Corosseo : Tag::Member { using type = bool&; using adapter = bool&; };
	struct CresiaPeninsula : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DamzelForest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DanioPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DarinoPond : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DasukidaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DasukidaPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DatsuPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeathCaldera : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeathMountain_Entrance : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeathMountainHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeathMountainWestWorkshop : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_AkkareSkull : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_B_6_AssasisnBoss : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_B_6_Tower : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_Chikurun : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_Cokiri : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_DeathMountain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_Firone : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_FirstLandEast : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_FirstLandNorth : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_FirstLandSouth : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_FirstLandWest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_GerudoMaze : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_GerudoSummit : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_Higakkare : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_HimeidaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_HyruleCastle : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_HyruleCastleEast : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_HyruleCastleWest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_HyruleLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_HyrulePlains : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_ImeruMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_Kakariko_EastHill : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_KiyanbaTrees : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_LomeiIsland : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_Minakkare : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_RirimukuMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_Rito : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_Saihateno : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_SanaePlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_TabantaMaze : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_YuaSnow : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DeepHole_ZifForest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DekamuPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DemonStatue_00 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DemonStatue_01 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DemonStatue_02 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DemonStatue_03 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DemonStatue_04 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DemonStatue_05 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DodoraBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DokamamaPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DokuroPond : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DonLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DotiBeach : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DragonMarsh : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DragonsFar : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DragonTears01 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DragonTears02 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DragonTears03 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DragonTears04 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DragonTears05 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DragonTears06 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DragonTears07 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DragonTears08 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DragonTears09 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DragonTears10 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DragonTears11 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct DragonTears12 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon000 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon001 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon002 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon003 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon004 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon005 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon006 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon007 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon008 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon009 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon010 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon011 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon012 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon013 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon014 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon015 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon016 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon017 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon018 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon019 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon020 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon021 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon022 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon023 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon024 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon025 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon026 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon027 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon028 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon029 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon030 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon031 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon032 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon033 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon034 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon035 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon036 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon037 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon038 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon039 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon040 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon041 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon042 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon043 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon044 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon045 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon046 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon047 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon048 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon049 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon050 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon051 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon052 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon053 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon054 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon055 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon056 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon057 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon058 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon059 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon060 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon061 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon062 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon063 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon064 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon065 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon066 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon067 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon068 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon069 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon070 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon071 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon072 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon073 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon074 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon075 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon076 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon077 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon078 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon079 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon080 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon081 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon082 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon083 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon084 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon085 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon086 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon087 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon088 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon089 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon090 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon091 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon092 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon093 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon094 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon095 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon096 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon097 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon098 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon099 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon100 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon101 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon102 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon103 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon104 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon105 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon106 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon107 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon108 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon109 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon110 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon111 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon112 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon113 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon114 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon115 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon116 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon117 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon118 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon119 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon120 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon121 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon122 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon123 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon124 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon125 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon126 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon127 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon128 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon129 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon130 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon131 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon132 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon133 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon134 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon135 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon136 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon137 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon138 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon139 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon140 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon141 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon142 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon143 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon144 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon145 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon146 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon147 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon148 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon149 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon150 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Dungeon151 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct EagleBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct EastDam : Tag::Member { using type = bool&; using adapter = bool&; };
	struct EastEunpoHighlands : Tag::Member { using type = bool&; using adapter = bool&; };
	struct EastGerudo : Tag::Member { using type = bool&; using adapter = bool&; };
	struct EastGerudoPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct EastGerudoRuins : Tag::Member { using type = bool&; using adapter = bool&; };
	struct EastPostTownRuin : Tag::Member { using type = bool&; using adapter = bool&; };
	struct EastShrine : Tag::Member { using type = bool&; using adapter = bool&; };
	struct EldinRestaurants : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ElegLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct EnRiver : Tag::Member { using type = bool&; using adapter = bool&; };
	struct EquePlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ErumedaPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct EunpoHighlands : Tag::Member { using type = bool&; using adapter = bool&; };
	struct EX_LowGravityIsland : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Execution : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ExpaTrees : Tag::Member { using type = bool&; using adapter = bool&; };
	struct EzzuBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct FairyForest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct FaronHatago000 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct FaronHatago001 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct FaronHatago002 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct FenaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct FeoreRiver : Tag::Member { using type = bool&; using adapter = bool&; };
	struct FigureGallery : Tag::Member { using type = bool&; using adapter = bool&; };
	struct FinrasForest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct FironeForestEntrance : Tag::Member { using type = bool&; using adapter = bool&; };
	struct FlamingoSpa : Tag::Member { using type = bool&; using adapter = bool&; };
	struct FlogPond : Tag::Member { using type = bool&; using adapter = bool&; };
	struct FloriaBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct FloriaFalls : Tag::Member { using type = bool&; using adapter = bool&; };
	struct FloriaRiver : Tag::Member { using type = bool&; using adapter = bool&; };
	struct FlowerSandbank : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ForestHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ForgeShopGolem : Tag::Member { using type = bool&; using adapter = bool&; };
	struct FrontGatePosttown : Tag::Member { using type = bool&; using adapter = bool&; };
	struct FuruboLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GakanakkyoPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GameBitalockGolf : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GameGutsCriff : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GameShiledSurf : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GamettaPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GaneLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GarakishiPass : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GarakishiVillage : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GasemaDam : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GasemaRiver : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GashamaHill : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GashamahiMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GatakaraGarrison : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GatakaraPond : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GatinLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GenLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GeraRiver : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Gerudo : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GerudoCanyon : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GerudoCanyon_Entrance : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GerudoDesert_Entrance : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GerudoDesertCrack : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GerudoEightHeroStatue : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GerudoHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GerudoPyramidDungeon_1 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GerudoPyramidDungeon_2 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GerudoPyramidDungeon_3 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GerudoPyramidDungeon_4 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GerudoPyramidDungeon_5 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GerudoPyramidDungeon_6 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GerudoPyramidDungeon_7 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GerudoSummit : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GerudoUndergroundTown : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GiankonIsland : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GibogaHill : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GibururuMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GigiLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GiminoPond : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GimpoMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GisaHill : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GishiHill : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GoanaValley : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GobyMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GoinaPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Goron : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GoronBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GoronSpa : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GoyoLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GumaroValley : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GutinizaPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GutinizaPlainTomb : Tag::Member { using type = bool&; using adapter = bool&; };
	struct GyunaIsland : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HachijoBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HagoromoLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HamiyonPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HarayaLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HashibiroLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Hateno : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HatenoBay : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HatenoBeach : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HatenoFarm : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HatenoGate : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HatenokoIsland : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HatenoLabo : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HatenoSchool : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HawkMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HeburaEastSummit : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HeburaIcicle : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HeburaLodge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HeburaMt_North : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HeburaNorthSummit : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HeburaPeak : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HeburaSouthSummit : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HeburaTundera : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HeburaWestSummit : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HemaHill : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HesonaiValley : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HigakkareBeach : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HigakkarePlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HigashinoBay : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HimeidaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HopeBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HopesPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HorseStableBranchOffice_BaseCamp : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HorseStableBranchOffice_Gerudo : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyliaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyliaRiver : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyralBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyralIslands : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Hyrule_Out : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleCastle : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleCastle_Hall_0 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleCastle_Hall_1 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleCastle_Hall_2 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleCastle_Room_0 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleCastle_Room_1 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleCastle_Room_10 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleCastle_Room_11 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleCastle_Room_2 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleCastle_Room_3 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleCastle_Room_5 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleCastle_Room_6 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleCastle_Room_7 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleCastle_Room_8 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleCastle_Room_9 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleCastleUnderground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleCave : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleCentralPlace : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleDepthHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleEastTown : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleGarrison : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleGround : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleLabo : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyrulePark : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyrulePlace : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleSkyIsland : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleTemple : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleTower : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleUnderground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleWater : Tag::Member { using type = bool&; using adapter = bool&; };
	struct HyruleWestTown : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IbaraPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IceHouse : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IkokoPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ImeruMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct InvestigatingGroupBase : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IooValley : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IrimoLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IrimoRiver : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsakiCape : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsakuIslands : Tag::Member { using type = bool&; using adapter = bool&; };
	struct JedaPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct JijigegeMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct JiuRiver : Tag::Member { using type = bool&; using adapter = bool&; };
	struct JogoBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct JokuBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KagossaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KaiyanPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KakamoLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KakaomePlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Kakariko : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Kakariko_EastHill : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KakufusaPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KamasuPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KamutariPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KapporeMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KarimikiLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KarusaValley : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KasuraMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KattoriPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KaturaCastle : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KaturaRiver : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KauLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KazanaDungeon : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KazuryuLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KazuryuRiver : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KazusuPass : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KibakkaSnow : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KibinaLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KihirePlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KikinosaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KikinosaPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KimarikaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KimarikaPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KingfisherSpa : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KingValley : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KingValley2 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KinmePlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KinshoiMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KirisasaPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KiriyabuMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KitakkareBeach : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KitakkarePlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KitakkarePlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KitanoBay : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KiyanbaTrees : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KochuBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KoganeyaLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KokuppiSnow : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KokuwaLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KomoreBeach : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KondanaLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KoshaIsland : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KuhanLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KukujaValley : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KumPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KumSpa : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KunaiBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KunaiLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KurindaPrairie : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KurisobeSnow : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KuroidaPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KutenLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct KutiffMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LakeFloria : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LakeHylia : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LakeHylia_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LakeHylia_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LanayruBay : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LanayruEastEntrance : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LanayruWestEntrance : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonFire : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonFire_1F : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonFire_2F : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonFire_3F : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonFire_4F : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonFire_5F : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonHyruleCastle : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonHyruleCastle_1F : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonHyruleCastle_B1 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonHyruleCastle_B2 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonHyruleCastle_B3 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonSoul : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonThunder : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonThunder_1F : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonThunder_2F : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonThunder_3F : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonThunder_4F : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonThunder_5F : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonThunder_6F : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonThunder_7F : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonThunder_B1 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonWater : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonWater_B1 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonWind : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonWind_1F : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonWind_B1 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LargeDungeonWind_B2 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LaveBeach : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LeMarbeBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LightningPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LittleBrotherBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LomeiIslands : Tag::Member { using type = bool&; using adapter = bool&; };
	struct LostForest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MacusePeninsula : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MakuminoValley : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ManbaLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_CentralHyrule : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_DeathMountain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_DeathMountain_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_DeathMountain_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_EastHateru : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_EastHateru_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_EastHateru_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_EldinCanyon : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_EldinCanyon_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_EldinCanyon_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_EldinMountains : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_EldinMountains_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_EldinMountains_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_FironeGrassland : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_FironeGrassland_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_FironeGrassland_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_FironeSea : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_FironeSea_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_FironeSea_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_GerudoDesert : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_GerudoDesert_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_GerudoDesert_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_GerudoHighlands : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_GerudoHighlands_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_GerudoHighlands_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_HateruSea : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_HateruSea_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_HateruSea_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_HeburaMountains : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_HeburaMountains_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_HeburaMountains_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_HyliaLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_HyruleForest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_HyruleForest_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_HyruleForest_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_HyruleHill : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_HyruleHill_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_HyruleHill_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_LanayruSea : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_LanayruSea_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_LanayruSea_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_LanayruWaterSources : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_LanayruWaterSources_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_LanayruWaterSources_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_LanayruWetlands : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_LanayruWetlands_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_LanayruWetlands_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_LiveMountain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_LiveMountain_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_LiveMountain_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_TabantaFrontier : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_TabantaFrontier_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_TabantaFrontier_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_TamulOutback : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_TamulOutback_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_TamulOutback_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_TamulPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_TamulPlateau_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_TamulPlateau_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_TamulSea : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_TamulSea_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_TamulSea_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_WestHateru : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_WestHateru_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapArea_WestHateru_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapRegion_Eldin : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapRegion_Eldin_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapRegion_Firone : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapRegion_Firone_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapRegion_Gerudo : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapRegion_Gerudo_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapRegion_Hateru : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapRegion_Hateru_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapRegion_Hebura : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapRegion_Hebura_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapRegion_HyrulePrairie : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapRegion_HyrulePrairie_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapRegion_HyrulePrairie_Underground : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapRegion_Lanayru : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapRegion_Lanayru_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapRegion_Tamul : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MapRegion_Tamul_Sky : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MarittaHill : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MarittaPrairie : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MaronSpring : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MarritaExchange : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MasazuBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MasazuRock : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MedakaValley : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MeganeRock : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MemeMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MenadaBeach : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MerkayaLowTrees : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MezusuPass : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MiddleTrees : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MihekoBay : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinakkareBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinakkareBridgeEast : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinakkareBridgeWest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinakkareFalls : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinakkareLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinakkarePlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinaminoBay : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Mine : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_AagetoMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_AkkareZhai : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_AncientColosseum : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_AncientTimeShrine : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_BarakkPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_BiginaTrees : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_BlindForest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_BluePrintShrine : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_BraveFountain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_BuibuiTrees : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_Cohorint : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_CresiaPeninsula : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_DasukidaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_DesertGrave : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_DokuroPond : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_ExpaTrees : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_FairyForest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_FenaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_FlamingoSpa : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_ForestColosseum : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_GanondorfArea : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_GanondorfEnd : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_GanondorfEntrance : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_GashamahiMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_Gerudo : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_GerudoFossil : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_GerudoSummit : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_GibogaHill : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_GibururuMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_GimpoMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_GobyLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_GobyMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_Goron : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_Hateno : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_HatenoGate : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_HawkMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_HeburaFossil : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_HeburaPeak : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_HimeidaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_HimeidaSpa : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_HyliaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_JijigegeMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_Kakariko : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_KapporeMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_KasuraMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_KazuryuLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_KikinosaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_KimarikaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_KingfisherSpa : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_KingValley : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_KinshoiMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_KiyanbaTrees : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_KorokForest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_KumSpa : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_KutiffMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_LiveMountain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_LizardLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_LomeiIsland : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_LomeiNorth : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_LomeiSouth : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_MacusePeninsula : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_MemeMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_MiddleTrees : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_MizemakuMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_MoriMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_MorudaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_MorugaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_NezuppoTrees : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_Oasis : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_OngiForest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_OpeningField : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_OpeningFieldEnd : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_OrdinFossil : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_PongagaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_PoponMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_PowerFountain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_RiaroTrees : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_RirimukuMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_Rito : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_RokomakuMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_SaiMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_ShinikkyoForest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_SouthGerudoLegacy : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_StartPoint : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_TagonaTrees : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_Taura : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_TerumeMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_TwinsMountain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_UMiiVillage : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_WhiteZora : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_WiseFountain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MinusField_ZifForest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MizemakuMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MomoMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MoriMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MoroLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MorudaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MorugaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct MuguriPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NaganizaHill : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NagyuPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NaierunPeninsula : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NanaimoPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NangoPond : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NantanCastle : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NaruguPeninsula : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NefraHill : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NewHyruleWestHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NewspaperCompany : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NezuppoTrees : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NiiLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NikakaIsland : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NishakkarePlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NishojiBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NitariBeach : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NomyPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NorthGerudoRuins : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NorthHatelHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NorthHugeStone : Tag::Member { using type = bool&; using adapter = bool&; };
	struct NutsLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Oasis : Tag::Member { using type = bool&; using adapter = bool&; };
	struct OkuAkkarePlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct OkuwaLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct OngiForest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct OoosePlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct OrdinBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct OrdinFossil : Tag::Member { using type = bool&; using adapter = bool&; };
	struct OrupaPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct OsanjoBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct OshoromaLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct OtsukoWet : Tag::Member { using type = bool&; using adapter = bool&; };
	struct PafaBeach : Tag::Member { using type = bool&; using adapter = bool&; };
	struct PaiyuBay : Tag::Member { using type = bool&; using adapter = bool&; };
	struct PakanchiIsland : Tag::Member { using type = bool&; using adapter = bool&; };
	struct PaparaPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct PearlWaste : Tag::Member { using type = bool&; using adapter = bool&; };
	struct PeridoBarrier : Tag::Member { using type = bool&; using adapter = bool&; };
	struct PlayerHouse : Tag::Member { using type = bool&; using adapter = bool&; };
	struct PongagaMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct PoponMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct PostTownRuin : Tag::Member { using type = bool&; using adapter = bool&; };
	struct PowerFountain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct PstaLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct PukiroroMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct PukuntoMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct PupukoreFalls : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RaberaWet : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RapikuruPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RapinyaPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RaruLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RashamaPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RazezePlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RentalZarashiShop_Gerudo : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RentalZarashiShop_GerudoDesert : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RiaroTrees : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RiberaForest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RibuchaPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Rikona_Peninshra : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RingLegacy : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RinosPass : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RirikendoBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RirimukuHighlands : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RirimukuMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RiritotoLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RishakutoPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Rito : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Rito_SkyHighIsland : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RitoHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RiverSideHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RodaiLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RogyLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RokomakuMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RonronCity : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RonronFarm : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RonronRiver : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RoshiganLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RosomaLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RuberaHill : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RutesLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RutimaHill : Tag::Member { using type = bool&; using adapter = bool&; };
	struct RutsuPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SaihokuCastle : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SaiMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SanaePlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SanrosaLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SaohPoint : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SaphiasPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SarjonBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SarjonForest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SasamuroBeach : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ScrapShop : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShariverMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShichijoBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShieldSurfing_BeginnerGoal : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShieldSurfing_SeniorGoal : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShigonDam : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShijoBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShikuriIslands : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShimukaPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShinikkyoForest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShinyarkiPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShinyarkiVillage : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShitanoPond : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopArmor_BaseCamp : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopArmor_Gerudo : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopArmor_Goron : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopArmor_Hateno : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopArmor_Kakariko : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopArmor_Rito : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopDye_Hateno : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopGeneral_BaseCamp : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopGeneral_Gerudo : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopGeneral_Goron : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopGeneral_Hateno : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopGeneral_Kakariko : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopGeneral_Korok : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopGeneral_Oasis : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopGeneral_Rito : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopGeneral_UMiiVillage : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopGeneral_Uotori : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopGeneral_Zora : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopInn_Gerudo : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopInn_Goron : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopInn_Hateno : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopInn_Kakariko : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopInn_Korok : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopInn_Oasis : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopInn_Rito : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopInn_UMiiVillage : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopInn_Uotori : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopInn_Zora : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShopJewelry_Gerudo : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIsland0001 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIsland0002 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIsland0003 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIsland0004 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIsland0009 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIsland0010 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIsland0011 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIsland0012 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIsland0013 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIsland0014 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Eldin01 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Eldin02 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Firone01 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Firone02 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Gerudo01 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Gerudo02 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Hateru01 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Hateru02 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Hebra02 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Hebra03 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Hebra04 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Hyrule01 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Hyrule02 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Hyrule03 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Hyrule04 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Hyrule05 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Lanayru02 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Lanayru03 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Tabanta01 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Tabanta02 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Tamul01 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SkyIslands_Tamul02 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SmallDemonStatue : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SmeltShopGolem_00 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SmeltShopGolem_01 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SmeltShopGolem_02 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SmeltShopGolem_03 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SmeltShopGolem_04 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SmeltShopGolem_05 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SmeltShopGolem_06 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SmeltShopGolem_07 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SmeltShopGolem_08 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SmeltShopGolem_09 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SmeltShopGolem_10 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SnowStatue : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SojijiHill : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SojijiPark : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SonoPrairie : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SoridaPeninsula : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SotonkaBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SouthGerudoLegacy : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SouthGerudoRuins : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SouthGerudoRuinsCamp : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SouthMine : Tag::Member { using type = bool&; using adapter = bool&; };
	struct StartPoint_WakeupAltar : Tag::Member { using type = bool&; using adapter = bool&; };
	struct StonePillers : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SugrantForest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SusonoLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SusonoPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SusonoPond : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SusonoRiver : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SusukadiBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SwanLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TabantaBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TabantaBridgeHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TabantaCrater : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TabantaHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TabantaHill : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TabantaSnow : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TabantaSnow_North : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TabantaSnow_South : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TabantaVillage : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TafeaHill : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TagonaTrees : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TakkikaPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TamaLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TamourHatago : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TamulPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TamurulHatago_02 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TargarPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TaruhoPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TaserakaBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TatsubaLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Taura : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TeguriPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TehotaWet : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TennoMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TeraPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TerumeMt : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TerumePass : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TimesShrine : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TohikiLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TomiyoPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TompoPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ToriaBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TorumaDesert : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TotenLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TotsugeBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower01 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower02 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower03 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower04 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower05 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower06 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower07 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower08 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower09 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower10 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower11 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower12 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower13 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower14 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Tower15 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TrakaIsland : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TrakaIsland_Big : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TrakaIsland_Center : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TrakaIsland_East : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TrakaIsland_New : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TrakaIsland_North : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TrakaIsland_Small : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TrakaIsland_South : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TrakaIsland_West : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TreasureBoxShop : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TryCape : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TsukaiePlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TuaboSnow : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TunbriPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TurasuBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TurasuLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TutukikiSnow : Tag::Member { using type = bool&; using adapter = bool&; };
	struct TwinsMountain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct UbotsuPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct UchoPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct UkkoPond : Tag::Member { using type = bool&; using adapter = bool&; };
	struct UMiiVillage : Tag::Member { using type = bool&; using adapter = bool&; };
	struct UMiiVillage_JobField : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Unknown : Tag::Member { using type = bool&; using adapter = bool&; };
	struct UraitoLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct UrokoCape : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ValleyVillage : Tag::Member { using type = bool&; using adapter = bool&; };
	struct VPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct WabiLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct WatakaPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct WeaponCureSpring : Tag::Member { using type = bool&; using adapter = bool&; };
	struct WeaponCureSpring_DressFairy_00 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct WeaponCureSpring_DressFairy_01 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct WeaponCureSpring_DressFairy_02 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0001 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0002 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0003 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0004 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0005 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0006 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0007 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0008 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0009 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0010 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0011 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0012 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0013 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0014 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0015 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0016 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0017 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0018 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0019 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0020 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0021 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0022 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0023 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0024 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0025 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0026 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0027 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0028 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0029 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0030 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0031 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0032 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0033 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0034 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0041 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0042 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0043 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0043B : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0044 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0045 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0046 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0047 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0047B : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0048 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0049 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0049B : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0049C : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0049D : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0049E : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0050 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0051 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0052 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0053 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0054 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0055 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0056 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0057 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0058 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Well_0059 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct WestEunpoHighlands : Tag::Member { using type = bool&; using adapter = bool&; };
	struct WestGerudo : Tag::Member { using type = bool&; using adapter = bool&; };
	struct WestGerudoRuins : Tag::Member { using type = bool&; using adapter = bool&; };
	struct WetGarrison : Tag::Member { using type = bool&; using adapter = bool&; };
	struct WhiteZora : Tag::Member { using type = bool&; using adapter = bool&; };
	struct WholeOfHyrule : Tag::Member { using type = bool&; using adapter = bool&; };
	struct WiseFountain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct XehaPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct XekuBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct YamabiLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct YamariRiver : Tag::Member { using type = bool&; using adapter = bool&; };
	struct YarimoRiver : Tag::Member { using type = bool&; using adapter = bool&; };
	struct YashinoBeach : Tag::Member { using type = bool&; using adapter = bool&; };
	struct YashinoLegacy : Tag::Member { using type = bool&; using adapter = bool&; };
	struct YuaSnow : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZamaPlain : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZaridoLake : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZaridoPlateau : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZifForest : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZitoGreens : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZonauCentralShrine : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZonauLegacy : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZonauRelief_03 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZonauRelief_04 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZonauRelief_05 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZonauRelief_06 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZonauRelief_07 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZonauRelief_08 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZonauRelief_09 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZonauRelief_10 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZonauRelief_11 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZonauRelief_12 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZonauRelief_13 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZonauRelief_14 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZonauSatelliteShrine_LeftArm : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZonauSatelliteShrine_LeftLeg : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZonauSatelliteShrine_RightArm : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZonauSatelliteShrine_RightLeg : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZonauThunderSkyIsland : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZonauTriedForceSkyIsland : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Zora_Belvedere : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Zora_FishIsland : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Zora_Imperial_Palace : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZoraBridge : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ZoraZonauTerminal : Tag::Member { using type = bool&; using adapter = bool&; };
};/* Tag::Structure GameData::IsVisitLocation close */

template <> struct Data::Structure<GameData::IsVisitLocation> : GameData::IsVisitLocation {
	AagetoMt::type AagetoMt;
	AdeyaLake::type AdeyaLake;
	AdeyaVillage::type AdeyaVillage;
	AgePlateau::type AgePlateau;
	AgunaiLake::type AgunaiLake;
	AkazaMt::type AkazaMt;
	Akkare_OctaPond::type Akkare_OctaPond;
	AkkareBigBridge::type AkkareBigBridge;
	AkkareGarrison::type AkkareGarrison;
	AkkareZhai::type AkkareZhai;
	AkkareZhaiBridge::type AkkareZhaiBridge;
	AmimePlateau::type AmimePlateau;
	AmonenePlateau::type AmonenePlateau;
	AnbonBeach::type AnbonBeach;
	AnchoBeach::type AnchoBeach;
	AncientLabo::type AncientLabo;
	AncientTimeShrine::type AncientTimeShrine;
	AnoleLake::type AnoleLake;
	AnoleTunnel::type AnoleTunnel;
	ArafuraPlain::type ArafuraPlain;
	AraisoBeach::type AraisoBeach;
	ArmorOfLambda_01::type ArmorOfLambda_01;
	ArmorOfLambda_04::type ArmorOfLambda_04;
	ArmorOfLambda_07::type ArmorOfLambda_07;
	Assassin::type Assassin;
	AzimetosPlateau::type AzimetosPlateau;
	BachimakuMt::type BachimakuMt;
	BaconCliff::type BaconCliff;
	BameHill::type BameHill;
	BanmezaLake::type BanmezaLake;
	BantaValley::type BantaValley;
	Bar::type Bar;
	BarakkiPlain::type BarakkiPlain;
	BarumePlain::type BarumePlain;
	BaseCamp_Shelter::type BaseCamp_Shelter;
	BatteryExchangeShop_00::type BatteryExchangeShop_00;
	BatteryExchangeShop_01::type BatteryExchangeShop_01;
	BeginningIsland::type BeginningIsland;
	BigalLake::type BigalLake;
	BigBrotherBridge::type BigBrotherBridge;
	BiginaTrees::type BiginaTrees;
	BigTree::type BigTree;
	BiridinHill::type BiridinHill;
	BironSnow::type BironSnow;
	BituoValley::type BituoValley;
	BlindForest::type BlindForest;
	BlizzarValley::type BlizzarValley;
	BokoboLake::type BokoboLake;
	BonrasForest::type BonrasForest;
	BoraraCape::type BoraraCape;
	BottuBay::type BottuBay;
	BraveFountain::type BraveFountain;
	BrostarPlain::type BrostarPlain;
	BuhaIslands::type BuhaIslands;
	BuibuiTrees::type BuibuiTrees;
	BuichadaPlateau::type BuichadaPlateau;
	BuidaLake::type BuidaLake;
	BumiPlain::type BumiPlain;
	BuramuPlateau::type BuramuPlateau;
	CastleTownMark::type CastleTownMark;
	Cave_Akkala_0000::type Cave_Akkala_0000;
	Cave_Akkala_0003::type Cave_Akkala_0003;
	Cave_Akkala_0005::type Cave_Akkala_0005;
	Cave_Akkala_0007::type Cave_Akkala_0007;
	Cave_Akkala_0010::type Cave_Akkala_0010;
	Cave_Akkala_0011::type Cave_Akkala_0011;
	Cave_Akkala_0014::type Cave_Akkala_0014;
	Cave_Akkala_0017::type Cave_Akkala_0017;
	Cave_CentralHyrule_0008::type Cave_CentralHyrule_0008;
	Cave_CentralHyrule_0009::type Cave_CentralHyrule_0009;
	Cave_CentralHyrule_0011::type Cave_CentralHyrule_0011;
	Cave_CentralHyrule_0013::type Cave_CentralHyrule_0013;
	Cave_CentralHyrule_0017::type Cave_CentralHyrule_0017;
	Cave_CentralHyrule_0018::type Cave_CentralHyrule_0018;
	Cave_CentralHyrule_0019::type Cave_CentralHyrule_0019;
	Cave_CentralHyrule_0020::type Cave_CentralHyrule_0020;
	Cave_CentralHyrule_0021::type Cave_CentralHyrule_0021;
	Cave_CentralHyrule_0022::type Cave_CentralHyrule_0022;
	Cave_CentralHyrule_0023::type Cave_CentralHyrule_0023;
	Cave_CentralHyrule_0030::type Cave_CentralHyrule_0030;
	Cave_Eldin_0020::type Cave_Eldin_0020;
	Cave_Eldin_0021::type Cave_Eldin_0021;
	Cave_Eldin_0022::type Cave_Eldin_0022;
	Cave_Eldin_0023::type Cave_Eldin_0023;
	Cave_Eldin_0025::type Cave_Eldin_0025;
	Cave_Eldin_0026::type Cave_Eldin_0026;
	Cave_Eldin_0027::type Cave_Eldin_0027;
	Cave_Eldin_0028::type Cave_Eldin_0028;
	Cave_Eldin_0029::type Cave_Eldin_0029;
	Cave_Eldin_0030::type Cave_Eldin_0030;
	Cave_Eldin_0031::type Cave_Eldin_0031;
	Cave_Eldin_0033::type Cave_Eldin_0033;
	Cave_Eldin_0034::type Cave_Eldin_0034;
	Cave_Eldin_0035::type Cave_Eldin_0035;
	Cave_Eldin_0037::type Cave_Eldin_0037;
	Cave_Eldin_0038::type Cave_Eldin_0038;
	Cave_Eldin_0039::type Cave_Eldin_0039;
	Cave_Firone_0002::type Cave_Firone_0002;
	Cave_Firone_0008::type Cave_Firone_0008;
	Cave_Firone_0009::type Cave_Firone_0009;
	Cave_Firone_0016::type Cave_Firone_0016;
	Cave_Firone_0020::type Cave_Firone_0020;
	Cave_Firone_0022::type Cave_Firone_0022;
	Cave_Firone_0023::type Cave_Firone_0023;
	Cave_Firone_0024::type Cave_Firone_0024;
	Cave_Firone_0029::type Cave_Firone_0029;
	Cave_FirstPlateau_0001::type Cave_FirstPlateau_0001;
	Cave_FirstPlateau_0002::type Cave_FirstPlateau_0002;
	Cave_GerudoDesert_0007::type Cave_GerudoDesert_0007;
	Cave_GerudoDesert_0008::type Cave_GerudoDesert_0008;
	Cave_GerudoDesert_0015::type Cave_GerudoDesert_0015;
	Cave_GerudoDesert_0022::type Cave_GerudoDesert_0022;
	Cave_GerudoDesert_0030::type Cave_GerudoDesert_0030;
	Cave_GerudoDesert_0031::type Cave_GerudoDesert_0031;
	Cave_GerudoDesert_0032::type Cave_GerudoDesert_0032;
	Cave_GerudoDesert_0035::type Cave_GerudoDesert_0035;
	Cave_GerudoDesert_0036::type Cave_GerudoDesert_0036;
	Cave_GerudoDesert_0037::type Cave_GerudoDesert_0037;
	Cave_GerudoDesert_0039::type Cave_GerudoDesert_0039;
	Cave_GerudoDesert_0040::type Cave_GerudoDesert_0040;
	Cave_GerudoDesert_0041::type Cave_GerudoDesert_0041;
	Cave_GerudoDesert_0043::type Cave_GerudoDesert_0043;
	Cave_GerudoDesert_0044::type Cave_GerudoDesert_0044;
	Cave_GerudoDesert_0045::type Cave_GerudoDesert_0045;
	Cave_GerudoDesert_0046::type Cave_GerudoDesert_0046;
	Cave_GerudoDesert_0049::type Cave_GerudoDesert_0049;
	Cave_GerudoDesert_0050::type Cave_GerudoDesert_0050;
	Cave_GerudoDesert_0051::type Cave_GerudoDesert_0051;
	Cave_GerudoHighlands_0002::type Cave_GerudoHighlands_0002;
	Cave_GerudoHighlands_0008::type Cave_GerudoHighlands_0008;
	Cave_GerudoHighlands_0014::type Cave_GerudoHighlands_0014;
	Cave_GerudoHighlands_0017::type Cave_GerudoHighlands_0017;
	Cave_HateruEast_0000::type Cave_HateruEast_0000;
	Cave_HateruEast_0002::type Cave_HateruEast_0002;
	Cave_HateruEast_0006::type Cave_HateruEast_0006;
	Cave_HateruEast_0007::type Cave_HateruEast_0007;
	Cave_HateruEast_0008::type Cave_HateruEast_0008;
	Cave_HateruEast_0009::type Cave_HateruEast_0009;
	Cave_HateruEast_0013::type Cave_HateruEast_0013;
	Cave_HateruEast_0014::type Cave_HateruEast_0014;
	Cave_HateruEast_0016::type Cave_HateruEast_0016;
	Cave_HateruWest_0002::type Cave_HateruWest_0002;
	Cave_HateruWest_0005::type Cave_HateruWest_0005;
	Cave_HateruWest_0006::type Cave_HateruWest_0006;
	Cave_HateruWest_0008::type Cave_HateruWest_0008;
	Cave_HateruWest_0011::type Cave_HateruWest_0011;
	Cave_HateruWest_0012::type Cave_HateruWest_0012;
	Cave_Hebra_0000::type Cave_Hebra_0000;
	Cave_Hebra_0013::type Cave_Hebra_0013;
	Cave_Hebra_0015::type Cave_Hebra_0015;
	Cave_Hebra_0016::type Cave_Hebra_0016;
	Cave_Hebra_0019::type Cave_Hebra_0019;
	Cave_Hebra_0021::type Cave_Hebra_0021;
	Cave_Hebra_0022::type Cave_Hebra_0022;
	Cave_Hebra_0023::type Cave_Hebra_0023;
	Cave_Hebra_0025::type Cave_Hebra_0025;
	Cave_Hebra_0026::type Cave_Hebra_0026;
	Cave_Hebra_0030::type Cave_Hebra_0030;
	Cave_Hebra_0035::type Cave_Hebra_0035;
	Cave_Hebra_0036::type Cave_Hebra_0036;
	Cave_Hebra_0037::type Cave_Hebra_0037;
	Cave_Hebra_0039::type Cave_Hebra_0039;
	Cave_Hebra_0040::type Cave_Hebra_0040;
	Cave_Hebra_0041::type Cave_Hebra_0041;
	Cave_HyruleForest_0001::type Cave_HyruleForest_0001;
	Cave_HyruleForest_0006::type Cave_HyruleForest_0006;
	Cave_HyruleForest_0007::type Cave_HyruleForest_0007;
	Cave_HyruleForest_0008::type Cave_HyruleForest_0008;
	Cave_HyruleRidge_0000::type Cave_HyruleRidge_0000;
	Cave_HyruleRidge_0002::type Cave_HyruleRidge_0002;
	Cave_HyruleRidge_0003::type Cave_HyruleRidge_0003;
	Cave_HyruleRidge_0004::type Cave_HyruleRidge_0004;
	Cave_HyruleRidge_0005::type Cave_HyruleRidge_0005;
	Cave_HyruleRidge_0006::type Cave_HyruleRidge_0006;
	Cave_HyruleRidge_0007::type Cave_HyruleRidge_0007;
	Cave_HyruleRidge_0008::type Cave_HyruleRidge_0008;
	Cave_Lanayru_0006::type Cave_Lanayru_0006;
	Cave_Lanayru_0008::type Cave_Lanayru_0008;
	Cave_Lanayru_0014::type Cave_Lanayru_0014;
	Cave_Lanayru_0019::type Cave_Lanayru_0019;
	Cave_Lanayru_0024::type Cave_Lanayru_0024;
	Cave_Lanayru_0032::type Cave_Lanayru_0032;
	Cave_Lanayru_0033::type Cave_Lanayru_0033;
	Cave_Lanayru_0035::type Cave_Lanayru_0035;
	Cave_Lanayru_0036::type Cave_Lanayru_0036;
	Cave_Lanayru_0048::type Cave_Lanayru_0048;
	Cave_Lanayru_0049::type Cave_Lanayru_0049;
	Cave_Lanayru_0050::type Cave_Lanayru_0050;
	Cave_Lanayru_0052::type Cave_Lanayru_0052;
	Cave_Lanayru_0053::type Cave_Lanayru_0053;
	Cave_Lanayru_0055::type Cave_Lanayru_0055;
	Cave_Lanayru_0057::type Cave_Lanayru_0057;
	Cave_Lanayru_0060::type Cave_Lanayru_0060;
	Cave_Lanayru_0061::type Cave_Lanayru_0061;
	Cave_Lanayru_0063::type Cave_Lanayru_0063;
	Cave_LanayruMountain_0002::type Cave_LanayruMountain_0002;
	Cave_LanayruMountain_0006::type Cave_LanayruMountain_0006;
	Cave_LanayruMountain_0008::type Cave_LanayruMountain_0008;
	Cave_LanayruMountain_0010::type Cave_LanayruMountain_0010;
	Cave_LanayruMountain_0014::type Cave_LanayruMountain_0014;
	Cave_LanayruMountain_0016::type Cave_LanayruMountain_0016;
	Cave_LanayruMountain_0022::type Cave_LanayruMountain_0022;
	Cave_LanayruMountain_0024::type Cave_LanayruMountain_0024;
	Cave_LanayruMountain_0025::type Cave_LanayruMountain_0025;
	Cave_LanayruMountain_0026::type Cave_LanayruMountain_0026;
	Cave_Tabantha_0001::type Cave_Tabantha_0001;
	Cave_Tabantha_0002::type Cave_Tabantha_0002;
	Cave_Tabantha_0003::type Cave_Tabantha_0003;
	CDungeon::type CDungeon;
	CentralExchange::type CentralExchange;
	ChagaraMt::type ChagaraMt;
	CheckPoint000::type CheckPoint000;
	CheckPoint001::type CheckPoint001;
	CheckPoint002::type CheckPoint002;
	CheckPoint003::type CheckPoint003;
	CheckPoint004::type CheckPoint004;
	CheckPoint005::type CheckPoint005;
	CheckPoint006::type CheckPoint006;
	CheckPoint007::type CheckPoint007;
	CheckPoint008::type CheckPoint008;
	CheckPoint009::type CheckPoint009;
	CheckPoint010::type CheckPoint010;
	CheckPoint011::type CheckPoint011;
	CheckPoint012::type CheckPoint012;
	CheckPoint013::type CheckPoint013;
	CheckPoint014::type CheckPoint014;
	CheckPoint016::type CheckPoint016;
	CheckPoint017::type CheckPoint017;
	CheckPoint018::type CheckPoint018;
	CheckPoint019::type CheckPoint019;
	CheckPoint020::type CheckPoint020;
	CheckPoint021::type CheckPoint021;
	CheckPoint022::type CheckPoint022;
	CheckPoint023::type CheckPoint023;
	CheckPoint024::type CheckPoint024;
	CheckPoint025::type CheckPoint025;
	CheckPoint026::type CheckPoint026;
	CheckPoint027::type CheckPoint027;
	CheckPoint028::type CheckPoint028;
	CheckPoint029::type CheckPoint029;
	CheckPoint030::type CheckPoint030;
	CheckPoint031::type CheckPoint031;
	CheckPoint032::type CheckPoint032;
	CheckPoint033::type CheckPoint033;
	CheckPoint035::type CheckPoint035;
	CheckPoint036::type CheckPoint036;
	CheckPoint037::type CheckPoint037;
	CheckPoint039::type CheckPoint039;
	CheckPoint040::type CheckPoint040;
	CheckPoint041::type CheckPoint041;
	CheckPoint042::type CheckPoint042;
	CheckPoint044::type CheckPoint044;
	CheckPoint046::type CheckPoint046;
	CheckPoint047::type CheckPoint047;
	CheckPoint048::type CheckPoint048;
	CheckPoint049::type CheckPoint049;
	CheckPoint051::type CheckPoint051;
	CheckPoint053::type CheckPoint053;
	CheckPoint054::type CheckPoint054;
	CheckPoint056::type CheckPoint056;
	CheckPoint057::type CheckPoint057;
	CheckPoint058::type CheckPoint058;
	CheckPoint059::type CheckPoint059;
	CheckPoint064::type CheckPoint064;
	CheckPoint065::type CheckPoint065;
	CheckPoint067::type CheckPoint067;
	CheckPoint068::type CheckPoint068;
	CheckPoint070::type CheckPoint070;
	CheckPoint072::type CheckPoint072;
	CheckPoint073::type CheckPoint073;
	CheckPoint074::type CheckPoint074;
	CheckPoint075::type CheckPoint075;
	CheckPoint076::type CheckPoint076;
	CheckPoint077::type CheckPoint077;
	CheckPoint078::type CheckPoint078;
	CheckPoint079::type CheckPoint079;
	CheckPoint080::type CheckPoint080;
	CheckPoint081::type CheckPoint081;
	CheckPoint084::type CheckPoint084;
	CheckPoint085::type CheckPoint085;
	CheckPoint086::type CheckPoint086;
	CheckPoint087::type CheckPoint087;
	CheckPoint088::type CheckPoint088;
	CheckPoint089::type CheckPoint089;
	CheckPoint090::type CheckPoint090;
	CheckPoint091::type CheckPoint091;
	CheckPoint092::type CheckPoint092;
	CheckPoint094::type CheckPoint094;
	CheckPoint095::type CheckPoint095;
	CheckPoint096::type CheckPoint096;
	CheckPoint097::type CheckPoint097;
	CheckPoint098::type CheckPoint098;
	CheckPoint100::type CheckPoint100;
	CheckPoint101::type CheckPoint101;
	CheckPoint102::type CheckPoint102;
	CheckPoint103::type CheckPoint103;
	CheckPoint104::type CheckPoint104;
	CheckPoint106::type CheckPoint106;
	CheckPoint107::type CheckPoint107;
	CheckPoint108::type CheckPoint108;
	CheckPoint111::type CheckPoint111;
	CheckPoint112::type CheckPoint112;
	CheckPoint113::type CheckPoint113;
	CheckPoint114::type CheckPoint114;
	CheckPoint115::type CheckPoint115;
	CheckPoint116::type CheckPoint116;
	CheckPoint118::type CheckPoint118;
	CheckPoint119::type CheckPoint119;
	CheckPoint120::type CheckPoint120;
	CheckPoint122::type CheckPoint122;
	CheckPoint123::type CheckPoint123;
	CheckPoint124::type CheckPoint124;
	CheckPoint125::type CheckPoint125;
	CheckPoint126::type CheckPoint126;
	CheckPoint129::type CheckPoint129;
	CheckPoint130::type CheckPoint130;
	CheckPoint131::type CheckPoint131;
	CheckPoint132::type CheckPoint132;
	CheckPoint133::type CheckPoint133;
	CheckPoint134::type CheckPoint134;
	CheckPoint135::type CheckPoint135;
	CheckPoint136::type CheckPoint136;
	CheckPoint137::type CheckPoint137;
	CheckPoint138::type CheckPoint138;
	CheckPoint139::type CheckPoint139;
	CheckPoint140::type CheckPoint140;
	CheckPoint141::type CheckPoint141;
	CheckPoint142::type CheckPoint142;
	CheckPoint143::type CheckPoint143;
	CheckPoint144::type CheckPoint144;
	CheckPoint147::type CheckPoint147;
	ChirakaVillage::type ChirakaVillage;
	ChuonoPond::type ChuonoPond;
	Circuit_Ichikara::type Circuit_Ichikara;
	Circuit_Uotori::type Circuit_Uotori;
	City_BaseCamp::type City_BaseCamp;
	Cohorint::type Cohorint;
	Cokiri::type Cokiri;
	CookingShop::type CookingShop;
	Corosseo::type Corosseo;
	CresiaPeninsula::type CresiaPeninsula;
	DamzelForest::type DamzelForest;
	DanioPlain::type DanioPlain;
	DarinoPond::type DarinoPond;
	DasukidaMt::type DasukidaMt;
	DasukidaPlateau::type DasukidaPlateau;
	DatsuPlain::type DatsuPlain;
	DeathCaldera::type DeathCaldera;
	DeathMountain_Entrance::type DeathMountain_Entrance;
	DeathMountainHatago::type DeathMountainHatago;
	DeathMountainWestWorkshop::type DeathMountainWestWorkshop;
	DeepHole_AkkareSkull::type DeepHole_AkkareSkull;
	DeepHole_B_6_AssasisnBoss::type DeepHole_B_6_AssasisnBoss;
	DeepHole_B_6_Tower::type DeepHole_B_6_Tower;
	DeepHole_Chikurun::type DeepHole_Chikurun;
	DeepHole_Cokiri::type DeepHole_Cokiri;
	DeepHole_DeathMountain::type DeepHole_DeathMountain;
	DeepHole_Firone::type DeepHole_Firone;
	DeepHole_FirstLandEast::type DeepHole_FirstLandEast;
	DeepHole_FirstLandNorth::type DeepHole_FirstLandNorth;
	DeepHole_FirstLandSouth::type DeepHole_FirstLandSouth;
	DeepHole_FirstLandWest::type DeepHole_FirstLandWest;
	DeepHole_GerudoMaze::type DeepHole_GerudoMaze;
	DeepHole_GerudoSummit::type DeepHole_GerudoSummit;
	DeepHole_Higakkare::type DeepHole_Higakkare;
	DeepHole_HimeidaMt::type DeepHole_HimeidaMt;
	DeepHole_HyruleCastle::type DeepHole_HyruleCastle;
	DeepHole_HyruleCastleEast::type DeepHole_HyruleCastleEast;
	DeepHole_HyruleCastleWest::type DeepHole_HyruleCastleWest;
	DeepHole_HyruleLake::type DeepHole_HyruleLake;
	DeepHole_HyrulePlains::type DeepHole_HyrulePlains;
	DeepHole_ImeruMt::type DeepHole_ImeruMt;
	DeepHole_Kakariko_EastHill::type DeepHole_Kakariko_EastHill;
	DeepHole_KiyanbaTrees::type DeepHole_KiyanbaTrees;
	DeepHole_LomeiIsland::type DeepHole_LomeiIsland;
	DeepHole_Minakkare::type DeepHole_Minakkare;
	DeepHole_RirimukuMt::type DeepHole_RirimukuMt;
	DeepHole_Rito::type DeepHole_Rito;
	DeepHole_Saihateno::type DeepHole_Saihateno;
	DeepHole_SanaePlateau::type DeepHole_SanaePlateau;
	DeepHole_TabantaMaze::type DeepHole_TabantaMaze;
	DeepHole_YuaSnow::type DeepHole_YuaSnow;
	DeepHole_ZifForest::type DeepHole_ZifForest;
	DekamuPlain::type DekamuPlain;
	DemonStatue_00::type DemonStatue_00;
	DemonStatue_01::type DemonStatue_01;
	DemonStatue_02::type DemonStatue_02;
	DemonStatue_03::type DemonStatue_03;
	DemonStatue_04::type DemonStatue_04;
	DemonStatue_05::type DemonStatue_05;
	DodoraBridge::type DodoraBridge;
	DokamamaPlain::type DokamamaPlain;
	DokuroPond::type DokuroPond;
	DonLake::type DonLake;
	DotiBeach::type DotiBeach;
	DragonMarsh::type DragonMarsh;
	DragonsFar::type DragonsFar;
	DragonTears01::type DragonTears01;
	DragonTears02::type DragonTears02;
	DragonTears03::type DragonTears03;
	DragonTears04::type DragonTears04;
	DragonTears05::type DragonTears05;
	DragonTears06::type DragonTears06;
	DragonTears07::type DragonTears07;
	DragonTears08::type DragonTears08;
	DragonTears09::type DragonTears09;
	DragonTears10::type DragonTears10;
	DragonTears11::type DragonTears11;
	DragonTears12::type DragonTears12;
	Dungeon000::type Dungeon000;
	Dungeon001::type Dungeon001;
	Dungeon002::type Dungeon002;
	Dungeon003::type Dungeon003;
	Dungeon004::type Dungeon004;
	Dungeon005::type Dungeon005;
	Dungeon006::type Dungeon006;
	Dungeon007::type Dungeon007;
	Dungeon008::type Dungeon008;
	Dungeon009::type Dungeon009;
	Dungeon010::type Dungeon010;
	Dungeon011::type Dungeon011;
	Dungeon012::type Dungeon012;
	Dungeon013::type Dungeon013;
	Dungeon014::type Dungeon014;
	Dungeon015::type Dungeon015;
	Dungeon016::type Dungeon016;
	Dungeon017::type Dungeon017;
	Dungeon018::type Dungeon018;
	Dungeon019::type Dungeon019;
	Dungeon020::type Dungeon020;
	Dungeon021::type Dungeon021;
	Dungeon022::type Dungeon022;
	Dungeon023::type Dungeon023;
	Dungeon024::type Dungeon024;
	Dungeon025::type Dungeon025;
	Dungeon026::type Dungeon026;
	Dungeon027::type Dungeon027;
	Dungeon028::type Dungeon028;
	Dungeon029::type Dungeon029;
	Dungeon030::type Dungeon030;
	Dungeon031::type Dungeon031;
	Dungeon032::type Dungeon032;
	Dungeon033::type Dungeon033;
	Dungeon034::type Dungeon034;
	Dungeon035::type Dungeon035;
	Dungeon036::type Dungeon036;
	Dungeon037::type Dungeon037;
	Dungeon038::type Dungeon038;
	Dungeon039::type Dungeon039;
	Dungeon040::type Dungeon040;
	Dungeon041::type Dungeon041;
	Dungeon042::type Dungeon042;
	Dungeon043::type Dungeon043;
	Dungeon044::type Dungeon044;
	Dungeon045::type Dungeon045;
	Dungeon046::type Dungeon046;
	Dungeon047::type Dungeon047;
	Dungeon048::type Dungeon048;
	Dungeon049::type Dungeon049;
	Dungeon050::type Dungeon050;
	Dungeon051::type Dungeon051;
	Dungeon052::type Dungeon052;
	Dungeon053::type Dungeon053;
	Dungeon054::type Dungeon054;
	Dungeon055::type Dungeon055;
	Dungeon056::type Dungeon056;
	Dungeon057::type Dungeon057;
	Dungeon058::type Dungeon058;
	Dungeon059::type Dungeon059;
	Dungeon060::type Dungeon060;
	Dungeon061::type Dungeon061;
	Dungeon062::type Dungeon062;
	Dungeon063::type Dungeon063;
	Dungeon064::type Dungeon064;
	Dungeon065::type Dungeon065;
	Dungeon066::type Dungeon066;
	Dungeon067::type Dungeon067;
	Dungeon068::type Dungeon068;
	Dungeon069::type Dungeon069;
	Dungeon070::type Dungeon070;
	Dungeon071::type Dungeon071;
	Dungeon072::type Dungeon072;
	Dungeon073::type Dungeon073;
	Dungeon074::type Dungeon074;
	Dungeon075::type Dungeon075;
	Dungeon076::type Dungeon076;
	Dungeon077::type Dungeon077;
	Dungeon078::type Dungeon078;
	Dungeon079::type Dungeon079;
	Dungeon080::type Dungeon080;
	Dungeon081::type Dungeon081;
	Dungeon082::type Dungeon082;
	Dungeon083::type Dungeon083;
	Dungeon084::type Dungeon084;
	Dungeon085::type Dungeon085;
	Dungeon086::type Dungeon086;
	Dungeon087::type Dungeon087;
	Dungeon088::type Dungeon088;
	Dungeon089::type Dungeon089;
	Dungeon090::type Dungeon090;
	Dungeon091::type Dungeon091;
	Dungeon092::type Dungeon092;
	Dungeon093::type Dungeon093;
	Dungeon094::type Dungeon094;
	Dungeon095::type Dungeon095;
	Dungeon096::type Dungeon096;
	Dungeon097::type Dungeon097;
	Dungeon098::type Dungeon098;
	Dungeon099::type Dungeon099;
	Dungeon100::type Dungeon100;
	Dungeon101::type Dungeon101;
	Dungeon102::type Dungeon102;
	Dungeon103::type Dungeon103;
	Dungeon104::type Dungeon104;
	Dungeon105::type Dungeon105;
	Dungeon106::type Dungeon106;
	Dungeon107::type Dungeon107;
	Dungeon108::type Dungeon108;
	Dungeon109::type Dungeon109;
	Dungeon110::type Dungeon110;
	Dungeon111::type Dungeon111;
	Dungeon112::type Dungeon112;
	Dungeon113::type Dungeon113;
	Dungeon114::type Dungeon114;
	Dungeon115::type Dungeon115;
	Dungeon116::type Dungeon116;
	Dungeon117::type Dungeon117;
	Dungeon118::type Dungeon118;
	Dungeon119::type Dungeon119;
	Dungeon120::type Dungeon120;
	Dungeon121::type Dungeon121;
	Dungeon122::type Dungeon122;
	Dungeon123::type Dungeon123;
	Dungeon124::type Dungeon124;
	Dungeon125::type Dungeon125;
	Dungeon126::type Dungeon126;
	Dungeon127::type Dungeon127;
	Dungeon128::type Dungeon128;
	Dungeon129::type Dungeon129;
	Dungeon130::type Dungeon130;
	Dungeon131::type Dungeon131;
	Dungeon132::type Dungeon132;
	Dungeon133::type Dungeon133;
	Dungeon134::type Dungeon134;
	Dungeon135::type Dungeon135;
	Dungeon136::type Dungeon136;
	Dungeon137::type Dungeon137;
	Dungeon138::type Dungeon138;
	Dungeon139::type Dungeon139;
	Dungeon140::type Dungeon140;
	Dungeon141::type Dungeon141;
	Dungeon142::type Dungeon142;
	Dungeon143::type Dungeon143;
	Dungeon144::type Dungeon144;
	Dungeon145::type Dungeon145;
	Dungeon146::type Dungeon146;
	Dungeon147::type Dungeon147;
	Dungeon148::type Dungeon148;
	Dungeon149::type Dungeon149;
	Dungeon150::type Dungeon150;
	Dungeon151::type Dungeon151;
	EagleBridge::type EagleBridge;
	EastDam::type EastDam;
	EastEunpoHighlands::type EastEunpoHighlands;
	EastGerudo::type EastGerudo;
	EastGerudoPlateau::type EastGerudoPlateau;
	EastGerudoRuins::type EastGerudoRuins;
	EastPostTownRuin::type EastPostTownRuin;
	EastShrine::type EastShrine;
	EldinRestaurants::type EldinRestaurants;
	ElegLake::type ElegLake;
	EnRiver::type EnRiver;
	EquePlateau::type EquePlateau;
	ErumedaPlateau::type ErumedaPlateau;
	EunpoHighlands::type EunpoHighlands;
	EX_LowGravityIsland::type EX_LowGravityIsland;
	Execution::type Execution;
	ExpaTrees::type ExpaTrees;
	EzzuBridge::type EzzuBridge;
	FairyForest::type FairyForest;
	FaronHatago000::type FaronHatago000;
	FaronHatago001::type FaronHatago001;
	FaronHatago002::type FaronHatago002;
	FenaMt::type FenaMt;
	FeoreRiver::type FeoreRiver;
	FigureGallery::type FigureGallery;
	FinrasForest::type FinrasForest;
	FironeForestEntrance::type FironeForestEntrance;
	FlamingoSpa::type FlamingoSpa;
	FlogPond::type FlogPond;
	FloriaBridge::type FloriaBridge;
	FloriaFalls::type FloriaFalls;
	FloriaRiver::type FloriaRiver;
	FlowerSandbank::type FlowerSandbank;
	ForestHatago::type ForestHatago;
	ForgeShopGolem::type ForgeShopGolem;
	FrontGatePosttown::type FrontGatePosttown;
	FuruboLake::type FuruboLake;
	GakanakkyoPlain::type GakanakkyoPlain;
	GameBitalockGolf::type GameBitalockGolf;
	GameGutsCriff::type GameGutsCriff;
	GameShiledSurf::type GameShiledSurf;
	GamettaPlateau::type GamettaPlateau;
	GaneLake::type GaneLake;
	GarakishiPass::type GarakishiPass;
	GarakishiVillage::type GarakishiVillage;
	GasemaDam::type GasemaDam;
	GasemaRiver::type GasemaRiver;
	GashamaHill::type GashamaHill;
	GashamahiMt::type GashamahiMt;
	GatakaraGarrison::type GatakaraGarrison;
	GatakaraPond::type GatakaraPond;
	GatinLake::type GatinLake;
	GenLake::type GenLake;
	GeraRiver::type GeraRiver;
	Gerudo::type Gerudo;
	GerudoCanyon::type GerudoCanyon;
	GerudoCanyon_Entrance::type GerudoCanyon_Entrance;
	GerudoDesert_Entrance::type GerudoDesert_Entrance;
	GerudoDesertCrack::type GerudoDesertCrack;
	GerudoEightHeroStatue::type GerudoEightHeroStatue;
	GerudoHatago::type GerudoHatago;
	GerudoPyramidDungeon_1::type GerudoPyramidDungeon_1;
	GerudoPyramidDungeon_2::type GerudoPyramidDungeon_2;
	GerudoPyramidDungeon_3::type GerudoPyramidDungeon_3;
	GerudoPyramidDungeon_4::type GerudoPyramidDungeon_4;
	GerudoPyramidDungeon_5::type GerudoPyramidDungeon_5;
	GerudoPyramidDungeon_6::type GerudoPyramidDungeon_6;
	GerudoPyramidDungeon_7::type GerudoPyramidDungeon_7;
	GerudoSummit::type GerudoSummit;
	GerudoUndergroundTown::type GerudoUndergroundTown;
	GiankonIsland::type GiankonIsland;
	GibogaHill::type GibogaHill;
	GibururuMt::type GibururuMt;
	GigiLake::type GigiLake;
	GiminoPond::type GiminoPond;
	GimpoMt::type GimpoMt;
	GisaHill::type GisaHill;
	GishiHill::type GishiHill;
	GoanaValley::type GoanaValley;
	GobyMt::type GobyMt;
	GoinaPlateau::type GoinaPlateau;
	Goron::type Goron;
	GoronBridge::type GoronBridge;
	GoronSpa::type GoronSpa;
	GoyoLake::type GoyoLake;
	GumaroValley::type GumaroValley;
	GutinizaPlain::type GutinizaPlain;
	GutinizaPlainTomb::type GutinizaPlainTomb;
	GyunaIsland::type GyunaIsland;
	HachijoBridge::type HachijoBridge;
	HagoromoLake::type HagoromoLake;
	HamiyonPlain::type HamiyonPlain;
	HarayaLake::type HarayaLake;
	HashibiroLake::type HashibiroLake;
	Hateno::type Hateno;
	HatenoBay::type HatenoBay;
	HatenoBeach::type HatenoBeach;
	HatenoFarm::type HatenoFarm;
	HatenoGate::type HatenoGate;
	HatenokoIsland::type HatenokoIsland;
	HatenoLabo::type HatenoLabo;
	HatenoSchool::type HatenoSchool;
	HawkMt::type HawkMt;
	HeburaEastSummit::type HeburaEastSummit;
	HeburaIcicle::type HeburaIcicle;
	HeburaLodge::type HeburaLodge;
	HeburaMt_North::type HeburaMt_North;
	HeburaNorthSummit::type HeburaNorthSummit;
	HeburaPeak::type HeburaPeak;
	HeburaSouthSummit::type HeburaSouthSummit;
	HeburaTundera::type HeburaTundera;
	HeburaWestSummit::type HeburaWestSummit;
	HemaHill::type HemaHill;
	HesonaiValley::type HesonaiValley;
	HigakkareBeach::type HigakkareBeach;
	HigakkarePlain::type HigakkarePlain;
	HigashinoBay::type HigashinoBay;
	HimeidaMt::type HimeidaMt;
	HopeBridge::type HopeBridge;
	HopesPlateau::type HopesPlateau;
	HorseStableBranchOffice_BaseCamp::type HorseStableBranchOffice_BaseCamp;
	HorseStableBranchOffice_Gerudo::type HorseStableBranchOffice_Gerudo;
	HyliaMt::type HyliaMt;
	HyliaRiver::type HyliaRiver;
	HyralBridge::type HyralBridge;
	HyralIslands::type HyralIslands;
	Hyrule_Out::type Hyrule_Out;
	HyruleCastle::type HyruleCastle;
	HyruleCastle_Hall_0::type HyruleCastle_Hall_0;
	HyruleCastle_Hall_1::type HyruleCastle_Hall_1;
	HyruleCastle_Hall_2::type HyruleCastle_Hall_2;
	HyruleCastle_Room_0::type HyruleCastle_Room_0;
	HyruleCastle_Room_1::type HyruleCastle_Room_1;
	HyruleCastle_Room_10::type HyruleCastle_Room_10;
	HyruleCastle_Room_11::type HyruleCastle_Room_11;
	HyruleCastle_Room_2::type HyruleCastle_Room_2;
	HyruleCastle_Room_3::type HyruleCastle_Room_3;
	HyruleCastle_Room_5::type HyruleCastle_Room_5;
	HyruleCastle_Room_6::type HyruleCastle_Room_6;
	HyruleCastle_Room_7::type HyruleCastle_Room_7;
	HyruleCastle_Room_8::type HyruleCastle_Room_8;
	HyruleCastle_Room_9::type HyruleCastle_Room_9;
	HyruleCastleUnderground::type HyruleCastleUnderground;
	HyruleCave::type HyruleCave;
	HyruleCentralPlace::type HyruleCentralPlace;
	HyruleDepthHatago::type HyruleDepthHatago;
	HyruleEastTown::type HyruleEastTown;
	HyruleGarrison::type HyruleGarrison;
	HyruleGround::type HyruleGround;
	HyruleLabo::type HyruleLabo;
	HyrulePark::type HyrulePark;
	HyrulePlace::type HyrulePlace;
	HyruleSkyIsland::type HyruleSkyIsland;
	HyruleTemple::type HyruleTemple;
	HyruleTower::type HyruleTower;
	HyruleUnderground::type HyruleUnderground;
	HyruleWater::type HyruleWater;
	HyruleWestTown::type HyruleWestTown;
	IbaraPlateau::type IbaraPlateau;
	IceHouse::type IceHouse;
	IkokoPlateau::type IkokoPlateau;
	ImeruMt::type ImeruMt;
	InvestigatingGroupBase::type InvestigatingGroupBase;
	IooValley::type IooValley;
	IrimoLake::type IrimoLake;
	IrimoRiver::type IrimoRiver;
	IsakiCape::type IsakiCape;
	IsakuIslands::type IsakuIslands;
	JedaPlateau::type JedaPlateau;
	JijigegeMt::type JijigegeMt;
	JiuRiver::type JiuRiver;
	JogoBridge::type JogoBridge;
	JokuBridge::type JokuBridge;
	KagossaMt::type KagossaMt;
	KaiyanPlain::type KaiyanPlain;
	KakamoLake::type KakamoLake;
	KakaomePlain::type KakaomePlain;
	Kakariko::type Kakariko;
	Kakariko_EastHill::type Kakariko_EastHill;
	KakufusaPlain::type KakufusaPlain;
	KamasuPlateau::type KamasuPlateau;
	KamutariPlateau::type KamutariPlateau;
	KapporeMt::type KapporeMt;
	KarimikiLake::type KarimikiLake;
	KarusaValley::type KarusaValley;
	KasuraMt::type KasuraMt;
	KattoriPlateau::type KattoriPlateau;
	KaturaCastle::type KaturaCastle;
	KaturaRiver::type KaturaRiver;
	KauLake::type KauLake;
	KazanaDungeon::type KazanaDungeon;
	KazuryuLake::type KazuryuLake;
	KazuryuRiver::type KazuryuRiver;
	KazusuPass::type KazusuPass;
	KibakkaSnow::type KibakkaSnow;
	KibinaLake::type KibinaLake;
	KihirePlain::type KihirePlain;
	KikinosaMt::type KikinosaMt;
	KikinosaPlain::type KikinosaPlain;
	KimarikaMt::type KimarikaMt;
	KimarikaPlateau::type KimarikaPlateau;
	KingfisherSpa::type KingfisherSpa;
	KingValley::type KingValley;
	KingValley2::type KingValley2;
	KinmePlateau::type KinmePlateau;
	KinshoiMt::type KinshoiMt;
	KirisasaPlateau::type KirisasaPlateau;
	KiriyabuMt::type KiriyabuMt;
	KitakkareBeach::type KitakkareBeach;
	KitakkarePlain::type KitakkarePlain;
	KitakkarePlateau::type KitakkarePlateau;
	KitanoBay::type KitanoBay;
	KiyanbaTrees::type KiyanbaTrees;
	KochuBridge::type KochuBridge;
	KoganeyaLake::type KoganeyaLake;
	KokuppiSnow::type KokuppiSnow;
	KokuwaLake::type KokuwaLake;
	KomoreBeach::type KomoreBeach;
	KondanaLake::type KondanaLake;
	KoshaIsland::type KoshaIsland;
	KuhanLake::type KuhanLake;
	KukujaValley::type KukujaValley;
	KumPlateau::type KumPlateau;
	KumSpa::type KumSpa;
	KunaiBridge::type KunaiBridge;
	KunaiLake::type KunaiLake;
	KurindaPrairie::type KurindaPrairie;
	KurisobeSnow::type KurisobeSnow;
	KuroidaPlateau::type KuroidaPlateau;
	KutenLake::type KutenLake;
	KutiffMt::type KutiffMt;
	LakeFloria::type LakeFloria;
	LakeHylia::type LakeHylia;
	LakeHylia_Sky::type LakeHylia_Sky;
	LakeHylia_Underground::type LakeHylia_Underground;
	LanayruBay::type LanayruBay;
	LanayruEastEntrance::type LanayruEastEntrance;
	LanayruWestEntrance::type LanayruWestEntrance;
	LargeDungeonFire::type LargeDungeonFire;
	LargeDungeonFire_1F::type LargeDungeonFire_1F;
	LargeDungeonFire_2F::type LargeDungeonFire_2F;
	LargeDungeonFire_3F::type LargeDungeonFire_3F;
	LargeDungeonFire_4F::type LargeDungeonFire_4F;
	LargeDungeonFire_5F::type LargeDungeonFire_5F;
	LargeDungeonHyruleCastle::type LargeDungeonHyruleCastle;
	LargeDungeonHyruleCastle_1F::type LargeDungeonHyruleCastle_1F;
	LargeDungeonHyruleCastle_B1::type LargeDungeonHyruleCastle_B1;
	LargeDungeonHyruleCastle_B2::type LargeDungeonHyruleCastle_B2;
	LargeDungeonHyruleCastle_B3::type LargeDungeonHyruleCastle_B3;
	LargeDungeonSoul::type LargeDungeonSoul;
	LargeDungeonThunder::type LargeDungeonThunder;
	LargeDungeonThunder_1F::type LargeDungeonThunder_1F;
	LargeDungeonThunder_2F::type LargeDungeonThunder_2F;
	LargeDungeonThunder_3F::type LargeDungeonThunder_3F;
	LargeDungeonThunder_4F::type LargeDungeonThunder_4F;
	LargeDungeonThunder_5F::type LargeDungeonThunder_5F;
	LargeDungeonThunder_6F::type LargeDungeonThunder_6F;
	LargeDungeonThunder_7F::type LargeDungeonThunder_7F;
	LargeDungeonThunder_B1::type LargeDungeonThunder_B1;
	LargeDungeonWater::type LargeDungeonWater;
	LargeDungeonWater_B1::type LargeDungeonWater_B1;
	LargeDungeonWind::type LargeDungeonWind;
	LargeDungeonWind_1F::type LargeDungeonWind_1F;
	LargeDungeonWind_B1::type LargeDungeonWind_B1;
	LargeDungeonWind_B2::type LargeDungeonWind_B2;
	LaveBeach::type LaveBeach;
	LeMarbeBridge::type LeMarbeBridge;
	LightningPlateau::type LightningPlateau;
	LittleBrotherBridge::type LittleBrotherBridge;
	LomeiIslands::type LomeiIslands;
	LostForest::type LostForest;
	MacusePeninsula::type MacusePeninsula;
	MakuminoValley::type MakuminoValley;
	ManbaLake::type ManbaLake;
	MapArea_CentralHyrule::type MapArea_CentralHyrule;
	MapArea_DeathMountain::type MapArea_DeathMountain;
	MapArea_DeathMountain_Sky::type MapArea_DeathMountain_Sky;
	MapArea_DeathMountain_Underground::type MapArea_DeathMountain_Underground;
	MapArea_EastHateru::type MapArea_EastHateru;
	MapArea_EastHateru_Sky::type MapArea_EastHateru_Sky;
	MapArea_EastHateru_Underground::type MapArea_EastHateru_Underground;
	MapArea_EldinCanyon::type MapArea_EldinCanyon;
	MapArea_EldinCanyon_Sky::type MapArea_EldinCanyon_Sky;
	MapArea_EldinCanyon_Underground::type MapArea_EldinCanyon_Underground;
	MapArea_EldinMountains::type MapArea_EldinMountains;
	MapArea_EldinMountains_Sky::type MapArea_EldinMountains_Sky;
	MapArea_EldinMountains_Underground::type MapArea_EldinMountains_Underground;
	MapArea_FironeGrassland::type MapArea_FironeGrassland;
	MapArea_FironeGrassland_Sky::type MapArea_FironeGrassland_Sky;
	MapArea_FironeGrassland_Underground::type MapArea_FironeGrassland_Underground;
	MapArea_FironeSea::type MapArea_FironeSea;
	MapArea_FironeSea_Sky::type MapArea_FironeSea_Sky;
	MapArea_FironeSea_Underground::type MapArea_FironeSea_Underground;
	MapArea_GerudoDesert::type MapArea_GerudoDesert;
	MapArea_GerudoDesert_Sky::type MapArea_GerudoDesert_Sky;
	MapArea_GerudoDesert_Underground::type MapArea_GerudoDesert_Underground;
	MapArea_GerudoHighlands::type MapArea_GerudoHighlands;
	MapArea_GerudoHighlands_Sky::type MapArea_GerudoHighlands_Sky;
	MapArea_GerudoHighlands_Underground::type MapArea_GerudoHighlands_Underground;
	MapArea_HateruSea::type MapArea_HateruSea;
	MapArea_HateruSea_Sky::type MapArea_HateruSea_Sky;
	MapArea_HateruSea_Underground::type MapArea_HateruSea_Underground;
	MapArea_HeburaMountains::type MapArea_HeburaMountains;
	MapArea_HeburaMountains_Sky::type MapArea_HeburaMountains_Sky;
	MapArea_HeburaMountains_Underground::type MapArea_HeburaMountains_Underground;
	MapArea_HyliaLake::type MapArea_HyliaLake;
	MapArea_HyruleForest::type MapArea_HyruleForest;
	MapArea_HyruleForest_Sky::type MapArea_HyruleForest_Sky;
	MapArea_HyruleForest_Underground::type MapArea_HyruleForest_Underground;
	MapArea_HyruleHill::type MapArea_HyruleHill;
	MapArea_HyruleHill_Sky::type MapArea_HyruleHill_Sky;
	MapArea_HyruleHill_Underground::type MapArea_HyruleHill_Underground;
	MapArea_LanayruSea::type MapArea_LanayruSea;
	MapArea_LanayruSea_Sky::type MapArea_LanayruSea_Sky;
	MapArea_LanayruSea_Underground::type MapArea_LanayruSea_Underground;
	MapArea_LanayruWaterSources::type MapArea_LanayruWaterSources;
	MapArea_LanayruWaterSources_Sky::type MapArea_LanayruWaterSources_Sky;
	MapArea_LanayruWaterSources_Underground::type MapArea_LanayruWaterSources_Underground;
	MapArea_LanayruWetlands::type MapArea_LanayruWetlands;
	MapArea_LanayruWetlands_Sky::type MapArea_LanayruWetlands_Sky;
	MapArea_LanayruWetlands_Underground::type MapArea_LanayruWetlands_Underground;
	MapArea_LiveMountain::type MapArea_LiveMountain;
	MapArea_LiveMountain_Sky::type MapArea_LiveMountain_Sky;
	MapArea_LiveMountain_Underground::type MapArea_LiveMountain_Underground;
	MapArea_TabantaFrontier::type MapArea_TabantaFrontier;
	MapArea_TabantaFrontier_Sky::type MapArea_TabantaFrontier_Sky;
	MapArea_TabantaFrontier_Underground::type MapArea_TabantaFrontier_Underground;
	MapArea_TamulOutback::type MapArea_TamulOutback;
	MapArea_TamulOutback_Sky::type MapArea_TamulOutback_Sky;
	MapArea_TamulOutback_Underground::type MapArea_TamulOutback_Underground;
	MapArea_TamulPlateau::type MapArea_TamulPlateau;
	MapArea_TamulPlateau_Sky::type MapArea_TamulPlateau_Sky;
	MapArea_TamulPlateau_Underground::type MapArea_TamulPlateau_Underground;
	MapArea_TamulSea::type MapArea_TamulSea;
	MapArea_TamulSea_Sky::type MapArea_TamulSea_Sky;
	MapArea_TamulSea_Underground::type MapArea_TamulSea_Underground;
	MapArea_WestHateru::type MapArea_WestHateru;
	MapArea_WestHateru_Sky::type MapArea_WestHateru_Sky;
	MapArea_WestHateru_Underground::type MapArea_WestHateru_Underground;
	MapRegion_Eldin::type MapRegion_Eldin;
	MapRegion_Eldin_Sky::type MapRegion_Eldin_Sky;
	MapRegion_Firone::type MapRegion_Firone;
	MapRegion_Firone_Sky::type MapRegion_Firone_Sky;
	MapRegion_Gerudo::type MapRegion_Gerudo;
	MapRegion_Gerudo_Sky::type MapRegion_Gerudo_Sky;
	MapRegion_Hateru::type MapRegion_Hateru;
	MapRegion_Hateru_Sky::type MapRegion_Hateru_Sky;
	MapRegion_Hebura::type MapRegion_Hebura;
	MapRegion_Hebura_Sky::type MapRegion_Hebura_Sky;
	MapRegion_HyrulePrairie::type MapRegion_HyrulePrairie;
	MapRegion_HyrulePrairie_Sky::type MapRegion_HyrulePrairie_Sky;
	MapRegion_HyrulePrairie_Underground::type MapRegion_HyrulePrairie_Underground;
	MapRegion_Lanayru::type MapRegion_Lanayru;
	MapRegion_Lanayru_Sky::type MapRegion_Lanayru_Sky;
	MapRegion_Tamul::type MapRegion_Tamul;
	MapRegion_Tamul_Sky::type MapRegion_Tamul_Sky;
	MarittaHill::type MarittaHill;
	MarittaPrairie::type MarittaPrairie;
	MaronSpring::type MaronSpring;
	MarritaExchange::type MarritaExchange;
	MasazuBridge::type MasazuBridge;
	MasazuRock::type MasazuRock;
	MedakaValley::type MedakaValley;
	MeganeRock::type MeganeRock;
	MemeMt::type MemeMt;
	MenadaBeach::type MenadaBeach;
	MerkayaLowTrees::type MerkayaLowTrees;
	MezusuPass::type MezusuPass;
	MiddleTrees::type MiddleTrees;
	MihekoBay::type MihekoBay;
	MinakkareBridge::type MinakkareBridge;
	MinakkareBridgeEast::type MinakkareBridgeEast;
	MinakkareBridgeWest::type MinakkareBridgeWest;
	MinakkareFalls::type MinakkareFalls;
	MinakkareLake::type MinakkareLake;
	MinakkarePlain::type MinakkarePlain;
	MinaminoBay::type MinaminoBay;
	Mine::type Mine;
	MinusField::type MinusField;
	MinusField_AagetoMt::type MinusField_AagetoMt;
	MinusField_AkkareZhai::type MinusField_AkkareZhai;
	MinusField_AncientColosseum::type MinusField_AncientColosseum;
	MinusField_AncientTimeShrine::type MinusField_AncientTimeShrine;
	MinusField_BarakkPlain::type MinusField_BarakkPlain;
	MinusField_BiginaTrees::type MinusField_BiginaTrees;
	MinusField_BlindForest::type MinusField_BlindForest;
	MinusField_BluePrintShrine::type MinusField_BluePrintShrine;
	MinusField_BraveFountain::type MinusField_BraveFountain;
	MinusField_BuibuiTrees::type MinusField_BuibuiTrees;
	MinusField_Cohorint::type MinusField_Cohorint;
	MinusField_CresiaPeninsula::type MinusField_CresiaPeninsula;
	MinusField_DasukidaMt::type MinusField_DasukidaMt;
	MinusField_DesertGrave::type MinusField_DesertGrave;
	MinusField_DokuroPond::type MinusField_DokuroPond;
	MinusField_ExpaTrees::type MinusField_ExpaTrees;
	MinusField_FairyForest::type MinusField_FairyForest;
	MinusField_FenaMt::type MinusField_FenaMt;
	MinusField_FlamingoSpa::type MinusField_FlamingoSpa;
	MinusField_ForestColosseum::type MinusField_ForestColosseum;
	MinusField_GanondorfArea::type MinusField_GanondorfArea;
	MinusField_GanondorfEnd::type MinusField_GanondorfEnd;
	MinusField_GanondorfEntrance::type MinusField_GanondorfEntrance;
	MinusField_GashamahiMt::type MinusField_GashamahiMt;
	MinusField_Gerudo::type MinusField_Gerudo;
	MinusField_GerudoFossil::type MinusField_GerudoFossil;
	MinusField_GerudoSummit::type MinusField_GerudoSummit;
	MinusField_GibogaHill::type MinusField_GibogaHill;
	MinusField_GibururuMt::type MinusField_GibururuMt;
	MinusField_GimpoMt::type MinusField_GimpoMt;
	MinusField_GobyLake::type MinusField_GobyLake;
	MinusField_GobyMt::type MinusField_GobyMt;
	MinusField_Goron::type MinusField_Goron;
	MinusField_Hateno::type MinusField_Hateno;
	MinusField_HatenoGate::type MinusField_HatenoGate;
	MinusField_HawkMt::type MinusField_HawkMt;
	MinusField_HeburaFossil::type MinusField_HeburaFossil;
	MinusField_HeburaPeak::type MinusField_HeburaPeak;
	MinusField_HimeidaMt::type MinusField_HimeidaMt;
	MinusField_HimeidaSpa::type MinusField_HimeidaSpa;
	MinusField_HyliaMt::type MinusField_HyliaMt;
	MinusField_JijigegeMt::type MinusField_JijigegeMt;
	MinusField_Kakariko::type MinusField_Kakariko;
	MinusField_KapporeMt::type MinusField_KapporeMt;
	MinusField_KasuraMt::type MinusField_KasuraMt;
	MinusField_KazuryuLake::type MinusField_KazuryuLake;
	MinusField_KikinosaMt::type MinusField_KikinosaMt;
	MinusField_KimarikaMt::type MinusField_KimarikaMt;
	MinusField_KingfisherSpa::type MinusField_KingfisherSpa;
	MinusField_KingValley::type MinusField_KingValley;
	MinusField_KinshoiMt::type MinusField_KinshoiMt;
	MinusField_KiyanbaTrees::type MinusField_KiyanbaTrees;
	MinusField_KorokForest::type MinusField_KorokForest;
	MinusField_KumSpa::type MinusField_KumSpa;
	MinusField_KutiffMt::type MinusField_KutiffMt;
	MinusField_LiveMountain::type MinusField_LiveMountain;
	MinusField_LizardLake::type MinusField_LizardLake;
	MinusField_LomeiIsland::type MinusField_LomeiIsland;
	MinusField_LomeiNorth::type MinusField_LomeiNorth;
	MinusField_LomeiSouth::type MinusField_LomeiSouth;
	MinusField_MacusePeninsula::type MinusField_MacusePeninsula;
	MinusField_MemeMt::type MinusField_MemeMt;
	MinusField_MiddleTrees::type MinusField_MiddleTrees;
	MinusField_MizemakuMt::type MinusField_MizemakuMt;
	MinusField_MoriMt::type MinusField_MoriMt;
	MinusField_MorudaMt::type MinusField_MorudaMt;
	MinusField_MorugaMt::type MinusField_MorugaMt;
	MinusField_NezuppoTrees::type MinusField_NezuppoTrees;
	MinusField_Oasis::type MinusField_Oasis;
	MinusField_OngiForest::type MinusField_OngiForest;
	MinusField_OpeningField::type MinusField_OpeningField;
	MinusField_OpeningFieldEnd::type MinusField_OpeningFieldEnd;
	MinusField_OrdinFossil::type MinusField_OrdinFossil;
	MinusField_PongagaMt::type MinusField_PongagaMt;
	MinusField_PoponMt::type MinusField_PoponMt;
	MinusField_PowerFountain::type MinusField_PowerFountain;
	MinusField_RiaroTrees::type MinusField_RiaroTrees;
	MinusField_RirimukuMt::type MinusField_RirimukuMt;
	MinusField_Rito::type MinusField_Rito;
	MinusField_RokomakuMt::type MinusField_RokomakuMt;
	MinusField_SaiMt::type MinusField_SaiMt;
	MinusField_ShinikkyoForest::type MinusField_ShinikkyoForest;
	MinusField_SouthGerudoLegacy::type MinusField_SouthGerudoLegacy;
	MinusField_StartPoint::type MinusField_StartPoint;
	MinusField_TagonaTrees::type MinusField_TagonaTrees;
	MinusField_Taura::type MinusField_Taura;
	MinusField_TerumeMt::type MinusField_TerumeMt;
	MinusField_TwinsMountain::type MinusField_TwinsMountain;
	MinusField_UMiiVillage::type MinusField_UMiiVillage;
	MinusField_WhiteZora::type MinusField_WhiteZora;
	MinusField_WiseFountain::type MinusField_WiseFountain;
	MinusField_ZifForest::type MinusField_ZifForest;
	MizemakuMt::type MizemakuMt;
	MomoMt::type MomoMt;
	MoriMt::type MoriMt;
	MoroLake::type MoroLake;
	MorudaMt::type MorudaMt;
	MorugaMt::type MorugaMt;
	MuguriPlain::type MuguriPlain;
	NaganizaHill::type NaganizaHill;
	NagyuPlateau::type NagyuPlateau;
	NaierunPeninsula::type NaierunPeninsula;
	NanaimoPlain::type NanaimoPlain;
	NangoPond::type NangoPond;
	NantanCastle::type NantanCastle;
	NaruguPeninsula::type NaruguPeninsula;
	NefraHill::type NefraHill;
	NewHyruleWestHatago::type NewHyruleWestHatago;
	NewspaperCompany::type NewspaperCompany;
	NezuppoTrees::type NezuppoTrees;
	NiiLake::type NiiLake;
	NikakaIsland::type NikakaIsland;
	NishakkarePlain::type NishakkarePlain;
	NishojiBridge::type NishojiBridge;
	NitariBeach::type NitariBeach;
	NomyPlain::type NomyPlain;
	NorthGerudoRuins::type NorthGerudoRuins;
	NorthHatelHatago::type NorthHatelHatago;
	NorthHugeStone::type NorthHugeStone;
	NutsLake::type NutsLake;
	Oasis::type Oasis;
	OkuAkkarePlain::type OkuAkkarePlain;
	OkuwaLake::type OkuwaLake;
	OngiForest::type OngiForest;
	OoosePlain::type OoosePlain;
	OrdinBridge::type OrdinBridge;
	OrdinFossil::type OrdinFossil;
	OrupaPlateau::type OrupaPlateau;
	OsanjoBridge::type OsanjoBridge;
	OshoromaLake::type OshoromaLake;
	OtsukoWet::type OtsukoWet;
	PafaBeach::type PafaBeach;
	PaiyuBay::type PaiyuBay;
	PakanchiIsland::type PakanchiIsland;
	PaparaPlateau::type PaparaPlateau;
	PearlWaste::type PearlWaste;
	PeridoBarrier::type PeridoBarrier;
	PlayerHouse::type PlayerHouse;
	PongagaMt::type PongagaMt;
	PoponMt::type PoponMt;
	PostTownRuin::type PostTownRuin;
	PowerFountain::type PowerFountain;
	PstaLake::type PstaLake;
	PukiroroMt::type PukiroroMt;
	PukuntoMt::type PukuntoMt;
	PupukoreFalls::type PupukoreFalls;
	RaberaWet::type RaberaWet;
	RapikuruPlateau::type RapikuruPlateau;
	RapinyaPlateau::type RapinyaPlateau;
	RaruLake::type RaruLake;
	RashamaPlain::type RashamaPlain;
	RazezePlateau::type RazezePlateau;
	RentalZarashiShop_Gerudo::type RentalZarashiShop_Gerudo;
	RentalZarashiShop_GerudoDesert::type RentalZarashiShop_GerudoDesert;
	RiaroTrees::type RiaroTrees;
	RiberaForest::type RiberaForest;
	RibuchaPlateau::type RibuchaPlateau;
	Rikona_Peninshra::type Rikona_Peninshra;
	RingLegacy::type RingLegacy;
	RinosPass::type RinosPass;
	RirikendoBridge::type RirikendoBridge;
	RirimukuHighlands::type RirimukuHighlands;
	RirimukuMt::type RirimukuMt;
	RiritotoLake::type RiritotoLake;
	RishakutoPlateau::type RishakutoPlateau;
	Rito::type Rito;
	Rito_SkyHighIsland::type Rito_SkyHighIsland;
	RitoHatago::type RitoHatago;
	RiverSideHatago::type RiverSideHatago;
	RodaiLake::type RodaiLake;
	RogyLake::type RogyLake;
	RokomakuMt::type RokomakuMt;
	RonronCity::type RonronCity;
	RonronFarm::type RonronFarm;
	RonronRiver::type RonronRiver;
	RoshiganLake::type RoshiganLake;
	RosomaLake::type RosomaLake;
	RuberaHill::type RuberaHill;
	RutesLake::type RutesLake;
	RutimaHill::type RutimaHill;
	RutsuPlain::type RutsuPlain;
	SaihokuCastle::type SaihokuCastle;
	SaiMt::type SaiMt;
	SanaePlateau::type SanaePlateau;
	SanrosaLake::type SanrosaLake;
	SaohPoint::type SaohPoint;
	SaphiasPlateau::type SaphiasPlateau;
	SarjonBridge::type SarjonBridge;
	SarjonForest::type SarjonForest;
	SasamuroBeach::type SasamuroBeach;
	ScrapShop::type ScrapShop;
	ShariverMt::type ShariverMt;
	ShichijoBridge::type ShichijoBridge;
	ShieldSurfing_BeginnerGoal::type ShieldSurfing_BeginnerGoal;
	ShieldSurfing_SeniorGoal::type ShieldSurfing_SeniorGoal;
	ShigonDam::type ShigonDam;
	ShijoBridge::type ShijoBridge;
	ShikuriIslands::type ShikuriIslands;
	ShimukaPlateau::type ShimukaPlateau;
	ShinikkyoForest::type ShinikkyoForest;
	ShinyarkiPlateau::type ShinyarkiPlateau;
	ShinyarkiVillage::type ShinyarkiVillage;
	ShitanoPond::type ShitanoPond;
	ShopArmor_BaseCamp::type ShopArmor_BaseCamp;
	ShopArmor_Gerudo::type ShopArmor_Gerudo;
	ShopArmor_Goron::type ShopArmor_Goron;
	ShopArmor_Hateno::type ShopArmor_Hateno;
	ShopArmor_Kakariko::type ShopArmor_Kakariko;
	ShopArmor_Rito::type ShopArmor_Rito;
	ShopDye_Hateno::type ShopDye_Hateno;
	ShopGeneral_BaseCamp::type ShopGeneral_BaseCamp;
	ShopGeneral_Gerudo::type ShopGeneral_Gerudo;
	ShopGeneral_Goron::type ShopGeneral_Goron;
	ShopGeneral_Hateno::type ShopGeneral_Hateno;
	ShopGeneral_Kakariko::type ShopGeneral_Kakariko;
	ShopGeneral_Korok::type ShopGeneral_Korok;
	ShopGeneral_Oasis::type ShopGeneral_Oasis;
	ShopGeneral_Rito::type ShopGeneral_Rito;
	ShopGeneral_UMiiVillage::type ShopGeneral_UMiiVillage;
	ShopGeneral_Uotori::type ShopGeneral_Uotori;
	ShopGeneral_Zora::type ShopGeneral_Zora;
	ShopInn_Gerudo::type ShopInn_Gerudo;
	ShopInn_Goron::type ShopInn_Goron;
	ShopInn_Hateno::type ShopInn_Hateno;
	ShopInn_Kakariko::type ShopInn_Kakariko;
	ShopInn_Korok::type ShopInn_Korok;
	ShopInn_Oasis::type ShopInn_Oasis;
	ShopInn_Rito::type ShopInn_Rito;
	ShopInn_UMiiVillage::type ShopInn_UMiiVillage;
	ShopInn_Uotori::type ShopInn_Uotori;
	ShopInn_Zora::type ShopInn_Zora;
	ShopJewelry_Gerudo::type ShopJewelry_Gerudo;
	SkyIsland0001::type SkyIsland0001;
	SkyIsland0002::type SkyIsland0002;
	SkyIsland0003::type SkyIsland0003;
	SkyIsland0004::type SkyIsland0004;
	SkyIsland0009::type SkyIsland0009;
	SkyIsland0010::type SkyIsland0010;
	SkyIsland0011::type SkyIsland0011;
	SkyIsland0012::type SkyIsland0012;
	SkyIsland0013::type SkyIsland0013;
	SkyIsland0014::type SkyIsland0014;
	SkyIslands_Eldin01::type SkyIslands_Eldin01;
	SkyIslands_Eldin02::type SkyIslands_Eldin02;
	SkyIslands_Firone01::type SkyIslands_Firone01;
	SkyIslands_Firone02::type SkyIslands_Firone02;
	SkyIslands_Gerudo01::type SkyIslands_Gerudo01;
	SkyIslands_Gerudo02::type SkyIslands_Gerudo02;
	SkyIslands_Hateru01::type SkyIslands_Hateru01;
	SkyIslands_Hateru02::type SkyIslands_Hateru02;
	SkyIslands_Hebra02::type SkyIslands_Hebra02;
	SkyIslands_Hebra03::type SkyIslands_Hebra03;
	SkyIslands_Hebra04::type SkyIslands_Hebra04;
	SkyIslands_Hyrule01::type SkyIslands_Hyrule01;
	SkyIslands_Hyrule02::type SkyIslands_Hyrule02;
	SkyIslands_Hyrule03::type SkyIslands_Hyrule03;
	SkyIslands_Hyrule04::type SkyIslands_Hyrule04;
	SkyIslands_Hyrule05::type SkyIslands_Hyrule05;
	SkyIslands_Lanayru02::type SkyIslands_Lanayru02;
	SkyIslands_Lanayru03::type SkyIslands_Lanayru03;
	SkyIslands_Tabanta01::type SkyIslands_Tabanta01;
	SkyIslands_Tabanta02::type SkyIslands_Tabanta02;
	SkyIslands_Tamul01::type SkyIslands_Tamul01;
	SkyIslands_Tamul02::type SkyIslands_Tamul02;
	SmallDemonStatue::type SmallDemonStatue;
	SmeltShopGolem_00::type SmeltShopGolem_00;
	SmeltShopGolem_01::type SmeltShopGolem_01;
	SmeltShopGolem_02::type SmeltShopGolem_02;
	SmeltShopGolem_03::type SmeltShopGolem_03;
	SmeltShopGolem_04::type SmeltShopGolem_04;
	SmeltShopGolem_05::type SmeltShopGolem_05;
	SmeltShopGolem_06::type SmeltShopGolem_06;
	SmeltShopGolem_07::type SmeltShopGolem_07;
	SmeltShopGolem_08::type SmeltShopGolem_08;
	SmeltShopGolem_09::type SmeltShopGolem_09;
	SmeltShopGolem_10::type SmeltShopGolem_10;
	SnowStatue::type SnowStatue;
	SojijiHill::type SojijiHill;
	SojijiPark::type SojijiPark;
	SonoPrairie::type SonoPrairie;
	SoridaPeninsula::type SoridaPeninsula;
	SotonkaBridge::type SotonkaBridge;
	SouthGerudoLegacy::type SouthGerudoLegacy;
	SouthGerudoRuins::type SouthGerudoRuins;
	SouthGerudoRuinsCamp::type SouthGerudoRuinsCamp;
	SouthMine::type SouthMine;
	StartPoint_WakeupAltar::type StartPoint_WakeupAltar;
	StonePillers::type StonePillers;
	SugrantForest::type SugrantForest;
	SusonoLake::type SusonoLake;
	SusonoPlain::type SusonoPlain;
	SusonoPond::type SusonoPond;
	SusonoRiver::type SusonoRiver;
	SusukadiBridge::type SusukadiBridge;
	SwanLake::type SwanLake;
	TabantaBridge::type TabantaBridge;
	TabantaBridgeHatago::type TabantaBridgeHatago;
	TabantaCrater::type TabantaCrater;
	TabantaHatago::type TabantaHatago;
	TabantaHill::type TabantaHill;
	TabantaSnow::type TabantaSnow;
	TabantaSnow_North::type TabantaSnow_North;
	TabantaSnow_South::type TabantaSnow_South;
	TabantaVillage::type TabantaVillage;
	TafeaHill::type TafeaHill;
	TagonaTrees::type TagonaTrees;
	TakkikaPlain::type TakkikaPlain;
	TamaLake::type TamaLake;
	TamourHatago::type TamourHatago;
	TamulPlain::type TamulPlain;
	TamurulHatago_02::type TamurulHatago_02;
	TargarPlain::type TargarPlain;
	TaruhoPlateau::type TaruhoPlateau;
	TaserakaBridge::type TaserakaBridge;
	TatsubaLake::type TatsubaLake;
	Taura::type Taura;
	TeguriPlain::type TeguriPlain;
	TehotaWet::type TehotaWet;
	TennoMt::type TennoMt;
	TeraPlain::type TeraPlain;
	TerumeMt::type TerumeMt;
	TerumePass::type TerumePass;
	TimesShrine::type TimesShrine;
	TohikiLake::type TohikiLake;
	TomiyoPlateau::type TomiyoPlateau;
	TompoPlain::type TompoPlain;
	ToriaBridge::type ToriaBridge;
	TorumaDesert::type TorumaDesert;
	TotenLake::type TotenLake;
	TotsugeBridge::type TotsugeBridge;
	Tower01::type Tower01;
	Tower02::type Tower02;
	Tower03::type Tower03;
	Tower04::type Tower04;
	Tower05::type Tower05;
	Tower06::type Tower06;
	Tower07::type Tower07;
	Tower08::type Tower08;
	Tower09::type Tower09;
	Tower10::type Tower10;
	Tower11::type Tower11;
	Tower12::type Tower12;
	Tower13::type Tower13;
	Tower14::type Tower14;
	Tower15::type Tower15;
	TrakaIsland::type TrakaIsland;
	TrakaIsland_Big::type TrakaIsland_Big;
	TrakaIsland_Center::type TrakaIsland_Center;
	TrakaIsland_East::type TrakaIsland_East;
	TrakaIsland_New::type TrakaIsland_New;
	TrakaIsland_North::type TrakaIsland_North;
	TrakaIsland_Small::type TrakaIsland_Small;
	TrakaIsland_South::type TrakaIsland_South;
	TrakaIsland_West::type TrakaIsland_West;
	TreasureBoxShop::type TreasureBoxShop;
	TryCape::type TryCape;
	TsukaiePlateau::type TsukaiePlateau;
	TuaboSnow::type TuaboSnow;
	TunbriPlain::type TunbriPlain;
	TurasuBridge::type TurasuBridge;
	TurasuLake::type TurasuLake;
	TutukikiSnow::type TutukikiSnow;
	TwinsMountain::type TwinsMountain;
	UbotsuPlateau::type UbotsuPlateau;
	UchoPlateau::type UchoPlateau;
	UkkoPond::type UkkoPond;
	UMiiVillage::type UMiiVillage;
	UMiiVillage_JobField::type UMiiVillage_JobField;
	Unknown::type Unknown;
	UraitoLake::type UraitoLake;
	UrokoCape::type UrokoCape;
	ValleyVillage::type ValleyVillage;
	VPlateau::type VPlateau;
	WabiLake::type WabiLake;
	WatakaPlateau::type WatakaPlateau;
	WeaponCureSpring::type WeaponCureSpring;
	WeaponCureSpring_DressFairy_00::type WeaponCureSpring_DressFairy_00;
	WeaponCureSpring_DressFairy_01::type WeaponCureSpring_DressFairy_01;
	WeaponCureSpring_DressFairy_02::type WeaponCureSpring_DressFairy_02;
	Well_0001::type Well_0001;
	Well_0002::type Well_0002;
	Well_0003::type Well_0003;
	Well_0004::type Well_0004;
	Well_0005::type Well_0005;
	Well_0006::type Well_0006;
	Well_0007::type Well_0007;
	Well_0008::type Well_0008;
	Well_0009::type Well_0009;
	Well_0010::type Well_0010;
	Well_0011::type Well_0011;
	Well_0012::type Well_0012;
	Well_0013::type Well_0013;
	Well_0014::type Well_0014;
	Well_0015::type Well_0015;
	Well_0016::type Well_0016;
	Well_0017::type Well_0017;
	Well_0018::type Well_0018;
	Well_0019::type Well_0019;
	Well_0020::type Well_0020;
	Well_0021::type Well_0021;
	Well_0022::type Well_0022;
	Well_0023::type Well_0023;
	Well_0024::type Well_0024;
	Well_0025::type Well_0025;
	Well_0026::type Well_0026;
	Well_0027::type Well_0027;
	Well_0028::type Well_0028;
	Well_0029::type Well_0029;
	Well_0030::type Well_0030;
	Well_0031::type Well_0031;
	Well_0032::type Well_0032;
	Well_0033::type Well_0033;
	Well_0034::type Well_0034;
	Well_0041::type Well_0041;
	Well_0042::type Well_0042;
	Well_0043::type Well_0043;
	Well_0043B::type Well_0043B;
	Well_0044::type Well_0044;
	Well_0045::type Well_0045;
	Well_0046::type Well_0046;
	Well_0047::type Well_0047;
	Well_0047B::type Well_0047B;
	Well_0048::type Well_0048;
	Well_0049::type Well_0049;
	Well_0049B::type Well_0049B;
	Well_0049C::type Well_0049C;
	Well_0049D::type Well_0049D;
	Well_0049E::type Well_0049E;
	Well_0050::type Well_0050;
	Well_0051::type Well_0051;
	Well_0052::type Well_0052;
	Well_0053::type Well_0053;
	Well_0054::type Well_0054;
	Well_0055::type Well_0055;
	Well_0056::type Well_0056;
	Well_0057::type Well_0057;
	Well_0058::type Well_0058;
	Well_0059::type Well_0059;
	WestEunpoHighlands::type WestEunpoHighlands;
	WestGerudo::type WestGerudo;
	WestGerudoRuins::type WestGerudoRuins;
	WetGarrison::type WetGarrison;
	WhiteZora::type WhiteZora;
	WholeOfHyrule::type WholeOfHyrule;
	WiseFountain::type WiseFountain;
	XehaPlateau::type XehaPlateau;
	XekuBridge::type XekuBridge;
	YamabiLake::type YamabiLake;
	YamariRiver::type YamariRiver;
	YarimoRiver::type YarimoRiver;
	YashinoBeach::type YashinoBeach;
	YashinoLegacy::type YashinoLegacy;
	YuaSnow::type YuaSnow;
	ZamaPlain::type ZamaPlain;
	ZaridoLake::type ZaridoLake;
	ZaridoPlateau::type ZaridoPlateau;
	ZifForest::type ZifForest;
	ZitoGreens::type ZitoGreens;
	ZonauCentralShrine::type ZonauCentralShrine;
	ZonauLegacy::type ZonauLegacy;
	ZonauRelief_03::type ZonauRelief_03;
	ZonauRelief_04::type ZonauRelief_04;
	ZonauRelief_05::type ZonauRelief_05;
	ZonauRelief_06::type ZonauRelief_06;
	ZonauRelief_07::type ZonauRelief_07;
	ZonauRelief_08::type ZonauRelief_08;
	ZonauRelief_09::type ZonauRelief_09;
	ZonauRelief_10::type ZonauRelief_10;
	ZonauRelief_11::type ZonauRelief_11;
	ZonauRelief_12::type ZonauRelief_12;
	ZonauRelief_13::type ZonauRelief_13;
	ZonauRelief_14::type ZonauRelief_14;
	ZonauSatelliteShrine_LeftArm::type ZonauSatelliteShrine_LeftArm;
	ZonauSatelliteShrine_LeftLeg::type ZonauSatelliteShrine_LeftLeg;
	ZonauSatelliteShrine_RightArm::type ZonauSatelliteShrine_RightArm;
	ZonauSatelliteShrine_RightLeg::type ZonauSatelliteShrine_RightLeg;
	ZonauThunderSkyIsland::type ZonauThunderSkyIsland;
	ZonauTriedForceSkyIsland::type ZonauTriedForceSkyIsland;
	Zora_Belvedere::type Zora_Belvedere;
	Zora_FishIsland::type Zora_FishIsland;
	Zora_Imperial_Palace::type Zora_Imperial_Palace;
	ZoraBridge::type ZoraBridge;
	ZoraZonauTerminal::type ZoraZonauTerminal;
	
	explicit Structure(Sav& s) : 
		AagetoMt { s.get<struct AagetoMt>() },
		AdeyaLake { s.get<struct AdeyaLake>() },
		AdeyaVillage { s.get<struct AdeyaVillage>() },
		AgePlateau { s.get<struct AgePlateau>() },
		AgunaiLake { s.get<struct AgunaiLake>() },
		AkazaMt { s.get<struct AkazaMt>() },
		Akkare_OctaPond { s.get<struct Akkare_OctaPond>() },
		AkkareBigBridge { s.get<struct AkkareBigBridge>() },
		AkkareGarrison { s.get<struct AkkareGarrison>() },
		AkkareZhai { s.get<struct AkkareZhai>() },
		AkkareZhaiBridge { s.get<struct AkkareZhaiBridge>() },
		AmimePlateau { s.get<struct AmimePlateau>() },
		AmonenePlateau { s.get<struct AmonenePlateau>() },
		AnbonBeach { s.get<struct AnbonBeach>() },
		AnchoBeach { s.get<struct AnchoBeach>() },
		AncientLabo { s.get<struct AncientLabo>() },
		AncientTimeShrine { s.get<struct AncientTimeShrine>() },
		AnoleLake { s.get<struct AnoleLake>() },
		AnoleTunnel { s.get<struct AnoleTunnel>() },
		ArafuraPlain { s.get<struct ArafuraPlain>() },
		AraisoBeach { s.get<struct AraisoBeach>() },
		ArmorOfLambda_01 { s.get<struct ArmorOfLambda_01>() },
		ArmorOfLambda_04 { s.get<struct ArmorOfLambda_04>() },
		ArmorOfLambda_07 { s.get<struct ArmorOfLambda_07>() },
		Assassin { s.get<struct Assassin>() },
		AzimetosPlateau { s.get<struct AzimetosPlateau>() },
		BachimakuMt { s.get<struct BachimakuMt>() },
		BaconCliff { s.get<struct BaconCliff>() },
		BameHill { s.get<struct BameHill>() },
		BanmezaLake { s.get<struct BanmezaLake>() },
		BantaValley { s.get<struct BantaValley>() },
		Bar { s.get<struct Bar>() },
		BarakkiPlain { s.get<struct BarakkiPlain>() },
		BarumePlain { s.get<struct BarumePlain>() },
		BaseCamp_Shelter { s.get<struct BaseCamp_Shelter>() },
		BatteryExchangeShop_00 { s.get<struct BatteryExchangeShop_00>() },
		BatteryExchangeShop_01 { s.get<struct BatteryExchangeShop_01>() },
		BeginningIsland { s.get<struct BeginningIsland>() },
		BigalLake { s.get<struct BigalLake>() },
		BigBrotherBridge { s.get<struct BigBrotherBridge>() },
		BiginaTrees { s.get<struct BiginaTrees>() },
		BigTree { s.get<struct BigTree>() },
		BiridinHill { s.get<struct BiridinHill>() },
		BironSnow { s.get<struct BironSnow>() },
		BituoValley { s.get<struct BituoValley>() },
		BlindForest { s.get<struct BlindForest>() },
		BlizzarValley { s.get<struct BlizzarValley>() },
		BokoboLake { s.get<struct BokoboLake>() },
		BonrasForest { s.get<struct BonrasForest>() },
		BoraraCape { s.get<struct BoraraCape>() },
		BottuBay { s.get<struct BottuBay>() },
		BraveFountain { s.get<struct BraveFountain>() },
		BrostarPlain { s.get<struct BrostarPlain>() },
		BuhaIslands { s.get<struct BuhaIslands>() },
		BuibuiTrees { s.get<struct BuibuiTrees>() },
		BuichadaPlateau { s.get<struct BuichadaPlateau>() },
		BuidaLake { s.get<struct BuidaLake>() },
		BumiPlain { s.get<struct BumiPlain>() },
		BuramuPlateau { s.get<struct BuramuPlateau>() },
		CastleTownMark { s.get<struct CastleTownMark>() },
		Cave_Akkala_0000 { s.get<struct Cave_Akkala_0000>() },
		Cave_Akkala_0003 { s.get<struct Cave_Akkala_0003>() },
		Cave_Akkala_0005 { s.get<struct Cave_Akkala_0005>() },
		Cave_Akkala_0007 { s.get<struct Cave_Akkala_0007>() },
		Cave_Akkala_0010 { s.get<struct Cave_Akkala_0010>() },
		Cave_Akkala_0011 { s.get<struct Cave_Akkala_0011>() },
		Cave_Akkala_0014 { s.get<struct Cave_Akkala_0014>() },
		Cave_Akkala_0017 { s.get<struct Cave_Akkala_0017>() },
		Cave_CentralHyrule_0008 { s.get<struct Cave_CentralHyrule_0008>() },
		Cave_CentralHyrule_0009 { s.get<struct Cave_CentralHyrule_0009>() },
		Cave_CentralHyrule_0011 { s.get<struct Cave_CentralHyrule_0011>() },
		Cave_CentralHyrule_0013 { s.get<struct Cave_CentralHyrule_0013>() },
		Cave_CentralHyrule_0017 { s.get<struct Cave_CentralHyrule_0017>() },
		Cave_CentralHyrule_0018 { s.get<struct Cave_CentralHyrule_0018>() },
		Cave_CentralHyrule_0019 { s.get<struct Cave_CentralHyrule_0019>() },
		Cave_CentralHyrule_0020 { s.get<struct Cave_CentralHyrule_0020>() },
		Cave_CentralHyrule_0021 { s.get<struct Cave_CentralHyrule_0021>() },
		Cave_CentralHyrule_0022 { s.get<struct Cave_CentralHyrule_0022>() },
		Cave_CentralHyrule_0023 { s.get<struct Cave_CentralHyrule_0023>() },
		Cave_CentralHyrule_0030 { s.get<struct Cave_CentralHyrule_0030>() },
		Cave_Eldin_0020 { s.get<struct Cave_Eldin_0020>() },
		Cave_Eldin_0021 { s.get<struct Cave_Eldin_0021>() },
		Cave_Eldin_0022 { s.get<struct Cave_Eldin_0022>() },
		Cave_Eldin_0023 { s.get<struct Cave_Eldin_0023>() },
		Cave_Eldin_0025 { s.get<struct Cave_Eldin_0025>() },
		Cave_Eldin_0026 { s.get<struct Cave_Eldin_0026>() },
		Cave_Eldin_0027 { s.get<struct Cave_Eldin_0027>() },
		Cave_Eldin_0028 { s.get<struct Cave_Eldin_0028>() },
		Cave_Eldin_0029 { s.get<struct Cave_Eldin_0029>() },
		Cave_Eldin_0030 { s.get<struct Cave_Eldin_0030>() },
		Cave_Eldin_0031 { s.get<struct Cave_Eldin_0031>() },
		Cave_Eldin_0033 { s.get<struct Cave_Eldin_0033>() },
		Cave_Eldin_0034 { s.get<struct Cave_Eldin_0034>() },
		Cave_Eldin_0035 { s.get<struct Cave_Eldin_0035>() },
		Cave_Eldin_0037 { s.get<struct Cave_Eldin_0037>() },
		Cave_Eldin_0038 { s.get<struct Cave_Eldin_0038>() },
		Cave_Eldin_0039 { s.get<struct Cave_Eldin_0039>() },
		Cave_Firone_0002 { s.get<struct Cave_Firone_0002>() },
		Cave_Firone_0008 { s.get<struct Cave_Firone_0008>() },
		Cave_Firone_0009 { s.get<struct Cave_Firone_0009>() },
		Cave_Firone_0016 { s.get<struct Cave_Firone_0016>() },
		Cave_Firone_0020 { s.get<struct Cave_Firone_0020>() },
		Cave_Firone_0022 { s.get<struct Cave_Firone_0022>() },
		Cave_Firone_0023 { s.get<struct Cave_Firone_0023>() },
		Cave_Firone_0024 { s.get<struct Cave_Firone_0024>() },
		Cave_Firone_0029 { s.get<struct Cave_Firone_0029>() },
		Cave_FirstPlateau_0001 { s.get<struct Cave_FirstPlateau_0001>() },
		Cave_FirstPlateau_0002 { s.get<struct Cave_FirstPlateau_0002>() },
		Cave_GerudoDesert_0007 { s.get<struct Cave_GerudoDesert_0007>() },
		Cave_GerudoDesert_0008 { s.get<struct Cave_GerudoDesert_0008>() },
		Cave_GerudoDesert_0015 { s.get<struct Cave_GerudoDesert_0015>() },
		Cave_GerudoDesert_0022 { s.get<struct Cave_GerudoDesert_0022>() },
		Cave_GerudoDesert_0030 { s.get<struct Cave_GerudoDesert_0030>() },
		Cave_GerudoDesert_0031 { s.get<struct Cave_GerudoDesert_0031>() },
		Cave_GerudoDesert_0032 { s.get<struct Cave_GerudoDesert_0032>() },
		Cave_GerudoDesert_0035 { s.get<struct Cave_GerudoDesert_0035>() },
		Cave_GerudoDesert_0036 { s.get<struct Cave_GerudoDesert_0036>() },
		Cave_GerudoDesert_0037 { s.get<struct Cave_GerudoDesert_0037>() },
		Cave_GerudoDesert_0039 { s.get<struct Cave_GerudoDesert_0039>() },
		Cave_GerudoDesert_0040 { s.get<struct Cave_GerudoDesert_0040>() },
		Cave_GerudoDesert_0041 { s.get<struct Cave_GerudoDesert_0041>() },
		Cave_GerudoDesert_0043 { s.get<struct Cave_GerudoDesert_0043>() },
		Cave_GerudoDesert_0044 { s.get<struct Cave_GerudoDesert_0044>() },
		Cave_GerudoDesert_0045 { s.get<struct Cave_GerudoDesert_0045>() },
		Cave_GerudoDesert_0046 { s.get<struct Cave_GerudoDesert_0046>() },
		Cave_GerudoDesert_0049 { s.get<struct Cave_GerudoDesert_0049>() },
		Cave_GerudoDesert_0050 { s.get<struct Cave_GerudoDesert_0050>() },
		Cave_GerudoDesert_0051 { s.get<struct Cave_GerudoDesert_0051>() },
		Cave_GerudoHighlands_0002 { s.get<struct Cave_GerudoHighlands_0002>() },
		Cave_GerudoHighlands_0008 { s.get<struct Cave_GerudoHighlands_0008>() },
		Cave_GerudoHighlands_0014 { s.get<struct Cave_GerudoHighlands_0014>() },
		Cave_GerudoHighlands_0017 { s.get<struct Cave_GerudoHighlands_0017>() },
		Cave_HateruEast_0000 { s.get<struct Cave_HateruEast_0000>() },
		Cave_HateruEast_0002 { s.get<struct Cave_HateruEast_0002>() },
		Cave_HateruEast_0006 { s.get<struct Cave_HateruEast_0006>() },
		Cave_HateruEast_0007 { s.get<struct Cave_HateruEast_0007>() },
		Cave_HateruEast_0008 { s.get<struct Cave_HateruEast_0008>() },
		Cave_HateruEast_0009 { s.get<struct Cave_HateruEast_0009>() },
		Cave_HateruEast_0013 { s.get<struct Cave_HateruEast_0013>() },
		Cave_HateruEast_0014 { s.get<struct Cave_HateruEast_0014>() },
		Cave_HateruEast_0016 { s.get<struct Cave_HateruEast_0016>() },
		Cave_HateruWest_0002 { s.get<struct Cave_HateruWest_0002>() },
		Cave_HateruWest_0005 { s.get<struct Cave_HateruWest_0005>() },
		Cave_HateruWest_0006 { s.get<struct Cave_HateruWest_0006>() },
		Cave_HateruWest_0008 { s.get<struct Cave_HateruWest_0008>() },
		Cave_HateruWest_0011 { s.get<struct Cave_HateruWest_0011>() },
		Cave_HateruWest_0012 { s.get<struct Cave_HateruWest_0012>() },
		Cave_Hebra_0000 { s.get<struct Cave_Hebra_0000>() },
		Cave_Hebra_0013 { s.get<struct Cave_Hebra_0013>() },
		Cave_Hebra_0015 { s.get<struct Cave_Hebra_0015>() },
		Cave_Hebra_0016 { s.get<struct Cave_Hebra_0016>() },
		Cave_Hebra_0019 { s.get<struct Cave_Hebra_0019>() },
		Cave_Hebra_0021 { s.get<struct Cave_Hebra_0021>() },
		Cave_Hebra_0022 { s.get<struct Cave_Hebra_0022>() },
		Cave_Hebra_0023 { s.get<struct Cave_Hebra_0023>() },
		Cave_Hebra_0025 { s.get<struct Cave_Hebra_0025>() },
		Cave_Hebra_0026 { s.get<struct Cave_Hebra_0026>() },
		Cave_Hebra_0030 { s.get<struct Cave_Hebra_0030>() },
		Cave_Hebra_0035 { s.get<struct Cave_Hebra_0035>() },
		Cave_Hebra_0036 { s.get<struct Cave_Hebra_0036>() },
		Cave_Hebra_0037 { s.get<struct Cave_Hebra_0037>() },
		Cave_Hebra_0039 { s.get<struct Cave_Hebra_0039>() },
		Cave_Hebra_0040 { s.get<struct Cave_Hebra_0040>() },
		Cave_Hebra_0041 { s.get<struct Cave_Hebra_0041>() },
		Cave_HyruleForest_0001 { s.get<struct Cave_HyruleForest_0001>() },
		Cave_HyruleForest_0006 { s.get<struct Cave_HyruleForest_0006>() },
		Cave_HyruleForest_0007 { s.get<struct Cave_HyruleForest_0007>() },
		Cave_HyruleForest_0008 { s.get<struct Cave_HyruleForest_0008>() },
		Cave_HyruleRidge_0000 { s.get<struct Cave_HyruleRidge_0000>() },
		Cave_HyruleRidge_0002 { s.get<struct Cave_HyruleRidge_0002>() },
		Cave_HyruleRidge_0003 { s.get<struct Cave_HyruleRidge_0003>() },
		Cave_HyruleRidge_0004 { s.get<struct Cave_HyruleRidge_0004>() },
		Cave_HyruleRidge_0005 { s.get<struct Cave_HyruleRidge_0005>() },
		Cave_HyruleRidge_0006 { s.get<struct Cave_HyruleRidge_0006>() },
		Cave_HyruleRidge_0007 { s.get<struct Cave_HyruleRidge_0007>() },
		Cave_HyruleRidge_0008 { s.get<struct Cave_HyruleRidge_0008>() },
		Cave_Lanayru_0006 { s.get<struct Cave_Lanayru_0006>() },
		Cave_Lanayru_0008 { s.get<struct Cave_Lanayru_0008>() },
		Cave_Lanayru_0014 { s.get<struct Cave_Lanayru_0014>() },
		Cave_Lanayru_0019 { s.get<struct Cave_Lanayru_0019>() },
		Cave_Lanayru_0024 { s.get<struct Cave_Lanayru_0024>() },
		Cave_Lanayru_0032 { s.get<struct Cave_Lanayru_0032>() },
		Cave_Lanayru_0033 { s.get<struct Cave_Lanayru_0033>() },
		Cave_Lanayru_0035 { s.get<struct Cave_Lanayru_0035>() },
		Cave_Lanayru_0036 { s.get<struct Cave_Lanayru_0036>() },
		Cave_Lanayru_0048 { s.get<struct Cave_Lanayru_0048>() },
		Cave_Lanayru_0049 { s.get<struct Cave_Lanayru_0049>() },
		Cave_Lanayru_0050 { s.get<struct Cave_Lanayru_0050>() },
		Cave_Lanayru_0052 { s.get<struct Cave_Lanayru_0052>() },
		Cave_Lanayru_0053 { s.get<struct Cave_Lanayru_0053>() },
		Cave_Lanayru_0055 { s.get<struct Cave_Lanayru_0055>() },
		Cave_Lanayru_0057 { s.get<struct Cave_Lanayru_0057>() },
		Cave_Lanayru_0060 { s.get<struct Cave_Lanayru_0060>() },
		Cave_Lanayru_0061 { s.get<struct Cave_Lanayru_0061>() },
		Cave_Lanayru_0063 { s.get<struct Cave_Lanayru_0063>() },
		Cave_LanayruMountain_0002 { s.get<struct Cave_LanayruMountain_0002>() },
		Cave_LanayruMountain_0006 { s.get<struct Cave_LanayruMountain_0006>() },
		Cave_LanayruMountain_0008 { s.get<struct Cave_LanayruMountain_0008>() },
		Cave_LanayruMountain_0010 { s.get<struct Cave_LanayruMountain_0010>() },
		Cave_LanayruMountain_0014 { s.get<struct Cave_LanayruMountain_0014>() },
		Cave_LanayruMountain_0016 { s.get<struct Cave_LanayruMountain_0016>() },
		Cave_LanayruMountain_0022 { s.get<struct Cave_LanayruMountain_0022>() },
		Cave_LanayruMountain_0024 { s.get<struct Cave_LanayruMountain_0024>() },
		Cave_LanayruMountain_0025 { s.get<struct Cave_LanayruMountain_0025>() },
		Cave_LanayruMountain_0026 { s.get<struct Cave_LanayruMountain_0026>() },
		Cave_Tabantha_0001 { s.get<struct Cave_Tabantha_0001>() },
		Cave_Tabantha_0002 { s.get<struct Cave_Tabantha_0002>() },
		Cave_Tabantha_0003 { s.get<struct Cave_Tabantha_0003>() },
		CDungeon { s.get<struct CDungeon>() },
		CentralExchange { s.get<struct CentralExchange>() },
		ChagaraMt { s.get<struct ChagaraMt>() },
		CheckPoint000 { s.get<struct CheckPoint000>() },
		CheckPoint001 { s.get<struct CheckPoint001>() },
		CheckPoint002 { s.get<struct CheckPoint002>() },
		CheckPoint003 { s.get<struct CheckPoint003>() },
		CheckPoint004 { s.get<struct CheckPoint004>() },
		CheckPoint005 { s.get<struct CheckPoint005>() },
		CheckPoint006 { s.get<struct CheckPoint006>() },
		CheckPoint007 { s.get<struct CheckPoint007>() },
		CheckPoint008 { s.get<struct CheckPoint008>() },
		CheckPoint009 { s.get<struct CheckPoint009>() },
		CheckPoint010 { s.get<struct CheckPoint010>() },
		CheckPoint011 { s.get<struct CheckPoint011>() },
		CheckPoint012 { s.get<struct CheckPoint012>() },
		CheckPoint013 { s.get<struct CheckPoint013>() },
		CheckPoint014 { s.get<struct CheckPoint014>() },
		CheckPoint016 { s.get<struct CheckPoint016>() },
		CheckPoint017 { s.get<struct CheckPoint017>() },
		CheckPoint018 { s.get<struct CheckPoint018>() },
		CheckPoint019 { s.get<struct CheckPoint019>() },
		CheckPoint020 { s.get<struct CheckPoint020>() },
		CheckPoint021 { s.get<struct CheckPoint021>() },
		CheckPoint022 { s.get<struct CheckPoint022>() },
		CheckPoint023 { s.get<struct CheckPoint023>() },
		CheckPoint024 { s.get<struct CheckPoint024>() },
		CheckPoint025 { s.get<struct CheckPoint025>() },
		CheckPoint026 { s.get<struct CheckPoint026>() },
		CheckPoint027 { s.get<struct CheckPoint027>() },
		CheckPoint028 { s.get<struct CheckPoint028>() },
		CheckPoint029 { s.get<struct CheckPoint029>() },
		CheckPoint030 { s.get<struct CheckPoint030>() },
		CheckPoint031 { s.get<struct CheckPoint031>() },
		CheckPoint032 { s.get<struct CheckPoint032>() },
		CheckPoint033 { s.get<struct CheckPoint033>() },
		CheckPoint035 { s.get<struct CheckPoint035>() },
		CheckPoint036 { s.get<struct CheckPoint036>() },
		CheckPoint037 { s.get<struct CheckPoint037>() },
		CheckPoint039 { s.get<struct CheckPoint039>() },
		CheckPoint040 { s.get<struct CheckPoint040>() },
		CheckPoint041 { s.get<struct CheckPoint041>() },
		CheckPoint042 { s.get<struct CheckPoint042>() },
		CheckPoint044 { s.get<struct CheckPoint044>() },
		CheckPoint046 { s.get<struct CheckPoint046>() },
		CheckPoint047 { s.get<struct CheckPoint047>() },
		CheckPoint048 { s.get<struct CheckPoint048>() },
		CheckPoint049 { s.get<struct CheckPoint049>() },
		CheckPoint051 { s.get<struct CheckPoint051>() },
		CheckPoint053 { s.get<struct CheckPoint053>() },
		CheckPoint054 { s.get<struct CheckPoint054>() },
		CheckPoint056 { s.get<struct CheckPoint056>() },
		CheckPoint057 { s.get<struct CheckPoint057>() },
		CheckPoint058 { s.get<struct CheckPoint058>() },
		CheckPoint059 { s.get<struct CheckPoint059>() },
		CheckPoint064 { s.get<struct CheckPoint064>() },
		CheckPoint065 { s.get<struct CheckPoint065>() },
		CheckPoint067 { s.get<struct CheckPoint067>() },
		CheckPoint068 { s.get<struct CheckPoint068>() },
		CheckPoint070 { s.get<struct CheckPoint070>() },
		CheckPoint072 { s.get<struct CheckPoint072>() },
		CheckPoint073 { s.get<struct CheckPoint073>() },
		CheckPoint074 { s.get<struct CheckPoint074>() },
		CheckPoint075 { s.get<struct CheckPoint075>() },
		CheckPoint076 { s.get<struct CheckPoint076>() },
		CheckPoint077 { s.get<struct CheckPoint077>() },
		CheckPoint078 { s.get<struct CheckPoint078>() },
		CheckPoint079 { s.get<struct CheckPoint079>() },
		CheckPoint080 { s.get<struct CheckPoint080>() },
		CheckPoint081 { s.get<struct CheckPoint081>() },
		CheckPoint084 { s.get<struct CheckPoint084>() },
		CheckPoint085 { s.get<struct CheckPoint085>() },
		CheckPoint086 { s.get<struct CheckPoint086>() },
		CheckPoint087 { s.get<struct CheckPoint087>() },
		CheckPoint088 { s.get<struct CheckPoint088>() },
		CheckPoint089 { s.get<struct CheckPoint089>() },
		CheckPoint090 { s.get<struct CheckPoint090>() },
		CheckPoint091 { s.get<struct CheckPoint091>() },
		CheckPoint092 { s.get<struct CheckPoint092>() },
		CheckPoint094 { s.get<struct CheckPoint094>() },
		CheckPoint095 { s.get<struct CheckPoint095>() },
		CheckPoint096 { s.get<struct CheckPoint096>() },
		CheckPoint097 { s.get<struct CheckPoint097>() },
		CheckPoint098 { s.get<struct CheckPoint098>() },
		CheckPoint100 { s.get<struct CheckPoint100>() },
		CheckPoint101 { s.get<struct CheckPoint101>() },
		CheckPoint102 { s.get<struct CheckPoint102>() },
		CheckPoint103 { s.get<struct CheckPoint103>() },
		CheckPoint104 { s.get<struct CheckPoint104>() },
		CheckPoint106 { s.get<struct CheckPoint106>() },
		CheckPoint107 { s.get<struct CheckPoint107>() },
		CheckPoint108 { s.get<struct CheckPoint108>() },
		CheckPoint111 { s.get<struct CheckPoint111>() },
		CheckPoint112 { s.get<struct CheckPoint112>() },
		CheckPoint113 { s.get<struct CheckPoint113>() },
		CheckPoint114 { s.get<struct CheckPoint114>() },
		CheckPoint115 { s.get<struct CheckPoint115>() },
		CheckPoint116 { s.get<struct CheckPoint116>() },
		CheckPoint118 { s.get<struct CheckPoint118>() },
		CheckPoint119 { s.get<struct CheckPoint119>() },
		CheckPoint120 { s.get<struct CheckPoint120>() },
		CheckPoint122 { s.get<struct CheckPoint122>() },
		CheckPoint123 { s.get<struct CheckPoint123>() },
		CheckPoint124 { s.get<struct CheckPoint124>() },
		CheckPoint125 { s.get<struct CheckPoint125>() },
		CheckPoint126 { s.get<struct CheckPoint126>() },
		CheckPoint129 { s.get<struct CheckPoint129>() },
		CheckPoint130 { s.get<struct CheckPoint130>() },
		CheckPoint131 { s.get<struct CheckPoint131>() },
		CheckPoint132 { s.get<struct CheckPoint132>() },
		CheckPoint133 { s.get<struct CheckPoint133>() },
		CheckPoint134 { s.get<struct CheckPoint134>() },
		CheckPoint135 { s.get<struct CheckPoint135>() },
		CheckPoint136 { s.get<struct CheckPoint136>() },
		CheckPoint137 { s.get<struct CheckPoint137>() },
		CheckPoint138 { s.get<struct CheckPoint138>() },
		CheckPoint139 { s.get<struct CheckPoint139>() },
		CheckPoint140 { s.get<struct CheckPoint140>() },
		CheckPoint141 { s.get<struct CheckPoint141>() },
		CheckPoint142 { s.get<struct CheckPoint142>() },
		CheckPoint143 { s.get<struct CheckPoint143>() },
		CheckPoint144 { s.get<struct CheckPoint144>() },
		CheckPoint147 { s.get<struct CheckPoint147>() },
		ChirakaVillage { s.get<struct ChirakaVillage>() },
		ChuonoPond { s.get<struct ChuonoPond>() },
		Circuit_Ichikara { s.get<struct Circuit_Ichikara>() },
		Circuit_Uotori { s.get<struct Circuit_Uotori>() },
		City_BaseCamp { s.get<struct City_BaseCamp>() },
		Cohorint { s.get<struct Cohorint>() },
		Cokiri { s.get<struct Cokiri>() },
		CookingShop { s.get<struct CookingShop>() },
		Corosseo { s.get<struct Corosseo>() },
		CresiaPeninsula { s.get<struct CresiaPeninsula>() },
		DamzelForest { s.get<struct DamzelForest>() },
		DanioPlain { s.get<struct DanioPlain>() },
		DarinoPond { s.get<struct DarinoPond>() },
		DasukidaMt { s.get<struct DasukidaMt>() },
		DasukidaPlateau { s.get<struct DasukidaPlateau>() },
		DatsuPlain { s.get<struct DatsuPlain>() },
		DeathCaldera { s.get<struct DeathCaldera>() },
		DeathMountain_Entrance { s.get<struct DeathMountain_Entrance>() },
		DeathMountainHatago { s.get<struct DeathMountainHatago>() },
		DeathMountainWestWorkshop { s.get<struct DeathMountainWestWorkshop>() },
		DeepHole_AkkareSkull { s.get<struct DeepHole_AkkareSkull>() },
		DeepHole_B_6_AssasisnBoss { s.get<struct DeepHole_B_6_AssasisnBoss>() },
		DeepHole_B_6_Tower { s.get<struct DeepHole_B_6_Tower>() },
		DeepHole_Chikurun { s.get<struct DeepHole_Chikurun>() },
		DeepHole_Cokiri { s.get<struct DeepHole_Cokiri>() },
		DeepHole_DeathMountain { s.get<struct DeepHole_DeathMountain>() },
		DeepHole_Firone { s.get<struct DeepHole_Firone>() },
		DeepHole_FirstLandEast { s.get<struct DeepHole_FirstLandEast>() },
		DeepHole_FirstLandNorth { s.get<struct DeepHole_FirstLandNorth>() },
		DeepHole_FirstLandSouth { s.get<struct DeepHole_FirstLandSouth>() },
		DeepHole_FirstLandWest { s.get<struct DeepHole_FirstLandWest>() },
		DeepHole_GerudoMaze { s.get<struct DeepHole_GerudoMaze>() },
		DeepHole_GerudoSummit { s.get<struct DeepHole_GerudoSummit>() },
		DeepHole_Higakkare { s.get<struct DeepHole_Higakkare>() },
		DeepHole_HimeidaMt { s.get<struct DeepHole_HimeidaMt>() },
		DeepHole_HyruleCastle { s.get<struct DeepHole_HyruleCastle>() },
		DeepHole_HyruleCastleEast { s.get<struct DeepHole_HyruleCastleEast>() },
		DeepHole_HyruleCastleWest { s.get<struct DeepHole_HyruleCastleWest>() },
		DeepHole_HyruleLake { s.get<struct DeepHole_HyruleLake>() },
		DeepHole_HyrulePlains { s.get<struct DeepHole_HyrulePlains>() },
		DeepHole_ImeruMt { s.get<struct DeepHole_ImeruMt>() },
		DeepHole_Kakariko_EastHill { s.get<struct DeepHole_Kakariko_EastHill>() },
		DeepHole_KiyanbaTrees { s.get<struct DeepHole_KiyanbaTrees>() },
		DeepHole_LomeiIsland { s.get<struct DeepHole_LomeiIsland>() },
		DeepHole_Minakkare { s.get<struct DeepHole_Minakkare>() },
		DeepHole_RirimukuMt { s.get<struct DeepHole_RirimukuMt>() },
		DeepHole_Rito { s.get<struct DeepHole_Rito>() },
		DeepHole_Saihateno { s.get<struct DeepHole_Saihateno>() },
		DeepHole_SanaePlateau { s.get<struct DeepHole_SanaePlateau>() },
		DeepHole_TabantaMaze { s.get<struct DeepHole_TabantaMaze>() },
		DeepHole_YuaSnow { s.get<struct DeepHole_YuaSnow>() },
		DeepHole_ZifForest { s.get<struct DeepHole_ZifForest>() },
		DekamuPlain { s.get<struct DekamuPlain>() },
		DemonStatue_00 { s.get<struct DemonStatue_00>() },
		DemonStatue_01 { s.get<struct DemonStatue_01>() },
		DemonStatue_02 { s.get<struct DemonStatue_02>() },
		DemonStatue_03 { s.get<struct DemonStatue_03>() },
		DemonStatue_04 { s.get<struct DemonStatue_04>() },
		DemonStatue_05 { s.get<struct DemonStatue_05>() },
		DodoraBridge { s.get<struct DodoraBridge>() },
		DokamamaPlain { s.get<struct DokamamaPlain>() },
		DokuroPond { s.get<struct DokuroPond>() },
		DonLake { s.get<struct DonLake>() },
		DotiBeach { s.get<struct DotiBeach>() },
		DragonMarsh { s.get<struct DragonMarsh>() },
		DragonsFar { s.get<struct DragonsFar>() },
		DragonTears01 { s.get<struct DragonTears01>() },
		DragonTears02 { s.get<struct DragonTears02>() },
		DragonTears03 { s.get<struct DragonTears03>() },
		DragonTears04 { s.get<struct DragonTears04>() },
		DragonTears05 { s.get<struct DragonTears05>() },
		DragonTears06 { s.get<struct DragonTears06>() },
		DragonTears07 { s.get<struct DragonTears07>() },
		DragonTears08 { s.get<struct DragonTears08>() },
		DragonTears09 { s.get<struct DragonTears09>() },
		DragonTears10 { s.get<struct DragonTears10>() },
		DragonTears11 { s.get<struct DragonTears11>() },
		DragonTears12 { s.get<struct DragonTears12>() },
		Dungeon000 { s.get<struct Dungeon000>() },
		Dungeon001 { s.get<struct Dungeon001>() },
		Dungeon002 { s.get<struct Dungeon002>() },
		Dungeon003 { s.get<struct Dungeon003>() },
		Dungeon004 { s.get<struct Dungeon004>() },
		Dungeon005 { s.get<struct Dungeon005>() },
		Dungeon006 { s.get<struct Dungeon006>() },
		Dungeon007 { s.get<struct Dungeon007>() },
		Dungeon008 { s.get<struct Dungeon008>() },
		Dungeon009 { s.get<struct Dungeon009>() },
		Dungeon010 { s.get<struct Dungeon010>() },
		Dungeon011 { s.get<struct Dungeon011>() },
		Dungeon012 { s.get<struct Dungeon012>() },
		Dungeon013 { s.get<struct Dungeon013>() },
		Dungeon014 { s.get<struct Dungeon014>() },
		Dungeon015 { s.get<struct Dungeon015>() },
		Dungeon016 { s.get<struct Dungeon016>() },
		Dungeon017 { s.get<struct Dungeon017>() },
		Dungeon018 { s.get<struct Dungeon018>() },
		Dungeon019 { s.get<struct Dungeon019>() },
		Dungeon020 { s.get<struct Dungeon020>() },
		Dungeon021 { s.get<struct Dungeon021>() },
		Dungeon022 { s.get<struct Dungeon022>() },
		Dungeon023 { s.get<struct Dungeon023>() },
		Dungeon024 { s.get<struct Dungeon024>() },
		Dungeon025 { s.get<struct Dungeon025>() },
		Dungeon026 { s.get<struct Dungeon026>() },
		Dungeon027 { s.get<struct Dungeon027>() },
		Dungeon028 { s.get<struct Dungeon028>() },
		Dungeon029 { s.get<struct Dungeon029>() },
		Dungeon030 { s.get<struct Dungeon030>() },
		Dungeon031 { s.get<struct Dungeon031>() },
		Dungeon032 { s.get<struct Dungeon032>() },
		Dungeon033 { s.get<struct Dungeon033>() },
		Dungeon034 { s.get<struct Dungeon034>() },
		Dungeon035 { s.get<struct Dungeon035>() },
		Dungeon036 { s.get<struct Dungeon036>() },
		Dungeon037 { s.get<struct Dungeon037>() },
		Dungeon038 { s.get<struct Dungeon038>() },
		Dungeon039 { s.get<struct Dungeon039>() },
		Dungeon040 { s.get<struct Dungeon040>() },
		Dungeon041 { s.get<struct Dungeon041>() },
		Dungeon042 { s.get<struct Dungeon042>() },
		Dungeon043 { s.get<struct Dungeon043>() },
		Dungeon044 { s.get<struct Dungeon044>() },
		Dungeon045 { s.get<struct Dungeon045>() },
		Dungeon046 { s.get<struct Dungeon046>() },
		Dungeon047 { s.get<struct Dungeon047>() },
		Dungeon048 { s.get<struct Dungeon048>() },
		Dungeon049 { s.get<struct Dungeon049>() },
		Dungeon050 { s.get<struct Dungeon050>() },
		Dungeon051 { s.get<struct Dungeon051>() },
		Dungeon052 { s.get<struct Dungeon052>() },
		Dungeon053 { s.get<struct Dungeon053>() },
		Dungeon054 { s.get<struct Dungeon054>() },
		Dungeon055 { s.get<struct Dungeon055>() },
		Dungeon056 { s.get<struct Dungeon056>() },
		Dungeon057 { s.get<struct Dungeon057>() },
		Dungeon058 { s.get<struct Dungeon058>() },
		Dungeon059 { s.get<struct Dungeon059>() },
		Dungeon060 { s.get<struct Dungeon060>() },
		Dungeon061 { s.get<struct Dungeon061>() },
		Dungeon062 { s.get<struct Dungeon062>() },
		Dungeon063 { s.get<struct Dungeon063>() },
		Dungeon064 { s.get<struct Dungeon064>() },
		Dungeon065 { s.get<struct Dungeon065>() },
		Dungeon066 { s.get<struct Dungeon066>() },
		Dungeon067 { s.get<struct Dungeon067>() },
		Dungeon068 { s.get<struct Dungeon068>() },
		Dungeon069 { s.get<struct Dungeon069>() },
		Dungeon070 { s.get<struct Dungeon070>() },
		Dungeon071 { s.get<struct Dungeon071>() },
		Dungeon072 { s.get<struct Dungeon072>() },
		Dungeon073 { s.get<struct Dungeon073>() },
		Dungeon074 { s.get<struct Dungeon074>() },
		Dungeon075 { s.get<struct Dungeon075>() },
		Dungeon076 { s.get<struct Dungeon076>() },
		Dungeon077 { s.get<struct Dungeon077>() },
		Dungeon078 { s.get<struct Dungeon078>() },
		Dungeon079 { s.get<struct Dungeon079>() },
		Dungeon080 { s.get<struct Dungeon080>() },
		Dungeon081 { s.get<struct Dungeon081>() },
		Dungeon082 { s.get<struct Dungeon082>() },
		Dungeon083 { s.get<struct Dungeon083>() },
		Dungeon084 { s.get<struct Dungeon084>() },
		Dungeon085 { s.get<struct Dungeon085>() },
		Dungeon086 { s.get<struct Dungeon086>() },
		Dungeon087 { s.get<struct Dungeon087>() },
		Dungeon088 { s.get<struct Dungeon088>() },
		Dungeon089 { s.get<struct Dungeon089>() },
		Dungeon090 { s.get<struct Dungeon090>() },
		Dungeon091 { s.get<struct Dungeon091>() },
		Dungeon092 { s.get<struct Dungeon092>() },
		Dungeon093 { s.get<struct Dungeon093>() },
		Dungeon094 { s.get<struct Dungeon094>() },
		Dungeon095 { s.get<struct Dungeon095>() },
		Dungeon096 { s.get<struct Dungeon096>() },
		Dungeon097 { s.get<struct Dungeon097>() },
		Dungeon098 { s.get<struct Dungeon098>() },
		Dungeon099 { s.get<struct Dungeon099>() },
		Dungeon100 { s.get<struct Dungeon100>() },
		Dungeon101 { s.get<struct Dungeon101>() },
		Dungeon102 { s.get<struct Dungeon102>() },
		Dungeon103 { s.get<struct Dungeon103>() },
		Dungeon104 { s.get<struct Dungeon104>() },
		Dungeon105 { s.get<struct Dungeon105>() },
		Dungeon106 { s.get<struct Dungeon106>() },
		Dungeon107 { s.get<struct Dungeon107>() },
		Dungeon108 { s.get<struct Dungeon108>() },
		Dungeon109 { s.get<struct Dungeon109>() },
		Dungeon110 { s.get<struct Dungeon110>() },
		Dungeon111 { s.get<struct Dungeon111>() },
		Dungeon112 { s.get<struct Dungeon112>() },
		Dungeon113 { s.get<struct Dungeon113>() },
		Dungeon114 { s.get<struct Dungeon114>() },
		Dungeon115 { s.get<struct Dungeon115>() },
		Dungeon116 { s.get<struct Dungeon116>() },
		Dungeon117 { s.get<struct Dungeon117>() },
		Dungeon118 { s.get<struct Dungeon118>() },
		Dungeon119 { s.get<struct Dungeon119>() },
		Dungeon120 { s.get<struct Dungeon120>() },
		Dungeon121 { s.get<struct Dungeon121>() },
		Dungeon122 { s.get<struct Dungeon122>() },
		Dungeon123 { s.get<struct Dungeon123>() },
		Dungeon124 { s.get<struct Dungeon124>() },
		Dungeon125 { s.get<struct Dungeon125>() },
		Dungeon126 { s.get<struct Dungeon126>() },
		Dungeon127 { s.get<struct Dungeon127>() },
		Dungeon128 { s.get<struct Dungeon128>() },
		Dungeon129 { s.get<struct Dungeon129>() },
		Dungeon130 { s.get<struct Dungeon130>() },
		Dungeon131 { s.get<struct Dungeon131>() },
		Dungeon132 { s.get<struct Dungeon132>() },
		Dungeon133 { s.get<struct Dungeon133>() },
		Dungeon134 { s.get<struct Dungeon134>() },
		Dungeon135 { s.get<struct Dungeon135>() },
		Dungeon136 { s.get<struct Dungeon136>() },
		Dungeon137 { s.get<struct Dungeon137>() },
		Dungeon138 { s.get<struct Dungeon138>() },
		Dungeon139 { s.get<struct Dungeon139>() },
		Dungeon140 { s.get<struct Dungeon140>() },
		Dungeon141 { s.get<struct Dungeon141>() },
		Dungeon142 { s.get<struct Dungeon142>() },
		Dungeon143 { s.get<struct Dungeon143>() },
		Dungeon144 { s.get<struct Dungeon144>() },
		Dungeon145 { s.get<struct Dungeon145>() },
		Dungeon146 { s.get<struct Dungeon146>() },
		Dungeon147 { s.get<struct Dungeon147>() },
		Dungeon148 { s.get<struct Dungeon148>() },
		Dungeon149 { s.get<struct Dungeon149>() },
		Dungeon150 { s.get<struct Dungeon150>() },
		Dungeon151 { s.get<struct Dungeon151>() },
		EagleBridge { s.get<struct EagleBridge>() },
		EastDam { s.get<struct EastDam>() },
		EastEunpoHighlands { s.get<struct EastEunpoHighlands>() },
		EastGerudo { s.get<struct EastGerudo>() },
		EastGerudoPlateau { s.get<struct EastGerudoPlateau>() },
		EastGerudoRuins { s.get<struct EastGerudoRuins>() },
		EastPostTownRuin { s.get<struct EastPostTownRuin>() },
		EastShrine { s.get<struct EastShrine>() },
		EldinRestaurants { s.get<struct EldinRestaurants>() },
		ElegLake { s.get<struct ElegLake>() },
		EnRiver { s.get<struct EnRiver>() },
		EquePlateau { s.get<struct EquePlateau>() },
		ErumedaPlateau { s.get<struct ErumedaPlateau>() },
		EunpoHighlands { s.get<struct EunpoHighlands>() },
		EX_LowGravityIsland { s.get<struct EX_LowGravityIsland>() },
		Execution { s.get<struct Execution>() },
		ExpaTrees { s.get<struct ExpaTrees>() },
		EzzuBridge { s.get<struct EzzuBridge>() },
		FairyForest { s.get<struct FairyForest>() },
		FaronHatago000 { s.get<struct FaronHatago000>() },
		FaronHatago001 { s.get<struct FaronHatago001>() },
		FaronHatago002 { s.get<struct FaronHatago002>() },
		FenaMt { s.get<struct FenaMt>() },
		FeoreRiver { s.get<struct FeoreRiver>() },
		FigureGallery { s.get<struct FigureGallery>() },
		FinrasForest { s.get<struct FinrasForest>() },
		FironeForestEntrance { s.get<struct FironeForestEntrance>() },
		FlamingoSpa { s.get<struct FlamingoSpa>() },
		FlogPond { s.get<struct FlogPond>() },
		FloriaBridge { s.get<struct FloriaBridge>() },
		FloriaFalls { s.get<struct FloriaFalls>() },
		FloriaRiver { s.get<struct FloriaRiver>() },
		FlowerSandbank { s.get<struct FlowerSandbank>() },
		ForestHatago { s.get<struct ForestHatago>() },
		ForgeShopGolem { s.get<struct ForgeShopGolem>() },
		FrontGatePosttown { s.get<struct FrontGatePosttown>() },
		FuruboLake { s.get<struct FuruboLake>() },
		GakanakkyoPlain { s.get<struct GakanakkyoPlain>() },
		GameBitalockGolf { s.get<struct GameBitalockGolf>() },
		GameGutsCriff { s.get<struct GameGutsCriff>() },
		GameShiledSurf { s.get<struct GameShiledSurf>() },
		GamettaPlateau { s.get<struct GamettaPlateau>() },
		GaneLake { s.get<struct GaneLake>() },
		GarakishiPass { s.get<struct GarakishiPass>() },
		GarakishiVillage { s.get<struct GarakishiVillage>() },
		GasemaDam { s.get<struct GasemaDam>() },
		GasemaRiver { s.get<struct GasemaRiver>() },
		GashamaHill { s.get<struct GashamaHill>() },
		GashamahiMt { s.get<struct GashamahiMt>() },
		GatakaraGarrison { s.get<struct GatakaraGarrison>() },
		GatakaraPond { s.get<struct GatakaraPond>() },
		GatinLake { s.get<struct GatinLake>() },
		GenLake { s.get<struct GenLake>() },
		GeraRiver { s.get<struct GeraRiver>() },
		Gerudo { s.get<struct Gerudo>() },
		GerudoCanyon { s.get<struct GerudoCanyon>() },
		GerudoCanyon_Entrance { s.get<struct GerudoCanyon_Entrance>() },
		GerudoDesert_Entrance { s.get<struct GerudoDesert_Entrance>() },
		GerudoDesertCrack { s.get<struct GerudoDesertCrack>() },
		GerudoEightHeroStatue { s.get<struct GerudoEightHeroStatue>() },
		GerudoHatago { s.get<struct GerudoHatago>() },
		GerudoPyramidDungeon_1 { s.get<struct GerudoPyramidDungeon_1>() },
		GerudoPyramidDungeon_2 { s.get<struct GerudoPyramidDungeon_2>() },
		GerudoPyramidDungeon_3 { s.get<struct GerudoPyramidDungeon_3>() },
		GerudoPyramidDungeon_4 { s.get<struct GerudoPyramidDungeon_4>() },
		GerudoPyramidDungeon_5 { s.get<struct GerudoPyramidDungeon_5>() },
		GerudoPyramidDungeon_6 { s.get<struct GerudoPyramidDungeon_6>() },
		GerudoPyramidDungeon_7 { s.get<struct GerudoPyramidDungeon_7>() },
		GerudoSummit { s.get<struct GerudoSummit>() },
		GerudoUndergroundTown { s.get<struct GerudoUndergroundTown>() },
		GiankonIsland { s.get<struct GiankonIsland>() },
		GibogaHill { s.get<struct GibogaHill>() },
		GibururuMt { s.get<struct GibururuMt>() },
		GigiLake { s.get<struct GigiLake>() },
		GiminoPond { s.get<struct GiminoPond>() },
		GimpoMt { s.get<struct GimpoMt>() },
		GisaHill { s.get<struct GisaHill>() },
		GishiHill { s.get<struct GishiHill>() },
		GoanaValley { s.get<struct GoanaValley>() },
		GobyMt { s.get<struct GobyMt>() },
		GoinaPlateau { s.get<struct GoinaPlateau>() },
		Goron { s.get<struct Goron>() },
		GoronBridge { s.get<struct GoronBridge>() },
		GoronSpa { s.get<struct GoronSpa>() },
		GoyoLake { s.get<struct GoyoLake>() },
		GumaroValley { s.get<struct GumaroValley>() },
		GutinizaPlain { s.get<struct GutinizaPlain>() },
		GutinizaPlainTomb { s.get<struct GutinizaPlainTomb>() },
		GyunaIsland { s.get<struct GyunaIsland>() },
		HachijoBridge { s.get<struct HachijoBridge>() },
		HagoromoLake { s.get<struct HagoromoLake>() },
		HamiyonPlain { s.get<struct HamiyonPlain>() },
		HarayaLake { s.get<struct HarayaLake>() },
		HashibiroLake { s.get<struct HashibiroLake>() },
		Hateno { s.get<struct Hateno>() },
		HatenoBay { s.get<struct HatenoBay>() },
		HatenoBeach { s.get<struct HatenoBeach>() },
		HatenoFarm { s.get<struct HatenoFarm>() },
		HatenoGate { s.get<struct HatenoGate>() },
		HatenokoIsland { s.get<struct HatenokoIsland>() },
		HatenoLabo { s.get<struct HatenoLabo>() },
		HatenoSchool { s.get<struct HatenoSchool>() },
		HawkMt { s.get<struct HawkMt>() },
		HeburaEastSummit { s.get<struct HeburaEastSummit>() },
		HeburaIcicle { s.get<struct HeburaIcicle>() },
		HeburaLodge { s.get<struct HeburaLodge>() },
		HeburaMt_North { s.get<struct HeburaMt_North>() },
		HeburaNorthSummit { s.get<struct HeburaNorthSummit>() },
		HeburaPeak { s.get<struct HeburaPeak>() },
		HeburaSouthSummit { s.get<struct HeburaSouthSummit>() },
		HeburaTundera { s.get<struct HeburaTundera>() },
		HeburaWestSummit { s.get<struct HeburaWestSummit>() },
		HemaHill { s.get<struct HemaHill>() },
		HesonaiValley { s.get<struct HesonaiValley>() },
		HigakkareBeach { s.get<struct HigakkareBeach>() },
		HigakkarePlain { s.get<struct HigakkarePlain>() },
		HigashinoBay { s.get<struct HigashinoBay>() },
		HimeidaMt { s.get<struct HimeidaMt>() },
		HopeBridge { s.get<struct HopeBridge>() },
		HopesPlateau { s.get<struct HopesPlateau>() },
		HorseStableBranchOffice_BaseCamp { s.get<struct HorseStableBranchOffice_BaseCamp>() },
		HorseStableBranchOffice_Gerudo { s.get<struct HorseStableBranchOffice_Gerudo>() },
		HyliaMt { s.get<struct HyliaMt>() },
		HyliaRiver { s.get<struct HyliaRiver>() },
		HyralBridge { s.get<struct HyralBridge>() },
		HyralIslands { s.get<struct HyralIslands>() },
		Hyrule_Out { s.get<struct Hyrule_Out>() },
		HyruleCastle { s.get<struct HyruleCastle>() },
		HyruleCastle_Hall_0 { s.get<struct HyruleCastle_Hall_0>() },
		HyruleCastle_Hall_1 { s.get<struct HyruleCastle_Hall_1>() },
		HyruleCastle_Hall_2 { s.get<struct HyruleCastle_Hall_2>() },
		HyruleCastle_Room_0 { s.get<struct HyruleCastle_Room_0>() },
		HyruleCastle_Room_1 { s.get<struct HyruleCastle_Room_1>() },
		HyruleCastle_Room_10 { s.get<struct HyruleCastle_Room_10>() },
		HyruleCastle_Room_11 { s.get<struct HyruleCastle_Room_11>() },
		HyruleCastle_Room_2 { s.get<struct HyruleCastle_Room_2>() },
		HyruleCastle_Room_3 { s.get<struct HyruleCastle_Room_3>() },
		HyruleCastle_Room_5 { s.get<struct HyruleCastle_Room_5>() },
		HyruleCastle_Room_6 { s.get<struct HyruleCastle_Room_6>() },
		HyruleCastle_Room_7 { s.get<struct HyruleCastle_Room_7>() },
		HyruleCastle_Room_8 { s.get<struct HyruleCastle_Room_8>() },
		HyruleCastle_Room_9 { s.get<struct HyruleCastle_Room_9>() },
		HyruleCastleUnderground { s.get<struct HyruleCastleUnderground>() },
		HyruleCave { s.get<struct HyruleCave>() },
		HyruleCentralPlace { s.get<struct HyruleCentralPlace>() },
		HyruleDepthHatago { s.get<struct HyruleDepthHatago>() },
		HyruleEastTown { s.get<struct HyruleEastTown>() },
		HyruleGarrison { s.get<struct HyruleGarrison>() },
		HyruleGround { s.get<struct HyruleGround>() },
		HyruleLabo { s.get<struct HyruleLabo>() },
		HyrulePark { s.get<struct HyrulePark>() },
		HyrulePlace { s.get<struct HyrulePlace>() },
		HyruleSkyIsland { s.get<struct HyruleSkyIsland>() },
		HyruleTemple { s.get<struct HyruleTemple>() },
		HyruleTower { s.get<struct HyruleTower>() },
		HyruleUnderground { s.get<struct HyruleUnderground>() },
		HyruleWater { s.get<struct HyruleWater>() },
		HyruleWestTown { s.get<struct HyruleWestTown>() },
		IbaraPlateau { s.get<struct IbaraPlateau>() },
		IceHouse { s.get<struct IceHouse>() },
		IkokoPlateau { s.get<struct IkokoPlateau>() },
		ImeruMt { s.get<struct ImeruMt>() },
		InvestigatingGroupBase { s.get<struct InvestigatingGroupBase>() },
		IooValley { s.get<struct IooValley>() },
		IrimoLake { s.get<struct IrimoLake>() },
		IrimoRiver { s.get<struct IrimoRiver>() },
		IsakiCape { s.get<struct IsakiCape>() },
		IsakuIslands { s.get<struct IsakuIslands>() },
		JedaPlateau { s.get<struct JedaPlateau>() },
		JijigegeMt { s.get<struct JijigegeMt>() },
		JiuRiver { s.get<struct JiuRiver>() },
		JogoBridge { s.get<struct JogoBridge>() },
		JokuBridge { s.get<struct JokuBridge>() },
		KagossaMt { s.get<struct KagossaMt>() },
		KaiyanPlain { s.get<struct KaiyanPlain>() },
		KakamoLake { s.get<struct KakamoLake>() },
		KakaomePlain { s.get<struct KakaomePlain>() },
		Kakariko { s.get<struct Kakariko>() },
		Kakariko_EastHill { s.get<struct Kakariko_EastHill>() },
		KakufusaPlain { s.get<struct KakufusaPlain>() },
		KamasuPlateau { s.get<struct KamasuPlateau>() },
		KamutariPlateau { s.get<struct KamutariPlateau>() },
		KapporeMt { s.get<struct KapporeMt>() },
		KarimikiLake { s.get<struct KarimikiLake>() },
		KarusaValley { s.get<struct KarusaValley>() },
		KasuraMt { s.get<struct KasuraMt>() },
		KattoriPlateau { s.get<struct KattoriPlateau>() },
		KaturaCastle { s.get<struct KaturaCastle>() },
		KaturaRiver { s.get<struct KaturaRiver>() },
		KauLake { s.get<struct KauLake>() },
		KazanaDungeon { s.get<struct KazanaDungeon>() },
		KazuryuLake { s.get<struct KazuryuLake>() },
		KazuryuRiver { s.get<struct KazuryuRiver>() },
		KazusuPass { s.get<struct KazusuPass>() },
		KibakkaSnow { s.get<struct KibakkaSnow>() },
		KibinaLake { s.get<struct KibinaLake>() },
		KihirePlain { s.get<struct KihirePlain>() },
		KikinosaMt { s.get<struct KikinosaMt>() },
		KikinosaPlain { s.get<struct KikinosaPlain>() },
		KimarikaMt { s.get<struct KimarikaMt>() },
		KimarikaPlateau { s.get<struct KimarikaPlateau>() },
		KingfisherSpa { s.get<struct KingfisherSpa>() },
		KingValley { s.get<struct KingValley>() },
		KingValley2 { s.get<struct KingValley2>() },
		KinmePlateau { s.get<struct KinmePlateau>() },
		KinshoiMt { s.get<struct KinshoiMt>() },
		KirisasaPlateau { s.get<struct KirisasaPlateau>() },
		KiriyabuMt { s.get<struct KiriyabuMt>() },
		KitakkareBeach { s.get<struct KitakkareBeach>() },
		KitakkarePlain { s.get<struct KitakkarePlain>() },
		KitakkarePlateau { s.get<struct KitakkarePlateau>() },
		KitanoBay { s.get<struct KitanoBay>() },
		KiyanbaTrees { s.get<struct KiyanbaTrees>() },
		KochuBridge { s.get<struct KochuBridge>() },
		KoganeyaLake { s.get<struct KoganeyaLake>() },
		KokuppiSnow { s.get<struct KokuppiSnow>() },
		KokuwaLake { s.get<struct KokuwaLake>() },
		KomoreBeach { s.get<struct KomoreBeach>() },
		KondanaLake { s.get<struct KondanaLake>() },
		KoshaIsland { s.get<struct KoshaIsland>() },
		KuhanLake { s.get<struct KuhanLake>() },
		KukujaValley { s.get<struct KukujaValley>() },
		KumPlateau { s.get<struct KumPlateau>() },
		KumSpa { s.get<struct KumSpa>() },
		KunaiBridge { s.get<struct KunaiBridge>() },
		KunaiLake { s.get<struct KunaiLake>() },
		KurindaPrairie { s.get<struct KurindaPrairie>() },
		KurisobeSnow { s.get<struct KurisobeSnow>() },
		KuroidaPlateau { s.get<struct KuroidaPlateau>() },
		KutenLake { s.get<struct KutenLake>() },
		KutiffMt { s.get<struct KutiffMt>() },
		LakeFloria { s.get<struct LakeFloria>() },
		LakeHylia { s.get<struct LakeHylia>() },
		LakeHylia_Sky { s.get<struct LakeHylia_Sky>() },
		LakeHylia_Underground { s.get<struct LakeHylia_Underground>() },
		LanayruBay { s.get<struct LanayruBay>() },
		LanayruEastEntrance { s.get<struct LanayruEastEntrance>() },
		LanayruWestEntrance { s.get<struct LanayruWestEntrance>() },
		LargeDungeonFire { s.get<struct LargeDungeonFire>() },
		LargeDungeonFire_1F { s.get<struct LargeDungeonFire_1F>() },
		LargeDungeonFire_2F { s.get<struct LargeDungeonFire_2F>() },
		LargeDungeonFire_3F { s.get<struct LargeDungeonFire_3F>() },
		LargeDungeonFire_4F { s.get<struct LargeDungeonFire_4F>() },
		LargeDungeonFire_5F { s.get<struct LargeDungeonFire_5F>() },
		LargeDungeonHyruleCastle { s.get<struct LargeDungeonHyruleCastle>() },
		LargeDungeonHyruleCastle_1F { s.get<struct LargeDungeonHyruleCastle_1F>() },
		LargeDungeonHyruleCastle_B1 { s.get<struct LargeDungeonHyruleCastle_B1>() },
		LargeDungeonHyruleCastle_B2 { s.get<struct LargeDungeonHyruleCastle_B2>() },
		LargeDungeonHyruleCastle_B3 { s.get<struct LargeDungeonHyruleCastle_B3>() },
		LargeDungeonSoul { s.get<struct LargeDungeonSoul>() },
		LargeDungeonThunder { s.get<struct LargeDungeonThunder>() },
		LargeDungeonThunder_1F { s.get<struct LargeDungeonThunder_1F>() },
		LargeDungeonThunder_2F { s.get<struct LargeDungeonThunder_2F>() },
		LargeDungeonThunder_3F { s.get<struct LargeDungeonThunder_3F>() },
		LargeDungeonThunder_4F { s.get<struct LargeDungeonThunder_4F>() },
		LargeDungeonThunder_5F { s.get<struct LargeDungeonThunder_5F>() },
		LargeDungeonThunder_6F { s.get<struct LargeDungeonThunder_6F>() },
		LargeDungeonThunder_7F { s.get<struct LargeDungeonThunder_7F>() },
		LargeDungeonThunder_B1 { s.get<struct LargeDungeonThunder_B1>() },
		LargeDungeonWater { s.get<struct LargeDungeonWater>() },
		LargeDungeonWater_B1 { s.get<struct LargeDungeonWater_B1>() },
		LargeDungeonWind { s.get<struct LargeDungeonWind>() },
		LargeDungeonWind_1F { s.get<struct LargeDungeonWind_1F>() },
		LargeDungeonWind_B1 { s.get<struct LargeDungeonWind_B1>() },
		LargeDungeonWind_B2 { s.get<struct LargeDungeonWind_B2>() },
		LaveBeach { s.get<struct LaveBeach>() },
		LeMarbeBridge { s.get<struct LeMarbeBridge>() },
		LightningPlateau { s.get<struct LightningPlateau>() },
		LittleBrotherBridge { s.get<struct LittleBrotherBridge>() },
		LomeiIslands { s.get<struct LomeiIslands>() },
		LostForest { s.get<struct LostForest>() },
		MacusePeninsula { s.get<struct MacusePeninsula>() },
		MakuminoValley { s.get<struct MakuminoValley>() },
		ManbaLake { s.get<struct ManbaLake>() },
		MapArea_CentralHyrule { s.get<struct MapArea_CentralHyrule>() },
		MapArea_DeathMountain { s.get<struct MapArea_DeathMountain>() },
		MapArea_DeathMountain_Sky { s.get<struct MapArea_DeathMountain_Sky>() },
		MapArea_DeathMountain_Underground { s.get<struct MapArea_DeathMountain_Underground>() },
		MapArea_EastHateru { s.get<struct MapArea_EastHateru>() },
		MapArea_EastHateru_Sky { s.get<struct MapArea_EastHateru_Sky>() },
		MapArea_EastHateru_Underground { s.get<struct MapArea_EastHateru_Underground>() },
		MapArea_EldinCanyon { s.get<struct MapArea_EldinCanyon>() },
		MapArea_EldinCanyon_Sky { s.get<struct MapArea_EldinCanyon_Sky>() },
		MapArea_EldinCanyon_Underground { s.get<struct MapArea_EldinCanyon_Underground>() },
		MapArea_EldinMountains { s.get<struct MapArea_EldinMountains>() },
		MapArea_EldinMountains_Sky { s.get<struct MapArea_EldinMountains_Sky>() },
		MapArea_EldinMountains_Underground { s.get<struct MapArea_EldinMountains_Underground>() },
		MapArea_FironeGrassland { s.get<struct MapArea_FironeGrassland>() },
		MapArea_FironeGrassland_Sky { s.get<struct MapArea_FironeGrassland_Sky>() },
		MapArea_FironeGrassland_Underground { s.get<struct MapArea_FironeGrassland_Underground>() },
		MapArea_FironeSea { s.get<struct MapArea_FironeSea>() },
		MapArea_FironeSea_Sky { s.get<struct MapArea_FironeSea_Sky>() },
		MapArea_FironeSea_Underground { s.get<struct MapArea_FironeSea_Underground>() },
		MapArea_GerudoDesert { s.get<struct MapArea_GerudoDesert>() },
		MapArea_GerudoDesert_Sky { s.get<struct MapArea_GerudoDesert_Sky>() },
		MapArea_GerudoDesert_Underground { s.get<struct MapArea_GerudoDesert_Underground>() },
		MapArea_GerudoHighlands { s.get<struct MapArea_GerudoHighlands>() },
		MapArea_GerudoHighlands_Sky { s.get<struct MapArea_GerudoHighlands_Sky>() },
		MapArea_GerudoHighlands_Underground { s.get<struct MapArea_GerudoHighlands_Underground>() },
		MapArea_HateruSea { s.get<struct MapArea_HateruSea>() },
		MapArea_HateruSea_Sky { s.get<struct MapArea_HateruSea_Sky>() },
		MapArea_HateruSea_Underground { s.get<struct MapArea_HateruSea_Underground>() },
		MapArea_HeburaMountains { s.get<struct MapArea_HeburaMountains>() },
		MapArea_HeburaMountains_Sky { s.get<struct MapArea_HeburaMountains_Sky>() },
		MapArea_HeburaMountains_Underground { s.get<struct MapArea_HeburaMountains_Underground>() },
		MapArea_HyliaLake { s.get<struct MapArea_HyliaLake>() },
		MapArea_HyruleForest { s.get<struct MapArea_HyruleForest>() },
		MapArea_HyruleForest_Sky { s.get<struct MapArea_HyruleForest_Sky>() },
		MapArea_HyruleForest_Underground { s.get<struct MapArea_HyruleForest_Underground>() },
		MapArea_HyruleHill { s.get<struct MapArea_HyruleHill>() },
		MapArea_HyruleHill_Sky { s.get<struct MapArea_HyruleHill_Sky>() },
		MapArea_HyruleHill_Underground { s.get<struct MapArea_HyruleHill_Underground>() },
		MapArea_LanayruSea { s.get<struct MapArea_LanayruSea>() },
		MapArea_LanayruSea_Sky { s.get<struct MapArea_LanayruSea_Sky>() },
		MapArea_LanayruSea_Underground { s.get<struct MapArea_LanayruSea_Underground>() },
		MapArea_LanayruWaterSources { s.get<struct MapArea_LanayruWaterSources>() },
		MapArea_LanayruWaterSources_Sky { s.get<struct MapArea_LanayruWaterSources_Sky>() },
		MapArea_LanayruWaterSources_Underground { s.get<struct MapArea_LanayruWaterSources_Underground>() },
		MapArea_LanayruWetlands { s.get<struct MapArea_LanayruWetlands>() },
		MapArea_LanayruWetlands_Sky { s.get<struct MapArea_LanayruWetlands_Sky>() },
		MapArea_LanayruWetlands_Underground { s.get<struct MapArea_LanayruWetlands_Underground>() },
		MapArea_LiveMountain { s.get<struct MapArea_LiveMountain>() },
		MapArea_LiveMountain_Sky { s.get<struct MapArea_LiveMountain_Sky>() },
		MapArea_LiveMountain_Underground { s.get<struct MapArea_LiveMountain_Underground>() },
		MapArea_TabantaFrontier { s.get<struct MapArea_TabantaFrontier>() },
		MapArea_TabantaFrontier_Sky { s.get<struct MapArea_TabantaFrontier_Sky>() },
		MapArea_TabantaFrontier_Underground { s.get<struct MapArea_TabantaFrontier_Underground>() },
		MapArea_TamulOutback { s.get<struct MapArea_TamulOutback>() },
		MapArea_TamulOutback_Sky { s.get<struct MapArea_TamulOutback_Sky>() },
		MapArea_TamulOutback_Underground { s.get<struct MapArea_TamulOutback_Underground>() },
		MapArea_TamulPlateau { s.get<struct MapArea_TamulPlateau>() },
		MapArea_TamulPlateau_Sky { s.get<struct MapArea_TamulPlateau_Sky>() },
		MapArea_TamulPlateau_Underground { s.get<struct MapArea_TamulPlateau_Underground>() },
		MapArea_TamulSea { s.get<struct MapArea_TamulSea>() },
		MapArea_TamulSea_Sky { s.get<struct MapArea_TamulSea_Sky>() },
		MapArea_TamulSea_Underground { s.get<struct MapArea_TamulSea_Underground>() },
		MapArea_WestHateru { s.get<struct MapArea_WestHateru>() },
		MapArea_WestHateru_Sky { s.get<struct MapArea_WestHateru_Sky>() },
		MapArea_WestHateru_Underground { s.get<struct MapArea_WestHateru_Underground>() },
		MapRegion_Eldin { s.get<struct MapRegion_Eldin>() },
		MapRegion_Eldin_Sky { s.get<struct MapRegion_Eldin_Sky>() },
		MapRegion_Firone { s.get<struct MapRegion_Firone>() },
		MapRegion_Firone_Sky { s.get<struct MapRegion_Firone_Sky>() },
		MapRegion_Gerudo { s.get<struct MapRegion_Gerudo>() },
		MapRegion_Gerudo_Sky { s.get<struct MapRegion_Gerudo_Sky>() },
		MapRegion_Hateru { s.get<struct MapRegion_Hateru>() },
		MapRegion_Hateru_Sky { s.get<struct MapRegion_Hateru_Sky>() },
		MapRegion_Hebura { s.get<struct MapRegion_Hebura>() },
		MapRegion_Hebura_Sky { s.get<struct MapRegion_Hebura_Sky>() },
		MapRegion_HyrulePrairie { s.get<struct MapRegion_HyrulePrairie>() },
		MapRegion_HyrulePrairie_Sky { s.get<struct MapRegion_HyrulePrairie_Sky>() },
		MapRegion_HyrulePrairie_Underground { s.get<struct MapRegion_HyrulePrairie_Underground>() },
		MapRegion_Lanayru { s.get<struct MapRegion_Lanayru>() },
		MapRegion_Lanayru_Sky { s.get<struct MapRegion_Lanayru_Sky>() },
		MapRegion_Tamul { s.get<struct MapRegion_Tamul>() },
		MapRegion_Tamul_Sky { s.get<struct MapRegion_Tamul_Sky>() },
		MarittaHill { s.get<struct MarittaHill>() },
		MarittaPrairie { s.get<struct MarittaPrairie>() },
		MaronSpring { s.get<struct MaronSpring>() },
		MarritaExchange { s.get<struct MarritaExchange>() },
		MasazuBridge { s.get<struct MasazuBridge>() },
		MasazuRock { s.get<struct MasazuRock>() },
		MedakaValley { s.get<struct MedakaValley>() },
		MeganeRock { s.get<struct MeganeRock>() },
		MemeMt { s.get<struct MemeMt>() },
		MenadaBeach { s.get<struct MenadaBeach>() },
		MerkayaLowTrees { s.get<struct MerkayaLowTrees>() },
		MezusuPass { s.get<struct MezusuPass>() },
		MiddleTrees { s.get<struct MiddleTrees>() },
		MihekoBay { s.get<struct MihekoBay>() },
		MinakkareBridge { s.get<struct MinakkareBridge>() },
		MinakkareBridgeEast { s.get<struct MinakkareBridgeEast>() },
		MinakkareBridgeWest { s.get<struct MinakkareBridgeWest>() },
		MinakkareFalls { s.get<struct MinakkareFalls>() },
		MinakkareLake { s.get<struct MinakkareLake>() },
		MinakkarePlain { s.get<struct MinakkarePlain>() },
		MinaminoBay { s.get<struct MinaminoBay>() },
		Mine { s.get<struct Mine>() },
		MinusField { s.get<struct MinusField>() },
		MinusField_AagetoMt { s.get<struct MinusField_AagetoMt>() },
		MinusField_AkkareZhai { s.get<struct MinusField_AkkareZhai>() },
		MinusField_AncientColosseum { s.get<struct MinusField_AncientColosseum>() },
		MinusField_AncientTimeShrine { s.get<struct MinusField_AncientTimeShrine>() },
		MinusField_BarakkPlain { s.get<struct MinusField_BarakkPlain>() },
		MinusField_BiginaTrees { s.get<struct MinusField_BiginaTrees>() },
		MinusField_BlindForest { s.get<struct MinusField_BlindForest>() },
		MinusField_BluePrintShrine { s.get<struct MinusField_BluePrintShrine>() },
		MinusField_BraveFountain { s.get<struct MinusField_BraveFountain>() },
		MinusField_BuibuiTrees { s.get<struct MinusField_BuibuiTrees>() },
		MinusField_Cohorint { s.get<struct MinusField_Cohorint>() },
		MinusField_CresiaPeninsula { s.get<struct MinusField_CresiaPeninsula>() },
		MinusField_DasukidaMt { s.get<struct MinusField_DasukidaMt>() },
		MinusField_DesertGrave { s.get<struct MinusField_DesertGrave>() },
		MinusField_DokuroPond { s.get<struct MinusField_DokuroPond>() },
		MinusField_ExpaTrees { s.get<struct MinusField_ExpaTrees>() },
		MinusField_FairyForest { s.get<struct MinusField_FairyForest>() },
		MinusField_FenaMt { s.get<struct MinusField_FenaMt>() },
		MinusField_FlamingoSpa { s.get<struct MinusField_FlamingoSpa>() },
		MinusField_ForestColosseum { s.get<struct MinusField_ForestColosseum>() },
		MinusField_GanondorfArea { s.get<struct MinusField_GanondorfArea>() },
		MinusField_GanondorfEnd { s.get<struct MinusField_GanondorfEnd>() },
		MinusField_GanondorfEntrance { s.get<struct MinusField_GanondorfEntrance>() },
		MinusField_GashamahiMt { s.get<struct MinusField_GashamahiMt>() },
		MinusField_Gerudo { s.get<struct MinusField_Gerudo>() },
		MinusField_GerudoFossil { s.get<struct MinusField_GerudoFossil>() },
		MinusField_GerudoSummit { s.get<struct MinusField_GerudoSummit>() },
		MinusField_GibogaHill { s.get<struct MinusField_GibogaHill>() },
		MinusField_GibururuMt { s.get<struct MinusField_GibururuMt>() },
		MinusField_GimpoMt { s.get<struct MinusField_GimpoMt>() },
		MinusField_GobyLake { s.get<struct MinusField_GobyLake>() },
		MinusField_GobyMt { s.get<struct MinusField_GobyMt>() },
		MinusField_Goron { s.get<struct MinusField_Goron>() },
		MinusField_Hateno { s.get<struct MinusField_Hateno>() },
		MinusField_HatenoGate { s.get<struct MinusField_HatenoGate>() },
		MinusField_HawkMt { s.get<struct MinusField_HawkMt>() },
		MinusField_HeburaFossil { s.get<struct MinusField_HeburaFossil>() },
		MinusField_HeburaPeak { s.get<struct MinusField_HeburaPeak>() },
		MinusField_HimeidaMt { s.get<struct MinusField_HimeidaMt>() },
		MinusField_HimeidaSpa { s.get<struct MinusField_HimeidaSpa>() },
		MinusField_HyliaMt { s.get<struct MinusField_HyliaMt>() },
		MinusField_JijigegeMt { s.get<struct MinusField_JijigegeMt>() },
		MinusField_Kakariko { s.get<struct MinusField_Kakariko>() },
		MinusField_KapporeMt { s.get<struct MinusField_KapporeMt>() },
		MinusField_KasuraMt { s.get<struct MinusField_KasuraMt>() },
		MinusField_KazuryuLake { s.get<struct MinusField_KazuryuLake>() },
		MinusField_KikinosaMt { s.get<struct MinusField_KikinosaMt>() },
		MinusField_KimarikaMt { s.get<struct MinusField_KimarikaMt>() },
		MinusField_KingfisherSpa { s.get<struct MinusField_KingfisherSpa>() },
		MinusField_KingValley { s.get<struct MinusField_KingValley>() },
		MinusField_KinshoiMt { s.get<struct MinusField_KinshoiMt>() },
		MinusField_KiyanbaTrees { s.get<struct MinusField_KiyanbaTrees>() },
		MinusField_KorokForest { s.get<struct MinusField_KorokForest>() },
		MinusField_KumSpa { s.get<struct MinusField_KumSpa>() },
		MinusField_KutiffMt { s.get<struct MinusField_KutiffMt>() },
		MinusField_LiveMountain { s.get<struct MinusField_LiveMountain>() },
		MinusField_LizardLake { s.get<struct MinusField_LizardLake>() },
		MinusField_LomeiIsland { s.get<struct MinusField_LomeiIsland>() },
		MinusField_LomeiNorth { s.get<struct MinusField_LomeiNorth>() },
		MinusField_LomeiSouth { s.get<struct MinusField_LomeiSouth>() },
		MinusField_MacusePeninsula { s.get<struct MinusField_MacusePeninsula>() },
		MinusField_MemeMt { s.get<struct MinusField_MemeMt>() },
		MinusField_MiddleTrees { s.get<struct MinusField_MiddleTrees>() },
		MinusField_MizemakuMt { s.get<struct MinusField_MizemakuMt>() },
		MinusField_MoriMt { s.get<struct MinusField_MoriMt>() },
		MinusField_MorudaMt { s.get<struct MinusField_MorudaMt>() },
		MinusField_MorugaMt { s.get<struct MinusField_MorugaMt>() },
		MinusField_NezuppoTrees { s.get<struct MinusField_NezuppoTrees>() },
		MinusField_Oasis { s.get<struct MinusField_Oasis>() },
		MinusField_OngiForest { s.get<struct MinusField_OngiForest>() },
		MinusField_OpeningField { s.get<struct MinusField_OpeningField>() },
		MinusField_OpeningFieldEnd { s.get<struct MinusField_OpeningFieldEnd>() },
		MinusField_OrdinFossil { s.get<struct MinusField_OrdinFossil>() },
		MinusField_PongagaMt { s.get<struct MinusField_PongagaMt>() },
		MinusField_PoponMt { s.get<struct MinusField_PoponMt>() },
		MinusField_PowerFountain { s.get<struct MinusField_PowerFountain>() },
		MinusField_RiaroTrees { s.get<struct MinusField_RiaroTrees>() },
		MinusField_RirimukuMt { s.get<struct MinusField_RirimukuMt>() },
		MinusField_Rito { s.get<struct MinusField_Rito>() },
		MinusField_RokomakuMt { s.get<struct MinusField_RokomakuMt>() },
		MinusField_SaiMt { s.get<struct MinusField_SaiMt>() },
		MinusField_ShinikkyoForest { s.get<struct MinusField_ShinikkyoForest>() },
		MinusField_SouthGerudoLegacy { s.get<struct MinusField_SouthGerudoLegacy>() },
		MinusField_StartPoint { s.get<struct MinusField_StartPoint>() },
		MinusField_TagonaTrees { s.get<struct MinusField_TagonaTrees>() },
		MinusField_Taura { s.get<struct MinusField_Taura>() },
		MinusField_TerumeMt { s.get<struct MinusField_TerumeMt>() },
		MinusField_TwinsMountain { s.get<struct MinusField_TwinsMountain>() },
		MinusField_UMiiVillage { s.get<struct MinusField_UMiiVillage>() },
		MinusField_WhiteZora { s.get<struct MinusField_WhiteZora>() },
		MinusField_WiseFountain { s.get<struct MinusField_WiseFountain>() },
		MinusField_ZifForest { s.get<struct MinusField_ZifForest>() },
		MizemakuMt { s.get<struct MizemakuMt>() },
		MomoMt { s.get<struct MomoMt>() },
		MoriMt { s.get<struct MoriMt>() },
		MoroLake { s.get<struct MoroLake>() },
		MorudaMt { s.get<struct MorudaMt>() },
		MorugaMt { s.get<struct MorugaMt>() },
		MuguriPlain { s.get<struct MuguriPlain>() },
		NaganizaHill { s.get<struct NaganizaHill>() },
		NagyuPlateau { s.get<struct NagyuPlateau>() },
		NaierunPeninsula { s.get<struct NaierunPeninsula>() },
		NanaimoPlain { s.get<struct NanaimoPlain>() },
		NangoPond { s.get<struct NangoPond>() },
		NantanCastle { s.get<struct NantanCastle>() },
		NaruguPeninsula { s.get<struct NaruguPeninsula>() },
		NefraHill { s.get<struct NefraHill>() },
		NewHyruleWestHatago { s.get<struct NewHyruleWestHatago>() },
		NewspaperCompany { s.get<struct NewspaperCompany>() },
		NezuppoTrees { s.get<struct NezuppoTrees>() },
		NiiLake { s.get<struct NiiLake>() },
		NikakaIsland { s.get<struct NikakaIsland>() },
		NishakkarePlain { s.get<struct NishakkarePlain>() },
		NishojiBridge { s.get<struct NishojiBridge>() },
		NitariBeach { s.get<struct NitariBeach>() },
		NomyPlain { s.get<struct NomyPlain>() },
		NorthGerudoRuins { s.get<struct NorthGerudoRuins>() },
		NorthHatelHatago { s.get<struct NorthHatelHatago>() },
		NorthHugeStone { s.get<struct NorthHugeStone>() },
		NutsLake { s.get<struct NutsLake>() },
		Oasis { s.get<struct Oasis>() },
		OkuAkkarePlain { s.get<struct OkuAkkarePlain>() },
		OkuwaLake { s.get<struct OkuwaLake>() },
		OngiForest { s.get<struct OngiForest>() },
		OoosePlain { s.get<struct OoosePlain>() },
		OrdinBridge { s.get<struct OrdinBridge>() },
		OrdinFossil { s.get<struct OrdinFossil>() },
		OrupaPlateau { s.get<struct OrupaPlateau>() },
		OsanjoBridge { s.get<struct OsanjoBridge>() },
		OshoromaLake { s.get<struct OshoromaLake>() },
		OtsukoWet { s.get<struct OtsukoWet>() },
		PafaBeach { s.get<struct PafaBeach>() },
		PaiyuBay { s.get<struct PaiyuBay>() },
		PakanchiIsland { s.get<struct PakanchiIsland>() },
		PaparaPlateau { s.get<struct PaparaPlateau>() },
		PearlWaste { s.get<struct PearlWaste>() },
		PeridoBarrier { s.get<struct PeridoBarrier>() },
		PlayerHouse { s.get<struct PlayerHouse>() },
		PongagaMt { s.get<struct PongagaMt>() },
		PoponMt { s.get<struct PoponMt>() },
		PostTownRuin { s.get<struct PostTownRuin>() },
		PowerFountain { s.get<struct PowerFountain>() },
		PstaLake { s.get<struct PstaLake>() },
		PukiroroMt { s.get<struct PukiroroMt>() },
		PukuntoMt { s.get<struct PukuntoMt>() },
		PupukoreFalls { s.get<struct PupukoreFalls>() },
		RaberaWet { s.get<struct RaberaWet>() },
		RapikuruPlateau { s.get<struct RapikuruPlateau>() },
		RapinyaPlateau { s.get<struct RapinyaPlateau>() },
		RaruLake { s.get<struct RaruLake>() },
		RashamaPlain { s.get<struct RashamaPlain>() },
		RazezePlateau { s.get<struct RazezePlateau>() },
		RentalZarashiShop_Gerudo { s.get<struct RentalZarashiShop_Gerudo>() },
		RentalZarashiShop_GerudoDesert { s.get<struct RentalZarashiShop_GerudoDesert>() },
		RiaroTrees { s.get<struct RiaroTrees>() },
		RiberaForest { s.get<struct RiberaForest>() },
		RibuchaPlateau { s.get<struct RibuchaPlateau>() },
		Rikona_Peninshra { s.get<struct Rikona_Peninshra>() },
		RingLegacy { s.get<struct RingLegacy>() },
		RinosPass { s.get<struct RinosPass>() },
		RirikendoBridge { s.get<struct RirikendoBridge>() },
		RirimukuHighlands { s.get<struct RirimukuHighlands>() },
		RirimukuMt { s.get<struct RirimukuMt>() },
		RiritotoLake { s.get<struct RiritotoLake>() },
		RishakutoPlateau { s.get<struct RishakutoPlateau>() },
		Rito { s.get<struct Rito>() },
		Rito_SkyHighIsland { s.get<struct Rito_SkyHighIsland>() },
		RitoHatago { s.get<struct RitoHatago>() },
		RiverSideHatago { s.get<struct RiverSideHatago>() },
		RodaiLake { s.get<struct RodaiLake>() },
		RogyLake { s.get<struct RogyLake>() },
		RokomakuMt { s.get<struct RokomakuMt>() },
		RonronCity { s.get<struct RonronCity>() },
		RonronFarm { s.get<struct RonronFarm>() },
		RonronRiver { s.get<struct RonronRiver>() },
		RoshiganLake { s.get<struct RoshiganLake>() },
		RosomaLake { s.get<struct RosomaLake>() },
		RuberaHill { s.get<struct RuberaHill>() },
		RutesLake { s.get<struct RutesLake>() },
		RutimaHill { s.get<struct RutimaHill>() },
		RutsuPlain { s.get<struct RutsuPlain>() },
		SaihokuCastle { s.get<struct SaihokuCastle>() },
		SaiMt { s.get<struct SaiMt>() },
		SanaePlateau { s.get<struct SanaePlateau>() },
		SanrosaLake { s.get<struct SanrosaLake>() },
		SaohPoint { s.get<struct SaohPoint>() },
		SaphiasPlateau { s.get<struct SaphiasPlateau>() },
		SarjonBridge { s.get<struct SarjonBridge>() },
		SarjonForest { s.get<struct SarjonForest>() },
		SasamuroBeach { s.get<struct SasamuroBeach>() },
		ScrapShop { s.get<struct ScrapShop>() },
		ShariverMt { s.get<struct ShariverMt>() },
		ShichijoBridge { s.get<struct ShichijoBridge>() },
		ShieldSurfing_BeginnerGoal { s.get<struct ShieldSurfing_BeginnerGoal>() },
		ShieldSurfing_SeniorGoal { s.get<struct ShieldSurfing_SeniorGoal>() },
		ShigonDam { s.get<struct ShigonDam>() },
		ShijoBridge { s.get<struct ShijoBridge>() },
		ShikuriIslands { s.get<struct ShikuriIslands>() },
		ShimukaPlateau { s.get<struct ShimukaPlateau>() },
		ShinikkyoForest { s.get<struct ShinikkyoForest>() },
		ShinyarkiPlateau { s.get<struct ShinyarkiPlateau>() },
		ShinyarkiVillage { s.get<struct ShinyarkiVillage>() },
		ShitanoPond { s.get<struct ShitanoPond>() },
		ShopArmor_BaseCamp { s.get<struct ShopArmor_BaseCamp>() },
		ShopArmor_Gerudo { s.get<struct ShopArmor_Gerudo>() },
		ShopArmor_Goron { s.get<struct ShopArmor_Goron>() },
		ShopArmor_Hateno { s.get<struct ShopArmor_Hateno>() },
		ShopArmor_Kakariko { s.get<struct ShopArmor_Kakariko>() },
		ShopArmor_Rito { s.get<struct ShopArmor_Rito>() },
		ShopDye_Hateno { s.get<struct ShopDye_Hateno>() },
		ShopGeneral_BaseCamp { s.get<struct ShopGeneral_BaseCamp>() },
		ShopGeneral_Gerudo { s.get<struct ShopGeneral_Gerudo>() },
		ShopGeneral_Goron { s.get<struct ShopGeneral_Goron>() },
		ShopGeneral_Hateno { s.get<struct ShopGeneral_Hateno>() },
		ShopGeneral_Kakariko { s.get<struct ShopGeneral_Kakariko>() },
		ShopGeneral_Korok { s.get<struct ShopGeneral_Korok>() },
		ShopGeneral_Oasis { s.get<struct ShopGeneral_Oasis>() },
		ShopGeneral_Rito { s.get<struct ShopGeneral_Rito>() },
		ShopGeneral_UMiiVillage { s.get<struct ShopGeneral_UMiiVillage>() },
		ShopGeneral_Uotori { s.get<struct ShopGeneral_Uotori>() },
		ShopGeneral_Zora { s.get<struct ShopGeneral_Zora>() },
		ShopInn_Gerudo { s.get<struct ShopInn_Gerudo>() },
		ShopInn_Goron { s.get<struct ShopInn_Goron>() },
		ShopInn_Hateno { s.get<struct ShopInn_Hateno>() },
		ShopInn_Kakariko { s.get<struct ShopInn_Kakariko>() },
		ShopInn_Korok { s.get<struct ShopInn_Korok>() },
		ShopInn_Oasis { s.get<struct ShopInn_Oasis>() },
		ShopInn_Rito { s.get<struct ShopInn_Rito>() },
		ShopInn_UMiiVillage { s.get<struct ShopInn_UMiiVillage>() },
		ShopInn_Uotori { s.get<struct ShopInn_Uotori>() },
		ShopInn_Zora { s.get<struct ShopInn_Zora>() },
		ShopJewelry_Gerudo { s.get<struct ShopJewelry_Gerudo>() },
		SkyIsland0001 { s.get<struct SkyIsland0001>() },
		SkyIsland0002 { s.get<struct SkyIsland0002>() },
		SkyIsland0003 { s.get<struct SkyIsland0003>() },
		SkyIsland0004 { s.get<struct SkyIsland0004>() },
		SkyIsland0009 { s.get<struct SkyIsland0009>() },
		SkyIsland0010 { s.get<struct SkyIsland0010>() },
		SkyIsland0011 { s.get<struct SkyIsland0011>() },
		SkyIsland0012 { s.get<struct SkyIsland0012>() },
		SkyIsland0013 { s.get<struct SkyIsland0013>() },
		SkyIsland0014 { s.get<struct SkyIsland0014>() },
		SkyIslands_Eldin01 { s.get<struct SkyIslands_Eldin01>() },
		SkyIslands_Eldin02 { s.get<struct SkyIslands_Eldin02>() },
		SkyIslands_Firone01 { s.get<struct SkyIslands_Firone01>() },
		SkyIslands_Firone02 { s.get<struct SkyIslands_Firone02>() },
		SkyIslands_Gerudo01 { s.get<struct SkyIslands_Gerudo01>() },
		SkyIslands_Gerudo02 { s.get<struct SkyIslands_Gerudo02>() },
		SkyIslands_Hateru01 { s.get<struct SkyIslands_Hateru01>() },
		SkyIslands_Hateru02 { s.get<struct SkyIslands_Hateru02>() },
		SkyIslands_Hebra02 { s.get<struct SkyIslands_Hebra02>() },
		SkyIslands_Hebra03 { s.get<struct SkyIslands_Hebra03>() },
		SkyIslands_Hebra04 { s.get<struct SkyIslands_Hebra04>() },
		SkyIslands_Hyrule01 { s.get<struct SkyIslands_Hyrule01>() },
		SkyIslands_Hyrule02 { s.get<struct SkyIslands_Hyrule02>() },
		SkyIslands_Hyrule03 { s.get<struct SkyIslands_Hyrule03>() },
		SkyIslands_Hyrule04 { s.get<struct SkyIslands_Hyrule04>() },
		SkyIslands_Hyrule05 { s.get<struct SkyIslands_Hyrule05>() },
		SkyIslands_Lanayru02 { s.get<struct SkyIslands_Lanayru02>() },
		SkyIslands_Lanayru03 { s.get<struct SkyIslands_Lanayru03>() },
		SkyIslands_Tabanta01 { s.get<struct SkyIslands_Tabanta01>() },
		SkyIslands_Tabanta02 { s.get<struct SkyIslands_Tabanta02>() },
		SkyIslands_Tamul01 { s.get<struct SkyIslands_Tamul01>() },
		SkyIslands_Tamul02 { s.get<struct SkyIslands_Tamul02>() },
		SmallDemonStatue { s.get<struct SmallDemonStatue>() },
		SmeltShopGolem_00 { s.get<struct SmeltShopGolem_00>() },
		SmeltShopGolem_01 { s.get<struct SmeltShopGolem_01>() },
		SmeltShopGolem_02 { s.get<struct SmeltShopGolem_02>() },
		SmeltShopGolem_03 { s.get<struct SmeltShopGolem_03>() },
		SmeltShopGolem_04 { s.get<struct SmeltShopGolem_04>() },
		SmeltShopGolem_05 { s.get<struct SmeltShopGolem_05>() },
		SmeltShopGolem_06 { s.get<struct SmeltShopGolem_06>() },
		SmeltShopGolem_07 { s.get<struct SmeltShopGolem_07>() },
		SmeltShopGolem_08 { s.get<struct SmeltShopGolem_08>() },
		SmeltShopGolem_09 { s.get<struct SmeltShopGolem_09>() },
		SmeltShopGolem_10 { s.get<struct SmeltShopGolem_10>() },
		SnowStatue { s.get<struct SnowStatue>() },
		SojijiHill { s.get<struct SojijiHill>() },
		SojijiPark { s.get<struct SojijiPark>() },
		SonoPrairie { s.get<struct SonoPrairie>() },
		SoridaPeninsula { s.get<struct SoridaPeninsula>() },
		SotonkaBridge { s.get<struct SotonkaBridge>() },
		SouthGerudoLegacy { s.get<struct SouthGerudoLegacy>() },
		SouthGerudoRuins { s.get<struct SouthGerudoRuins>() },
		SouthGerudoRuinsCamp { s.get<struct SouthGerudoRuinsCamp>() },
		SouthMine { s.get<struct SouthMine>() },
		StartPoint_WakeupAltar { s.get<struct StartPoint_WakeupAltar>() },
		StonePillers { s.get<struct StonePillers>() },
		SugrantForest { s.get<struct SugrantForest>() },
		SusonoLake { s.get<struct SusonoLake>() },
		SusonoPlain { s.get<struct SusonoPlain>() },
		SusonoPond { s.get<struct SusonoPond>() },
		SusonoRiver { s.get<struct SusonoRiver>() },
		SusukadiBridge { s.get<struct SusukadiBridge>() },
		SwanLake { s.get<struct SwanLake>() },
		TabantaBridge { s.get<struct TabantaBridge>() },
		TabantaBridgeHatago { s.get<struct TabantaBridgeHatago>() },
		TabantaCrater { s.get<struct TabantaCrater>() },
		TabantaHatago { s.get<struct TabantaHatago>() },
		TabantaHill { s.get<struct TabantaHill>() },
		TabantaSnow { s.get<struct TabantaSnow>() },
		TabantaSnow_North { s.get<struct TabantaSnow_North>() },
		TabantaSnow_South { s.get<struct TabantaSnow_South>() },
		TabantaVillage { s.get<struct TabantaVillage>() },
		TafeaHill { s.get<struct TafeaHill>() },
		TagonaTrees { s.get<struct TagonaTrees>() },
		TakkikaPlain { s.get<struct TakkikaPlain>() },
		TamaLake { s.get<struct TamaLake>() },
		TamourHatago { s.get<struct TamourHatago>() },
		TamulPlain { s.get<struct TamulPlain>() },
		TamurulHatago_02 { s.get<struct TamurulHatago_02>() },
		TargarPlain { s.get<struct TargarPlain>() },
		TaruhoPlateau { s.get<struct TaruhoPlateau>() },
		TaserakaBridge { s.get<struct TaserakaBridge>() },
		TatsubaLake { s.get<struct TatsubaLake>() },
		Taura { s.get<struct Taura>() },
		TeguriPlain { s.get<struct TeguriPlain>() },
		TehotaWet { s.get<struct TehotaWet>() },
		TennoMt { s.get<struct TennoMt>() },
		TeraPlain { s.get<struct TeraPlain>() },
		TerumeMt { s.get<struct TerumeMt>() },
		TerumePass { s.get<struct TerumePass>() },
		TimesShrine { s.get<struct TimesShrine>() },
		TohikiLake { s.get<struct TohikiLake>() },
		TomiyoPlateau { s.get<struct TomiyoPlateau>() },
		TompoPlain { s.get<struct TompoPlain>() },
		ToriaBridge { s.get<struct ToriaBridge>() },
		TorumaDesert { s.get<struct TorumaDesert>() },
		TotenLake { s.get<struct TotenLake>() },
		TotsugeBridge { s.get<struct TotsugeBridge>() },
		Tower01 { s.get<struct Tower01>() },
		Tower02 { s.get<struct Tower02>() },
		Tower03 { s.get<struct Tower03>() },
		Tower04 { s.get<struct Tower04>() },
		Tower05 { s.get<struct Tower05>() },
		Tower06 { s.get<struct Tower06>() },
		Tower07 { s.get<struct Tower07>() },
		Tower08 { s.get<struct Tower08>() },
		Tower09 { s.get<struct Tower09>() },
		Tower10 { s.get<struct Tower10>() },
		Tower11 { s.get<struct Tower11>() },
		Tower12 { s.get<struct Tower12>() },
		Tower13 { s.get<struct Tower13>() },
		Tower14 { s.get<struct Tower14>() },
		Tower15 { s.get<struct Tower15>() },
		TrakaIsland { s.get<struct TrakaIsland>() },
		TrakaIsland_Big { s.get<struct TrakaIsland_Big>() },
		TrakaIsland_Center { s.get<struct TrakaIsland_Center>() },
		TrakaIsland_East { s.get<struct TrakaIsland_East>() },
		TrakaIsland_New { s.get<struct TrakaIsland_New>() },
		TrakaIsland_North { s.get<struct TrakaIsland_North>() },
		TrakaIsland_Small { s.get<struct TrakaIsland_Small>() },
		TrakaIsland_South { s.get<struct TrakaIsland_South>() },
		TrakaIsland_West { s.get<struct TrakaIsland_West>() },
		TreasureBoxShop { s.get<struct TreasureBoxShop>() },
		TryCape { s.get<struct TryCape>() },
		TsukaiePlateau { s.get<struct TsukaiePlateau>() },
		TuaboSnow { s.get<struct TuaboSnow>() },
		TunbriPlain { s.get<struct TunbriPlain>() },
		TurasuBridge { s.get<struct TurasuBridge>() },
		TurasuLake { s.get<struct TurasuLake>() },
		TutukikiSnow { s.get<struct TutukikiSnow>() },
		TwinsMountain { s.get<struct TwinsMountain>() },
		UbotsuPlateau { s.get<struct UbotsuPlateau>() },
		UchoPlateau { s.get<struct UchoPlateau>() },
		UkkoPond { s.get<struct UkkoPond>() },
		UMiiVillage { s.get<struct UMiiVillage>() },
		UMiiVillage_JobField { s.get<struct UMiiVillage_JobField>() },
		Unknown { s.get<struct Unknown>() },
		UraitoLake { s.get<struct UraitoLake>() },
		UrokoCape { s.get<struct UrokoCape>() },
		ValleyVillage { s.get<struct ValleyVillage>() },
		VPlateau { s.get<struct VPlateau>() },
		WabiLake { s.get<struct WabiLake>() },
		WatakaPlateau { s.get<struct WatakaPlateau>() },
		WeaponCureSpring { s.get<struct WeaponCureSpring>() },
		WeaponCureSpring_DressFairy_00 { s.get<struct WeaponCureSpring_DressFairy_00>() },
		WeaponCureSpring_DressFairy_01 { s.get<struct WeaponCureSpring_DressFairy_01>() },
		WeaponCureSpring_DressFairy_02 { s.get<struct WeaponCureSpring_DressFairy_02>() },
		Well_0001 { s.get<struct Well_0001>() },
		Well_0002 { s.get<struct Well_0002>() },
		Well_0003 { s.get<struct Well_0003>() },
		Well_0004 { s.get<struct Well_0004>() },
		Well_0005 { s.get<struct Well_0005>() },
		Well_0006 { s.get<struct Well_0006>() },
		Well_0007 { s.get<struct Well_0007>() },
		Well_0008 { s.get<struct Well_0008>() },
		Well_0009 { s.get<struct Well_0009>() },
		Well_0010 { s.get<struct Well_0010>() },
		Well_0011 { s.get<struct Well_0011>() },
		Well_0012 { s.get<struct Well_0012>() },
		Well_0013 { s.get<struct Well_0013>() },
		Well_0014 { s.get<struct Well_0014>() },
		Well_0015 { s.get<struct Well_0015>() },
		Well_0016 { s.get<struct Well_0016>() },
		Well_0017 { s.get<struct Well_0017>() },
		Well_0018 { s.get<struct Well_0018>() },
		Well_0019 { s.get<struct Well_0019>() },
		Well_0020 { s.get<struct Well_0020>() },
		Well_0021 { s.get<struct Well_0021>() },
		Well_0022 { s.get<struct Well_0022>() },
		Well_0023 { s.get<struct Well_0023>() },
		Well_0024 { s.get<struct Well_0024>() },
		Well_0025 { s.get<struct Well_0025>() },
		Well_0026 { s.get<struct Well_0026>() },
		Well_0027 { s.get<struct Well_0027>() },
		Well_0028 { s.get<struct Well_0028>() },
		Well_0029 { s.get<struct Well_0029>() },
		Well_0030 { s.get<struct Well_0030>() },
		Well_0031 { s.get<struct Well_0031>() },
		Well_0032 { s.get<struct Well_0032>() },
		Well_0033 { s.get<struct Well_0033>() },
		Well_0034 { s.get<struct Well_0034>() },
		Well_0041 { s.get<struct Well_0041>() },
		Well_0042 { s.get<struct Well_0042>() },
		Well_0043 { s.get<struct Well_0043>() },
		Well_0043B { s.get<struct Well_0043B>() },
		Well_0044 { s.get<struct Well_0044>() },
		Well_0045 { s.get<struct Well_0045>() },
		Well_0046 { s.get<struct Well_0046>() },
		Well_0047 { s.get<struct Well_0047>() },
		Well_0047B { s.get<struct Well_0047B>() },
		Well_0048 { s.get<struct Well_0048>() },
		Well_0049 { s.get<struct Well_0049>() },
		Well_0049B { s.get<struct Well_0049B>() },
		Well_0049C { s.get<struct Well_0049C>() },
		Well_0049D { s.get<struct Well_0049D>() },
		Well_0049E { s.get<struct Well_0049E>() },
		Well_0050 { s.get<struct Well_0050>() },
		Well_0051 { s.get<struct Well_0051>() },
		Well_0052 { s.get<struct Well_0052>() },
		Well_0053 { s.get<struct Well_0053>() },
		Well_0054 { s.get<struct Well_0054>() },
		Well_0055 { s.get<struct Well_0055>() },
		Well_0056 { s.get<struct Well_0056>() },
		Well_0057 { s.get<struct Well_0057>() },
		Well_0058 { s.get<struct Well_0058>() },
		Well_0059 { s.get<struct Well_0059>() },
		WestEunpoHighlands { s.get<struct WestEunpoHighlands>() },
		WestGerudo { s.get<struct WestGerudo>() },
		WestGerudoRuins { s.get<struct WestGerudoRuins>() },
		WetGarrison { s.get<struct WetGarrison>() },
		WhiteZora { s.get<struct WhiteZora>() },
		WholeOfHyrule { s.get<struct WholeOfHyrule>() },
		WiseFountain { s.get<struct WiseFountain>() },
		XehaPlateau { s.get<struct XehaPlateau>() },
		XekuBridge { s.get<struct XekuBridge>() },
		YamabiLake { s.get<struct YamabiLake>() },
		YamariRiver { s.get<struct YamariRiver>() },
		YarimoRiver { s.get<struct YarimoRiver>() },
		YashinoBeach { s.get<struct YashinoBeach>() },
		YashinoLegacy { s.get<struct YashinoLegacy>() },
		YuaSnow { s.get<struct YuaSnow>() },
		ZamaPlain { s.get<struct ZamaPlain>() },
		ZaridoLake { s.get<struct ZaridoLake>() },
		ZaridoPlateau { s.get<struct ZaridoPlateau>() },
		ZifForest { s.get<struct ZifForest>() },
		ZitoGreens { s.get<struct ZitoGreens>() },
		ZonauCentralShrine { s.get<struct ZonauCentralShrine>() },
		ZonauLegacy { s.get<struct ZonauLegacy>() },
		ZonauRelief_03 { s.get<struct ZonauRelief_03>() },
		ZonauRelief_04 { s.get<struct ZonauRelief_04>() },
		ZonauRelief_05 { s.get<struct ZonauRelief_05>() },
		ZonauRelief_06 { s.get<struct ZonauRelief_06>() },
		ZonauRelief_07 { s.get<struct ZonauRelief_07>() },
		ZonauRelief_08 { s.get<struct ZonauRelief_08>() },
		ZonauRelief_09 { s.get<struct ZonauRelief_09>() },
		ZonauRelief_10 { s.get<struct ZonauRelief_10>() },
		ZonauRelief_11 { s.get<struct ZonauRelief_11>() },
		ZonauRelief_12 { s.get<struct ZonauRelief_12>() },
		ZonauRelief_13 { s.get<struct ZonauRelief_13>() },
		ZonauRelief_14 { s.get<struct ZonauRelief_14>() },
		ZonauSatelliteShrine_LeftArm { s.get<struct ZonauSatelliteShrine_LeftArm>() },
		ZonauSatelliteShrine_LeftLeg { s.get<struct ZonauSatelliteShrine_LeftLeg>() },
		ZonauSatelliteShrine_RightArm { s.get<struct ZonauSatelliteShrine_RightArm>() },
		ZonauSatelliteShrine_RightLeg { s.get<struct ZonauSatelliteShrine_RightLeg>() },
		ZonauThunderSkyIsland { s.get<struct ZonauThunderSkyIsland>() },
		ZonauTriedForceSkyIsland { s.get<struct ZonauTriedForceSkyIsland>() },
		Zora_Belvedere { s.get<struct Zora_Belvedere>() },
		Zora_FishIsland { s.get<struct Zora_FishIsland>() },
		Zora_Imperial_Palace { s.get<struct Zora_Imperial_Palace>() },
		ZoraBridge { s.get<struct ZoraBridge>() },
		ZoraZonauTerminal { s.get<struct ZoraZonauTerminal>() }
	{ }
};/* Data::Structure GameData::IsVisitLocation close */

template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::AagetoMt> = murmurhash3::hash("IsVisitLocation.AagetoMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::AdeyaLake> = murmurhash3::hash("IsVisitLocation.AdeyaLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::AdeyaVillage> = murmurhash3::hash("IsVisitLocation.AdeyaVillage");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::AgePlateau> = murmurhash3::hash("IsVisitLocation.AgePlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::AgunaiLake> = murmurhash3::hash("IsVisitLocation.AgunaiLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::AkazaMt> = murmurhash3::hash("IsVisitLocation.AkazaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Akkare_OctaPond> = murmurhash3::hash("IsVisitLocation.Akkare_OctaPond");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::AkkareBigBridge> = murmurhash3::hash("IsVisitLocation.AkkareBigBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::AkkareGarrison> = murmurhash3::hash("IsVisitLocation.AkkareGarrison");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::AkkareZhai> = murmurhash3::hash("IsVisitLocation.AkkareZhai");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::AkkareZhaiBridge> = murmurhash3::hash("IsVisitLocation.AkkareZhaiBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::AmimePlateau> = murmurhash3::hash("IsVisitLocation.AmimePlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::AmonenePlateau> = murmurhash3::hash("IsVisitLocation.AmonenePlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::AnbonBeach> = murmurhash3::hash("IsVisitLocation.AnbonBeach");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::AnchoBeach> = murmurhash3::hash("IsVisitLocation.AnchoBeach");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::AncientLabo> = murmurhash3::hash("IsVisitLocation.AncientLabo");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::AncientTimeShrine> = murmurhash3::hash("IsVisitLocation.AncientTimeShrine");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::AnoleLake> = murmurhash3::hash("IsVisitLocation.AnoleLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::AnoleTunnel> = murmurhash3::hash("IsVisitLocation.AnoleTunnel");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ArafuraPlain> = murmurhash3::hash("IsVisitLocation.ArafuraPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::AraisoBeach> = murmurhash3::hash("IsVisitLocation.AraisoBeach");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ArmorOfLambda_01> = murmurhash3::hash("IsVisitLocation.ArmorOfLambda_01");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ArmorOfLambda_04> = murmurhash3::hash("IsVisitLocation.ArmorOfLambda_04");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ArmorOfLambda_07> = murmurhash3::hash("IsVisitLocation.ArmorOfLambda_07");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Assassin> = murmurhash3::hash("IsVisitLocation.Assassin");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::AzimetosPlateau> = murmurhash3::hash("IsVisitLocation.AzimetosPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BachimakuMt> = murmurhash3::hash("IsVisitLocation.BachimakuMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BaconCliff> = murmurhash3::hash("IsVisitLocation.BaconCliff");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BameHill> = murmurhash3::hash("IsVisitLocation.BameHill");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BanmezaLake> = murmurhash3::hash("IsVisitLocation.BanmezaLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BantaValley> = murmurhash3::hash("IsVisitLocation.BantaValley");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Bar> = murmurhash3::hash("IsVisitLocation.Bar");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BarakkiPlain> = murmurhash3::hash("IsVisitLocation.BarakkiPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BarumePlain> = murmurhash3::hash("IsVisitLocation.BarumePlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BaseCamp_Shelter> = murmurhash3::hash("IsVisitLocation.BaseCamp_Shelter");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BatteryExchangeShop_00> = murmurhash3::hash("IsVisitLocation.BatteryExchangeShop_00");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BatteryExchangeShop_01> = murmurhash3::hash("IsVisitLocation.BatteryExchangeShop_01");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BeginningIsland> = murmurhash3::hash("IsVisitLocation.BeginningIsland");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BigalLake> = murmurhash3::hash("IsVisitLocation.BigalLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BigBrotherBridge> = murmurhash3::hash("IsVisitLocation.BigBrotherBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BiginaTrees> = murmurhash3::hash("IsVisitLocation.BiginaTrees");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BigTree> = murmurhash3::hash("IsVisitLocation.BigTree");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BiridinHill> = murmurhash3::hash("IsVisitLocation.BiridinHill");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BironSnow> = murmurhash3::hash("IsVisitLocation.BironSnow");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BituoValley> = murmurhash3::hash("IsVisitLocation.BituoValley");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BlindForest> = murmurhash3::hash("IsVisitLocation.BlindForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BlizzarValley> = murmurhash3::hash("IsVisitLocation.BlizzarValley");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BokoboLake> = murmurhash3::hash("IsVisitLocation.BokoboLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BonrasForest> = murmurhash3::hash("IsVisitLocation.BonrasForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BoraraCape> = murmurhash3::hash("IsVisitLocation.BoraraCape");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BottuBay> = murmurhash3::hash("IsVisitLocation.BottuBay");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BraveFountain> = murmurhash3::hash("IsVisitLocation.BraveFountain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BrostarPlain> = murmurhash3::hash("IsVisitLocation.BrostarPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BuhaIslands> = murmurhash3::hash("IsVisitLocation.BuhaIslands");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BuibuiTrees> = murmurhash3::hash("IsVisitLocation.BuibuiTrees");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BuichadaPlateau> = murmurhash3::hash("IsVisitLocation.BuichadaPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BuidaLake> = murmurhash3::hash("IsVisitLocation.BuidaLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BumiPlain> = murmurhash3::hash("IsVisitLocation.BumiPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::BuramuPlateau> = murmurhash3::hash("IsVisitLocation.BuramuPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CastleTownMark> = murmurhash3::hash("IsVisitLocation.CastleTownMark");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Akkala_0000> = murmurhash3::hash("IsVisitLocation.Cave_Akkala_0000");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Akkala_0003> = murmurhash3::hash("IsVisitLocation.Cave_Akkala_0003");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Akkala_0005> = murmurhash3::hash("IsVisitLocation.Cave_Akkala_0005");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Akkala_0007> = murmurhash3::hash("IsVisitLocation.Cave_Akkala_0007");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Akkala_0010> = murmurhash3::hash("IsVisitLocation.Cave_Akkala_0010");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Akkala_0011> = murmurhash3::hash("IsVisitLocation.Cave_Akkala_0011");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Akkala_0014> = murmurhash3::hash("IsVisitLocation.Cave_Akkala_0014");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Akkala_0017> = murmurhash3::hash("IsVisitLocation.Cave_Akkala_0017");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_CentralHyrule_0008> = murmurhash3::hash("IsVisitLocation.Cave_CentralHyrule_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_CentralHyrule_0009> = murmurhash3::hash("IsVisitLocation.Cave_CentralHyrule_0009");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_CentralHyrule_0011> = murmurhash3::hash("IsVisitLocation.Cave_CentralHyrule_0011");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_CentralHyrule_0013> = murmurhash3::hash("IsVisitLocation.Cave_CentralHyrule_0013");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_CentralHyrule_0017> = murmurhash3::hash("IsVisitLocation.Cave_CentralHyrule_0017");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_CentralHyrule_0018> = murmurhash3::hash("IsVisitLocation.Cave_CentralHyrule_0018");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_CentralHyrule_0019> = murmurhash3::hash("IsVisitLocation.Cave_CentralHyrule_0019");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_CentralHyrule_0020> = murmurhash3::hash("IsVisitLocation.Cave_CentralHyrule_0020");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_CentralHyrule_0021> = murmurhash3::hash("IsVisitLocation.Cave_CentralHyrule_0021");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_CentralHyrule_0022> = murmurhash3::hash("IsVisitLocation.Cave_CentralHyrule_0022");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_CentralHyrule_0023> = murmurhash3::hash("IsVisitLocation.Cave_CentralHyrule_0023");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_CentralHyrule_0030> = murmurhash3::hash("IsVisitLocation.Cave_CentralHyrule_0030");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Eldin_0020> = murmurhash3::hash("IsVisitLocation.Cave_Eldin_0020");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Eldin_0021> = murmurhash3::hash("IsVisitLocation.Cave_Eldin_0021");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Eldin_0022> = murmurhash3::hash("IsVisitLocation.Cave_Eldin_0022");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Eldin_0023> = murmurhash3::hash("IsVisitLocation.Cave_Eldin_0023");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Eldin_0025> = murmurhash3::hash("IsVisitLocation.Cave_Eldin_0025");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Eldin_0026> = murmurhash3::hash("IsVisitLocation.Cave_Eldin_0026");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Eldin_0027> = murmurhash3::hash("IsVisitLocation.Cave_Eldin_0027");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Eldin_0028> = murmurhash3::hash("IsVisitLocation.Cave_Eldin_0028");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Eldin_0029> = murmurhash3::hash("IsVisitLocation.Cave_Eldin_0029");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Eldin_0030> = murmurhash3::hash("IsVisitLocation.Cave_Eldin_0030");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Eldin_0031> = murmurhash3::hash("IsVisitLocation.Cave_Eldin_0031");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Eldin_0033> = murmurhash3::hash("IsVisitLocation.Cave_Eldin_0033");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Eldin_0034> = murmurhash3::hash("IsVisitLocation.Cave_Eldin_0034");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Eldin_0035> = murmurhash3::hash("IsVisitLocation.Cave_Eldin_0035");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Eldin_0037> = murmurhash3::hash("IsVisitLocation.Cave_Eldin_0037");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Eldin_0038> = murmurhash3::hash("IsVisitLocation.Cave_Eldin_0038");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Eldin_0039> = murmurhash3::hash("IsVisitLocation.Cave_Eldin_0039");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Firone_0002> = murmurhash3::hash("IsVisitLocation.Cave_Firone_0002");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Firone_0008> = murmurhash3::hash("IsVisitLocation.Cave_Firone_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Firone_0009> = murmurhash3::hash("IsVisitLocation.Cave_Firone_0009");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Firone_0016> = murmurhash3::hash("IsVisitLocation.Cave_Firone_0016");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Firone_0020> = murmurhash3::hash("IsVisitLocation.Cave_Firone_0020");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Firone_0022> = murmurhash3::hash("IsVisitLocation.Cave_Firone_0022");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Firone_0023> = murmurhash3::hash("IsVisitLocation.Cave_Firone_0023");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Firone_0024> = murmurhash3::hash("IsVisitLocation.Cave_Firone_0024");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Firone_0029> = murmurhash3::hash("IsVisitLocation.Cave_Firone_0029");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_FirstPlateau_0001> = murmurhash3::hash("IsVisitLocation.Cave_FirstPlateau_0001");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_FirstPlateau_0002> = murmurhash3::hash("IsVisitLocation.Cave_FirstPlateau_0002");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoDesert_0007> = murmurhash3::hash("IsVisitLocation.Cave_GerudoDesert_0007");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoDesert_0008> = murmurhash3::hash("IsVisitLocation.Cave_GerudoDesert_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoDesert_0015> = murmurhash3::hash("IsVisitLocation.Cave_GerudoDesert_0015");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoDesert_0022> = murmurhash3::hash("IsVisitLocation.Cave_GerudoDesert_0022");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoDesert_0030> = murmurhash3::hash("IsVisitLocation.Cave_GerudoDesert_0030");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoDesert_0031> = murmurhash3::hash("IsVisitLocation.Cave_GerudoDesert_0031");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoDesert_0032> = murmurhash3::hash("IsVisitLocation.Cave_GerudoDesert_0032");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoDesert_0035> = murmurhash3::hash("IsVisitLocation.Cave_GerudoDesert_0035");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoDesert_0036> = murmurhash3::hash("IsVisitLocation.Cave_GerudoDesert_0036");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoDesert_0037> = murmurhash3::hash("IsVisitLocation.Cave_GerudoDesert_0037");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoDesert_0039> = murmurhash3::hash("IsVisitLocation.Cave_GerudoDesert_0039");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoDesert_0040> = murmurhash3::hash("IsVisitLocation.Cave_GerudoDesert_0040");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoDesert_0041> = murmurhash3::hash("IsVisitLocation.Cave_GerudoDesert_0041");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoDesert_0043> = murmurhash3::hash("IsVisitLocation.Cave_GerudoDesert_0043");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoDesert_0044> = murmurhash3::hash("IsVisitLocation.Cave_GerudoDesert_0044");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoDesert_0045> = murmurhash3::hash("IsVisitLocation.Cave_GerudoDesert_0045");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoDesert_0046> = murmurhash3::hash("IsVisitLocation.Cave_GerudoDesert_0046");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoDesert_0049> = murmurhash3::hash("IsVisitLocation.Cave_GerudoDesert_0049");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoDesert_0050> = murmurhash3::hash("IsVisitLocation.Cave_GerudoDesert_0050");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoDesert_0051> = murmurhash3::hash("IsVisitLocation.Cave_GerudoDesert_0051");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoHighlands_0002> = murmurhash3::hash("IsVisitLocation.Cave_GerudoHighlands_0002");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoHighlands_0008> = murmurhash3::hash("IsVisitLocation.Cave_GerudoHighlands_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoHighlands_0014> = murmurhash3::hash("IsVisitLocation.Cave_GerudoHighlands_0014");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_GerudoHighlands_0017> = murmurhash3::hash("IsVisitLocation.Cave_GerudoHighlands_0017");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HateruEast_0000> = murmurhash3::hash("IsVisitLocation.Cave_HateruEast_0000");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HateruEast_0002> = murmurhash3::hash("IsVisitLocation.Cave_HateruEast_0002");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HateruEast_0006> = murmurhash3::hash("IsVisitLocation.Cave_HateruEast_0006");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HateruEast_0007> = murmurhash3::hash("IsVisitLocation.Cave_HateruEast_0007");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HateruEast_0008> = murmurhash3::hash("IsVisitLocation.Cave_HateruEast_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HateruEast_0009> = murmurhash3::hash("IsVisitLocation.Cave_HateruEast_0009");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HateruEast_0013> = murmurhash3::hash("IsVisitLocation.Cave_HateruEast_0013");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HateruEast_0014> = murmurhash3::hash("IsVisitLocation.Cave_HateruEast_0014");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HateruEast_0016> = murmurhash3::hash("IsVisitLocation.Cave_HateruEast_0016");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HateruWest_0002> = murmurhash3::hash("IsVisitLocation.Cave_HateruWest_0002");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HateruWest_0005> = murmurhash3::hash("IsVisitLocation.Cave_HateruWest_0005");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HateruWest_0006> = murmurhash3::hash("IsVisitLocation.Cave_HateruWest_0006");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HateruWest_0008> = murmurhash3::hash("IsVisitLocation.Cave_HateruWest_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HateruWest_0011> = murmurhash3::hash("IsVisitLocation.Cave_HateruWest_0011");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HateruWest_0012> = murmurhash3::hash("IsVisitLocation.Cave_HateruWest_0012");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Hebra_0000> = murmurhash3::hash("IsVisitLocation.Cave_Hebra_0000");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Hebra_0013> = murmurhash3::hash("IsVisitLocation.Cave_Hebra_0013");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Hebra_0015> = murmurhash3::hash("IsVisitLocation.Cave_Hebra_0015");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Hebra_0016> = murmurhash3::hash("IsVisitLocation.Cave_Hebra_0016");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Hebra_0019> = murmurhash3::hash("IsVisitLocation.Cave_Hebra_0019");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Hebra_0021> = murmurhash3::hash("IsVisitLocation.Cave_Hebra_0021");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Hebra_0022> = murmurhash3::hash("IsVisitLocation.Cave_Hebra_0022");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Hebra_0023> = murmurhash3::hash("IsVisitLocation.Cave_Hebra_0023");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Hebra_0025> = murmurhash3::hash("IsVisitLocation.Cave_Hebra_0025");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Hebra_0026> = murmurhash3::hash("IsVisitLocation.Cave_Hebra_0026");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Hebra_0030> = murmurhash3::hash("IsVisitLocation.Cave_Hebra_0030");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Hebra_0035> = murmurhash3::hash("IsVisitLocation.Cave_Hebra_0035");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Hebra_0036> = murmurhash3::hash("IsVisitLocation.Cave_Hebra_0036");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Hebra_0037> = murmurhash3::hash("IsVisitLocation.Cave_Hebra_0037");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Hebra_0039> = murmurhash3::hash("IsVisitLocation.Cave_Hebra_0039");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Hebra_0040> = murmurhash3::hash("IsVisitLocation.Cave_Hebra_0040");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Hebra_0041> = murmurhash3::hash("IsVisitLocation.Cave_Hebra_0041");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HyruleForest_0001> = murmurhash3::hash("IsVisitLocation.Cave_HyruleForest_0001");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HyruleForest_0006> = murmurhash3::hash("IsVisitLocation.Cave_HyruleForest_0006");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HyruleForest_0007> = murmurhash3::hash("IsVisitLocation.Cave_HyruleForest_0007");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HyruleForest_0008> = murmurhash3::hash("IsVisitLocation.Cave_HyruleForest_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HyruleRidge_0000> = murmurhash3::hash("IsVisitLocation.Cave_HyruleRidge_0000");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HyruleRidge_0002> = murmurhash3::hash("IsVisitLocation.Cave_HyruleRidge_0002");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HyruleRidge_0003> = murmurhash3::hash("IsVisitLocation.Cave_HyruleRidge_0003");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HyruleRidge_0004> = murmurhash3::hash("IsVisitLocation.Cave_HyruleRidge_0004");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HyruleRidge_0005> = murmurhash3::hash("IsVisitLocation.Cave_HyruleRidge_0005");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HyruleRidge_0006> = murmurhash3::hash("IsVisitLocation.Cave_HyruleRidge_0006");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HyruleRidge_0007> = murmurhash3::hash("IsVisitLocation.Cave_HyruleRidge_0007");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_HyruleRidge_0008> = murmurhash3::hash("IsVisitLocation.Cave_HyruleRidge_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Lanayru_0006> = murmurhash3::hash("IsVisitLocation.Cave_Lanayru_0006");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Lanayru_0008> = murmurhash3::hash("IsVisitLocation.Cave_Lanayru_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Lanayru_0014> = murmurhash3::hash("IsVisitLocation.Cave_Lanayru_0014");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Lanayru_0019> = murmurhash3::hash("IsVisitLocation.Cave_Lanayru_0019");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Lanayru_0024> = murmurhash3::hash("IsVisitLocation.Cave_Lanayru_0024");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Lanayru_0032> = murmurhash3::hash("IsVisitLocation.Cave_Lanayru_0032");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Lanayru_0033> = murmurhash3::hash("IsVisitLocation.Cave_Lanayru_0033");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Lanayru_0035> = murmurhash3::hash("IsVisitLocation.Cave_Lanayru_0035");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Lanayru_0036> = murmurhash3::hash("IsVisitLocation.Cave_Lanayru_0036");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Lanayru_0048> = murmurhash3::hash("IsVisitLocation.Cave_Lanayru_0048");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Lanayru_0049> = murmurhash3::hash("IsVisitLocation.Cave_Lanayru_0049");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Lanayru_0050> = murmurhash3::hash("IsVisitLocation.Cave_Lanayru_0050");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Lanayru_0052> = murmurhash3::hash("IsVisitLocation.Cave_Lanayru_0052");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Lanayru_0053> = murmurhash3::hash("IsVisitLocation.Cave_Lanayru_0053");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Lanayru_0055> = murmurhash3::hash("IsVisitLocation.Cave_Lanayru_0055");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Lanayru_0057> = murmurhash3::hash("IsVisitLocation.Cave_Lanayru_0057");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Lanayru_0060> = murmurhash3::hash("IsVisitLocation.Cave_Lanayru_0060");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Lanayru_0061> = murmurhash3::hash("IsVisitLocation.Cave_Lanayru_0061");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Lanayru_0063> = murmurhash3::hash("IsVisitLocation.Cave_Lanayru_0063");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_LanayruMountain_0002> = murmurhash3::hash("IsVisitLocation.Cave_LanayruMountain_0002");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_LanayruMountain_0006> = murmurhash3::hash("IsVisitLocation.Cave_LanayruMountain_0006");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_LanayruMountain_0008> = murmurhash3::hash("IsVisitLocation.Cave_LanayruMountain_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_LanayruMountain_0010> = murmurhash3::hash("IsVisitLocation.Cave_LanayruMountain_0010");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_LanayruMountain_0014> = murmurhash3::hash("IsVisitLocation.Cave_LanayruMountain_0014");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_LanayruMountain_0016> = murmurhash3::hash("IsVisitLocation.Cave_LanayruMountain_0016");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_LanayruMountain_0022> = murmurhash3::hash("IsVisitLocation.Cave_LanayruMountain_0022");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_LanayruMountain_0024> = murmurhash3::hash("IsVisitLocation.Cave_LanayruMountain_0024");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_LanayruMountain_0025> = murmurhash3::hash("IsVisitLocation.Cave_LanayruMountain_0025");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_LanayruMountain_0026> = murmurhash3::hash("IsVisitLocation.Cave_LanayruMountain_0026");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Tabantha_0001> = murmurhash3::hash("IsVisitLocation.Cave_Tabantha_0001");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Tabantha_0002> = murmurhash3::hash("IsVisitLocation.Cave_Tabantha_0002");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cave_Tabantha_0003> = murmurhash3::hash("IsVisitLocation.Cave_Tabantha_0003");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CDungeon> = murmurhash3::hash("IsVisitLocation.CDungeon");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CentralExchange> = murmurhash3::hash("IsVisitLocation.CentralExchange");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ChagaraMt> = murmurhash3::hash("IsVisitLocation.ChagaraMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint000> = murmurhash3::hash("IsVisitLocation.CheckPoint000");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint001> = murmurhash3::hash("IsVisitLocation.CheckPoint001");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint002> = murmurhash3::hash("IsVisitLocation.CheckPoint002");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint003> = murmurhash3::hash("IsVisitLocation.CheckPoint003");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint004> = murmurhash3::hash("IsVisitLocation.CheckPoint004");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint005> = murmurhash3::hash("IsVisitLocation.CheckPoint005");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint006> = murmurhash3::hash("IsVisitLocation.CheckPoint006");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint007> = murmurhash3::hash("IsVisitLocation.CheckPoint007");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint008> = murmurhash3::hash("IsVisitLocation.CheckPoint008");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint009> = murmurhash3::hash("IsVisitLocation.CheckPoint009");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint010> = murmurhash3::hash("IsVisitLocation.CheckPoint010");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint011> = murmurhash3::hash("IsVisitLocation.CheckPoint011");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint012> = murmurhash3::hash("IsVisitLocation.CheckPoint012");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint013> = murmurhash3::hash("IsVisitLocation.CheckPoint013");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint014> = murmurhash3::hash("IsVisitLocation.CheckPoint014");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint016> = murmurhash3::hash("IsVisitLocation.CheckPoint016");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint017> = murmurhash3::hash("IsVisitLocation.CheckPoint017");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint018> = murmurhash3::hash("IsVisitLocation.CheckPoint018");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint019> = murmurhash3::hash("IsVisitLocation.CheckPoint019");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint020> = murmurhash3::hash("IsVisitLocation.CheckPoint020");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint021> = murmurhash3::hash("IsVisitLocation.CheckPoint021");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint022> = murmurhash3::hash("IsVisitLocation.CheckPoint022");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint023> = murmurhash3::hash("IsVisitLocation.CheckPoint023");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint024> = murmurhash3::hash("IsVisitLocation.CheckPoint024");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint025> = murmurhash3::hash("IsVisitLocation.CheckPoint025");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint026> = murmurhash3::hash("IsVisitLocation.CheckPoint026");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint027> = murmurhash3::hash("IsVisitLocation.CheckPoint027");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint028> = murmurhash3::hash("IsVisitLocation.CheckPoint028");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint029> = murmurhash3::hash("IsVisitLocation.CheckPoint029");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint030> = murmurhash3::hash("IsVisitLocation.CheckPoint030");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint031> = murmurhash3::hash("IsVisitLocation.CheckPoint031");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint032> = murmurhash3::hash("IsVisitLocation.CheckPoint032");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint033> = murmurhash3::hash("IsVisitLocation.CheckPoint033");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint035> = murmurhash3::hash("IsVisitLocation.CheckPoint035");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint036> = murmurhash3::hash("IsVisitLocation.CheckPoint036");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint037> = murmurhash3::hash("IsVisitLocation.CheckPoint037");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint039> = murmurhash3::hash("IsVisitLocation.CheckPoint039");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint040> = murmurhash3::hash("IsVisitLocation.CheckPoint040");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint041> = murmurhash3::hash("IsVisitLocation.CheckPoint041");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint042> = murmurhash3::hash("IsVisitLocation.CheckPoint042");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint044> = murmurhash3::hash("IsVisitLocation.CheckPoint044");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint046> = murmurhash3::hash("IsVisitLocation.CheckPoint046");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint047> = murmurhash3::hash("IsVisitLocation.CheckPoint047");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint048> = murmurhash3::hash("IsVisitLocation.CheckPoint048");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint049> = murmurhash3::hash("IsVisitLocation.CheckPoint049");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint051> = murmurhash3::hash("IsVisitLocation.CheckPoint051");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint053> = murmurhash3::hash("IsVisitLocation.CheckPoint053");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint054> = murmurhash3::hash("IsVisitLocation.CheckPoint054");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint056> = murmurhash3::hash("IsVisitLocation.CheckPoint056");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint057> = murmurhash3::hash("IsVisitLocation.CheckPoint057");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint058> = murmurhash3::hash("IsVisitLocation.CheckPoint058");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint059> = murmurhash3::hash("IsVisitLocation.CheckPoint059");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint064> = murmurhash3::hash("IsVisitLocation.CheckPoint064");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint065> = murmurhash3::hash("IsVisitLocation.CheckPoint065");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint067> = murmurhash3::hash("IsVisitLocation.CheckPoint067");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint068> = murmurhash3::hash("IsVisitLocation.CheckPoint068");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint070> = murmurhash3::hash("IsVisitLocation.CheckPoint070");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint072> = murmurhash3::hash("IsVisitLocation.CheckPoint072");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint073> = murmurhash3::hash("IsVisitLocation.CheckPoint073");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint074> = murmurhash3::hash("IsVisitLocation.CheckPoint074");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint075> = murmurhash3::hash("IsVisitLocation.CheckPoint075");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint076> = murmurhash3::hash("IsVisitLocation.CheckPoint076");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint077> = murmurhash3::hash("IsVisitLocation.CheckPoint077");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint078> = murmurhash3::hash("IsVisitLocation.CheckPoint078");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint079> = murmurhash3::hash("IsVisitLocation.CheckPoint079");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint080> = murmurhash3::hash("IsVisitLocation.CheckPoint080");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint081> = murmurhash3::hash("IsVisitLocation.CheckPoint081");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint084> = murmurhash3::hash("IsVisitLocation.CheckPoint084");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint085> = murmurhash3::hash("IsVisitLocation.CheckPoint085");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint086> = murmurhash3::hash("IsVisitLocation.CheckPoint086");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint087> = murmurhash3::hash("IsVisitLocation.CheckPoint087");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint088> = murmurhash3::hash("IsVisitLocation.CheckPoint088");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint089> = murmurhash3::hash("IsVisitLocation.CheckPoint089");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint090> = murmurhash3::hash("IsVisitLocation.CheckPoint090");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint091> = murmurhash3::hash("IsVisitLocation.CheckPoint091");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint092> = murmurhash3::hash("IsVisitLocation.CheckPoint092");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint094> = murmurhash3::hash("IsVisitLocation.CheckPoint094");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint095> = murmurhash3::hash("IsVisitLocation.CheckPoint095");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint096> = murmurhash3::hash("IsVisitLocation.CheckPoint096");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint097> = murmurhash3::hash("IsVisitLocation.CheckPoint097");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint098> = murmurhash3::hash("IsVisitLocation.CheckPoint098");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint100> = murmurhash3::hash("IsVisitLocation.CheckPoint100");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint101> = murmurhash3::hash("IsVisitLocation.CheckPoint101");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint102> = murmurhash3::hash("IsVisitLocation.CheckPoint102");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint103> = murmurhash3::hash("IsVisitLocation.CheckPoint103");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint104> = murmurhash3::hash("IsVisitLocation.CheckPoint104");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint106> = murmurhash3::hash("IsVisitLocation.CheckPoint106");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint107> = murmurhash3::hash("IsVisitLocation.CheckPoint107");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint108> = murmurhash3::hash("IsVisitLocation.CheckPoint108");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint111> = murmurhash3::hash("IsVisitLocation.CheckPoint111");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint112> = murmurhash3::hash("IsVisitLocation.CheckPoint112");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint113> = murmurhash3::hash("IsVisitLocation.CheckPoint113");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint114> = murmurhash3::hash("IsVisitLocation.CheckPoint114");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint115> = murmurhash3::hash("IsVisitLocation.CheckPoint115");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint116> = murmurhash3::hash("IsVisitLocation.CheckPoint116");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint118> = murmurhash3::hash("IsVisitLocation.CheckPoint118");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint119> = murmurhash3::hash("IsVisitLocation.CheckPoint119");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint120> = murmurhash3::hash("IsVisitLocation.CheckPoint120");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint122> = murmurhash3::hash("IsVisitLocation.CheckPoint122");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint123> = murmurhash3::hash("IsVisitLocation.CheckPoint123");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint124> = murmurhash3::hash("IsVisitLocation.CheckPoint124");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint125> = murmurhash3::hash("IsVisitLocation.CheckPoint125");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint126> = murmurhash3::hash("IsVisitLocation.CheckPoint126");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint129> = murmurhash3::hash("IsVisitLocation.CheckPoint129");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint130> = murmurhash3::hash("IsVisitLocation.CheckPoint130");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint131> = murmurhash3::hash("IsVisitLocation.CheckPoint131");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint132> = murmurhash3::hash("IsVisitLocation.CheckPoint132");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint133> = murmurhash3::hash("IsVisitLocation.CheckPoint133");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint134> = murmurhash3::hash("IsVisitLocation.CheckPoint134");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint135> = murmurhash3::hash("IsVisitLocation.CheckPoint135");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint136> = murmurhash3::hash("IsVisitLocation.CheckPoint136");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint137> = murmurhash3::hash("IsVisitLocation.CheckPoint137");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint138> = murmurhash3::hash("IsVisitLocation.CheckPoint138");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint139> = murmurhash3::hash("IsVisitLocation.CheckPoint139");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint140> = murmurhash3::hash("IsVisitLocation.CheckPoint140");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint141> = murmurhash3::hash("IsVisitLocation.CheckPoint141");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint142> = murmurhash3::hash("IsVisitLocation.CheckPoint142");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint143> = murmurhash3::hash("IsVisitLocation.CheckPoint143");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint144> = murmurhash3::hash("IsVisitLocation.CheckPoint144");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CheckPoint147> = murmurhash3::hash("IsVisitLocation.CheckPoint147");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ChirakaVillage> = murmurhash3::hash("IsVisitLocation.ChirakaVillage");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ChuonoPond> = murmurhash3::hash("IsVisitLocation.ChuonoPond");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Circuit_Ichikara> = murmurhash3::hash("IsVisitLocation.Circuit_Ichikara");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Circuit_Uotori> = murmurhash3::hash("IsVisitLocation.Circuit_Uotori");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::City_BaseCamp> = murmurhash3::hash("IsVisitLocation.City_BaseCamp");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cohorint> = murmurhash3::hash("IsVisitLocation.Cohorint");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Cokiri> = murmurhash3::hash("IsVisitLocation.Cokiri");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CookingShop> = murmurhash3::hash("IsVisitLocation.CookingShop");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Corosseo> = murmurhash3::hash("IsVisitLocation.Corosseo");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::CresiaPeninsula> = murmurhash3::hash("IsVisitLocation.CresiaPeninsula");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DamzelForest> = murmurhash3::hash("IsVisitLocation.DamzelForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DanioPlain> = murmurhash3::hash("IsVisitLocation.DanioPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DarinoPond> = murmurhash3::hash("IsVisitLocation.DarinoPond");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DasukidaMt> = murmurhash3::hash("IsVisitLocation.DasukidaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DasukidaPlateau> = murmurhash3::hash("IsVisitLocation.DasukidaPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DatsuPlain> = murmurhash3::hash("IsVisitLocation.DatsuPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeathCaldera> = murmurhash3::hash("IsVisitLocation.DeathCaldera");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeathMountain_Entrance> = murmurhash3::hash("IsVisitLocation.DeathMountain_Entrance");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeathMountainHatago> = murmurhash3::hash("IsVisitLocation.DeathMountainHatago");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeathMountainWestWorkshop> = murmurhash3::hash("IsVisitLocation.DeathMountainWestWorkshop");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_AkkareSkull> = murmurhash3::hash("IsVisitLocation.DeepHole_AkkareSkull");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_B_6_AssasisnBoss> = murmurhash3::hash("IsVisitLocation.DeepHole_B-6_AssasisnBoss");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_B_6_Tower> = murmurhash3::hash("IsVisitLocation.DeepHole_B-6_Tower");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_Chikurun> = murmurhash3::hash("IsVisitLocation.DeepHole_Chikurun");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_Cokiri> = murmurhash3::hash("IsVisitLocation.DeepHole_Cokiri");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_DeathMountain> = murmurhash3::hash("IsVisitLocation.DeepHole_DeathMountain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_Firone> = murmurhash3::hash("IsVisitLocation.DeepHole_Firone");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_FirstLandEast> = murmurhash3::hash("IsVisitLocation.DeepHole_FirstLandEast");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_FirstLandNorth> = murmurhash3::hash("IsVisitLocation.DeepHole_FirstLandNorth");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_FirstLandSouth> = murmurhash3::hash("IsVisitLocation.DeepHole_FirstLandSouth");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_FirstLandWest> = murmurhash3::hash("IsVisitLocation.DeepHole_FirstLandWest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_GerudoMaze> = murmurhash3::hash("IsVisitLocation.DeepHole_GerudoMaze");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_GerudoSummit> = murmurhash3::hash("IsVisitLocation.DeepHole_GerudoSummit");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_Higakkare> = murmurhash3::hash("IsVisitLocation.DeepHole_Higakkare");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_HimeidaMt> = murmurhash3::hash("IsVisitLocation.DeepHole_HimeidaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_HyruleCastle> = murmurhash3::hash("IsVisitLocation.DeepHole_HyruleCastle");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_HyruleCastleEast> = murmurhash3::hash("IsVisitLocation.DeepHole_HyruleCastleEast");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_HyruleCastleWest> = murmurhash3::hash("IsVisitLocation.DeepHole_HyruleCastleWest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_HyruleLake> = murmurhash3::hash("IsVisitLocation.DeepHole_HyruleLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_HyrulePlains> = murmurhash3::hash("IsVisitLocation.DeepHole_HyrulePlains");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_ImeruMt> = murmurhash3::hash("IsVisitLocation.DeepHole_ImeruMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_Kakariko_EastHill> = murmurhash3::hash("IsVisitLocation.DeepHole_Kakariko_EastHill");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_KiyanbaTrees> = murmurhash3::hash("IsVisitLocation.DeepHole_KiyanbaTrees");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_LomeiIsland> = murmurhash3::hash("IsVisitLocation.DeepHole_LomeiIsland");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_Minakkare> = murmurhash3::hash("IsVisitLocation.DeepHole_Minakkare");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_RirimukuMt> = murmurhash3::hash("IsVisitLocation.DeepHole_RirimukuMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_Rito> = murmurhash3::hash("IsVisitLocation.DeepHole_Rito");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_Saihateno> = murmurhash3::hash("IsVisitLocation.DeepHole_Saihateno");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_SanaePlateau> = murmurhash3::hash("IsVisitLocation.DeepHole_SanaePlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_TabantaMaze> = murmurhash3::hash("IsVisitLocation.DeepHole_TabantaMaze");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_YuaSnow> = murmurhash3::hash("IsVisitLocation.DeepHole_YuaSnow");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DeepHole_ZifForest> = murmurhash3::hash("IsVisitLocation.DeepHole_ZifForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DekamuPlain> = murmurhash3::hash("IsVisitLocation.DekamuPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DemonStatue_00> = murmurhash3::hash("IsVisitLocation.DemonStatue_00");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DemonStatue_01> = murmurhash3::hash("IsVisitLocation.DemonStatue_01");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DemonStatue_02> = murmurhash3::hash("IsVisitLocation.DemonStatue_02");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DemonStatue_03> = murmurhash3::hash("IsVisitLocation.DemonStatue_03");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DemonStatue_04> = murmurhash3::hash("IsVisitLocation.DemonStatue_04");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DemonStatue_05> = murmurhash3::hash("IsVisitLocation.DemonStatue_05");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DodoraBridge> = murmurhash3::hash("IsVisitLocation.DodoraBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DokamamaPlain> = murmurhash3::hash("IsVisitLocation.DokamamaPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DokuroPond> = murmurhash3::hash("IsVisitLocation.DokuroPond");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DonLake> = murmurhash3::hash("IsVisitLocation.DonLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DotiBeach> = murmurhash3::hash("IsVisitLocation.DotiBeach");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DragonMarsh> = murmurhash3::hash("IsVisitLocation.DragonMarsh");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DragonsFar> = murmurhash3::hash("IsVisitLocation.DragonsFar");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DragonTears01> = murmurhash3::hash("IsVisitLocation.DragonTears01");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DragonTears02> = murmurhash3::hash("IsVisitLocation.DragonTears02");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DragonTears03> = murmurhash3::hash("IsVisitLocation.DragonTears03");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DragonTears04> = murmurhash3::hash("IsVisitLocation.DragonTears04");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DragonTears05> = murmurhash3::hash("IsVisitLocation.DragonTears05");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DragonTears06> = murmurhash3::hash("IsVisitLocation.DragonTears06");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DragonTears07> = murmurhash3::hash("IsVisitLocation.DragonTears07");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DragonTears08> = murmurhash3::hash("IsVisitLocation.DragonTears08");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DragonTears09> = murmurhash3::hash("IsVisitLocation.DragonTears09");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DragonTears10> = murmurhash3::hash("IsVisitLocation.DragonTears10");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DragonTears11> = murmurhash3::hash("IsVisitLocation.DragonTears11");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::DragonTears12> = murmurhash3::hash("IsVisitLocation.DragonTears12");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon000> = murmurhash3::hash("IsVisitLocation.Dungeon000");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon001> = murmurhash3::hash("IsVisitLocation.Dungeon001");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon002> = murmurhash3::hash("IsVisitLocation.Dungeon002");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon003> = murmurhash3::hash("IsVisitLocation.Dungeon003");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon004> = murmurhash3::hash("IsVisitLocation.Dungeon004");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon005> = murmurhash3::hash("IsVisitLocation.Dungeon005");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon006> = murmurhash3::hash("IsVisitLocation.Dungeon006");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon007> = murmurhash3::hash("IsVisitLocation.Dungeon007");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon008> = murmurhash3::hash("IsVisitLocation.Dungeon008");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon009> = murmurhash3::hash("IsVisitLocation.Dungeon009");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon010> = murmurhash3::hash("IsVisitLocation.Dungeon010");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon011> = murmurhash3::hash("IsVisitLocation.Dungeon011");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon012> = murmurhash3::hash("IsVisitLocation.Dungeon012");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon013> = murmurhash3::hash("IsVisitLocation.Dungeon013");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon014> = murmurhash3::hash("IsVisitLocation.Dungeon014");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon015> = murmurhash3::hash("IsVisitLocation.Dungeon015");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon016> = murmurhash3::hash("IsVisitLocation.Dungeon016");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon017> = murmurhash3::hash("IsVisitLocation.Dungeon017");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon018> = murmurhash3::hash("IsVisitLocation.Dungeon018");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon019> = murmurhash3::hash("IsVisitLocation.Dungeon019");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon020> = murmurhash3::hash("IsVisitLocation.Dungeon020");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon021> = murmurhash3::hash("IsVisitLocation.Dungeon021");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon022> = murmurhash3::hash("IsVisitLocation.Dungeon022");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon023> = murmurhash3::hash("IsVisitLocation.Dungeon023");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon024> = murmurhash3::hash("IsVisitLocation.Dungeon024");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon025> = murmurhash3::hash("IsVisitLocation.Dungeon025");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon026> = murmurhash3::hash("IsVisitLocation.Dungeon026");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon027> = murmurhash3::hash("IsVisitLocation.Dungeon027");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon028> = murmurhash3::hash("IsVisitLocation.Dungeon028");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon029> = murmurhash3::hash("IsVisitLocation.Dungeon029");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon030> = murmurhash3::hash("IsVisitLocation.Dungeon030");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon031> = murmurhash3::hash("IsVisitLocation.Dungeon031");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon032> = murmurhash3::hash("IsVisitLocation.Dungeon032");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon033> = murmurhash3::hash("IsVisitLocation.Dungeon033");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon034> = murmurhash3::hash("IsVisitLocation.Dungeon034");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon035> = murmurhash3::hash("IsVisitLocation.Dungeon035");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon036> = murmurhash3::hash("IsVisitLocation.Dungeon036");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon037> = murmurhash3::hash("IsVisitLocation.Dungeon037");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon038> = murmurhash3::hash("IsVisitLocation.Dungeon038");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon039> = murmurhash3::hash("IsVisitLocation.Dungeon039");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon040> = murmurhash3::hash("IsVisitLocation.Dungeon040");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon041> = murmurhash3::hash("IsVisitLocation.Dungeon041");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon042> = murmurhash3::hash("IsVisitLocation.Dungeon042");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon043> = murmurhash3::hash("IsVisitLocation.Dungeon043");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon044> = murmurhash3::hash("IsVisitLocation.Dungeon044");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon045> = murmurhash3::hash("IsVisitLocation.Dungeon045");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon046> = murmurhash3::hash("IsVisitLocation.Dungeon046");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon047> = murmurhash3::hash("IsVisitLocation.Dungeon047");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon048> = murmurhash3::hash("IsVisitLocation.Dungeon048");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon049> = murmurhash3::hash("IsVisitLocation.Dungeon049");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon050> = murmurhash3::hash("IsVisitLocation.Dungeon050");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon051> = murmurhash3::hash("IsVisitLocation.Dungeon051");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon052> = murmurhash3::hash("IsVisitLocation.Dungeon052");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon053> = murmurhash3::hash("IsVisitLocation.Dungeon053");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon054> = murmurhash3::hash("IsVisitLocation.Dungeon054");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon055> = murmurhash3::hash("IsVisitLocation.Dungeon055");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon056> = murmurhash3::hash("IsVisitLocation.Dungeon056");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon057> = murmurhash3::hash("IsVisitLocation.Dungeon057");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon058> = murmurhash3::hash("IsVisitLocation.Dungeon058");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon059> = murmurhash3::hash("IsVisitLocation.Dungeon059");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon060> = murmurhash3::hash("IsVisitLocation.Dungeon060");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon061> = murmurhash3::hash("IsVisitLocation.Dungeon061");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon062> = murmurhash3::hash("IsVisitLocation.Dungeon062");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon063> = murmurhash3::hash("IsVisitLocation.Dungeon063");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon064> = murmurhash3::hash("IsVisitLocation.Dungeon064");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon065> = murmurhash3::hash("IsVisitLocation.Dungeon065");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon066> = murmurhash3::hash("IsVisitLocation.Dungeon066");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon067> = murmurhash3::hash("IsVisitLocation.Dungeon067");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon068> = murmurhash3::hash("IsVisitLocation.Dungeon068");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon069> = murmurhash3::hash("IsVisitLocation.Dungeon069");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon070> = murmurhash3::hash("IsVisitLocation.Dungeon070");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon071> = murmurhash3::hash("IsVisitLocation.Dungeon071");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon072> = murmurhash3::hash("IsVisitLocation.Dungeon072");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon073> = murmurhash3::hash("IsVisitLocation.Dungeon073");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon074> = murmurhash3::hash("IsVisitLocation.Dungeon074");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon075> = murmurhash3::hash("IsVisitLocation.Dungeon075");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon076> = murmurhash3::hash("IsVisitLocation.Dungeon076");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon077> = murmurhash3::hash("IsVisitLocation.Dungeon077");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon078> = murmurhash3::hash("IsVisitLocation.Dungeon078");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon079> = murmurhash3::hash("IsVisitLocation.Dungeon079");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon080> = murmurhash3::hash("IsVisitLocation.Dungeon080");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon081> = murmurhash3::hash("IsVisitLocation.Dungeon081");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon082> = murmurhash3::hash("IsVisitLocation.Dungeon082");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon083> = murmurhash3::hash("IsVisitLocation.Dungeon083");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon084> = murmurhash3::hash("IsVisitLocation.Dungeon084");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon085> = murmurhash3::hash("IsVisitLocation.Dungeon085");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon086> = murmurhash3::hash("IsVisitLocation.Dungeon086");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon087> = murmurhash3::hash("IsVisitLocation.Dungeon087");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon088> = murmurhash3::hash("IsVisitLocation.Dungeon088");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon089> = murmurhash3::hash("IsVisitLocation.Dungeon089");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon090> = murmurhash3::hash("IsVisitLocation.Dungeon090");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon091> = murmurhash3::hash("IsVisitLocation.Dungeon091");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon092> = murmurhash3::hash("IsVisitLocation.Dungeon092");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon093> = murmurhash3::hash("IsVisitLocation.Dungeon093");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon094> = murmurhash3::hash("IsVisitLocation.Dungeon094");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon095> = murmurhash3::hash("IsVisitLocation.Dungeon095");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon096> = murmurhash3::hash("IsVisitLocation.Dungeon096");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon097> = murmurhash3::hash("IsVisitLocation.Dungeon097");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon098> = murmurhash3::hash("IsVisitLocation.Dungeon098");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon099> = murmurhash3::hash("IsVisitLocation.Dungeon099");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon100> = murmurhash3::hash("IsVisitLocation.Dungeon100");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon101> = murmurhash3::hash("IsVisitLocation.Dungeon101");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon102> = murmurhash3::hash("IsVisitLocation.Dungeon102");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon103> = murmurhash3::hash("IsVisitLocation.Dungeon103");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon104> = murmurhash3::hash("IsVisitLocation.Dungeon104");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon105> = murmurhash3::hash("IsVisitLocation.Dungeon105");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon106> = murmurhash3::hash("IsVisitLocation.Dungeon106");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon107> = murmurhash3::hash("IsVisitLocation.Dungeon107");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon108> = murmurhash3::hash("IsVisitLocation.Dungeon108");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon109> = murmurhash3::hash("IsVisitLocation.Dungeon109");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon110> = murmurhash3::hash("IsVisitLocation.Dungeon110");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon111> = murmurhash3::hash("IsVisitLocation.Dungeon111");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon112> = murmurhash3::hash("IsVisitLocation.Dungeon112");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon113> = murmurhash3::hash("IsVisitLocation.Dungeon113");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon114> = murmurhash3::hash("IsVisitLocation.Dungeon114");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon115> = murmurhash3::hash("IsVisitLocation.Dungeon115");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon116> = murmurhash3::hash("IsVisitLocation.Dungeon116");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon117> = murmurhash3::hash("IsVisitLocation.Dungeon117");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon118> = murmurhash3::hash("IsVisitLocation.Dungeon118");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon119> = murmurhash3::hash("IsVisitLocation.Dungeon119");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon120> = murmurhash3::hash("IsVisitLocation.Dungeon120");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon121> = murmurhash3::hash("IsVisitLocation.Dungeon121");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon122> = murmurhash3::hash("IsVisitLocation.Dungeon122");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon123> = murmurhash3::hash("IsVisitLocation.Dungeon123");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon124> = murmurhash3::hash("IsVisitLocation.Dungeon124");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon125> = murmurhash3::hash("IsVisitLocation.Dungeon125");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon126> = murmurhash3::hash("IsVisitLocation.Dungeon126");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon127> = murmurhash3::hash("IsVisitLocation.Dungeon127");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon128> = murmurhash3::hash("IsVisitLocation.Dungeon128");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon129> = murmurhash3::hash("IsVisitLocation.Dungeon129");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon130> = murmurhash3::hash("IsVisitLocation.Dungeon130");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon131> = murmurhash3::hash("IsVisitLocation.Dungeon131");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon132> = murmurhash3::hash("IsVisitLocation.Dungeon132");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon133> = murmurhash3::hash("IsVisitLocation.Dungeon133");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon134> = murmurhash3::hash("IsVisitLocation.Dungeon134");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon135> = murmurhash3::hash("IsVisitLocation.Dungeon135");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon136> = murmurhash3::hash("IsVisitLocation.Dungeon136");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon137> = murmurhash3::hash("IsVisitLocation.Dungeon137");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon138> = murmurhash3::hash("IsVisitLocation.Dungeon138");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon139> = murmurhash3::hash("IsVisitLocation.Dungeon139");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon140> = murmurhash3::hash("IsVisitLocation.Dungeon140");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon141> = murmurhash3::hash("IsVisitLocation.Dungeon141");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon142> = murmurhash3::hash("IsVisitLocation.Dungeon142");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon143> = murmurhash3::hash("IsVisitLocation.Dungeon143");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon144> = murmurhash3::hash("IsVisitLocation.Dungeon144");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon145> = murmurhash3::hash("IsVisitLocation.Dungeon145");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon146> = murmurhash3::hash("IsVisitLocation.Dungeon146");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon147> = murmurhash3::hash("IsVisitLocation.Dungeon147");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon148> = murmurhash3::hash("IsVisitLocation.Dungeon148");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon149> = murmurhash3::hash("IsVisitLocation.Dungeon149");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon150> = murmurhash3::hash("IsVisitLocation.Dungeon150");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Dungeon151> = murmurhash3::hash("IsVisitLocation.Dungeon151");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::EagleBridge> = murmurhash3::hash("IsVisitLocation.EagleBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::EastDam> = murmurhash3::hash("IsVisitLocation.EastDam");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::EastEunpoHighlands> = murmurhash3::hash("IsVisitLocation.EastEunpoHighlands");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::EastGerudo> = murmurhash3::hash("IsVisitLocation.EastGerudo");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::EastGerudoPlateau> = murmurhash3::hash("IsVisitLocation.EastGerudoPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::EastGerudoRuins> = murmurhash3::hash("IsVisitLocation.EastGerudoRuins");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::EastPostTownRuin> = murmurhash3::hash("IsVisitLocation.EastPostTownRuin");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::EastShrine> = murmurhash3::hash("IsVisitLocation.EastShrine");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::EldinRestaurants> = murmurhash3::hash("IsVisitLocation.EldinRestaurants");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ElegLake> = murmurhash3::hash("IsVisitLocation.ElegLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::EnRiver> = murmurhash3::hash("IsVisitLocation.EnRiver");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::EquePlateau> = murmurhash3::hash("IsVisitLocation.EquePlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ErumedaPlateau> = murmurhash3::hash("IsVisitLocation.ErumedaPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::EunpoHighlands> = murmurhash3::hash("IsVisitLocation.EunpoHighlands");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::EX_LowGravityIsland> = murmurhash3::hash("IsVisitLocation.EX_LowGravityIsland");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Execution> = murmurhash3::hash("IsVisitLocation.Execution");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ExpaTrees> = murmurhash3::hash("IsVisitLocation.ExpaTrees");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::EzzuBridge> = murmurhash3::hash("IsVisitLocation.EzzuBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::FairyForest> = murmurhash3::hash("IsVisitLocation.FairyForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::FaronHatago000> = murmurhash3::hash("IsVisitLocation.FaronHatago000");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::FaronHatago001> = murmurhash3::hash("IsVisitLocation.FaronHatago001");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::FaronHatago002> = murmurhash3::hash("IsVisitLocation.FaronHatago002");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::FenaMt> = murmurhash3::hash("IsVisitLocation.FenaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::FeoreRiver> = murmurhash3::hash("IsVisitLocation.FeoreRiver");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::FigureGallery> = murmurhash3::hash("IsVisitLocation.FigureGallery");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::FinrasForest> = murmurhash3::hash("IsVisitLocation.FinrasForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::FironeForestEntrance> = murmurhash3::hash("IsVisitLocation.FironeForestEntrance");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::FlamingoSpa> = murmurhash3::hash("IsVisitLocation.FlamingoSpa");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::FlogPond> = murmurhash3::hash("IsVisitLocation.FlogPond");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::FloriaBridge> = murmurhash3::hash("IsVisitLocation.FloriaBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::FloriaFalls> = murmurhash3::hash("IsVisitLocation.FloriaFalls");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::FloriaRiver> = murmurhash3::hash("IsVisitLocation.FloriaRiver");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::FlowerSandbank> = murmurhash3::hash("IsVisitLocation.FlowerSandbank");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ForestHatago> = murmurhash3::hash("IsVisitLocation.ForestHatago");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ForgeShopGolem> = murmurhash3::hash("IsVisitLocation.ForgeShopGolem");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::FrontGatePosttown> = murmurhash3::hash("IsVisitLocation.FrontGatePosttown");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::FuruboLake> = murmurhash3::hash("IsVisitLocation.FuruboLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GakanakkyoPlain> = murmurhash3::hash("IsVisitLocation.GakanakkyoPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GameBitalockGolf> = murmurhash3::hash("IsVisitLocation.GameBitalockGolf");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GameGutsCriff> = murmurhash3::hash("IsVisitLocation.GameGutsCriff");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GameShiledSurf> = murmurhash3::hash("IsVisitLocation.GameShiledSurf");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GamettaPlateau> = murmurhash3::hash("IsVisitLocation.GamettaPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GaneLake> = murmurhash3::hash("IsVisitLocation.GaneLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GarakishiPass> = murmurhash3::hash("IsVisitLocation.GarakishiPass");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GarakishiVillage> = murmurhash3::hash("IsVisitLocation.GarakishiVillage");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GasemaDam> = murmurhash3::hash("IsVisitLocation.GasemaDam");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GasemaRiver> = murmurhash3::hash("IsVisitLocation.GasemaRiver");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GashamaHill> = murmurhash3::hash("IsVisitLocation.GashamaHill");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GashamahiMt> = murmurhash3::hash("IsVisitLocation.GashamahiMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GatakaraGarrison> = murmurhash3::hash("IsVisitLocation.GatakaraGarrison");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GatakaraPond> = murmurhash3::hash("IsVisitLocation.GatakaraPond");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GatinLake> = murmurhash3::hash("IsVisitLocation.GatinLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GenLake> = murmurhash3::hash("IsVisitLocation.GenLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GeraRiver> = murmurhash3::hash("IsVisitLocation.GeraRiver");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Gerudo> = murmurhash3::hash("IsVisitLocation.Gerudo");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GerudoCanyon> = murmurhash3::hash("IsVisitLocation.GerudoCanyon");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GerudoCanyon_Entrance> = murmurhash3::hash("IsVisitLocation.GerudoCanyon_Entrance");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GerudoDesert_Entrance> = murmurhash3::hash("IsVisitLocation.GerudoDesert_Entrance");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GerudoDesertCrack> = murmurhash3::hash("IsVisitLocation.GerudoDesertCrack");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GerudoEightHeroStatue> = murmurhash3::hash("IsVisitLocation.GerudoEightHeroStatue");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GerudoHatago> = murmurhash3::hash("IsVisitLocation.GerudoHatago");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GerudoPyramidDungeon_1> = murmurhash3::hash("IsVisitLocation.GerudoPyramidDungeon_1");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GerudoPyramidDungeon_2> = murmurhash3::hash("IsVisitLocation.GerudoPyramidDungeon_2");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GerudoPyramidDungeon_3> = murmurhash3::hash("IsVisitLocation.GerudoPyramidDungeon_3");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GerudoPyramidDungeon_4> = murmurhash3::hash("IsVisitLocation.GerudoPyramidDungeon_4");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GerudoPyramidDungeon_5> = murmurhash3::hash("IsVisitLocation.GerudoPyramidDungeon_5");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GerudoPyramidDungeon_6> = murmurhash3::hash("IsVisitLocation.GerudoPyramidDungeon_6");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GerudoPyramidDungeon_7> = murmurhash3::hash("IsVisitLocation.GerudoPyramidDungeon_7");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GerudoSummit> = murmurhash3::hash("IsVisitLocation.GerudoSummit");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GerudoUndergroundTown> = murmurhash3::hash("IsVisitLocation.GerudoUndergroundTown");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GiankonIsland> = murmurhash3::hash("IsVisitLocation.GiankonIsland");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GibogaHill> = murmurhash3::hash("IsVisitLocation.GibogaHill");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GibururuMt> = murmurhash3::hash("IsVisitLocation.GibururuMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GigiLake> = murmurhash3::hash("IsVisitLocation.GigiLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GiminoPond> = murmurhash3::hash("IsVisitLocation.GiminoPond");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GimpoMt> = murmurhash3::hash("IsVisitLocation.GimpoMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GisaHill> = murmurhash3::hash("IsVisitLocation.GisaHill");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GishiHill> = murmurhash3::hash("IsVisitLocation.GishiHill");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GoanaValley> = murmurhash3::hash("IsVisitLocation.GoanaValley");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GobyMt> = murmurhash3::hash("IsVisitLocation.GobyMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GoinaPlateau> = murmurhash3::hash("IsVisitLocation.GoinaPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Goron> = murmurhash3::hash("IsVisitLocation.Goron");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GoronBridge> = murmurhash3::hash("IsVisitLocation.GoronBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GoronSpa> = murmurhash3::hash("IsVisitLocation.GoronSpa");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GoyoLake> = murmurhash3::hash("IsVisitLocation.GoyoLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GumaroValley> = murmurhash3::hash("IsVisitLocation.GumaroValley");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GutinizaPlain> = murmurhash3::hash("IsVisitLocation.GutinizaPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GutinizaPlainTomb> = murmurhash3::hash("IsVisitLocation.GutinizaPlainTomb");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::GyunaIsland> = murmurhash3::hash("IsVisitLocation.GyunaIsland");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HachijoBridge> = murmurhash3::hash("IsVisitLocation.HachijoBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HagoromoLake> = murmurhash3::hash("IsVisitLocation.HagoromoLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HamiyonPlain> = murmurhash3::hash("IsVisitLocation.HamiyonPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HarayaLake> = murmurhash3::hash("IsVisitLocation.HarayaLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HashibiroLake> = murmurhash3::hash("IsVisitLocation.HashibiroLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Hateno> = murmurhash3::hash("IsVisitLocation.Hateno");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HatenoBay> = murmurhash3::hash("IsVisitLocation.HatenoBay");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HatenoBeach> = murmurhash3::hash("IsVisitLocation.HatenoBeach");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HatenoFarm> = murmurhash3::hash("IsVisitLocation.HatenoFarm");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HatenoGate> = murmurhash3::hash("IsVisitLocation.HatenoGate");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HatenokoIsland> = murmurhash3::hash("IsVisitLocation.HatenokoIsland");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HatenoLabo> = murmurhash3::hash("IsVisitLocation.HatenoLabo");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HatenoSchool> = murmurhash3::hash("IsVisitLocation.HatenoSchool");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HawkMt> = murmurhash3::hash("IsVisitLocation.HawkMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HeburaEastSummit> = murmurhash3::hash("IsVisitLocation.HeburaEastSummit");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HeburaIcicle> = murmurhash3::hash("IsVisitLocation.HeburaIcicle");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HeburaLodge> = murmurhash3::hash("IsVisitLocation.HeburaLodge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HeburaMt_North> = murmurhash3::hash("IsVisitLocation.HeburaMt_North");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HeburaNorthSummit> = murmurhash3::hash("IsVisitLocation.HeburaNorthSummit");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HeburaPeak> = murmurhash3::hash("IsVisitLocation.HeburaPeak");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HeburaSouthSummit> = murmurhash3::hash("IsVisitLocation.HeburaSouthSummit");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HeburaTundera> = murmurhash3::hash("IsVisitLocation.HeburaTundera");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HeburaWestSummit> = murmurhash3::hash("IsVisitLocation.HeburaWestSummit");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HemaHill> = murmurhash3::hash("IsVisitLocation.HemaHill");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HesonaiValley> = murmurhash3::hash("IsVisitLocation.HesonaiValley");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HigakkareBeach> = murmurhash3::hash("IsVisitLocation.HigakkareBeach");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HigakkarePlain> = murmurhash3::hash("IsVisitLocation.HigakkarePlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HigashinoBay> = murmurhash3::hash("IsVisitLocation.HigashinoBay");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HimeidaMt> = murmurhash3::hash("IsVisitLocation.HimeidaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HopeBridge> = murmurhash3::hash("IsVisitLocation.HopeBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HopesPlateau> = murmurhash3::hash("IsVisitLocation.HopesPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HorseStableBranchOffice_BaseCamp> = murmurhash3::hash("IsVisitLocation.HorseStableBranchOffice_BaseCamp");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HorseStableBranchOffice_Gerudo> = murmurhash3::hash("IsVisitLocation.HorseStableBranchOffice_Gerudo");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyliaMt> = murmurhash3::hash("IsVisitLocation.HyliaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyliaRiver> = murmurhash3::hash("IsVisitLocation.HyliaRiver");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyralBridge> = murmurhash3::hash("IsVisitLocation.HyralBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyralIslands> = murmurhash3::hash("IsVisitLocation.HyralIslands");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Hyrule_Out> = murmurhash3::hash("IsVisitLocation.Hyrule_Out");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleCastle> = murmurhash3::hash("IsVisitLocation.HyruleCastle");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleCastle_Hall_0> = murmurhash3::hash("IsVisitLocation.HyruleCastle_Hall_0");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleCastle_Hall_1> = murmurhash3::hash("IsVisitLocation.HyruleCastle_Hall_1");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleCastle_Hall_2> = murmurhash3::hash("IsVisitLocation.HyruleCastle_Hall_2");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleCastle_Room_0> = murmurhash3::hash("IsVisitLocation.HyruleCastle_Room_0");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleCastle_Room_1> = murmurhash3::hash("IsVisitLocation.HyruleCastle_Room_1");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleCastle_Room_10> = murmurhash3::hash("IsVisitLocation.HyruleCastle_Room_10");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleCastle_Room_11> = murmurhash3::hash("IsVisitLocation.HyruleCastle_Room_11");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleCastle_Room_2> = murmurhash3::hash("IsVisitLocation.HyruleCastle_Room_2");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleCastle_Room_3> = murmurhash3::hash("IsVisitLocation.HyruleCastle_Room_3");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleCastle_Room_5> = murmurhash3::hash("IsVisitLocation.HyruleCastle_Room_5");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleCastle_Room_6> = murmurhash3::hash("IsVisitLocation.HyruleCastle_Room_6");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleCastle_Room_7> = murmurhash3::hash("IsVisitLocation.HyruleCastle_Room_7");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleCastle_Room_8> = murmurhash3::hash("IsVisitLocation.HyruleCastle_Room_8");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleCastle_Room_9> = murmurhash3::hash("IsVisitLocation.HyruleCastle_Room_9");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleCastleUnderground> = murmurhash3::hash("IsVisitLocation.HyruleCastleUnderground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleCave> = murmurhash3::hash("IsVisitLocation.HyruleCave");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleCentralPlace> = murmurhash3::hash("IsVisitLocation.HyruleCentralPlace");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleDepthHatago> = murmurhash3::hash("IsVisitLocation.HyruleDepthHatago");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleEastTown> = murmurhash3::hash("IsVisitLocation.HyruleEastTown");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleGarrison> = murmurhash3::hash("IsVisitLocation.HyruleGarrison");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleGround> = murmurhash3::hash("IsVisitLocation.HyruleGround");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleLabo> = murmurhash3::hash("IsVisitLocation.HyruleLabo");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyrulePark> = murmurhash3::hash("IsVisitLocation.HyrulePark");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyrulePlace> = murmurhash3::hash("IsVisitLocation.HyrulePlace");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleSkyIsland> = murmurhash3::hash("IsVisitLocation.HyruleSkyIsland");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleTemple> = murmurhash3::hash("IsVisitLocation.HyruleTemple");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleTower> = murmurhash3::hash("IsVisitLocation.HyruleTower");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleUnderground> = murmurhash3::hash("IsVisitLocation.HyruleUnderground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleWater> = murmurhash3::hash("IsVisitLocation.HyruleWater");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::HyruleWestTown> = murmurhash3::hash("IsVisitLocation.HyruleWestTown");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::IbaraPlateau> = murmurhash3::hash("IsVisitLocation.IbaraPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::IceHouse> = murmurhash3::hash("IsVisitLocation.IceHouse");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::IkokoPlateau> = murmurhash3::hash("IsVisitLocation.IkokoPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ImeruMt> = murmurhash3::hash("IsVisitLocation.ImeruMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::InvestigatingGroupBase> = murmurhash3::hash("IsVisitLocation.InvestigatingGroupBase");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::IooValley> = murmurhash3::hash("IsVisitLocation.IooValley");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::IrimoLake> = murmurhash3::hash("IsVisitLocation.IrimoLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::IrimoRiver> = murmurhash3::hash("IsVisitLocation.IrimoRiver");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::IsakiCape> = murmurhash3::hash("IsVisitLocation.IsakiCape");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::IsakuIslands> = murmurhash3::hash("IsVisitLocation.IsakuIslands");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::JedaPlateau> = murmurhash3::hash("IsVisitLocation.JedaPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::JijigegeMt> = murmurhash3::hash("IsVisitLocation.JijigegeMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::JiuRiver> = murmurhash3::hash("IsVisitLocation.JiuRiver");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::JogoBridge> = murmurhash3::hash("IsVisitLocation.JogoBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::JokuBridge> = murmurhash3::hash("IsVisitLocation.JokuBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KagossaMt> = murmurhash3::hash("IsVisitLocation.KagossaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KaiyanPlain> = murmurhash3::hash("IsVisitLocation.KaiyanPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KakamoLake> = murmurhash3::hash("IsVisitLocation.KakamoLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KakaomePlain> = murmurhash3::hash("IsVisitLocation.KakaomePlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Kakariko> = murmurhash3::hash("IsVisitLocation.Kakariko");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Kakariko_EastHill> = murmurhash3::hash("IsVisitLocation.Kakariko_EastHill");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KakufusaPlain> = murmurhash3::hash("IsVisitLocation.KakufusaPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KamasuPlateau> = murmurhash3::hash("IsVisitLocation.KamasuPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KamutariPlateau> = murmurhash3::hash("IsVisitLocation.KamutariPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KapporeMt> = murmurhash3::hash("IsVisitLocation.KapporeMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KarimikiLake> = murmurhash3::hash("IsVisitLocation.KarimikiLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KarusaValley> = murmurhash3::hash("IsVisitLocation.KarusaValley");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KasuraMt> = murmurhash3::hash("IsVisitLocation.KasuraMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KattoriPlateau> = murmurhash3::hash("IsVisitLocation.KattoriPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KaturaCastle> = murmurhash3::hash("IsVisitLocation.KaturaCastle");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KaturaRiver> = murmurhash3::hash("IsVisitLocation.KaturaRiver");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KauLake> = murmurhash3::hash("IsVisitLocation.KauLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KazanaDungeon> = murmurhash3::hash("IsVisitLocation.KazanaDungeon");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KazuryuLake> = murmurhash3::hash("IsVisitLocation.KazuryuLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KazuryuRiver> = murmurhash3::hash("IsVisitLocation.KazuryuRiver");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KazusuPass> = murmurhash3::hash("IsVisitLocation.KazusuPass");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KibakkaSnow> = murmurhash3::hash("IsVisitLocation.KibakkaSnow");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KibinaLake> = murmurhash3::hash("IsVisitLocation.KibinaLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KihirePlain> = murmurhash3::hash("IsVisitLocation.KihirePlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KikinosaMt> = murmurhash3::hash("IsVisitLocation.KikinosaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KikinosaPlain> = murmurhash3::hash("IsVisitLocation.KikinosaPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KimarikaMt> = murmurhash3::hash("IsVisitLocation.KimarikaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KimarikaPlateau> = murmurhash3::hash("IsVisitLocation.KimarikaPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KingfisherSpa> = murmurhash3::hash("IsVisitLocation.KingfisherSpa");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KingValley> = murmurhash3::hash("IsVisitLocation.KingValley");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KingValley2> = murmurhash3::hash("IsVisitLocation.KingValley2");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KinmePlateau> = murmurhash3::hash("IsVisitLocation.KinmePlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KinshoiMt> = murmurhash3::hash("IsVisitLocation.KinshoiMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KirisasaPlateau> = murmurhash3::hash("IsVisitLocation.KirisasaPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KiriyabuMt> = murmurhash3::hash("IsVisitLocation.KiriyabuMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KitakkareBeach> = murmurhash3::hash("IsVisitLocation.KitakkareBeach");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KitakkarePlain> = murmurhash3::hash("IsVisitLocation.KitakkarePlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KitakkarePlateau> = murmurhash3::hash("IsVisitLocation.KitakkarePlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KitanoBay> = murmurhash3::hash("IsVisitLocation.KitanoBay");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KiyanbaTrees> = murmurhash3::hash("IsVisitLocation.KiyanbaTrees");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KochuBridge> = murmurhash3::hash("IsVisitLocation.KochuBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KoganeyaLake> = murmurhash3::hash("IsVisitLocation.KoganeyaLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KokuppiSnow> = murmurhash3::hash("IsVisitLocation.KokuppiSnow");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KokuwaLake> = murmurhash3::hash("IsVisitLocation.KokuwaLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KomoreBeach> = murmurhash3::hash("IsVisitLocation.KomoreBeach");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KondanaLake> = murmurhash3::hash("IsVisitLocation.KondanaLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KoshaIsland> = murmurhash3::hash("IsVisitLocation.KoshaIsland");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KuhanLake> = murmurhash3::hash("IsVisitLocation.KuhanLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KukujaValley> = murmurhash3::hash("IsVisitLocation.KukujaValley");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KumPlateau> = murmurhash3::hash("IsVisitLocation.KumPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KumSpa> = murmurhash3::hash("IsVisitLocation.KumSpa");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KunaiBridge> = murmurhash3::hash("IsVisitLocation.KunaiBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KunaiLake> = murmurhash3::hash("IsVisitLocation.KunaiLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KurindaPrairie> = murmurhash3::hash("IsVisitLocation.KurindaPrairie");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KurisobeSnow> = murmurhash3::hash("IsVisitLocation.KurisobeSnow");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KuroidaPlateau> = murmurhash3::hash("IsVisitLocation.KuroidaPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KutenLake> = murmurhash3::hash("IsVisitLocation.KutenLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::KutiffMt> = murmurhash3::hash("IsVisitLocation.KutiffMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LakeFloria> = murmurhash3::hash("IsVisitLocation.LakeFloria");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LakeHylia> = murmurhash3::hash("IsVisitLocation.LakeHylia");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LakeHylia_Sky> = murmurhash3::hash("IsVisitLocation.LakeHylia_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LakeHylia_Underground> = murmurhash3::hash("IsVisitLocation.LakeHylia_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LanayruBay> = murmurhash3::hash("IsVisitLocation.LanayruBay");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LanayruEastEntrance> = murmurhash3::hash("IsVisitLocation.LanayruEastEntrance");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LanayruWestEntrance> = murmurhash3::hash("IsVisitLocation.LanayruWestEntrance");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonFire> = murmurhash3::hash("IsVisitLocation.LargeDungeonFire");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonFire_1F> = murmurhash3::hash("IsVisitLocation.LargeDungeonFire_1F");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonFire_2F> = murmurhash3::hash("IsVisitLocation.LargeDungeonFire_2F");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonFire_3F> = murmurhash3::hash("IsVisitLocation.LargeDungeonFire_3F");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonFire_4F> = murmurhash3::hash("IsVisitLocation.LargeDungeonFire_4F");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonFire_5F> = murmurhash3::hash("IsVisitLocation.LargeDungeonFire_5F");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonHyruleCastle> = murmurhash3::hash("IsVisitLocation.LargeDungeonHyruleCastle");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonHyruleCastle_1F> = murmurhash3::hash("IsVisitLocation.LargeDungeonHyruleCastle_1F");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonHyruleCastle_B1> = murmurhash3::hash("IsVisitLocation.LargeDungeonHyruleCastle_B1");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonHyruleCastle_B2> = murmurhash3::hash("IsVisitLocation.LargeDungeonHyruleCastle_B2");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonHyruleCastle_B3> = murmurhash3::hash("IsVisitLocation.LargeDungeonHyruleCastle_B3");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonSoul> = murmurhash3::hash("IsVisitLocation.LargeDungeonSoul");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonThunder> = murmurhash3::hash("IsVisitLocation.LargeDungeonThunder");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonThunder_1F> = murmurhash3::hash("IsVisitLocation.LargeDungeonThunder_1F");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonThunder_2F> = murmurhash3::hash("IsVisitLocation.LargeDungeonThunder_2F");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonThunder_3F> = murmurhash3::hash("IsVisitLocation.LargeDungeonThunder_3F");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonThunder_4F> = murmurhash3::hash("IsVisitLocation.LargeDungeonThunder_4F");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonThunder_5F> = murmurhash3::hash("IsVisitLocation.LargeDungeonThunder_5F");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonThunder_6F> = murmurhash3::hash("IsVisitLocation.LargeDungeonThunder_6F");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonThunder_7F> = murmurhash3::hash("IsVisitLocation.LargeDungeonThunder_7F");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonThunder_B1> = murmurhash3::hash("IsVisitLocation.LargeDungeonThunder_B1");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonWater> = murmurhash3::hash("IsVisitLocation.LargeDungeonWater");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonWater_B1> = murmurhash3::hash("IsVisitLocation.LargeDungeonWater_B1");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonWind> = murmurhash3::hash("IsVisitLocation.LargeDungeonWind");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonWind_1F> = murmurhash3::hash("IsVisitLocation.LargeDungeonWind_1F");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonWind_B1> = murmurhash3::hash("IsVisitLocation.LargeDungeonWind_B1");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LargeDungeonWind_B2> = murmurhash3::hash("IsVisitLocation.LargeDungeonWind_B2");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LaveBeach> = murmurhash3::hash("IsVisitLocation.LaveBeach");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LeMarbeBridge> = murmurhash3::hash("IsVisitLocation.LeMarbeBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LightningPlateau> = murmurhash3::hash("IsVisitLocation.LightningPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LittleBrotherBridge> = murmurhash3::hash("IsVisitLocation.LittleBrotherBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LomeiIslands> = murmurhash3::hash("IsVisitLocation.LomeiIslands");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::LostForest> = murmurhash3::hash("IsVisitLocation.LostForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MacusePeninsula> = murmurhash3::hash("IsVisitLocation.MacusePeninsula");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MakuminoValley> = murmurhash3::hash("IsVisitLocation.MakuminoValley");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ManbaLake> = murmurhash3::hash("IsVisitLocation.ManbaLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_CentralHyrule> = murmurhash3::hash("IsVisitLocation.MapArea_CentralHyrule");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_DeathMountain> = murmurhash3::hash("IsVisitLocation.MapArea_DeathMountain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_DeathMountain_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_DeathMountain_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_DeathMountain_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_DeathMountain_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_EastHateru> = murmurhash3::hash("IsVisitLocation.MapArea_EastHateru");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_EastHateru_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_EastHateru_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_EastHateru_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_EastHateru_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_EldinCanyon> = murmurhash3::hash("IsVisitLocation.MapArea_EldinCanyon");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_EldinCanyon_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_EldinCanyon_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_EldinCanyon_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_EldinCanyon_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_EldinMountains> = murmurhash3::hash("IsVisitLocation.MapArea_EldinMountains");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_EldinMountains_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_EldinMountains_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_EldinMountains_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_EldinMountains_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_FironeGrassland> = murmurhash3::hash("IsVisitLocation.MapArea_FironeGrassland");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_FironeGrassland_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_FironeGrassland_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_FironeGrassland_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_FironeGrassland_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_FironeSea> = murmurhash3::hash("IsVisitLocation.MapArea_FironeSea");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_FironeSea_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_FironeSea_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_FironeSea_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_FironeSea_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_GerudoDesert> = murmurhash3::hash("IsVisitLocation.MapArea_GerudoDesert");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_GerudoDesert_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_GerudoDesert_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_GerudoDesert_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_GerudoDesert_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_GerudoHighlands> = murmurhash3::hash("IsVisitLocation.MapArea_GerudoHighlands");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_GerudoHighlands_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_GerudoHighlands_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_GerudoHighlands_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_GerudoHighlands_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_HateruSea> = murmurhash3::hash("IsVisitLocation.MapArea_HateruSea");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_HateruSea_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_HateruSea_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_HateruSea_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_HateruSea_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_HeburaMountains> = murmurhash3::hash("IsVisitLocation.MapArea_HeburaMountains");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_HeburaMountains_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_HeburaMountains_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_HeburaMountains_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_HeburaMountains_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_HyliaLake> = murmurhash3::hash("IsVisitLocation.MapArea_HyliaLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_HyruleForest> = murmurhash3::hash("IsVisitLocation.MapArea_HyruleForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_HyruleForest_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_HyruleForest_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_HyruleForest_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_HyruleForest_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_HyruleHill> = murmurhash3::hash("IsVisitLocation.MapArea_HyruleHill");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_HyruleHill_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_HyruleHill_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_HyruleHill_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_HyruleHill_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_LanayruSea> = murmurhash3::hash("IsVisitLocation.MapArea_LanayruSea");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_LanayruSea_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_LanayruSea_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_LanayruSea_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_LanayruSea_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_LanayruWaterSources> = murmurhash3::hash("IsVisitLocation.MapArea_LanayruWaterSources");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_LanayruWaterSources_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_LanayruWaterSources_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_LanayruWaterSources_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_LanayruWaterSources_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_LanayruWetlands> = murmurhash3::hash("IsVisitLocation.MapArea_LanayruWetlands");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_LanayruWetlands_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_LanayruWetlands_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_LanayruWetlands_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_LanayruWetlands_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_LiveMountain> = murmurhash3::hash("IsVisitLocation.MapArea_LiveMountain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_LiveMountain_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_LiveMountain_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_LiveMountain_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_LiveMountain_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_TabantaFrontier> = murmurhash3::hash("IsVisitLocation.MapArea_TabantaFrontier");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_TabantaFrontier_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_TabantaFrontier_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_TabantaFrontier_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_TabantaFrontier_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_TamulOutback> = murmurhash3::hash("IsVisitLocation.MapArea_TamulOutback");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_TamulOutback_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_TamulOutback_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_TamulOutback_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_TamulOutback_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_TamulPlateau> = murmurhash3::hash("IsVisitLocation.MapArea_TamulPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_TamulPlateau_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_TamulPlateau_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_TamulPlateau_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_TamulPlateau_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_TamulSea> = murmurhash3::hash("IsVisitLocation.MapArea_TamulSea");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_TamulSea_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_TamulSea_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_TamulSea_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_TamulSea_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_WestHateru> = murmurhash3::hash("IsVisitLocation.MapArea_WestHateru");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_WestHateru_Sky> = murmurhash3::hash("IsVisitLocation.MapArea_WestHateru_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapArea_WestHateru_Underground> = murmurhash3::hash("IsVisitLocation.MapArea_WestHateru_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapRegion_Eldin> = murmurhash3::hash("IsVisitLocation.MapRegion_Eldin");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapRegion_Eldin_Sky> = murmurhash3::hash("IsVisitLocation.MapRegion_Eldin_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapRegion_Firone> = murmurhash3::hash("IsVisitLocation.MapRegion_Firone");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapRegion_Firone_Sky> = murmurhash3::hash("IsVisitLocation.MapRegion_Firone_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapRegion_Gerudo> = murmurhash3::hash("IsVisitLocation.MapRegion_Gerudo");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapRegion_Gerudo_Sky> = murmurhash3::hash("IsVisitLocation.MapRegion_Gerudo_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapRegion_Hateru> = murmurhash3::hash("IsVisitLocation.MapRegion_Hateru");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapRegion_Hateru_Sky> = murmurhash3::hash("IsVisitLocation.MapRegion_Hateru_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapRegion_Hebura> = murmurhash3::hash("IsVisitLocation.MapRegion_Hebura");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapRegion_Hebura_Sky> = murmurhash3::hash("IsVisitLocation.MapRegion_Hebura_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapRegion_HyrulePrairie> = murmurhash3::hash("IsVisitLocation.MapRegion_HyrulePrairie");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapRegion_HyrulePrairie_Sky> = murmurhash3::hash("IsVisitLocation.MapRegion_HyrulePrairie_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapRegion_HyrulePrairie_Underground> = murmurhash3::hash("IsVisitLocation.MapRegion_HyrulePrairie_Underground");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapRegion_Lanayru> = murmurhash3::hash("IsVisitLocation.MapRegion_Lanayru");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapRegion_Lanayru_Sky> = murmurhash3::hash("IsVisitLocation.MapRegion_Lanayru_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapRegion_Tamul> = murmurhash3::hash("IsVisitLocation.MapRegion_Tamul");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MapRegion_Tamul_Sky> = murmurhash3::hash("IsVisitLocation.MapRegion_Tamul_Sky");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MarittaHill> = murmurhash3::hash("IsVisitLocation.MarittaHill");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MarittaPrairie> = murmurhash3::hash("IsVisitLocation.MarittaPrairie");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MaronSpring> = murmurhash3::hash("IsVisitLocation.MaronSpring");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MarritaExchange> = murmurhash3::hash("IsVisitLocation.MarritaExchange");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MasazuBridge> = murmurhash3::hash("IsVisitLocation.MasazuBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MasazuRock> = murmurhash3::hash("IsVisitLocation.MasazuRock");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MedakaValley> = murmurhash3::hash("IsVisitLocation.MedakaValley");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MeganeRock> = murmurhash3::hash("IsVisitLocation.MeganeRock");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MemeMt> = murmurhash3::hash("IsVisitLocation.MemeMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MenadaBeach> = murmurhash3::hash("IsVisitLocation.MenadaBeach");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MerkayaLowTrees> = murmurhash3::hash("IsVisitLocation.MerkayaLowTrees");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MezusuPass> = murmurhash3::hash("IsVisitLocation.MezusuPass");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MiddleTrees> = murmurhash3::hash("IsVisitLocation.MiddleTrees");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MihekoBay> = murmurhash3::hash("IsVisitLocation.MihekoBay");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinakkareBridge> = murmurhash3::hash("IsVisitLocation.MinakkareBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinakkareBridgeEast> = murmurhash3::hash("IsVisitLocation.MinakkareBridgeEast");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinakkareBridgeWest> = murmurhash3::hash("IsVisitLocation.MinakkareBridgeWest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinakkareFalls> = murmurhash3::hash("IsVisitLocation.MinakkareFalls");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinakkareLake> = murmurhash3::hash("IsVisitLocation.MinakkareLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinakkarePlain> = murmurhash3::hash("IsVisitLocation.MinakkarePlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinaminoBay> = murmurhash3::hash("IsVisitLocation.MinaminoBay");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Mine> = murmurhash3::hash("IsVisitLocation.Mine");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField> = murmurhash3::hash("IsVisitLocation.MinusField");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_AagetoMt> = murmurhash3::hash("IsVisitLocation.MinusField_AagetoMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_AkkareZhai> = murmurhash3::hash("IsVisitLocation.MinusField_AkkareZhai");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_AncientColosseum> = murmurhash3::hash("IsVisitLocation.MinusField_AncientColosseum");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_AncientTimeShrine> = murmurhash3::hash("IsVisitLocation.MinusField_AncientTimeShrine");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_BarakkPlain> = murmurhash3::hash("IsVisitLocation.MinusField_BarakkPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_BiginaTrees> = murmurhash3::hash("IsVisitLocation.MinusField_BiginaTrees");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_BlindForest> = murmurhash3::hash("IsVisitLocation.MinusField_BlindForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_BluePrintShrine> = murmurhash3::hash("IsVisitLocation.MinusField_BluePrintShrine");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_BraveFountain> = murmurhash3::hash("IsVisitLocation.MinusField_BraveFountain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_BuibuiTrees> = murmurhash3::hash("IsVisitLocation.MinusField_BuibuiTrees");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_Cohorint> = murmurhash3::hash("IsVisitLocation.MinusField_Cohorint");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_CresiaPeninsula> = murmurhash3::hash("IsVisitLocation.MinusField_CresiaPeninsula");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_DasukidaMt> = murmurhash3::hash("IsVisitLocation.MinusField_DasukidaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_DesertGrave> = murmurhash3::hash("IsVisitLocation.MinusField_DesertGrave");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_DokuroPond> = murmurhash3::hash("IsVisitLocation.MinusField_DokuroPond");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_ExpaTrees> = murmurhash3::hash("IsVisitLocation.MinusField_ExpaTrees");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_FairyForest> = murmurhash3::hash("IsVisitLocation.MinusField_FairyForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_FenaMt> = murmurhash3::hash("IsVisitLocation.MinusField_FenaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_FlamingoSpa> = murmurhash3::hash("IsVisitLocation.MinusField_FlamingoSpa");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_ForestColosseum> = murmurhash3::hash("IsVisitLocation.MinusField_ForestColosseum");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_GanondorfArea> = murmurhash3::hash("IsVisitLocation.MinusField_GanondorfArea");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_GanondorfEnd> = murmurhash3::hash("IsVisitLocation.MinusField_GanondorfEnd");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_GanondorfEntrance> = murmurhash3::hash("IsVisitLocation.MinusField_GanondorfEntrance");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_GashamahiMt> = murmurhash3::hash("IsVisitLocation.MinusField_GashamahiMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_Gerudo> = murmurhash3::hash("IsVisitLocation.MinusField_Gerudo");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_GerudoFossil> = murmurhash3::hash("IsVisitLocation.MinusField_GerudoFossil");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_GerudoSummit> = murmurhash3::hash("IsVisitLocation.MinusField_GerudoSummit");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_GibogaHill> = murmurhash3::hash("IsVisitLocation.MinusField_GibogaHill");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_GibururuMt> = murmurhash3::hash("IsVisitLocation.MinusField_GibururuMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_GimpoMt> = murmurhash3::hash("IsVisitLocation.MinusField_GimpoMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_GobyLake> = murmurhash3::hash("IsVisitLocation.MinusField_GobyLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_GobyMt> = murmurhash3::hash("IsVisitLocation.MinusField_GobyMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_Goron> = murmurhash3::hash("IsVisitLocation.MinusField_Goron");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_Hateno> = murmurhash3::hash("IsVisitLocation.MinusField_Hateno");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_HatenoGate> = murmurhash3::hash("IsVisitLocation.MinusField_HatenoGate");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_HawkMt> = murmurhash3::hash("IsVisitLocation.MinusField_HawkMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_HeburaFossil> = murmurhash3::hash("IsVisitLocation.MinusField_HeburaFossil");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_HeburaPeak> = murmurhash3::hash("IsVisitLocation.MinusField_HeburaPeak");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_HimeidaMt> = murmurhash3::hash("IsVisitLocation.MinusField_HimeidaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_HimeidaSpa> = murmurhash3::hash("IsVisitLocation.MinusField_HimeidaSpa");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_HyliaMt> = murmurhash3::hash("IsVisitLocation.MinusField_HyliaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_JijigegeMt> = murmurhash3::hash("IsVisitLocation.MinusField_JijigegeMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_Kakariko> = murmurhash3::hash("IsVisitLocation.MinusField_Kakariko");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_KapporeMt> = murmurhash3::hash("IsVisitLocation.MinusField_KapporeMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_KasuraMt> = murmurhash3::hash("IsVisitLocation.MinusField_KasuraMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_KazuryuLake> = murmurhash3::hash("IsVisitLocation.MinusField_KazuryuLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_KikinosaMt> = murmurhash3::hash("IsVisitLocation.MinusField_KikinosaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_KimarikaMt> = murmurhash3::hash("IsVisitLocation.MinusField_KimarikaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_KingfisherSpa> = murmurhash3::hash("IsVisitLocation.MinusField_KingfisherSpa");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_KingValley> = murmurhash3::hash("IsVisitLocation.MinusField_KingValley");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_KinshoiMt> = murmurhash3::hash("IsVisitLocation.MinusField_KinshoiMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_KiyanbaTrees> = murmurhash3::hash("IsVisitLocation.MinusField_KiyanbaTrees");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_KorokForest> = murmurhash3::hash("IsVisitLocation.MinusField_KorokForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_KumSpa> = murmurhash3::hash("IsVisitLocation.MinusField_KumSpa");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_KutiffMt> = murmurhash3::hash("IsVisitLocation.MinusField_KutiffMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_LiveMountain> = murmurhash3::hash("IsVisitLocation.MinusField_LiveMountain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_LizardLake> = murmurhash3::hash("IsVisitLocation.MinusField_LizardLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_LomeiIsland> = murmurhash3::hash("IsVisitLocation.MinusField_LomeiIsland");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_LomeiNorth> = murmurhash3::hash("IsVisitLocation.MinusField_LomeiNorth");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_LomeiSouth> = murmurhash3::hash("IsVisitLocation.MinusField_LomeiSouth");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_MacusePeninsula> = murmurhash3::hash("IsVisitLocation.MinusField_MacusePeninsula");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_MemeMt> = murmurhash3::hash("IsVisitLocation.MinusField_MemeMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_MiddleTrees> = murmurhash3::hash("IsVisitLocation.MinusField_MiddleTrees");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_MizemakuMt> = murmurhash3::hash("IsVisitLocation.MinusField_MizemakuMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_MoriMt> = murmurhash3::hash("IsVisitLocation.MinusField_MoriMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_MorudaMt> = murmurhash3::hash("IsVisitLocation.MinusField_MorudaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_MorugaMt> = murmurhash3::hash("IsVisitLocation.MinusField_MorugaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_NezuppoTrees> = murmurhash3::hash("IsVisitLocation.MinusField_NezuppoTrees");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_Oasis> = murmurhash3::hash("IsVisitLocation.MinusField_Oasis");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_OngiForest> = murmurhash3::hash("IsVisitLocation.MinusField_OngiForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_OpeningField> = murmurhash3::hash("IsVisitLocation.MinusField_OpeningField");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_OpeningFieldEnd> = murmurhash3::hash("IsVisitLocation.MinusField_OpeningFieldEnd");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_OrdinFossil> = murmurhash3::hash("IsVisitLocation.MinusField_OrdinFossil");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_PongagaMt> = murmurhash3::hash("IsVisitLocation.MinusField_PongagaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_PoponMt> = murmurhash3::hash("IsVisitLocation.MinusField_PoponMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_PowerFountain> = murmurhash3::hash("IsVisitLocation.MinusField_PowerFountain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_RiaroTrees> = murmurhash3::hash("IsVisitLocation.MinusField_RiaroTrees");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_RirimukuMt> = murmurhash3::hash("IsVisitLocation.MinusField_RirimukuMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_Rito> = murmurhash3::hash("IsVisitLocation.MinusField_Rito");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_RokomakuMt> = murmurhash3::hash("IsVisitLocation.MinusField_RokomakuMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_SaiMt> = murmurhash3::hash("IsVisitLocation.MinusField_SaiMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_ShinikkyoForest> = murmurhash3::hash("IsVisitLocation.MinusField_ShinikkyoForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_SouthGerudoLegacy> = murmurhash3::hash("IsVisitLocation.MinusField_SouthGerudoLegacy");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_StartPoint> = murmurhash3::hash("IsVisitLocation.MinusField_StartPoint");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_TagonaTrees> = murmurhash3::hash("IsVisitLocation.MinusField_TagonaTrees");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_Taura> = murmurhash3::hash("IsVisitLocation.MinusField_Taura");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_TerumeMt> = murmurhash3::hash("IsVisitLocation.MinusField_TerumeMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_TwinsMountain> = murmurhash3::hash("IsVisitLocation.MinusField_TwinsMountain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_UMiiVillage> = murmurhash3::hash("IsVisitLocation.MinusField_UMiiVillage");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_WhiteZora> = murmurhash3::hash("IsVisitLocation.MinusField_WhiteZora");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_WiseFountain> = murmurhash3::hash("IsVisitLocation.MinusField_WiseFountain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MinusField_ZifForest> = murmurhash3::hash("IsVisitLocation.MinusField_ZifForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MizemakuMt> = murmurhash3::hash("IsVisitLocation.MizemakuMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MomoMt> = murmurhash3::hash("IsVisitLocation.MomoMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MoriMt> = murmurhash3::hash("IsVisitLocation.MoriMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MoroLake> = murmurhash3::hash("IsVisitLocation.MoroLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MorudaMt> = murmurhash3::hash("IsVisitLocation.MorudaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MorugaMt> = murmurhash3::hash("IsVisitLocation.MorugaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::MuguriPlain> = murmurhash3::hash("IsVisitLocation.MuguriPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NaganizaHill> = murmurhash3::hash("IsVisitLocation.NaganizaHill");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NagyuPlateau> = murmurhash3::hash("IsVisitLocation.NagyuPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NaierunPeninsula> = murmurhash3::hash("IsVisitLocation.NaierunPeninsula");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NanaimoPlain> = murmurhash3::hash("IsVisitLocation.NanaimoPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NangoPond> = murmurhash3::hash("IsVisitLocation.NangoPond");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NantanCastle> = murmurhash3::hash("IsVisitLocation.NantanCastle");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NaruguPeninsula> = murmurhash3::hash("IsVisitLocation.NaruguPeninsula");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NefraHill> = murmurhash3::hash("IsVisitLocation.NefraHill");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NewHyruleWestHatago> = murmurhash3::hash("IsVisitLocation.NewHyruleWestHatago");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NewspaperCompany> = murmurhash3::hash("IsVisitLocation.NewspaperCompany");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NezuppoTrees> = murmurhash3::hash("IsVisitLocation.NezuppoTrees");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NiiLake> = murmurhash3::hash("IsVisitLocation.NiiLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NikakaIsland> = murmurhash3::hash("IsVisitLocation.NikakaIsland");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NishakkarePlain> = murmurhash3::hash("IsVisitLocation.NishakkarePlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NishojiBridge> = murmurhash3::hash("IsVisitLocation.NishojiBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NitariBeach> = murmurhash3::hash("IsVisitLocation.NitariBeach");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NomyPlain> = murmurhash3::hash("IsVisitLocation.NomyPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NorthGerudoRuins> = murmurhash3::hash("IsVisitLocation.NorthGerudoRuins");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NorthHatelHatago> = murmurhash3::hash("IsVisitLocation.NorthHatelHatago");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NorthHugeStone> = murmurhash3::hash("IsVisitLocation.NorthHugeStone");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::NutsLake> = murmurhash3::hash("IsVisitLocation.NutsLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Oasis> = murmurhash3::hash("IsVisitLocation.Oasis");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::OkuAkkarePlain> = murmurhash3::hash("IsVisitLocation.OkuAkkarePlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::OkuwaLake> = murmurhash3::hash("IsVisitLocation.OkuwaLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::OngiForest> = murmurhash3::hash("IsVisitLocation.OngiForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::OoosePlain> = murmurhash3::hash("IsVisitLocation.OoosePlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::OrdinBridge> = murmurhash3::hash("IsVisitLocation.OrdinBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::OrdinFossil> = murmurhash3::hash("IsVisitLocation.OrdinFossil");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::OrupaPlateau> = murmurhash3::hash("IsVisitLocation.OrupaPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::OsanjoBridge> = murmurhash3::hash("IsVisitLocation.OsanjoBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::OshoromaLake> = murmurhash3::hash("IsVisitLocation.OshoromaLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::OtsukoWet> = murmurhash3::hash("IsVisitLocation.OtsukoWet");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::PafaBeach> = murmurhash3::hash("IsVisitLocation.PafaBeach");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::PaiyuBay> = murmurhash3::hash("IsVisitLocation.PaiyuBay");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::PakanchiIsland> = murmurhash3::hash("IsVisitLocation.PakanchiIsland");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::PaparaPlateau> = murmurhash3::hash("IsVisitLocation.PaparaPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::PearlWaste> = murmurhash3::hash("IsVisitLocation.PearlWaste");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::PeridoBarrier> = murmurhash3::hash("IsVisitLocation.PeridoBarrier");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::PlayerHouse> = murmurhash3::hash("IsVisitLocation.PlayerHouse");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::PongagaMt> = murmurhash3::hash("IsVisitLocation.PongagaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::PoponMt> = murmurhash3::hash("IsVisitLocation.PoponMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::PostTownRuin> = murmurhash3::hash("IsVisitLocation.PostTownRuin");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::PowerFountain> = murmurhash3::hash("IsVisitLocation.PowerFountain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::PstaLake> = murmurhash3::hash("IsVisitLocation.PstaLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::PukiroroMt> = murmurhash3::hash("IsVisitLocation.PukiroroMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::PukuntoMt> = murmurhash3::hash("IsVisitLocation.PukuntoMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::PupukoreFalls> = murmurhash3::hash("IsVisitLocation.PupukoreFalls");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RaberaWet> = murmurhash3::hash("IsVisitLocation.RaberaWet");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RapikuruPlateau> = murmurhash3::hash("IsVisitLocation.RapikuruPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RapinyaPlateau> = murmurhash3::hash("IsVisitLocation.RapinyaPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RaruLake> = murmurhash3::hash("IsVisitLocation.RaruLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RashamaPlain> = murmurhash3::hash("IsVisitLocation.RashamaPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RazezePlateau> = murmurhash3::hash("IsVisitLocation.RazezePlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RentalZarashiShop_Gerudo> = murmurhash3::hash("IsVisitLocation.RentalZarashiShop_Gerudo");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RentalZarashiShop_GerudoDesert> = murmurhash3::hash("IsVisitLocation.RentalZarashiShop_GerudoDesert");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RiaroTrees> = murmurhash3::hash("IsVisitLocation.RiaroTrees");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RiberaForest> = murmurhash3::hash("IsVisitLocation.RiberaForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RibuchaPlateau> = murmurhash3::hash("IsVisitLocation.RibuchaPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Rikona_Peninshra> = murmurhash3::hash("IsVisitLocation.Rikona_Peninshra");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RingLegacy> = murmurhash3::hash("IsVisitLocation.RingLegacy");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RinosPass> = murmurhash3::hash("IsVisitLocation.RinosPass");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RirikendoBridge> = murmurhash3::hash("IsVisitLocation.RirikendoBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RirimukuHighlands> = murmurhash3::hash("IsVisitLocation.RirimukuHighlands");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RirimukuMt> = murmurhash3::hash("IsVisitLocation.RirimukuMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RiritotoLake> = murmurhash3::hash("IsVisitLocation.RiritotoLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RishakutoPlateau> = murmurhash3::hash("IsVisitLocation.RishakutoPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Rito> = murmurhash3::hash("IsVisitLocation.Rito");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Rito_SkyHighIsland> = murmurhash3::hash("IsVisitLocation.Rito_SkyHighIsland");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RitoHatago> = murmurhash3::hash("IsVisitLocation.RitoHatago");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RiverSideHatago> = murmurhash3::hash("IsVisitLocation.RiverSideHatago");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RodaiLake> = murmurhash3::hash("IsVisitLocation.RodaiLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RogyLake> = murmurhash3::hash("IsVisitLocation.RogyLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RokomakuMt> = murmurhash3::hash("IsVisitLocation.RokomakuMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RonronCity> = murmurhash3::hash("IsVisitLocation.RonronCity");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RonronFarm> = murmurhash3::hash("IsVisitLocation.RonronFarm");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RonronRiver> = murmurhash3::hash("IsVisitLocation.RonronRiver");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RoshiganLake> = murmurhash3::hash("IsVisitLocation.RoshiganLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RosomaLake> = murmurhash3::hash("IsVisitLocation.RosomaLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RuberaHill> = murmurhash3::hash("IsVisitLocation.RuberaHill");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RutesLake> = murmurhash3::hash("IsVisitLocation.RutesLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RutimaHill> = murmurhash3::hash("IsVisitLocation.RutimaHill");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::RutsuPlain> = murmurhash3::hash("IsVisitLocation.RutsuPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SaihokuCastle> = murmurhash3::hash("IsVisitLocation.SaihokuCastle");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SaiMt> = murmurhash3::hash("IsVisitLocation.SaiMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SanaePlateau> = murmurhash3::hash("IsVisitLocation.SanaePlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SanrosaLake> = murmurhash3::hash("IsVisitLocation.SanrosaLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SaohPoint> = murmurhash3::hash("IsVisitLocation.SaohPoint");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SaphiasPlateau> = murmurhash3::hash("IsVisitLocation.SaphiasPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SarjonBridge> = murmurhash3::hash("IsVisitLocation.SarjonBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SarjonForest> = murmurhash3::hash("IsVisitLocation.SarjonForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SasamuroBeach> = murmurhash3::hash("IsVisitLocation.SasamuroBeach");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ScrapShop> = murmurhash3::hash("IsVisitLocation.ScrapShop");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShariverMt> = murmurhash3::hash("IsVisitLocation.ShariverMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShichijoBridge> = murmurhash3::hash("IsVisitLocation.ShichijoBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShieldSurfing_BeginnerGoal> = murmurhash3::hash("IsVisitLocation.ShieldSurfing_BeginnerGoal");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShieldSurfing_SeniorGoal> = murmurhash3::hash("IsVisitLocation.ShieldSurfing_SeniorGoal");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShigonDam> = murmurhash3::hash("IsVisitLocation.ShigonDam");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShijoBridge> = murmurhash3::hash("IsVisitLocation.ShijoBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShikuriIslands> = murmurhash3::hash("IsVisitLocation.ShikuriIslands");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShimukaPlateau> = murmurhash3::hash("IsVisitLocation.ShimukaPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShinikkyoForest> = murmurhash3::hash("IsVisitLocation.ShinikkyoForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShinyarkiPlateau> = murmurhash3::hash("IsVisitLocation.ShinyarkiPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShinyarkiVillage> = murmurhash3::hash("IsVisitLocation.ShinyarkiVillage");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShitanoPond> = murmurhash3::hash("IsVisitLocation.ShitanoPond");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopArmor_BaseCamp> = murmurhash3::hash("IsVisitLocation.ShopArmor_BaseCamp");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopArmor_Gerudo> = murmurhash3::hash("IsVisitLocation.ShopArmor_Gerudo");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopArmor_Goron> = murmurhash3::hash("IsVisitLocation.ShopArmor_Goron");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopArmor_Hateno> = murmurhash3::hash("IsVisitLocation.ShopArmor_Hateno");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopArmor_Kakariko> = murmurhash3::hash("IsVisitLocation.ShopArmor_Kakariko");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopArmor_Rito> = murmurhash3::hash("IsVisitLocation.ShopArmor_Rito");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopDye_Hateno> = murmurhash3::hash("IsVisitLocation.ShopDye_Hateno");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopGeneral_BaseCamp> = murmurhash3::hash("IsVisitLocation.ShopGeneral_BaseCamp");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopGeneral_Gerudo> = murmurhash3::hash("IsVisitLocation.ShopGeneral_Gerudo");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopGeneral_Goron> = murmurhash3::hash("IsVisitLocation.ShopGeneral_Goron");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopGeneral_Hateno> = murmurhash3::hash("IsVisitLocation.ShopGeneral_Hateno");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopGeneral_Kakariko> = murmurhash3::hash("IsVisitLocation.ShopGeneral_Kakariko");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopGeneral_Korok> = murmurhash3::hash("IsVisitLocation.ShopGeneral_Korok");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopGeneral_Oasis> = murmurhash3::hash("IsVisitLocation.ShopGeneral_Oasis");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopGeneral_Rito> = murmurhash3::hash("IsVisitLocation.ShopGeneral_Rito");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopGeneral_UMiiVillage> = murmurhash3::hash("IsVisitLocation.ShopGeneral_UMiiVillage");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopGeneral_Uotori> = murmurhash3::hash("IsVisitLocation.ShopGeneral_Uotori");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopGeneral_Zora> = murmurhash3::hash("IsVisitLocation.ShopGeneral_Zora");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopInn_Gerudo> = murmurhash3::hash("IsVisitLocation.ShopInn_Gerudo");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopInn_Goron> = murmurhash3::hash("IsVisitLocation.ShopInn_Goron");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopInn_Hateno> = murmurhash3::hash("IsVisitLocation.ShopInn_Hateno");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopInn_Kakariko> = murmurhash3::hash("IsVisitLocation.ShopInn_Kakariko");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopInn_Korok> = murmurhash3::hash("IsVisitLocation.ShopInn_Korok");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopInn_Oasis> = murmurhash3::hash("IsVisitLocation.ShopInn_Oasis");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopInn_Rito> = murmurhash3::hash("IsVisitLocation.ShopInn_Rito");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopInn_UMiiVillage> = murmurhash3::hash("IsVisitLocation.ShopInn_UMiiVillage");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopInn_Uotori> = murmurhash3::hash("IsVisitLocation.ShopInn_Uotori");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopInn_Zora> = murmurhash3::hash("IsVisitLocation.ShopInn_Zora");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ShopJewelry_Gerudo> = murmurhash3::hash("IsVisitLocation.ShopJewelry_Gerudo");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIsland0001> = murmurhash3::hash("IsVisitLocation.SkyIsland0001");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIsland0002> = murmurhash3::hash("IsVisitLocation.SkyIsland0002");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIsland0003> = murmurhash3::hash("IsVisitLocation.SkyIsland0003");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIsland0004> = murmurhash3::hash("IsVisitLocation.SkyIsland0004");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIsland0009> = murmurhash3::hash("IsVisitLocation.SkyIsland0009");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIsland0010> = murmurhash3::hash("IsVisitLocation.SkyIsland0010");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIsland0011> = murmurhash3::hash("IsVisitLocation.SkyIsland0011");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIsland0012> = murmurhash3::hash("IsVisitLocation.SkyIsland0012");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIsland0013> = murmurhash3::hash("IsVisitLocation.SkyIsland0013");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIsland0014> = murmurhash3::hash("IsVisitLocation.SkyIsland0014");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Eldin01> = murmurhash3::hash("IsVisitLocation.SkyIslands_Eldin01");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Eldin02> = murmurhash3::hash("IsVisitLocation.SkyIslands_Eldin02");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Firone01> = murmurhash3::hash("IsVisitLocation.SkyIslands_Firone01");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Firone02> = murmurhash3::hash("IsVisitLocation.SkyIslands_Firone02");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Gerudo01> = murmurhash3::hash("IsVisitLocation.SkyIslands_Gerudo01");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Gerudo02> = murmurhash3::hash("IsVisitLocation.SkyIslands_Gerudo02");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Hateru01> = murmurhash3::hash("IsVisitLocation.SkyIslands_Hateru01");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Hateru02> = murmurhash3::hash("IsVisitLocation.SkyIslands_Hateru02");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Hebra02> = murmurhash3::hash("IsVisitLocation.SkyIslands_Hebra02");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Hebra03> = murmurhash3::hash("IsVisitLocation.SkyIslands_Hebra03");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Hebra04> = murmurhash3::hash("IsVisitLocation.SkyIslands_Hebra04");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Hyrule01> = murmurhash3::hash("IsVisitLocation.SkyIslands_Hyrule01");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Hyrule02> = murmurhash3::hash("IsVisitLocation.SkyIslands_Hyrule02");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Hyrule03> = murmurhash3::hash("IsVisitLocation.SkyIslands_Hyrule03");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Hyrule04> = murmurhash3::hash("IsVisitLocation.SkyIslands_Hyrule04");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Hyrule05> = murmurhash3::hash("IsVisitLocation.SkyIslands_Hyrule05");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Lanayru02> = murmurhash3::hash("IsVisitLocation.SkyIslands_Lanayru02");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Lanayru03> = murmurhash3::hash("IsVisitLocation.SkyIslands_Lanayru03");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Tabanta01> = murmurhash3::hash("IsVisitLocation.SkyIslands_Tabanta01");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Tabanta02> = murmurhash3::hash("IsVisitLocation.SkyIslands_Tabanta02");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Tamul01> = murmurhash3::hash("IsVisitLocation.SkyIslands_Tamul01");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SkyIslands_Tamul02> = murmurhash3::hash("IsVisitLocation.SkyIslands_Tamul02");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SmallDemonStatue> = murmurhash3::hash("IsVisitLocation.SmallDemonStatue");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SmeltShopGolem_00> = murmurhash3::hash("IsVisitLocation.SmeltShopGolem_00");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SmeltShopGolem_01> = murmurhash3::hash("IsVisitLocation.SmeltShopGolem_01");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SmeltShopGolem_02> = murmurhash3::hash("IsVisitLocation.SmeltShopGolem_02");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SmeltShopGolem_03> = murmurhash3::hash("IsVisitLocation.SmeltShopGolem_03");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SmeltShopGolem_04> = murmurhash3::hash("IsVisitLocation.SmeltShopGolem_04");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SmeltShopGolem_05> = murmurhash3::hash("IsVisitLocation.SmeltShopGolem_05");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SmeltShopGolem_06> = murmurhash3::hash("IsVisitLocation.SmeltShopGolem_06");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SmeltShopGolem_07> = murmurhash3::hash("IsVisitLocation.SmeltShopGolem_07");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SmeltShopGolem_08> = murmurhash3::hash("IsVisitLocation.SmeltShopGolem_08");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SmeltShopGolem_09> = murmurhash3::hash("IsVisitLocation.SmeltShopGolem_09");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SmeltShopGolem_10> = murmurhash3::hash("IsVisitLocation.SmeltShopGolem_10");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SnowStatue> = murmurhash3::hash("IsVisitLocation.SnowStatue");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SojijiHill> = murmurhash3::hash("IsVisitLocation.SojijiHill");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SojijiPark> = murmurhash3::hash("IsVisitLocation.SojijiPark");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SonoPrairie> = murmurhash3::hash("IsVisitLocation.SonoPrairie");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SoridaPeninsula> = murmurhash3::hash("IsVisitLocation.SoridaPeninsula");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SotonkaBridge> = murmurhash3::hash("IsVisitLocation.SotonkaBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SouthGerudoLegacy> = murmurhash3::hash("IsVisitLocation.SouthGerudoLegacy");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SouthGerudoRuins> = murmurhash3::hash("IsVisitLocation.SouthGerudoRuins");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SouthGerudoRuinsCamp> = murmurhash3::hash("IsVisitLocation.SouthGerudoRuinsCamp");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SouthMine> = murmurhash3::hash("IsVisitLocation.SouthMine");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::StartPoint_WakeupAltar> = murmurhash3::hash("IsVisitLocation.StartPoint_WakeupAltar");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::StonePillers> = murmurhash3::hash("IsVisitLocation.StonePillers");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SugrantForest> = murmurhash3::hash("IsVisitLocation.SugrantForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SusonoLake> = murmurhash3::hash("IsVisitLocation.SusonoLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SusonoPlain> = murmurhash3::hash("IsVisitLocation.SusonoPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SusonoPond> = murmurhash3::hash("IsVisitLocation.SusonoPond");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SusonoRiver> = murmurhash3::hash("IsVisitLocation.SusonoRiver");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SusukadiBridge> = murmurhash3::hash("IsVisitLocation.SusukadiBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::SwanLake> = murmurhash3::hash("IsVisitLocation.SwanLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TabantaBridge> = murmurhash3::hash("IsVisitLocation.TabantaBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TabantaBridgeHatago> = murmurhash3::hash("IsVisitLocation.TabantaBridgeHatago");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TabantaCrater> = murmurhash3::hash("IsVisitLocation.TabantaCrater");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TabantaHatago> = murmurhash3::hash("IsVisitLocation.TabantaHatago");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TabantaHill> = murmurhash3::hash("IsVisitLocation.TabantaHill");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TabantaSnow> = murmurhash3::hash("IsVisitLocation.TabantaSnow");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TabantaSnow_North> = murmurhash3::hash("IsVisitLocation.TabantaSnow_North");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TabantaSnow_South> = murmurhash3::hash("IsVisitLocation.TabantaSnow_South");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TabantaVillage> = murmurhash3::hash("IsVisitLocation.TabantaVillage");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TafeaHill> = murmurhash3::hash("IsVisitLocation.TafeaHill");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TagonaTrees> = murmurhash3::hash("IsVisitLocation.TagonaTrees");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TakkikaPlain> = murmurhash3::hash("IsVisitLocation.TakkikaPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TamaLake> = murmurhash3::hash("IsVisitLocation.TamaLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TamourHatago> = murmurhash3::hash("IsVisitLocation.TamourHatago");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TamulPlain> = murmurhash3::hash("IsVisitLocation.TamulPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TamurulHatago_02> = murmurhash3::hash("IsVisitLocation.TamurulHatago_02");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TargarPlain> = murmurhash3::hash("IsVisitLocation.TargarPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TaruhoPlateau> = murmurhash3::hash("IsVisitLocation.TaruhoPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TaserakaBridge> = murmurhash3::hash("IsVisitLocation.TaserakaBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TatsubaLake> = murmurhash3::hash("IsVisitLocation.TatsubaLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Taura> = murmurhash3::hash("IsVisitLocation.Taura");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TeguriPlain> = murmurhash3::hash("IsVisitLocation.TeguriPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TehotaWet> = murmurhash3::hash("IsVisitLocation.TehotaWet");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TennoMt> = murmurhash3::hash("IsVisitLocation.TennoMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TeraPlain> = murmurhash3::hash("IsVisitLocation.TeraPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TerumeMt> = murmurhash3::hash("IsVisitLocation.TerumeMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TerumePass> = murmurhash3::hash("IsVisitLocation.TerumePass");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TimesShrine> = murmurhash3::hash("IsVisitLocation.TimesShrine");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TohikiLake> = murmurhash3::hash("IsVisitLocation.TohikiLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TomiyoPlateau> = murmurhash3::hash("IsVisitLocation.TomiyoPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TompoPlain> = murmurhash3::hash("IsVisitLocation.TompoPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ToriaBridge> = murmurhash3::hash("IsVisitLocation.ToriaBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TorumaDesert> = murmurhash3::hash("IsVisitLocation.TorumaDesert");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TotenLake> = murmurhash3::hash("IsVisitLocation.TotenLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TotsugeBridge> = murmurhash3::hash("IsVisitLocation.TotsugeBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Tower01> = murmurhash3::hash("IsVisitLocation.Tower01");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Tower02> = murmurhash3::hash("IsVisitLocation.Tower02");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Tower03> = murmurhash3::hash("IsVisitLocation.Tower03");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Tower04> = murmurhash3::hash("IsVisitLocation.Tower04");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Tower05> = murmurhash3::hash("IsVisitLocation.Tower05");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Tower06> = murmurhash3::hash("IsVisitLocation.Tower06");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Tower07> = murmurhash3::hash("IsVisitLocation.Tower07");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Tower08> = murmurhash3::hash("IsVisitLocation.Tower08");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Tower09> = murmurhash3::hash("IsVisitLocation.Tower09");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Tower10> = murmurhash3::hash("IsVisitLocation.Tower10");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Tower11> = murmurhash3::hash("IsVisitLocation.Tower11");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Tower12> = murmurhash3::hash("IsVisitLocation.Tower12");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Tower13> = murmurhash3::hash("IsVisitLocation.Tower13");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Tower14> = murmurhash3::hash("IsVisitLocation.Tower14");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Tower15> = murmurhash3::hash("IsVisitLocation.Tower15");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TrakaIsland> = murmurhash3::hash("IsVisitLocation.TrakaIsland");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TrakaIsland_Big> = murmurhash3::hash("IsVisitLocation.TrakaIsland_Big");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TrakaIsland_Center> = murmurhash3::hash("IsVisitLocation.TrakaIsland_Center");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TrakaIsland_East> = murmurhash3::hash("IsVisitLocation.TrakaIsland_East");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TrakaIsland_New> = murmurhash3::hash("IsVisitLocation.TrakaIsland_New");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TrakaIsland_North> = murmurhash3::hash("IsVisitLocation.TrakaIsland_North");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TrakaIsland_Small> = murmurhash3::hash("IsVisitLocation.TrakaIsland_Small");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TrakaIsland_South> = murmurhash3::hash("IsVisitLocation.TrakaIsland_South");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TrakaIsland_West> = murmurhash3::hash("IsVisitLocation.TrakaIsland_West");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TreasureBoxShop> = murmurhash3::hash("IsVisitLocation.TreasureBoxShop");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TryCape> = murmurhash3::hash("IsVisitLocation.TryCape");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TsukaiePlateau> = murmurhash3::hash("IsVisitLocation.TsukaiePlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TuaboSnow> = murmurhash3::hash("IsVisitLocation.TuaboSnow");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TunbriPlain> = murmurhash3::hash("IsVisitLocation.TunbriPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TurasuBridge> = murmurhash3::hash("IsVisitLocation.TurasuBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TurasuLake> = murmurhash3::hash("IsVisitLocation.TurasuLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TutukikiSnow> = murmurhash3::hash("IsVisitLocation.TutukikiSnow");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::TwinsMountain> = murmurhash3::hash("IsVisitLocation.TwinsMountain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::UbotsuPlateau> = murmurhash3::hash("IsVisitLocation.UbotsuPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::UchoPlateau> = murmurhash3::hash("IsVisitLocation.UchoPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::UkkoPond> = murmurhash3::hash("IsVisitLocation.UkkoPond");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::UMiiVillage> = murmurhash3::hash("IsVisitLocation.UMiiVillage");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::UMiiVillage_JobField> = murmurhash3::hash("IsVisitLocation.UMiiVillage_JobField");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Unknown> = murmurhash3::hash("IsVisitLocation.Unknown");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::UraitoLake> = murmurhash3::hash("IsVisitLocation.UraitoLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::UrokoCape> = murmurhash3::hash("IsVisitLocation.UrokoCape");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ValleyVillage> = murmurhash3::hash("IsVisitLocation.ValleyVillage");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::VPlateau> = murmurhash3::hash("IsVisitLocation.VPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::WabiLake> = murmurhash3::hash("IsVisitLocation.WabiLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::WatakaPlateau> = murmurhash3::hash("IsVisitLocation.WatakaPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::WeaponCureSpring> = murmurhash3::hash("IsVisitLocation.WeaponCureSpring");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::WeaponCureSpring_DressFairy_00> = murmurhash3::hash("IsVisitLocation.WeaponCureSpring_DressFairy_00");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::WeaponCureSpring_DressFairy_01> = murmurhash3::hash("IsVisitLocation.WeaponCureSpring_DressFairy_01");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::WeaponCureSpring_DressFairy_02> = murmurhash3::hash("IsVisitLocation.WeaponCureSpring_DressFairy_02");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0001> = murmurhash3::hash("IsVisitLocation.Well_0001");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0002> = murmurhash3::hash("IsVisitLocation.Well_0002");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0003> = murmurhash3::hash("IsVisitLocation.Well_0003");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0004> = murmurhash3::hash("IsVisitLocation.Well_0004");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0005> = murmurhash3::hash("IsVisitLocation.Well_0005");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0006> = murmurhash3::hash("IsVisitLocation.Well_0006");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0007> = murmurhash3::hash("IsVisitLocation.Well_0007");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0008> = murmurhash3::hash("IsVisitLocation.Well_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0009> = murmurhash3::hash("IsVisitLocation.Well_0009");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0010> = murmurhash3::hash("IsVisitLocation.Well_0010");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0011> = murmurhash3::hash("IsVisitLocation.Well_0011");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0012> = murmurhash3::hash("IsVisitLocation.Well_0012");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0013> = murmurhash3::hash("IsVisitLocation.Well_0013");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0014> = murmurhash3::hash("IsVisitLocation.Well_0014");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0015> = murmurhash3::hash("IsVisitLocation.Well_0015");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0016> = murmurhash3::hash("IsVisitLocation.Well_0016");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0017> = murmurhash3::hash("IsVisitLocation.Well_0017");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0018> = murmurhash3::hash("IsVisitLocation.Well_0018");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0019> = murmurhash3::hash("IsVisitLocation.Well_0019");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0020> = murmurhash3::hash("IsVisitLocation.Well_0020");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0021> = murmurhash3::hash("IsVisitLocation.Well_0021");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0022> = murmurhash3::hash("IsVisitLocation.Well_0022");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0023> = murmurhash3::hash("IsVisitLocation.Well_0023");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0024> = murmurhash3::hash("IsVisitLocation.Well_0024");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0025> = murmurhash3::hash("IsVisitLocation.Well_0025");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0026> = murmurhash3::hash("IsVisitLocation.Well_0026");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0027> = murmurhash3::hash("IsVisitLocation.Well_0027");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0028> = murmurhash3::hash("IsVisitLocation.Well_0028");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0029> = murmurhash3::hash("IsVisitLocation.Well_0029");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0030> = murmurhash3::hash("IsVisitLocation.Well_0030");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0031> = murmurhash3::hash("IsVisitLocation.Well_0031");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0032> = murmurhash3::hash("IsVisitLocation.Well_0032");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0033> = murmurhash3::hash("IsVisitLocation.Well_0033");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0034> = murmurhash3::hash("IsVisitLocation.Well_0034");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0041> = murmurhash3::hash("IsVisitLocation.Well_0041");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0042> = murmurhash3::hash("IsVisitLocation.Well_0042");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0043> = murmurhash3::hash("IsVisitLocation.Well_0043");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0043B> = murmurhash3::hash("IsVisitLocation.Well_0043B");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0044> = murmurhash3::hash("IsVisitLocation.Well_0044");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0045> = murmurhash3::hash("IsVisitLocation.Well_0045");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0046> = murmurhash3::hash("IsVisitLocation.Well_0046");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0047> = murmurhash3::hash("IsVisitLocation.Well_0047");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0047B> = murmurhash3::hash("IsVisitLocation.Well_0047B");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0048> = murmurhash3::hash("IsVisitLocation.Well_0048");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0049> = murmurhash3::hash("IsVisitLocation.Well_0049");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0049B> = murmurhash3::hash("IsVisitLocation.Well_0049B");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0049C> = murmurhash3::hash("IsVisitLocation.Well_0049C");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0049D> = murmurhash3::hash("IsVisitLocation.Well_0049D");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0049E> = murmurhash3::hash("IsVisitLocation.Well_0049E");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0050> = murmurhash3::hash("IsVisitLocation.Well_0050");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0051> = murmurhash3::hash("IsVisitLocation.Well_0051");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0052> = murmurhash3::hash("IsVisitLocation.Well_0052");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0053> = murmurhash3::hash("IsVisitLocation.Well_0053");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0054> = murmurhash3::hash("IsVisitLocation.Well_0054");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0055> = murmurhash3::hash("IsVisitLocation.Well_0055");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0056> = murmurhash3::hash("IsVisitLocation.Well_0056");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0057> = murmurhash3::hash("IsVisitLocation.Well_0057");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0058> = murmurhash3::hash("IsVisitLocation.Well_0058");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Well_0059> = murmurhash3::hash("IsVisitLocation.Well_0059");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::WestEunpoHighlands> = murmurhash3::hash("IsVisitLocation.WestEunpoHighlands");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::WestGerudo> = murmurhash3::hash("IsVisitLocation.WestGerudo");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::WestGerudoRuins> = murmurhash3::hash("IsVisitLocation.WestGerudoRuins");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::WetGarrison> = murmurhash3::hash("IsVisitLocation.WetGarrison");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::WhiteZora> = murmurhash3::hash("IsVisitLocation.WhiteZora");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::WholeOfHyrule> = murmurhash3::hash("IsVisitLocation.WholeOfHyrule");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::WiseFountain> = murmurhash3::hash("IsVisitLocation.WiseFountain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::XehaPlateau> = murmurhash3::hash("IsVisitLocation.XehaPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::XekuBridge> = murmurhash3::hash("IsVisitLocation.XekuBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::YamabiLake> = murmurhash3::hash("IsVisitLocation.YamabiLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::YamariRiver> = murmurhash3::hash("IsVisitLocation.YamariRiver");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::YarimoRiver> = murmurhash3::hash("IsVisitLocation.YarimoRiver");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::YashinoBeach> = murmurhash3::hash("IsVisitLocation.YashinoBeach");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::YashinoLegacy> = murmurhash3::hash("IsVisitLocation.YashinoLegacy");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::YuaSnow> = murmurhash3::hash("IsVisitLocation.YuaSnow");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZamaPlain> = murmurhash3::hash("IsVisitLocation.ZamaPlain");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZaridoLake> = murmurhash3::hash("IsVisitLocation.ZaridoLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZaridoPlateau> = murmurhash3::hash("IsVisitLocation.ZaridoPlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZifForest> = murmurhash3::hash("IsVisitLocation.ZifForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZitoGreens> = murmurhash3::hash("IsVisitLocation.ZitoGreens");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZonauCentralShrine> = murmurhash3::hash("IsVisitLocation.ZonauCentralShrine");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZonauLegacy> = murmurhash3::hash("IsVisitLocation.ZonauLegacy");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZonauRelief_03> = murmurhash3::hash("IsVisitLocation.ZonauRelief_03");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZonauRelief_04> = murmurhash3::hash("IsVisitLocation.ZonauRelief_04");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZonauRelief_05> = murmurhash3::hash("IsVisitLocation.ZonauRelief_05");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZonauRelief_06> = murmurhash3::hash("IsVisitLocation.ZonauRelief_06");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZonauRelief_07> = murmurhash3::hash("IsVisitLocation.ZonauRelief_07");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZonauRelief_08> = murmurhash3::hash("IsVisitLocation.ZonauRelief_08");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZonauRelief_09> = murmurhash3::hash("IsVisitLocation.ZonauRelief_09");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZonauRelief_10> = murmurhash3::hash("IsVisitLocation.ZonauRelief_10");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZonauRelief_11> = murmurhash3::hash("IsVisitLocation.ZonauRelief_11");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZonauRelief_12> = murmurhash3::hash("IsVisitLocation.ZonauRelief_12");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZonauRelief_13> = murmurhash3::hash("IsVisitLocation.ZonauRelief_13");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZonauRelief_14> = murmurhash3::hash("IsVisitLocation.ZonauRelief_14");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZonauSatelliteShrine_LeftArm> = murmurhash3::hash("IsVisitLocation.ZonauSatelliteShrine_LeftArm");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZonauSatelliteShrine_LeftLeg> = murmurhash3::hash("IsVisitLocation.ZonauSatelliteShrine_LeftLeg");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZonauSatelliteShrine_RightArm> = murmurhash3::hash("IsVisitLocation.ZonauSatelliteShrine_RightArm");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZonauSatelliteShrine_RightLeg> = murmurhash3::hash("IsVisitLocation.ZonauSatelliteShrine_RightLeg");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZonauThunderSkyIsland> = murmurhash3::hash("IsVisitLocation.ZonauThunderSkyIsland");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZonauTriedForceSkyIsland> = murmurhash3::hash("IsVisitLocation.ZonauTriedForceSkyIsland");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Zora_Belvedere> = murmurhash3::hash("IsVisitLocation.Zora_Belvedere");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Zora_FishIsland> = murmurhash3::hash("IsVisitLocation.Zora_FishIsland");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::Zora_Imperial_Palace> = murmurhash3::hash("IsVisitLocation.Zora_Imperial_Palace");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZoraBridge> = murmurhash3::hash("IsVisitLocation.ZoraBridge");
template <> hash_t constexpr Data::Hashtable<GameData::IsVisitLocation::ZoraZonauTerminal> = murmurhash3::hash("IsVisitLocation.ZoraZonauTerminal");