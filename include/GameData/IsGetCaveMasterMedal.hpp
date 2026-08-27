#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::IsGetCaveMasterMedal : Tag::Structure {
	struct Cave_Akkala_0000 : Tag::Member { using type = bool&; };
	struct Cave_Akkala_0003 : Tag::Member { using type = bool&; };
	struct Cave_Akkala_0005 : Tag::Member { using type = bool&; };
	struct Cave_Akkala_0007 : Tag::Member { using type = bool&; };
	struct Cave_Akkala_0010 : Tag::Member { using type = bool&; };
	struct Cave_Akkala_0011 : Tag::Member { using type = bool&; };
	struct Cave_Akkala_0014 : Tag::Member { using type = bool&; };
	struct Cave_Akkala_0017 : Tag::Member { using type = bool&; };
	struct Cave_CentralHyrule_0008 : Tag::Member { using type = bool&; };
	struct Cave_CentralHyrule_0009 : Tag::Member { using type = bool&; };
	struct Cave_CentralHyrule_0011 : Tag::Member { using type = bool&; };
	struct Cave_CentralHyrule_0013 : Tag::Member { using type = bool&; };
	struct Cave_CentralHyrule_0017 : Tag::Member { using type = bool&; };
	struct Cave_CentralHyrule_0018 : Tag::Member { using type = bool&; };
	struct Cave_CentralHyrule_0019 : Tag::Member { using type = bool&; };
	struct Cave_CentralHyrule_0020 : Tag::Member { using type = bool&; };
	struct Cave_CentralHyrule_0021 : Tag::Member { using type = bool&; };
	struct Cave_CentralHyrule_0022 : Tag::Member { using type = bool&; };
	struct Cave_CentralHyrule_0023 : Tag::Member { using type = bool&; };
	struct Cave_CentralHyrule_0030 : Tag::Member { using type = bool&; };
	struct Cave_Eldin_0020 : Tag::Member { using type = bool&; };
	struct Cave_Eldin_0021 : Tag::Member { using type = bool&; };
	struct Cave_Eldin_0022 : Tag::Member { using type = bool&; };
	struct Cave_Eldin_0023 : Tag::Member { using type = bool&; };
	struct Cave_Eldin_0025 : Tag::Member { using type = bool&; };
	struct Cave_Eldin_0026 : Tag::Member { using type = bool&; };
	struct Cave_Eldin_0027 : Tag::Member { using type = bool&; };
	struct Cave_Eldin_0028 : Tag::Member { using type = bool&; };
	struct Cave_Eldin_0029 : Tag::Member { using type = bool&; };
	struct Cave_Eldin_0030 : Tag::Member { using type = bool&; };
	struct Cave_Eldin_0031 : Tag::Member { using type = bool&; };
	struct Cave_Eldin_0033 : Tag::Member { using type = bool&; };
	struct Cave_Eldin_0034 : Tag::Member { using type = bool&; };
	struct Cave_Eldin_0035 : Tag::Member { using type = bool&; };
	struct Cave_Eldin_0037 : Tag::Member { using type = bool&; };
	struct Cave_Eldin_0038 : Tag::Member { using type = bool&; };
	struct Cave_Eldin_0039 : Tag::Member { using type = bool&; };
	struct Cave_Firone_0002 : Tag::Member { using type = bool&; };
	struct Cave_Firone_0008 : Tag::Member { using type = bool&; };
	struct Cave_Firone_0009 : Tag::Member { using type = bool&; };
	struct Cave_Firone_0016 : Tag::Member { using type = bool&; };
	struct Cave_Firone_0020 : Tag::Member { using type = bool&; };
	struct Cave_Firone_0022 : Tag::Member { using type = bool&; };
	struct Cave_Firone_0023 : Tag::Member { using type = bool&; };
	struct Cave_Firone_0024 : Tag::Member { using type = bool&; };
	struct Cave_Firone_0029 : Tag::Member { using type = bool&; };
	struct Cave_FirstPlateau_0001 : Tag::Member { using type = bool&; };
	struct Cave_FirstPlateau_0002 : Tag::Member { using type = bool&; };
	struct Cave_GerudoDesert_0007 : Tag::Member { using type = bool&; };
	struct Cave_GerudoDesert_0008 : Tag::Member { using type = bool&; };
	struct Cave_GerudoDesert_0015 : Tag::Member { using type = bool&; };
	struct Cave_GerudoDesert_0022 : Tag::Member { using type = bool&; };
	struct Cave_GerudoDesert_0030 : Tag::Member { using type = bool&; };
	struct Cave_GerudoDesert_0031 : Tag::Member { using type = bool&; };
	struct Cave_GerudoDesert_0032 : Tag::Member { using type = bool&; };
	struct Cave_GerudoDesert_0035 : Tag::Member { using type = bool&; };
	struct Cave_GerudoDesert_0036 : Tag::Member { using type = bool&; };
	struct Cave_GerudoDesert_0037 : Tag::Member { using type = bool&; };
	struct Cave_GerudoDesert_0039 : Tag::Member { using type = bool&; };
	struct Cave_GerudoDesert_0040 : Tag::Member { using type = bool&; };
	struct Cave_GerudoDesert_0041 : Tag::Member { using type = bool&; };
	struct Cave_GerudoDesert_0043 : Tag::Member { using type = bool&; };
	struct Cave_GerudoDesert_0044 : Tag::Member { using type = bool&; };
	struct Cave_GerudoDesert_0045 : Tag::Member { using type = bool&; };
	struct Cave_GerudoDesert_0046 : Tag::Member { using type = bool&; };
	struct Cave_GerudoDesert_0049 : Tag::Member { using type = bool&; };
	struct Cave_GerudoDesert_0050 : Tag::Member { using type = bool&; };
	struct Cave_GerudoDesert_0051 : Tag::Member { using type = bool&; };
	struct Cave_GerudoHighlands_0002 : Tag::Member { using type = bool&; };
	struct Cave_GerudoHighlands_0008 : Tag::Member { using type = bool&; };
	struct Cave_GerudoHighlands_0014 : Tag::Member { using type = bool&; };
	struct Cave_GerudoHighlands_0017 : Tag::Member { using type = bool&; };
	struct Cave_HateruEast_0000 : Tag::Member { using type = bool&; };
	struct Cave_HateruEast_0002 : Tag::Member { using type = bool&; };
	struct Cave_HateruEast_0006 : Tag::Member { using type = bool&; };
	struct Cave_HateruEast_0007 : Tag::Member { using type = bool&; };
	struct Cave_HateruEast_0008 : Tag::Member { using type = bool&; };
	struct Cave_HateruEast_0009 : Tag::Member { using type = bool&; };
	struct Cave_HateruEast_0013 : Tag::Member { using type = bool&; };
	struct Cave_HateruEast_0014 : Tag::Member { using type = bool&; };
	struct Cave_HateruEast_0016 : Tag::Member { using type = bool&; };
	struct Cave_HateruWest_0002 : Tag::Member { using type = bool&; };
	struct Cave_HateruWest_0005 : Tag::Member { using type = bool&; };
	struct Cave_HateruWest_0006 : Tag::Member { using type = bool&; };
	struct Cave_HateruWest_0008 : Tag::Member { using type = bool&; };
	struct Cave_HateruWest_0011 : Tag::Member { using type = bool&; };
	struct Cave_HateruWest_0012 : Tag::Member { using type = bool&; };
	struct Cave_Hebra_0000 : Tag::Member { using type = bool&; };
	struct Cave_Hebra_0013 : Tag::Member { using type = bool&; };
	struct Cave_Hebra_0015 : Tag::Member { using type = bool&; };
	struct Cave_Hebra_0016 : Tag::Member { using type = bool&; };
	struct Cave_Hebra_0019 : Tag::Member { using type = bool&; };
	struct Cave_Hebra_0021 : Tag::Member { using type = bool&; };
	struct Cave_Hebra_0022 : Tag::Member { using type = bool&; };
	struct Cave_Hebra_0023 : Tag::Member { using type = bool&; };
	struct Cave_Hebra_0025 : Tag::Member { using type = bool&; };
	struct Cave_Hebra_0026 : Tag::Member { using type = bool&; };
	struct Cave_Hebra_0030 : Tag::Member { using type = bool&; };
	struct Cave_Hebra_0035 : Tag::Member { using type = bool&; };
	struct Cave_Hebra_0036 : Tag::Member { using type = bool&; };
	struct Cave_Hebra_0037 : Tag::Member { using type = bool&; };
	struct Cave_Hebra_0039 : Tag::Member { using type = bool&; };
	struct Cave_Hebra_0040 : Tag::Member { using type = bool&; };
	struct Cave_Hebra_0041 : Tag::Member { using type = bool&; };
	struct Cave_HyruleForest_0001 : Tag::Member { using type = bool&; };
	struct Cave_HyruleForest_0006 : Tag::Member { using type = bool&; };
	struct Cave_HyruleForest_0007 : Tag::Member { using type = bool&; };
	struct Cave_HyruleForest_0008 : Tag::Member { using type = bool&; };
	struct Cave_HyruleRidge_0000 : Tag::Member { using type = bool&; };
	struct Cave_HyruleRidge_0002 : Tag::Member { using type = bool&; };
	struct Cave_HyruleRidge_0003 : Tag::Member { using type = bool&; };
	struct Cave_HyruleRidge_0004 : Tag::Member { using type = bool&; };
	struct Cave_HyruleRidge_0005 : Tag::Member { using type = bool&; };
	struct Cave_HyruleRidge_0006 : Tag::Member { using type = bool&; };
	struct Cave_HyruleRidge_0007 : Tag::Member { using type = bool&; };
	struct Cave_HyruleRidge_0008 : Tag::Member { using type = bool&; };
	struct Cave_Lanayru_0006 : Tag::Member { using type = bool&; };
	struct Cave_Lanayru_0008 : Tag::Member { using type = bool&; };
	struct Cave_Lanayru_0014 : Tag::Member { using type = bool&; };
	struct Cave_Lanayru_0019 : Tag::Member { using type = bool&; };
	struct Cave_Lanayru_0024 : Tag::Member { using type = bool&; };
	struct Cave_Lanayru_0032 : Tag::Member { using type = bool&; };
	struct Cave_Lanayru_0033 : Tag::Member { using type = bool&; };
	struct Cave_Lanayru_0035 : Tag::Member { using type = bool&; };
	struct Cave_Lanayru_0036 : Tag::Member { using type = bool&; };
	struct Cave_Lanayru_0048 : Tag::Member { using type = bool&; };
	struct Cave_Lanayru_0049 : Tag::Member { using type = bool&; };
	struct Cave_Lanayru_0050 : Tag::Member { using type = bool&; };
	struct Cave_Lanayru_0052 : Tag::Member { using type = bool&; };
	struct Cave_Lanayru_0053 : Tag::Member { using type = bool&; };
	struct Cave_Lanayru_0055 : Tag::Member { using type = bool&; };
	struct Cave_Lanayru_0057 : Tag::Member { using type = bool&; };
	struct Cave_Lanayru_0060 : Tag::Member { using type = bool&; };
	struct Cave_Lanayru_0061 : Tag::Member { using type = bool&; };
	struct Cave_Lanayru_0063 : Tag::Member { using type = bool&; };
	struct Cave_LanayruMountain_0002 : Tag::Member { using type = bool&; };
	struct Cave_LanayruMountain_0006 : Tag::Member { using type = bool&; };
	struct Cave_LanayruMountain_0008 : Tag::Member { using type = bool&; };
	struct Cave_LanayruMountain_0010 : Tag::Member { using type = bool&; };
	struct Cave_LanayruMountain_0014 : Tag::Member { using type = bool&; };
	struct Cave_LanayruMountain_0016 : Tag::Member { using type = bool&; };
	struct Cave_LanayruMountain_0022 : Tag::Member { using type = bool&; };
	struct Cave_LanayruMountain_0024 : Tag::Member { using type = bool&; };
	struct Cave_LanayruMountain_0025 : Tag::Member { using type = bool&; };
	struct Cave_LanayruMountain_0026 : Tag::Member { using type = bool&; };
	struct Cave_Tabantha_0001 : Tag::Member { using type = bool&; };
	struct Cave_Tabantha_0002 : Tag::Member { using type = bool&; };
	struct Cave_Tabantha_0003 : Tag::Member { using type = bool&; };
	struct DeepHole_AkkareSkull : Tag::Member { using type = bool&; };
	struct DeepHole_B_6_AssasisnBoss : Tag::Member { using type = bool&; };
	struct DeepHole_B_6_Tower : Tag::Member { using type = bool&; };
	struct DeepHole_Chikurun : Tag::Member { using type = bool&; };
	struct DeepHole_Cokiri : Tag::Member { using type = bool&; };
	struct DeepHole_DeathMountain : Tag::Member { using type = bool&; };
	struct DeepHole_Firone : Tag::Member { using type = bool&; };
	struct DeepHole_FirstLandEast : Tag::Member { using type = bool&; };
	struct DeepHole_FirstLandNorth : Tag::Member { using type = bool&; };
	struct DeepHole_FirstLandSouth : Tag::Member { using type = bool&; };
	struct DeepHole_FirstLandWest : Tag::Member { using type = bool&; };
	struct DeepHole_GerudoMaze : Tag::Member { using type = bool&; };
	struct DeepHole_GerudoSummit : Tag::Member { using type = bool&; };
	struct DeepHole_Higakkare : Tag::Member { using type = bool&; };
	struct DeepHole_HimeidaMt : Tag::Member { using type = bool&; };
	struct DeepHole_HyruleCastle : Tag::Member { using type = bool&; };
	struct DeepHole_HyruleCastleEast : Tag::Member { using type = bool&; };
	struct DeepHole_HyruleCastleWest : Tag::Member { using type = bool&; };
	struct DeepHole_HyruleLake : Tag::Member { using type = bool&; };
	struct DeepHole_HyrulePlains : Tag::Member { using type = bool&; };
	struct DeepHole_ImeruMt : Tag::Member { using type = bool&; };
	struct DeepHole_Kakariko_EastHill : Tag::Member { using type = bool&; };
	struct DeepHole_KiyanbaTrees : Tag::Member { using type = bool&; };
	struct DeepHole_LomeiIsland : Tag::Member { using type = bool&; };
	struct DeepHole_Minakkare : Tag::Member { using type = bool&; };
	struct DeepHole_RirimukuMt : Tag::Member { using type = bool&; };
	struct DeepHole_Rito : Tag::Member { using type = bool&; };
	struct DeepHole_Saihateno : Tag::Member { using type = bool&; };
	struct DeepHole_SanaePlateau : Tag::Member { using type = bool&; };
	struct DeepHole_TabantaMaze : Tag::Member { using type = bool&; };
	struct DeepHole_YuaSnow : Tag::Member { using type = bool&; };
	struct DeepHole_ZifForest : Tag::Member { using type = bool&; };
	struct Well_0001 : Tag::Member { using type = bool&; };
	struct Well_0002 : Tag::Member { using type = bool&; };
	struct Well_0003 : Tag::Member { using type = bool&; };
	struct Well_0004 : Tag::Member { using type = bool&; };
	struct Well_0005 : Tag::Member { using type = bool&; };
	struct Well_0006 : Tag::Member { using type = bool&; };
	struct Well_0007 : Tag::Member { using type = bool&; };
	struct Well_0008 : Tag::Member { using type = bool&; };
	struct Well_0009 : Tag::Member { using type = bool&; };
	struct Well_0010 : Tag::Member { using type = bool&; };
	struct Well_0011 : Tag::Member { using type = bool&; };
	struct Well_0012 : Tag::Member { using type = bool&; };
	struct Well_0013 : Tag::Member { using type = bool&; };
	struct Well_0014 : Tag::Member { using type = bool&; };
	struct Well_0015 : Tag::Member { using type = bool&; };
	struct Well_0016 : Tag::Member { using type = bool&; };
	struct Well_0017 : Tag::Member { using type = bool&; };
	struct Well_0018 : Tag::Member { using type = bool&; };
	struct Well_0019 : Tag::Member { using type = bool&; };
	struct Well_0020 : Tag::Member { using type = bool&; };
	struct Well_0021 : Tag::Member { using type = bool&; };
	struct Well_0022 : Tag::Member { using type = bool&; };
	struct Well_0023 : Tag::Member { using type = bool&; };
	struct Well_0024 : Tag::Member { using type = bool&; };
	struct Well_0025 : Tag::Member { using type = bool&; };
	struct Well_0026 : Tag::Member { using type = bool&; };
	struct Well_0027 : Tag::Member { using type = bool&; };
	struct Well_0028 : Tag::Member { using type = bool&; };
	struct Well_0029 : Tag::Member { using type = bool&; };
	struct Well_0030 : Tag::Member { using type = bool&; };
	struct Well_0031 : Tag::Member { using type = bool&; };
	struct Well_0032 : Tag::Member { using type = bool&; };
	struct Well_0033 : Tag::Member { using type = bool&; };
	struct Well_0034 : Tag::Member { using type = bool&; };
	struct Well_0041 : Tag::Member { using type = bool&; };
	struct Well_0042 : Tag::Member { using type = bool&; };
	struct Well_0043 : Tag::Member { using type = bool&; };
	struct Well_0043B : Tag::Member { using type = bool&; };
	struct Well_0044 : Tag::Member { using type = bool&; };
	struct Well_0045 : Tag::Member { using type = bool&; };
	struct Well_0046 : Tag::Member { using type = bool&; };
	struct Well_0047 : Tag::Member { using type = bool&; };
	struct Well_0047B : Tag::Member { using type = bool&; };
	struct Well_0048 : Tag::Member { using type = bool&; };
	struct Well_0049 : Tag::Member { using type = bool&; };
	struct Well_0049B : Tag::Member { using type = bool&; };
	struct Well_0049C : Tag::Member { using type = bool&; };
	struct Well_0049D : Tag::Member { using type = bool&; };
	struct Well_0049E : Tag::Member { using type = bool&; };
	struct Well_0050 : Tag::Member { using type = bool&; };
	struct Well_0051 : Tag::Member { using type = bool&; };
	struct Well_0052 : Tag::Member { using type = bool&; };
	struct Well_0053 : Tag::Member { using type = bool&; };
	struct Well_0054 : Tag::Member { using type = bool&; };
	struct Well_0055 : Tag::Member { using type = bool&; };
	struct Well_0056 : Tag::Member { using type = bool&; };
	struct Well_0057 : Tag::Member { using type = bool&; };
	struct Well_0058 : Tag::Member { using type = bool&; };
	struct Well_0059 : Tag::Member { using type = bool&; };
	struct Zora_Imperial_Palace : Tag::Member { using type = bool&; };
	struct ZoraZonauTerminal : Tag::Member { using type = bool&; };
};/* Tag::Structure GameData::IsGetCaveMasterMedal close */

template <> struct Data::Structure<GameData::IsGetCaveMasterMedal> : GameData::IsGetCaveMasterMedal {
	Data::Member<Cave_Akkala_0000> Cave_Akkala_0000;
	Data::Member<Cave_Akkala_0003> Cave_Akkala_0003;
	Data::Member<Cave_Akkala_0005> Cave_Akkala_0005;
	Data::Member<Cave_Akkala_0007> Cave_Akkala_0007;
	Data::Member<Cave_Akkala_0010> Cave_Akkala_0010;
	Data::Member<Cave_Akkala_0011> Cave_Akkala_0011;
	Data::Member<Cave_Akkala_0014> Cave_Akkala_0014;
	Data::Member<Cave_Akkala_0017> Cave_Akkala_0017;
	Data::Member<Cave_CentralHyrule_0008> Cave_CentralHyrule_0008;
	Data::Member<Cave_CentralHyrule_0009> Cave_CentralHyrule_0009;
	Data::Member<Cave_CentralHyrule_0011> Cave_CentralHyrule_0011;
	Data::Member<Cave_CentralHyrule_0013> Cave_CentralHyrule_0013;
	Data::Member<Cave_CentralHyrule_0017> Cave_CentralHyrule_0017;
	Data::Member<Cave_CentralHyrule_0018> Cave_CentralHyrule_0018;
	Data::Member<Cave_CentralHyrule_0019> Cave_CentralHyrule_0019;
	Data::Member<Cave_CentralHyrule_0020> Cave_CentralHyrule_0020;
	Data::Member<Cave_CentralHyrule_0021> Cave_CentralHyrule_0021;
	Data::Member<Cave_CentralHyrule_0022> Cave_CentralHyrule_0022;
	Data::Member<Cave_CentralHyrule_0023> Cave_CentralHyrule_0023;
	Data::Member<Cave_CentralHyrule_0030> Cave_CentralHyrule_0030;
	Data::Member<Cave_Eldin_0020> Cave_Eldin_0020;
	Data::Member<Cave_Eldin_0021> Cave_Eldin_0021;
	Data::Member<Cave_Eldin_0022> Cave_Eldin_0022;
	Data::Member<Cave_Eldin_0023> Cave_Eldin_0023;
	Data::Member<Cave_Eldin_0025> Cave_Eldin_0025;
	Data::Member<Cave_Eldin_0026> Cave_Eldin_0026;
	Data::Member<Cave_Eldin_0027> Cave_Eldin_0027;
	Data::Member<Cave_Eldin_0028> Cave_Eldin_0028;
	Data::Member<Cave_Eldin_0029> Cave_Eldin_0029;
	Data::Member<Cave_Eldin_0030> Cave_Eldin_0030;
	Data::Member<Cave_Eldin_0031> Cave_Eldin_0031;
	Data::Member<Cave_Eldin_0033> Cave_Eldin_0033;
	Data::Member<Cave_Eldin_0034> Cave_Eldin_0034;
	Data::Member<Cave_Eldin_0035> Cave_Eldin_0035;
	Data::Member<Cave_Eldin_0037> Cave_Eldin_0037;
	Data::Member<Cave_Eldin_0038> Cave_Eldin_0038;
	Data::Member<Cave_Eldin_0039> Cave_Eldin_0039;
	Data::Member<Cave_Firone_0002> Cave_Firone_0002;
	Data::Member<Cave_Firone_0008> Cave_Firone_0008;
	Data::Member<Cave_Firone_0009> Cave_Firone_0009;
	Data::Member<Cave_Firone_0016> Cave_Firone_0016;
	Data::Member<Cave_Firone_0020> Cave_Firone_0020;
	Data::Member<Cave_Firone_0022> Cave_Firone_0022;
	Data::Member<Cave_Firone_0023> Cave_Firone_0023;
	Data::Member<Cave_Firone_0024> Cave_Firone_0024;
	Data::Member<Cave_Firone_0029> Cave_Firone_0029;
	Data::Member<Cave_FirstPlateau_0001> Cave_FirstPlateau_0001;
	Data::Member<Cave_FirstPlateau_0002> Cave_FirstPlateau_0002;
	Data::Member<Cave_GerudoDesert_0007> Cave_GerudoDesert_0007;
	Data::Member<Cave_GerudoDesert_0008> Cave_GerudoDesert_0008;
	Data::Member<Cave_GerudoDesert_0015> Cave_GerudoDesert_0015;
	Data::Member<Cave_GerudoDesert_0022> Cave_GerudoDesert_0022;
	Data::Member<Cave_GerudoDesert_0030> Cave_GerudoDesert_0030;
	Data::Member<Cave_GerudoDesert_0031> Cave_GerudoDesert_0031;
	Data::Member<Cave_GerudoDesert_0032> Cave_GerudoDesert_0032;
	Data::Member<Cave_GerudoDesert_0035> Cave_GerudoDesert_0035;
	Data::Member<Cave_GerudoDesert_0036> Cave_GerudoDesert_0036;
	Data::Member<Cave_GerudoDesert_0037> Cave_GerudoDesert_0037;
	Data::Member<Cave_GerudoDesert_0039> Cave_GerudoDesert_0039;
	Data::Member<Cave_GerudoDesert_0040> Cave_GerudoDesert_0040;
	Data::Member<Cave_GerudoDesert_0041> Cave_GerudoDesert_0041;
	Data::Member<Cave_GerudoDesert_0043> Cave_GerudoDesert_0043;
	Data::Member<Cave_GerudoDesert_0044> Cave_GerudoDesert_0044;
	Data::Member<Cave_GerudoDesert_0045> Cave_GerudoDesert_0045;
	Data::Member<Cave_GerudoDesert_0046> Cave_GerudoDesert_0046;
	Data::Member<Cave_GerudoDesert_0049> Cave_GerudoDesert_0049;
	Data::Member<Cave_GerudoDesert_0050> Cave_GerudoDesert_0050;
	Data::Member<Cave_GerudoDesert_0051> Cave_GerudoDesert_0051;
	Data::Member<Cave_GerudoHighlands_0002> Cave_GerudoHighlands_0002;
	Data::Member<Cave_GerudoHighlands_0008> Cave_GerudoHighlands_0008;
	Data::Member<Cave_GerudoHighlands_0014> Cave_GerudoHighlands_0014;
	Data::Member<Cave_GerudoHighlands_0017> Cave_GerudoHighlands_0017;
	Data::Member<Cave_HateruEast_0000> Cave_HateruEast_0000;
	Data::Member<Cave_HateruEast_0002> Cave_HateruEast_0002;
	Data::Member<Cave_HateruEast_0006> Cave_HateruEast_0006;
	Data::Member<Cave_HateruEast_0007> Cave_HateruEast_0007;
	Data::Member<Cave_HateruEast_0008> Cave_HateruEast_0008;
	Data::Member<Cave_HateruEast_0009> Cave_HateruEast_0009;
	Data::Member<Cave_HateruEast_0013> Cave_HateruEast_0013;
	Data::Member<Cave_HateruEast_0014> Cave_HateruEast_0014;
	Data::Member<Cave_HateruEast_0016> Cave_HateruEast_0016;
	Data::Member<Cave_HateruWest_0002> Cave_HateruWest_0002;
	Data::Member<Cave_HateruWest_0005> Cave_HateruWest_0005;
	Data::Member<Cave_HateruWest_0006> Cave_HateruWest_0006;
	Data::Member<Cave_HateruWest_0008> Cave_HateruWest_0008;
	Data::Member<Cave_HateruWest_0011> Cave_HateruWest_0011;
	Data::Member<Cave_HateruWest_0012> Cave_HateruWest_0012;
	Data::Member<Cave_Hebra_0000> Cave_Hebra_0000;
	Data::Member<Cave_Hebra_0013> Cave_Hebra_0013;
	Data::Member<Cave_Hebra_0015> Cave_Hebra_0015;
	Data::Member<Cave_Hebra_0016> Cave_Hebra_0016;
	Data::Member<Cave_Hebra_0019> Cave_Hebra_0019;
	Data::Member<Cave_Hebra_0021> Cave_Hebra_0021;
	Data::Member<Cave_Hebra_0022> Cave_Hebra_0022;
	Data::Member<Cave_Hebra_0023> Cave_Hebra_0023;
	Data::Member<Cave_Hebra_0025> Cave_Hebra_0025;
	Data::Member<Cave_Hebra_0026> Cave_Hebra_0026;
	Data::Member<Cave_Hebra_0030> Cave_Hebra_0030;
	Data::Member<Cave_Hebra_0035> Cave_Hebra_0035;
	Data::Member<Cave_Hebra_0036> Cave_Hebra_0036;
	Data::Member<Cave_Hebra_0037> Cave_Hebra_0037;
	Data::Member<Cave_Hebra_0039> Cave_Hebra_0039;
	Data::Member<Cave_Hebra_0040> Cave_Hebra_0040;
	Data::Member<Cave_Hebra_0041> Cave_Hebra_0041;
	Data::Member<Cave_HyruleForest_0001> Cave_HyruleForest_0001;
	Data::Member<Cave_HyruleForest_0006> Cave_HyruleForest_0006;
	Data::Member<Cave_HyruleForest_0007> Cave_HyruleForest_0007;
	Data::Member<Cave_HyruleForest_0008> Cave_HyruleForest_0008;
	Data::Member<Cave_HyruleRidge_0000> Cave_HyruleRidge_0000;
	Data::Member<Cave_HyruleRidge_0002> Cave_HyruleRidge_0002;
	Data::Member<Cave_HyruleRidge_0003> Cave_HyruleRidge_0003;
	Data::Member<Cave_HyruleRidge_0004> Cave_HyruleRidge_0004;
	Data::Member<Cave_HyruleRidge_0005> Cave_HyruleRidge_0005;
	Data::Member<Cave_HyruleRidge_0006> Cave_HyruleRidge_0006;
	Data::Member<Cave_HyruleRidge_0007> Cave_HyruleRidge_0007;
	Data::Member<Cave_HyruleRidge_0008> Cave_HyruleRidge_0008;
	Data::Member<Cave_Lanayru_0006> Cave_Lanayru_0006;
	Data::Member<Cave_Lanayru_0008> Cave_Lanayru_0008;
	Data::Member<Cave_Lanayru_0014> Cave_Lanayru_0014;
	Data::Member<Cave_Lanayru_0019> Cave_Lanayru_0019;
	Data::Member<Cave_Lanayru_0024> Cave_Lanayru_0024;
	Data::Member<Cave_Lanayru_0032> Cave_Lanayru_0032;
	Data::Member<Cave_Lanayru_0033> Cave_Lanayru_0033;
	Data::Member<Cave_Lanayru_0035> Cave_Lanayru_0035;
	Data::Member<Cave_Lanayru_0036> Cave_Lanayru_0036;
	Data::Member<Cave_Lanayru_0048> Cave_Lanayru_0048;
	Data::Member<Cave_Lanayru_0049> Cave_Lanayru_0049;
	Data::Member<Cave_Lanayru_0050> Cave_Lanayru_0050;
	Data::Member<Cave_Lanayru_0052> Cave_Lanayru_0052;
	Data::Member<Cave_Lanayru_0053> Cave_Lanayru_0053;
	Data::Member<Cave_Lanayru_0055> Cave_Lanayru_0055;
	Data::Member<Cave_Lanayru_0057> Cave_Lanayru_0057;
	Data::Member<Cave_Lanayru_0060> Cave_Lanayru_0060;
	Data::Member<Cave_Lanayru_0061> Cave_Lanayru_0061;
	Data::Member<Cave_Lanayru_0063> Cave_Lanayru_0063;
	Data::Member<Cave_LanayruMountain_0002> Cave_LanayruMountain_0002;
	Data::Member<Cave_LanayruMountain_0006> Cave_LanayruMountain_0006;
	Data::Member<Cave_LanayruMountain_0008> Cave_LanayruMountain_0008;
	Data::Member<Cave_LanayruMountain_0010> Cave_LanayruMountain_0010;
	Data::Member<Cave_LanayruMountain_0014> Cave_LanayruMountain_0014;
	Data::Member<Cave_LanayruMountain_0016> Cave_LanayruMountain_0016;
	Data::Member<Cave_LanayruMountain_0022> Cave_LanayruMountain_0022;
	Data::Member<Cave_LanayruMountain_0024> Cave_LanayruMountain_0024;
	Data::Member<Cave_LanayruMountain_0025> Cave_LanayruMountain_0025;
	Data::Member<Cave_LanayruMountain_0026> Cave_LanayruMountain_0026;
	Data::Member<Cave_Tabantha_0001> Cave_Tabantha_0001;
	Data::Member<Cave_Tabantha_0002> Cave_Tabantha_0002;
	Data::Member<Cave_Tabantha_0003> Cave_Tabantha_0003;
	Data::Member<DeepHole_AkkareSkull> DeepHole_AkkareSkull;
	Data::Member<DeepHole_B_6_AssasisnBoss> DeepHole_B_6_AssasisnBoss;
	Data::Member<DeepHole_B_6_Tower> DeepHole_B_6_Tower;
	Data::Member<DeepHole_Chikurun> DeepHole_Chikurun;
	Data::Member<DeepHole_Cokiri> DeepHole_Cokiri;
	Data::Member<DeepHole_DeathMountain> DeepHole_DeathMountain;
	Data::Member<DeepHole_Firone> DeepHole_Firone;
	Data::Member<DeepHole_FirstLandEast> DeepHole_FirstLandEast;
	Data::Member<DeepHole_FirstLandNorth> DeepHole_FirstLandNorth;
	Data::Member<DeepHole_FirstLandSouth> DeepHole_FirstLandSouth;
	Data::Member<DeepHole_FirstLandWest> DeepHole_FirstLandWest;
	Data::Member<DeepHole_GerudoMaze> DeepHole_GerudoMaze;
	Data::Member<DeepHole_GerudoSummit> DeepHole_GerudoSummit;
	Data::Member<DeepHole_Higakkare> DeepHole_Higakkare;
	Data::Member<DeepHole_HimeidaMt> DeepHole_HimeidaMt;
	Data::Member<DeepHole_HyruleCastle> DeepHole_HyruleCastle;
	Data::Member<DeepHole_HyruleCastleEast> DeepHole_HyruleCastleEast;
	Data::Member<DeepHole_HyruleCastleWest> DeepHole_HyruleCastleWest;
	Data::Member<DeepHole_HyruleLake> DeepHole_HyruleLake;
	Data::Member<DeepHole_HyrulePlains> DeepHole_HyrulePlains;
	Data::Member<DeepHole_ImeruMt> DeepHole_ImeruMt;
	Data::Member<DeepHole_Kakariko_EastHill> DeepHole_Kakariko_EastHill;
	Data::Member<DeepHole_KiyanbaTrees> DeepHole_KiyanbaTrees;
	Data::Member<DeepHole_LomeiIsland> DeepHole_LomeiIsland;
	Data::Member<DeepHole_Minakkare> DeepHole_Minakkare;
	Data::Member<DeepHole_RirimukuMt> DeepHole_RirimukuMt;
	Data::Member<DeepHole_Rito> DeepHole_Rito;
	Data::Member<DeepHole_Saihateno> DeepHole_Saihateno;
	Data::Member<DeepHole_SanaePlateau> DeepHole_SanaePlateau;
	Data::Member<DeepHole_TabantaMaze> DeepHole_TabantaMaze;
	Data::Member<DeepHole_YuaSnow> DeepHole_YuaSnow;
	Data::Member<DeepHole_ZifForest> DeepHole_ZifForest;
	Data::Member<Well_0001> Well_0001;
	Data::Member<Well_0002> Well_0002;
	Data::Member<Well_0003> Well_0003;
	Data::Member<Well_0004> Well_0004;
	Data::Member<Well_0005> Well_0005;
	Data::Member<Well_0006> Well_0006;
	Data::Member<Well_0007> Well_0007;
	Data::Member<Well_0008> Well_0008;
	Data::Member<Well_0009> Well_0009;
	Data::Member<Well_0010> Well_0010;
	Data::Member<Well_0011> Well_0011;
	Data::Member<Well_0012> Well_0012;
	Data::Member<Well_0013> Well_0013;
	Data::Member<Well_0014> Well_0014;
	Data::Member<Well_0015> Well_0015;
	Data::Member<Well_0016> Well_0016;
	Data::Member<Well_0017> Well_0017;
	Data::Member<Well_0018> Well_0018;
	Data::Member<Well_0019> Well_0019;
	Data::Member<Well_0020> Well_0020;
	Data::Member<Well_0021> Well_0021;
	Data::Member<Well_0022> Well_0022;
	Data::Member<Well_0023> Well_0023;
	Data::Member<Well_0024> Well_0024;
	Data::Member<Well_0025> Well_0025;
	Data::Member<Well_0026> Well_0026;
	Data::Member<Well_0027> Well_0027;
	Data::Member<Well_0028> Well_0028;
	Data::Member<Well_0029> Well_0029;
	Data::Member<Well_0030> Well_0030;
	Data::Member<Well_0031> Well_0031;
	Data::Member<Well_0032> Well_0032;
	Data::Member<Well_0033> Well_0033;
	Data::Member<Well_0034> Well_0034;
	Data::Member<Well_0041> Well_0041;
	Data::Member<Well_0042> Well_0042;
	Data::Member<Well_0043> Well_0043;
	Data::Member<Well_0043B> Well_0043B;
	Data::Member<Well_0044> Well_0044;
	Data::Member<Well_0045> Well_0045;
	Data::Member<Well_0046> Well_0046;
	Data::Member<Well_0047> Well_0047;
	Data::Member<Well_0047B> Well_0047B;
	Data::Member<Well_0048> Well_0048;
	Data::Member<Well_0049> Well_0049;
	Data::Member<Well_0049B> Well_0049B;
	Data::Member<Well_0049C> Well_0049C;
	Data::Member<Well_0049D> Well_0049D;
	Data::Member<Well_0049E> Well_0049E;
	Data::Member<Well_0050> Well_0050;
	Data::Member<Well_0051> Well_0051;
	Data::Member<Well_0052> Well_0052;
	Data::Member<Well_0053> Well_0053;
	Data::Member<Well_0054> Well_0054;
	Data::Member<Well_0055> Well_0055;
	Data::Member<Well_0056> Well_0056;
	Data::Member<Well_0057> Well_0057;
	Data::Member<Well_0058> Well_0058;
	Data::Member<Well_0059> Well_0059;
	Data::Member<Zora_Imperial_Palace> Zora_Imperial_Palace;
	Data::Member<ZoraZonauTerminal> ZoraZonauTerminal;
	
	explicit Structure(Sav& s) : 
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
		Zora_Imperial_Palace { s.get<struct Zora_Imperial_Palace>() },
		ZoraZonauTerminal { s.get<struct ZoraZonauTerminal>() }
	{ }
};/* Data::Structure GameData::IsGetCaveMasterMedal close */

template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Akkala_0000> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Akkala_0000");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Akkala_0003> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Akkala_0003");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Akkala_0005> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Akkala_0005");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Akkala_0007> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Akkala_0007");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Akkala_0010> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Akkala_0010");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Akkala_0011> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Akkala_0011");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Akkala_0014> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Akkala_0014");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Akkala_0017> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Akkala_0017");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_CentralHyrule_0008> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_CentralHyrule_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_CentralHyrule_0009> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_CentralHyrule_0009");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_CentralHyrule_0011> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_CentralHyrule_0011");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_CentralHyrule_0013> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_CentralHyrule_0013");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_CentralHyrule_0017> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_CentralHyrule_0017");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_CentralHyrule_0018> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_CentralHyrule_0018");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_CentralHyrule_0019> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_CentralHyrule_0019");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_CentralHyrule_0020> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_CentralHyrule_0020");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_CentralHyrule_0021> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_CentralHyrule_0021");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_CentralHyrule_0022> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_CentralHyrule_0022");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_CentralHyrule_0023> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_CentralHyrule_0023");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_CentralHyrule_0030> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_CentralHyrule_0030");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Eldin_0020> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Eldin_0020");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Eldin_0021> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Eldin_0021");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Eldin_0022> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Eldin_0022");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Eldin_0023> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Eldin_0023");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Eldin_0025> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Eldin_0025");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Eldin_0026> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Eldin_0026");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Eldin_0027> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Eldin_0027");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Eldin_0028> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Eldin_0028");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Eldin_0029> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Eldin_0029");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Eldin_0030> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Eldin_0030");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Eldin_0031> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Eldin_0031");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Eldin_0033> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Eldin_0033");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Eldin_0034> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Eldin_0034");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Eldin_0035> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Eldin_0035");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Eldin_0037> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Eldin_0037");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Eldin_0038> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Eldin_0038");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Eldin_0039> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Eldin_0039");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Firone_0002> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Firone_0002");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Firone_0008> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Firone_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Firone_0009> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Firone_0009");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Firone_0016> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Firone_0016");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Firone_0020> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Firone_0020");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Firone_0022> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Firone_0022");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Firone_0023> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Firone_0023");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Firone_0024> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Firone_0024");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Firone_0029> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Firone_0029");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_FirstPlateau_0001> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_FirstPlateau_0001");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_FirstPlateau_0002> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_FirstPlateau_0002");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoDesert_0007> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoDesert_0007");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoDesert_0008> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoDesert_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoDesert_0015> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoDesert_0015");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoDesert_0022> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoDesert_0022");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoDesert_0030> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoDesert_0030");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoDesert_0031> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoDesert_0031");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoDesert_0032> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoDesert_0032");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoDesert_0035> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoDesert_0035");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoDesert_0036> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoDesert_0036");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoDesert_0037> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoDesert_0037");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoDesert_0039> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoDesert_0039");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoDesert_0040> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoDesert_0040");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoDesert_0041> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoDesert_0041");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoDesert_0043> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoDesert_0043");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoDesert_0044> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoDesert_0044");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoDesert_0045> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoDesert_0045");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoDesert_0046> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoDesert_0046");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoDesert_0049> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoDesert_0049");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoDesert_0050> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoDesert_0050");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoDesert_0051> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoDesert_0051");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoHighlands_0002> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoHighlands_0002");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoHighlands_0008> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoHighlands_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoHighlands_0014> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoHighlands_0014");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_GerudoHighlands_0017> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_GerudoHighlands_0017");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HateruEast_0000> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HateruEast_0000");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HateruEast_0002> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HateruEast_0002");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HateruEast_0006> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HateruEast_0006");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HateruEast_0007> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HateruEast_0007");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HateruEast_0008> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HateruEast_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HateruEast_0009> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HateruEast_0009");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HateruEast_0013> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HateruEast_0013");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HateruEast_0014> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HateruEast_0014");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HateruEast_0016> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HateruEast_0016");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HateruWest_0002> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HateruWest_0002");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HateruWest_0005> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HateruWest_0005");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HateruWest_0006> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HateruWest_0006");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HateruWest_0008> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HateruWest_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HateruWest_0011> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HateruWest_0011");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HateruWest_0012> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HateruWest_0012");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Hebra_0000> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Hebra_0000");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Hebra_0013> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Hebra_0013");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Hebra_0015> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Hebra_0015");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Hebra_0016> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Hebra_0016");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Hebra_0019> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Hebra_0019");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Hebra_0021> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Hebra_0021");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Hebra_0022> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Hebra_0022");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Hebra_0023> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Hebra_0023");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Hebra_0025> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Hebra_0025");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Hebra_0026> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Hebra_0026");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Hebra_0030> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Hebra_0030");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Hebra_0035> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Hebra_0035");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Hebra_0036> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Hebra_0036");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Hebra_0037> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Hebra_0037");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Hebra_0039> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Hebra_0039");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Hebra_0040> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Hebra_0040");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Hebra_0041> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Hebra_0041");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HyruleForest_0001> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HyruleForest_0001");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HyruleForest_0006> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HyruleForest_0006");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HyruleForest_0007> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HyruleForest_0007");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HyruleForest_0008> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HyruleForest_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HyruleRidge_0000> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HyruleRidge_0000");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HyruleRidge_0002> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HyruleRidge_0002");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HyruleRidge_0003> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HyruleRidge_0003");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HyruleRidge_0004> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HyruleRidge_0004");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HyruleRidge_0005> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HyruleRidge_0005");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HyruleRidge_0006> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HyruleRidge_0006");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HyruleRidge_0007> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HyruleRidge_0007");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_HyruleRidge_0008> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_HyruleRidge_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Lanayru_0006> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Lanayru_0006");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Lanayru_0008> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Lanayru_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Lanayru_0014> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Lanayru_0014");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Lanayru_0019> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Lanayru_0019");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Lanayru_0024> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Lanayru_0024");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Lanayru_0032> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Lanayru_0032");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Lanayru_0033> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Lanayru_0033");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Lanayru_0035> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Lanayru_0035");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Lanayru_0036> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Lanayru_0036");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Lanayru_0048> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Lanayru_0048");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Lanayru_0049> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Lanayru_0049");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Lanayru_0050> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Lanayru_0050");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Lanayru_0052> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Lanayru_0052");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Lanayru_0053> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Lanayru_0053");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Lanayru_0055> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Lanayru_0055");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Lanayru_0057> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Lanayru_0057");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Lanayru_0060> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Lanayru_0060");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Lanayru_0061> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Lanayru_0061");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Lanayru_0063> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Lanayru_0063");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_LanayruMountain_0002> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_LanayruMountain_0002");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_LanayruMountain_0006> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_LanayruMountain_0006");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_LanayruMountain_0008> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_LanayruMountain_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_LanayruMountain_0010> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_LanayruMountain_0010");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_LanayruMountain_0014> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_LanayruMountain_0014");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_LanayruMountain_0016> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_LanayruMountain_0016");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_LanayruMountain_0022> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_LanayruMountain_0022");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_LanayruMountain_0024> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_LanayruMountain_0024");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_LanayruMountain_0025> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_LanayruMountain_0025");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_LanayruMountain_0026> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_LanayruMountain_0026");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Tabantha_0001> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Tabantha_0001");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Tabantha_0002> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Tabantha_0002");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Cave_Tabantha_0003> = murmurhash3::hash("IsGetCaveMasterMedal.Cave_Tabantha_0003");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_AkkareSkull> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_AkkareSkull");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_B_6_AssasisnBoss> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_B-6_AssasisnBoss");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_B_6_Tower> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_B-6_Tower");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_Chikurun> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_Chikurun");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_Cokiri> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_Cokiri");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_DeathMountain> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_DeathMountain");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_Firone> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_Firone");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_FirstLandEast> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_FirstLandEast");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_FirstLandNorth> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_FirstLandNorth");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_FirstLandSouth> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_FirstLandSouth");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_FirstLandWest> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_FirstLandWest");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_GerudoMaze> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_GerudoMaze");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_GerudoSummit> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_GerudoSummit");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_Higakkare> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_Higakkare");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_HimeidaMt> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_HimeidaMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_HyruleCastle> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_HyruleCastle");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_HyruleCastleEast> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_HyruleCastleEast");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_HyruleCastleWest> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_HyruleCastleWest");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_HyruleLake> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_HyruleLake");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_HyrulePlains> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_HyrulePlains");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_ImeruMt> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_ImeruMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_Kakariko_EastHill> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_Kakariko_EastHill");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_KiyanbaTrees> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_KiyanbaTrees");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_LomeiIsland> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_LomeiIsland");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_Minakkare> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_Minakkare");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_RirimukuMt> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_RirimukuMt");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_Rito> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_Rito");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_Saihateno> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_Saihateno");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_SanaePlateau> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_SanaePlateau");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_TabantaMaze> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_TabantaMaze");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_YuaSnow> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_YuaSnow");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::DeepHole_ZifForest> = murmurhash3::hash("IsGetCaveMasterMedal.DeepHole_ZifForest");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0001> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0001");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0002> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0002");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0003> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0003");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0004> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0004");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0005> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0005");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0006> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0006");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0007> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0007");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0008> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0008");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0009> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0009");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0010> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0010");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0011> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0011");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0012> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0012");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0013> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0013");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0014> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0014");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0015> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0015");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0016> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0016");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0017> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0017");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0018> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0018");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0019> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0019");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0020> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0020");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0021> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0021");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0022> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0022");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0023> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0023");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0024> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0024");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0025> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0025");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0026> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0026");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0027> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0027");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0028> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0028");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0029> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0029");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0030> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0030");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0031> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0031");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0032> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0032");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0033> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0033");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0034> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0034");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0041> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0041");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0042> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0042");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0043> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0043");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0043B> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0043B");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0044> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0044");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0045> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0045");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0046> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0046");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0047> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0047");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0047B> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0047B");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0048> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0048");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0049> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0049");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0049B> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0049B");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0049C> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0049C");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0049D> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0049D");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0049E> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0049E");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0050> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0050");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0051> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0051");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0052> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0052");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0053> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0053");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0054> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0054");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0055> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0055");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0056> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0056");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0057> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0057");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0058> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0058");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Well_0059> = murmurhash3::hash("IsGetCaveMasterMedal.Well_0059");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::Zora_Imperial_Palace> = murmurhash3::hash("IsGetCaveMasterMedal.Zora_Imperial_Palace");
template <> hash_t constexpr Data::Hashtable<GameData::IsGetCaveMasterMedal::ZoraZonauTerminal> = murmurhash3::hash("IsGetCaveMasterMedal.ZoraZonauTerminal");