#pragma once
#include <sage>

struct GameData : Tag::Structure {
	struct OwnedHorseList;
	struct DeadHorseList;
	struct AutoBuilder;
	struct FigureInfo;
	struct ActionGuide_IsNew;
	struct CheckPoint_IsDisplayFoliage;
	struct CustomHouse;
	struct DragonMemoryDataForUI;
	struct IsActivateCannon;
	struct IsAppearKorok;
	struct IsDefeatBossEnemy;
	struct IsFindTreasureMap;
	struct IsGetAdventureMemory;
	struct IsGetCaveMasterMedal;
	struct IsOpenCannon;
	struct IsVisitLocation;
	struct IsVisitLocationArea_CaveEntrance;
	struct KeyCrystalDungeonUnlocked;
	struct MapData;
	struct NpcGardenInfo;
	struct NpcGardenInfo_HatenoVillage023;
	struct NpcServeFood;
	struct NushiShop_MedalComplete : Tag::Member { using type = bool&; };
	struct OwnedCustomizableHorseTack_Reins;
	struct OwnedCustomizableHorseTack_Saddle;
	struct OwnedParasailPattern;
	struct PlayerStatus;
	struct ReadyMadeAutoBuilderDraft;
	struct RecycleBoxData;
	struct ReplaceblePicture;
	struct World_IsBloodyMoonDay : Tag::Member { using type = bool&; };
	struct World_IsZonauRespawnDay : Tag::Member { using type = bool&; };
	struct DongoList;
	struct DongoLocatorList;
	struct LightBallBud;
	struct Pouch;
	struct ArrivalPointState;
	struct ChallengeLogState_Challenge;
	struct DungeonState;
	struct KeyCrystalDungeonState;
	struct KorokCarryProgress;
	struct LastTalkedOrchestraMemberStableHostel : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), GerudoCanyon = murmurhash3::hash("GerudoCanyon"), ShirotsumeShinbunsya = murmurhash3::hash("ShirotsumeShinbunsya"), TabantaOhashi = murmurhash3::hash("TabantaOhashi"), Higakkare = murmurhash3::hash("Higakkare"), ShinMaritta = murmurhash3::hash("ShinMaritta"), Minakkare = murmurhash3::hash("Minakkare"), Riverside = murmurhash3::hash("Riverside"), Lakeside = murmurhash3::hash("Lakeside"), Kougen = murmurhash3::hash("Kougen"), Sanroku = murmurhash3::hash("Sanroku"), Shitsugen = murmurhash3::hash("Shitsugen"), Mori = murmurhash3::hash("Mori"), Setsugen = murmurhash3::hash("Setsugen"), Futago = murmurhash3::hash("Futago"), HeigenHazure = murmurhash3::hash("HeigenHazure"), };
		using type = enum_t<LastTalkedOrchestraMemberStableHostel>&;
	};
	struct LastWildHorse;
	struct MaterialShortCut;
	struct PictureBookData;
	struct SensorMode : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), Dungeon = murmurhash3::hash("Dungeon"), Actor = murmurhash3::hash("Actor"), };
		using type = enum_t<SensorMode>&;
	};
	struct SortPattern;
	struct Step_AisyaRescue : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step1a = murmurhash3::hash("Step1a"), Step2 = murmurhash3::hash("Step2"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_AisyaRescue>&;
	};
	struct Step_AmberCollector : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), SellAmbers = murmurhash3::hash("SellAmbers"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_AmberCollector>&;
	};
	struct Step_ArrowMeister_Momo : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), HaveWaterFruit = murmurhash3::hash("HaveWaterFruit"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_ArrowMeister_Momo>&;
	};
	struct Step_AssassinGerudoBase : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Enlist = murmurhash3::hash("Enlist"), Equip = murmurhash3::hash("Equip"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_AssassinGerudoBase>&;
	};
	struct Step_BallBring_MiniGame : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Craft = murmurhash3::hash("Craft"), Playing = murmurhash3::hash("Playing"), Retry = murmurhash3::hash("Retry"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_BallBring_MiniGame>&;
	};
	struct Step_Basketball_MiniGame : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Retry = murmurhash3::hash("Retry"), Playing = murmurhash3::hash("Playing"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Basketball_MiniGame>&;
	};
	struct Step_Big_Rotate : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Big_Rotate>&;
	};
	struct Step_BirdManContest : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Game = murmurhash3::hash("Game"), Retire = murmurhash3::hash("Retire"), Result = murmurhash3::hash("Result"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_BirdManContest>&;
	};
	struct Step_BlindRuinsTreasure : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), LookAtBoard_1 = murmurhash3::hash("LookAtBoard_1"), Search_1 = murmurhash3::hash("Search_1"), GoToCave = murmurhash3::hash("GoToCave"), RewardNotReceived = murmurhash3::hash("RewardNotReceived"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_BlindRuinsTreasure>&;
	};
	struct Step_BlindRuinsTreasure_Gerudo : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_BlindRuinsTreasure_Gerudo>&;
	};
	struct Step_BlindRuinsTreasure_Goron : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_BlindRuinsTreasure_Goron>&;
	};
	struct Step_BlindRuinsTreasure_Rito : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_BlindRuinsTreasure_Rito>&;
	};
	struct Step_BlindRuinsTreasure_Zora : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_BlindRuinsTreasure_Zora>&;
	};
	struct Step_BuildHouse : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Build = murmurhash3::hash("Build"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_BuildHouse>&;
	};
	struct Step_BuildingMaterialsTutorial : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GiveBuildingMaterials = murmurhash3::hash("GiveBuildingMaterials"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_BuildingMaterialsTutorial>&;
	};
	struct Step_CarryGoronKid1 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Reach = murmurhash3::hash("Reach"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryGoronKid1>&;
	};
	struct Step_CarryGoronKid2 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), ToStation = murmurhash3::hash("ToStation"), Carry = murmurhash3::hash("Carry"), Reach = murmurhash3::hash("Reach"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryGoronKid2>&;
	};
	struct Step_CarryStone : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CarryStone = murmurhash3::hash("CarryStone"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryStone>&;
	};
	struct Step_CarryToShrine01 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine01>&;
	};
	struct Step_CarryToShrine02 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine02>&;
	};
	struct Step_CarryToShrine03 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine03>&;
	};
	struct Step_CarryToShrine05 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine05>&;
	};
	struct Step_CarryToShrine06 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine06>&;
	};
	struct Step_CarryToShrine07 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine07>&;
	};
	struct Step_CarryToShrine08_Zora : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine08_Zora>&;
	};
	struct Step_CarryToShrine09 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine09>&;
	};
	struct Step_CarryToShrine10 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine10>&;
	};
	struct Step_CarryToShrine11 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine11>&;
	};
	struct Step_CarryToShrine12 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine12>&;
	};
	struct Step_CarryToShrine13 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine13>&;
	};
	struct Step_CarryToShrine14 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine14>&;
	};
	struct Step_CarryToShrine15 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine15>&;
	};
	struct Step_CarryToShrine16 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine16>&;
	};
	struct Step_CarryToShrine17 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine17>&;
	};
	struct Step_CarryToShrine19 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine19>&;
	};
	struct Step_CarryToShrine20 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine20>&;
	};
	struct Step_CarryToShrine21 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine21>&;
	};
	struct Step_CarryToShrine22 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine22>&;
	};
	struct Step_CarryToShrine23 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CarryToShrine23>&;
	};
	struct Step_CDungeon_AllDone : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), RewardAppeared = murmurhash3::hash("RewardAppeared"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CDungeon_AllDone>&;
	};
	struct Step_Circuit_Desert : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Craft = murmurhash3::hash("Craft"), Playing = murmurhash3::hash("Playing"), TimeUp = murmurhash3::hash("TimeUp"), Finish = murmurhash3::hash("Finish"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Circuit_Desert>&;
	};
	struct Step_Circuit_FaronWoods_MiniGame : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Game = murmurhash3::hash("Game"), Retry = murmurhash3::hash("Retry"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Circuit_FaronWoods_MiniGame>&;
	};
	struct Step_Circuit_Ichikara : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Craft = murmurhash3::hash("Craft"), Retry = murmurhash3::hash("Retry"), TimeOver = murmurhash3::hash("TimeOver"), Playing = murmurhash3::hash("Playing"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Circuit_Ichikara>&;
	};
	struct Step_Circuit_Ichikara_MiniGame : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Retry = murmurhash3::hash("Retry"), TimeOver = murmurhash3::hash("TimeOver"), Playing = murmurhash3::hash("Playing"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Circuit_Ichikara_MiniGame>&;
	};
	struct Step_Circuit_Uotori_MiniGame : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Playing = murmurhash3::hash("Playing"), Retry = murmurhash3::hash("Retry"), TimeOver = murmurhash3::hash("TimeOver"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Circuit_Uotori_MiniGame>&;
	};
	struct Step_CleanStatue : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CleanUp = murmurhash3::hash("CleanUp"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CleanStatue>&;
	};
	struct Step_ClueTotheSixthSage : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MeetTauro = murmurhash3::hash("MeetTauro"), RuinsChallenge = murmurhash3::hash("RuinsChallenge"), ZonauChallenge = murmurhash3::hash("ZonauChallenge"), UntilYouReport = murmurhash3::hash("UntilYouReport"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_ClueTotheSixthSage>&;
	};
	struct Step_CollectObject_MiniGame : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Playing = murmurhash3::hash("Playing"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CollectObject_MiniGame>&;
	};
	struct Step_CollectObject_MiniGame_Cliff : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Playing = murmurhash3::hash("Playing"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CollectObject_MiniGame_Cliff>&;
	};
	struct Step_CollectObject_MiniGame_LakeSide : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Playing = murmurhash3::hash("Playing"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CollectObject_MiniGame_LakeSide>&;
	};
	struct Step_Connect_AkkareMaze : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Land = murmurhash3::hash("Land"), Land2 = murmurhash3::hash("Land2"), Sky = murmurhash3::hash("Sky"), Sky1st = murmurhash3::hash("Sky1st"), Sky2nd = murmurhash3::hash("Sky2nd"), Sky3rd = murmurhash3::hash("Sky3rd"), SkyAll = murmurhash3::hash("SkyAll"), Minus = murmurhash3::hash("Minus"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Connect_AkkareMaze>&;
	};
	struct Step_Connect_FirstIsland : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Sky = murmurhash3::hash("Sky"), Collect1st = murmurhash3::hash("Collect1st"), Collect2nd = murmurhash3::hash("Collect2nd"), Collect3rd = murmurhash3::hash("Collect3rd"), SkyGather = murmurhash3::hash("SkyGather"), Minus1st = murmurhash3::hash("Minus1st"), Minus2nd = murmurhash3::hash("Minus2nd"), Minus3rd = murmurhash3::hash("Minus3rd"), Minus4th = murmurhash3::hash("Minus4th"), Minus5th = murmurhash3::hash("Minus5th"), Minus6th = murmurhash3::hash("Minus6th"), MinusGather = murmurhash3::hash("MinusGather"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Connect_FirstIsland>&;
	};
	struct Step_Connect_GerudoMaze : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Land = murmurhash3::hash("Land"), Land2 = murmurhash3::hash("Land2"), Sky = murmurhash3::hash("Sky"), Sky1st = murmurhash3::hash("Sky1st"), Sky2nd = murmurhash3::hash("Sky2nd"), Sky3rd = murmurhash3::hash("Sky3rd"), SkyAll = murmurhash3::hash("SkyAll"), Minus = murmurhash3::hash("Minus"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Connect_GerudoMaze>&;
	};
	struct Step_Connect_TabantaMaze : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Land = murmurhash3::hash("Land"), Land2 = murmurhash3::hash("Land2"), Sky = murmurhash3::hash("Sky"), Sky1st = murmurhash3::hash("Sky1st"), Sky2nd = murmurhash3::hash("Sky2nd"), Sky3rd = murmurhash3::hash("Sky3rd"), SkyAll = murmurhash3::hash("SkyAll"), Minus = murmurhash3::hash("Minus"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Connect_TabantaMaze>&;
	};
	struct Step_CookAtBaseCamp : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CookAtBaseCamp>&;
	};
	struct Step_CraftShadowPicture : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CraftShadowPicture>&;
	};
	struct Step_CreateArmor : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_CreateArmor>&;
	};
	struct Step_Createshinguard : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GatherItem = murmurhash3::hash("GatherItem"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Createshinguard>&;
	};
	struct Step_DeepHoleSurvey2 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), AfterInterview = murmurhash3::hash("AfterInterview"), Step01 = murmurhash3::hash("Step01"), Report = murmurhash3::hash("Report"), Buield = murmurhash3::hash("Buield"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_DeepHoleSurvey2>&;
	};
	struct Step_DefeatGanondorf : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), FindWhereabouts = murmurhash3::hash("FindWhereabouts"), GoToDeepHole = murmurhash3::hash("GoToDeepHole"), DefeatMonsterArmy = murmurhash3::hash("DefeatMonsterArmy"), DefeatGanon1 = murmurhash3::hash("DefeatGanon1"), DefeatGanon2 = murmurhash3::hash("DefeatGanon2"), DefeatBlackDragon = murmurhash3::hash("DefeatBlackDragon"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_DefeatGanondorf>&;
	};
	struct Step_DefeatHugeEnemy_1 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Defeat = murmurhash3::hash("Defeat"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_DefeatHugeEnemy_1>&;
	};
	struct Step_DefeatHugeEnemy_2 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Defeat = murmurhash3::hash("Defeat"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_DefeatHugeEnemy_2>&;
	};
	struct Step_DefeatHugeEnemy_3 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Defeat = murmurhash3::hash("Defeat"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_DefeatHugeEnemy_3>&;
	};
	struct Step_DefeatHugeEnemy_4 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Defeat = murmurhash3::hash("Defeat"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_DefeatHugeEnemy_4>&;
	};
	struct Step_DefeatHugeEnemy_5 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Defeat = murmurhash3::hash("Defeat"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_DefeatHugeEnemy_5>&;
	};
	struct Step_DefeatHugeEnemy_6 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), EventLightSpot = murmurhash3::hash("EventLightSpot"), Defeat = murmurhash3::hash("Defeat"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_DefeatHugeEnemy_6>&;
	};
	struct Step_DevoteSpring : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_DevoteSpring>&;
	};
	struct Step_DividedSlate : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), RepairSlate = murmurhash3::hash("RepairSlate"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_DividedSlate>&;
	};
	struct Step_EightHeroStatues : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_EightHeroStatues>&;
	};
	struct Step_EightHeroStatues_After : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step1_GoRoom = murmurhash3::hash("Step1_GoRoom"), Step2 = murmurhash3::hash("Step2"), Step3 = murmurhash3::hash("Step3"), Step4 = murmurhash3::hash("Step4"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_EightHeroStatues_After>&;
	};
	struct Step_EveryonesMeal : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Collect = murmurhash3::hash("Collect"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_EveryonesMeal>&;
	};
	struct Step_ExcavateFossil1 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), LightPoint = murmurhash3::hash("LightPoint"), GoFossil = murmurhash3::hash("GoFossil"), Excavate = murmurhash3::hash("Excavate"), NextLightPoint = murmurhash3::hash("NextLightPoint"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_ExcavateFossil1>&;
	};
	struct Step_ExcavateFossil2 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GoFossil = murmurhash3::hash("GoFossil"), Excavate = murmurhash3::hash("Excavate"), NextLightPoint = murmurhash3::hash("NextLightPoint"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_ExcavateFossil2>&;
	};
	struct Step_ExcavateFossil3 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GoFossil = murmurhash3::hash("GoFossil"), Excavate = murmurhash3::hash("Excavate"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_ExcavateFossil3>&;
	};
	struct Step_Fairy2 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), ReturnUmayado = murmurhash3::hash("ReturnUmayado"), CarryNPC = murmurhash3::hash("CarryNPC"), CarryNPC2 = murmurhash3::hash("CarryNPC2"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Fairy2>&;
	};
	struct Step_Fairy3 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), GoToOrchestra = murmurhash3::hash("GoToOrchestra"), Craft = murmurhash3::hash("Craft"), Reach = murmurhash3::hash("Reach"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Fairy3>&;
	};
	struct Step_Fairy4 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), GoToOrchestra = murmurhash3::hash("GoToOrchestra"), CarryNPC = murmurhash3::hash("CarryNPC"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Fairy4>&;
	};
	struct Step_FindDrefan : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), FindDrefan = murmurhash3::hash("FindDrefan"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_FindDrefan>&;
	};
	struct Step_FindSunaNui : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), SetUp = murmurhash3::hash("SetUp"), Playing = murmurhash3::hash("Playing"), Result = murmurhash3::hash("Result"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_FindSunaNui>&;
	};
	struct Step_FindSunaNui2 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Playing = murmurhash3::hash("Playing"), Result = murmurhash3::hash("Result"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_FindSunaNui2>&;
	};
	struct Step_FindWhiteHorse : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_FindWhiteHorse>&;
	};
	struct Step_FindWithSensors : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), TestSensor = murmurhash3::hash("TestSensor"), Find = murmurhash3::hash("Find"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_FindWithSensors>&;
	};
	struct Step_FirstskyislandReturns : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), BeforeGame = murmurhash3::hash("BeforeGame"), ReturnReady = murmurhash3::hash("ReturnReady"), InGameWhenActiveTorchNumIs0 = murmurhash3::hash("InGameWhenActiveTorchNumIs0"), InGameWhenActiveTorchNumIs1 = murmurhash3::hash("InGameWhenActiveTorchNumIs1"), InGameWhenActiveTorchNumIs2 = murmurhash3::hash("InGameWhenActiveTorchNumIs2"), GameClear = murmurhash3::hash("GameClear"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_FirstskyislandReturns>&;
	};
	struct Step_FullyRipenedFlintstones : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetFlintstones = murmurhash3::hash("GetFlintstones"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_FullyRipenedFlintstones>&;
	};
	struct Step_gather_Insect_Z : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_gather_Insect_Z>&;
	};
	struct Step_GeniusWeapon_Zora : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_GeniusWeapon_Zora>&;
	};
	struct Step_Genkos_Kitchen : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), HaveFish = murmurhash3::hash("HaveFish"), GetPresent = murmurhash3::hash("GetPresent"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Genkos_Kitchen>&;
	};
	struct Step_Gerudo_UrbosaWeapon : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Gerudo_UrbosaWeapon>&;
	};
	struct Step_GerudoCanyon_24hEnduranceComparison : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Prepare = murmurhash3::hash("Prepare"), Comparison = murmurhash3::hash("Comparison"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_GerudoCanyon_24hEnduranceComparison>&;
	};
	struct Step_GerudoCanyon_Adventure : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_GerudoCanyon_Adventure>&;
	};
	struct Step_GerudoCanyon_ColdEnduranceComparison : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Prepare = murmurhash3::hash("Prepare"), Comparison = murmurhash3::hash("Comparison"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_GerudoCanyon_ColdEnduranceComparison>&;
	};
	struct Step_GerudoCanyon_GleeokLiver : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_GerudoCanyon_GleeokLiver>&;
	};
	struct Step_GerudoCanyon_TumbleweedSweep : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_GerudoCanyon_TumbleweedSweep>&;
	};
	struct Step_GerudoDesertTreasure : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_GerudoDesertTreasure>&;
	};
	struct Step_GetCamera : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GotoUnderground = murmurhash3::hash("GotoUnderground"), TakePicture = murmurhash3::hash("TakePicture"), ReturnBaseCamp = murmurhash3::hash("ReturnBaseCamp"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_GetCamera>&;
	};
	struct Step_GetMasterSword : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Order = murmurhash3::hash("Order"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_GetMasterSword>&;
	};
	struct Step_GetSensorPlus : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_GetSensorPlus>&;
	};
	struct Step_GetWalker : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_GetWalker>&;
	};
	struct Step_GetWarpMarker : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), EventLightSpot = murmurhash3::hash("EventLightSpot"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Step03 = murmurhash3::hash("Step03"), Step04 = murmurhash3::hash("Step04"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_GetWarpMarker>&;
	};
	struct Step_GiantHorse : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Step3 = murmurhash3::hash("Step3"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_GiantHorse>&;
	};
	struct Step_GoneSnowQueen : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step0 = murmurhash3::hash("Step0"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Step3 = murmurhash3::hash("Step3"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_GoneSnowQueen>&;
	};
	struct Step_Goron_MiniGame_01 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Craft = murmurhash3::hash("Craft"), Playing = murmurhash3::hash("Playing"), Finish = murmurhash3::hash("Finish"), Retire = murmurhash3::hash("Retire"), PlayerOut = murmurhash3::hash("PlayerOut"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Goron_MiniGame_01>&;
	};
	struct Step_Goron_MiniGame_02 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Craft = murmurhash3::hash("Craft"), Playing = murmurhash3::hash("Playing"), TimeOver = murmurhash3::hash("TimeOver"), Retire = murmurhash3::hash("Retire"), Finish = murmurhash3::hash("Finish"), PlayerOut = murmurhash3::hash("PlayerOut"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Goron_MiniGame_02>&;
	};
	struct Step_Goron_MiniGame_03 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Craft = murmurhash3::hash("Craft"), Playing = murmurhash3::hash("Playing"), Retire = murmurhash3::hash("Retire"), CourseOut = murmurhash3::hash("CourseOut"), Finish = murmurhash3::hash("Finish"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Goron_MiniGame_03>&;
	};
	struct Step_Goron_MiniGame_Tutorial_01 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), BeforeGame = murmurhash3::hash("BeforeGame"), Craft = murmurhash3::hash("Craft"), Playing = murmurhash3::hash("Playing"), Finish = murmurhash3::hash("Finish"), Retire = murmurhash3::hash("Retire"), PlayerOut = murmurhash3::hash("PlayerOut"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Goron_MiniGame_Tutorial_01>&;
	};
	struct Step_Goron_MiniGame_Tutorial_02 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), BeforeGame = murmurhash3::hash("BeforeGame"), Craft = murmurhash3::hash("Craft"), Playing = murmurhash3::hash("Playing"), TimeOver = murmurhash3::hash("TimeOver"), Retire = murmurhash3::hash("Retire"), Finish = murmurhash3::hash("Finish"), PlayerOut = murmurhash3::hash("PlayerOut"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Goron_MiniGame_Tutorial_02>&;
	};
	struct Step_Goron_MiniGame_Tutorial_03 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), BeforeGame = murmurhash3::hash("BeforeGame"), Craft = murmurhash3::hash("Craft"), Playing = murmurhash3::hash("Playing"), Retire = murmurhash3::hash("Retire"), CourseOut = murmurhash3::hash("CourseOut"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Goron_MiniGame_Tutorial_03>&;
	};
	struct Step_GoronPond : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), FindThePond = murmurhash3::hash("FindThePond"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_GoronPond>&;
	};
	struct Step_GoronReturntoNature : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), FindGraveyard = murmurhash3::hash("FindGraveyard"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_GoronReturntoNature>&;
	};
	struct Step_GotoFironeZonauRemains : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), DecipherTheIithograph = murmurhash3::hash("DecipherTheIithograph"), EventLightSpot01 = murmurhash3::hash("EventLightSpot01"), EventLightSpot02 = murmurhash3::hash("EventLightSpot02"), ZonauRemains_ArriveObservatory = murmurhash3::hash("ZonauRemains_ArriveObservatory"), ZonauRemains_TalkResearcher = murmurhash3::hash("ZonauRemains_TalkResearcher"), ZonauRemains_AppearsSkyIsland = murmurhash3::hash("ZonauRemains_AppearsSkyIsland"), ZonauRemains_OpenedTheDoor = murmurhash3::hash("ZonauRemains_OpenedTheDoor"), ZonauRemains_TouchTheHead = murmurhash3::hash("ZonauRemains_TouchTheHead"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_GotoFironeZonauRemains>&;
	};
	struct Step_GOToTheCastleOfHyrule : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MeetPurah = murmurhash3::hash("MeetPurah"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_GOToTheCastleOfHyrule>&;
	};
	struct Step_GroundPaintingAir01 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GoToWandererA = murmurhash3::hash("GoToWandererA"), GoToWandererB = murmurhash3::hash("GoToWandererB"), Carry = murmurhash3::hash("Carry"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_GroundPaintingAir01>&;
	};
	struct Step_Hack_GuardGoods : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Defeat = murmurhash3::hash("Defeat"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Hack_GuardGoods>&;
	};
	struct Step_HammerGong_MiniGame : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Playing = murmurhash3::hash("Playing"), Retry = murmurhash3::hash("Retry"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_HammerGong_MiniGame>&;
	};
	struct Step_Hateno_Cheese : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Hateno_Cheese>&;
	};
	struct Step_Hateno_CoolGuy : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Report = murmurhash3::hash("Report"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Hateno_CoolGuy>&;
	};
	struct Step_Hateno_FreshMilk : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Hateno_FreshMilk>&;
	};
	struct Step_Hateno_LetUsElection : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Ready1 = murmurhash3::hash("Ready1"), Ready2 = murmurhash3::hash("Ready2"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Hateno_LetUsElection>&;
	};
	struct Step_Hateno_NewCostume : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Hateno_NewCostume>&;
	};
	struct Step_Hateno_NewSpecialty : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), ReChallenge = murmurhash3::hash("ReChallenge"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Hateno_NewSpecialty>&;
	};
	struct Step_Hateno_RevitalizeByNewSpeciality : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Hateno_RevitalizeByNewSpeciality>&;
	};
	struct Step_Hateno_SecretLifeOfKusayoshi : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Hateno_SecretLifeOfKusayoshi>&;
	};
	struct Step_Hateno_SecretLifeOfSagono : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Hateno_SecretLifeOfSagono>&;
	};
	struct Step_Hateno_TellMeTeacher01 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), TakeAPicture = murmurhash3::hash("TakeAPicture"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Hateno_TellMeTeacher01>&;
	};
	struct Step_Hateno_TellMeTeacher02 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Hateno_TellMeTeacher02>&;
	};
	struct Step_Hateno_VillageMayorElection : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Step03 = murmurhash3::hash("Step03"), Step04 = murmurhash3::hash("Step04"), Step05 = murmurhash3::hash("Step05"), Step06 = murmurhash3::hash("Step06"), Step07 = murmurhash3::hash("Step07"), Step08 = murmurhash3::hash("Step08"), Step09 = murmurhash3::hash("Step09"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Hateno_VillageMayorElection>&;
	};
	struct Step_Hateno_WhatToPlant : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Choice = murmurhash3::hash("Choice"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Hateno_WhatToPlant>&;
	};
	struct Step_HatenoPurchasePicture : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Purchase = murmurhash3::hash("Purchase"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_HatenoPurchasePicture>&;
	};
	struct Step_Hebra_SkyRingChallenge : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Preparation = murmurhash3::hash("Preparation"), Playing = murmurhash3::hash("Playing"), Retry = murmurhash3::hash("Retry"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Hebra_SkyRingChallenge>&;
	};
	struct Step_Hebra_SkyRingChallenge_MiniGame : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Playing = murmurhash3::hash("Playing"), Retry = murmurhash3::hash("Retry"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Hebra_SkyRingChallenge_MiniGame>&;
	};
	struct Step_HorseInnChallenge001 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Repair = murmurhash3::hash("Repair"), Repair2 = murmurhash3::hash("Repair2"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_HorseInnChallenge001>&;
	};
	struct Step_HorseInnChallenge002 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), step1 = murmurhash3::hash("step1"), Report = murmurhash3::hash("Report"), Report2 = murmurhash3::hash("Report2"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_HorseInnChallenge002>&;
	};
	struct Step_HorseInnChallenge003 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CupsuleDrop = murmurhash3::hash("CupsuleDrop"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_HorseInnChallenge003>&;
	};
	struct Step_HorseInnChallenge005 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_HorseInnChallenge005>&;
	};
	struct Step_HorseInnChallenge007 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Step3 = murmurhash3::hash("Step3"), AfterDefeat = murmurhash3::hash("AfterDefeat"), GetReward = murmurhash3::hash("GetReward"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_HorseInnChallenge007>&;
	};
	struct Step_HotSpringEgg : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), FindHotSpring = murmurhash3::hash("FindHotSpring"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_HotSpringEgg>&;
	};
	struct Step_HourseInnChallenge004 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), TryToDestroy = murmurhash3::hash("TryToDestroy"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_HourseInnChallenge004>&;
	};
	struct Step_HuntSalmon : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Report = murmurhash3::hash("Report"), GetPrize = murmurhash3::hash("GetPrize"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_HuntSalmon>&;
	};
	struct Step_HyruleCastleIncident : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CastleSurvey = murmurhash3::hash("CastleSurvey"), ReturnBCAfterDefeatMonster = murmurhash3::hash("ReturnBCAfterDefeatMonster"), GoToCannon = murmurhash3::hash("GoToCannon"), UseTerminal = murmurhash3::hash("UseTerminal"), UseCannon = murmurhash3::hash("UseCannon"), ToLand = murmurhash3::hash("ToLand"), EventLightSpot = murmurhash3::hash("EventLightSpot"), EventLightSpot2 = murmurhash3::hash("EventLightSpot2"), EventLightSpot3 = murmurhash3::hash("EventLightSpot3"), EventLightSpot4 = murmurhash3::hash("EventLightSpot4"), EventLightSpot5 = murmurhash3::hash("EventLightSpot5"), UnderSurveyOfFourVillages = murmurhash3::hash("UnderSurveyOfFourVillages"), ResearchCastle = murmurhash3::hash("ResearchCastle"), DefeatBlackZelda = murmurhash3::hash("DefeatBlackZelda"), ReturnBCAfterBlackZelda = murmurhash3::hash("ReturnBCAfterBlackZelda"), UnderFindTheFifthSage = murmurhash3::hash("UnderFindTheFifthSage"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_HyruleCastleIncident>&;
	};
	struct Step_IceMaking : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_IceMaking>&;
	};
	struct Step_IchikaraChallenge01 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Research = murmurhash3::hash("Research"), Child_Talk = murmurhash3::hash("Child_Talk"), Quiz2 = murmurhash3::hash("Quiz2"), Cooking = murmurhash3::hash("Cooking"), GotoRopeway = murmurhash3::hash("GotoRopeway"), MammyReport = murmurhash3::hash("MammyReport"), PaPaTalk = murmurhash3::hash("PaPaTalk"), Memory = murmurhash3::hash("Memory"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_IchikaraChallenge01>&;
	};
	struct Step_IchikaraChallenge03 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_IchikaraChallenge03>&;
	};
	struct Step_IchikaraCircuit_Tutorial : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Craft = murmurhash3::hash("Craft"), Retry = murmurhash3::hash("Retry"), TimeOver = murmurhash3::hash("TimeOver"), Playing = murmurhash3::hash("Playing"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_IchikaraCircuit_Tutorial>&;
	};
	struct Step_IchikaraDaughterPhoto : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_IchikaraDaughterPhoto>&;
	};
	struct Step_IllnessStartsWithFeelings : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Finale = murmurhash3::hash("Finale"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_IllnessStartsWithFeelings>&;
	};
	struct Step_InfiltrationFromTheSky : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_InfiltrationFromTheSky>&;
	};
	struct Step_InnNeverReturns : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_InnNeverReturns>&;
	};
	struct Step_JobSunazarashi : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Drive1 = murmurhash3::hash("Drive1"), Arrival = murmurhash3::hash("Arrival"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_JobSunazarashi>&;
	};
	struct Step_Know_FourStonePlates : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Know_FourStonePlates>&;
	};
	struct Step_KokkoGuidePost : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), step1 = murmurhash3::hash("step1"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_KokkoGuidePost>&;
	};
	struct Step_Korok_CarryToShrine : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Carry = murmurhash3::hash("Carry"), Crystal = murmurhash3::hash("Crystal"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Korok_CarryToShrine>&;
	};
	struct Step_Lodge_Chemical001 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), DefeatAnEnemy = murmurhash3::hash("DefeatAnEnemy"), DefeatedEnemies = murmurhash3::hash("DefeatedEnemies"), GetPresent = murmurhash3::hash("GetPresent"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Lodge_Chemical001>&;
	};
	struct Step_LookingForLightSpot : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GoToLightSpotOfPurahPad = murmurhash3::hash("GoToLightSpotOfPurahPad"), GoBackToTempleEntrance = murmurhash3::hash("GoBackToTempleEntrance"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_LookingForLightSpot>&;
	};
	struct Step_LookingForTheVoiceLord : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_LookingForTheVoiceLord>&;
	};
	struct Step_Mack_SecretBase : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Mack_SecretBase>&;
	};
	struct Step_MainChallenge : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetZonauMajic = murmurhash3::hash("GetZonauMajic"), GoToAlterAfterGetRR = murmurhash3::hash("GoToAlterAfterGetRR"), WarpToCaveOfAwake = murmurhash3::hash("WarpToCaveOfAwake"), GoToBackToGolemInTemple = murmurhash3::hash("GoToBackToGolemInTemple"), GoToBackOfTempleOfTimeAfterWD = murmurhash3::hash("GoToBackOfTempleOfTimeAfterWD"), LookingForZelda = murmurhash3::hash("LookingForZelda"), GoToDeepHole = murmurhash3::hash("GoToDeepHole"), DefeatMonsterArmy = murmurhash3::hash("DefeatMonsterArmy"), DefeatGanon1 = murmurhash3::hash("DefeatGanon1"), DefeatGanon2 = murmurhash3::hash("DefeatGanon2"), DefeatBlackDragon = murmurhash3::hash("DefeatBlackDragon"), CatchZelda = murmurhash3::hash("CatchZelda"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MainChallenge>&;
	};
	struct Step_MakeAChampionsWeapon_Goron : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MakeWeapon = murmurhash3::hash("MakeWeapon"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MakeAChampionsWeapon_Goron>&;
	};
	struct Step_MakeChemicalWeapon : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MakeChemicalWeapon>&;
	};
	struct Step_MasterSwordClues : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), TalkOldKorok = murmurhash3::hash("TalkOldKorok"), TalKDekuTree = murmurhash3::hash("TalKDekuTree"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MasterSwordClues>&;
	};
	struct Step_MeatRock : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CarryARock = murmurhash3::hash("CarryARock"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MeatRock>&;
	};
	struct Step_MemoryOfTheDragon : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GoTemple = murmurhash3::hash("GoTemple"), GoTemple2 = murmurhash3::hash("GoTemple2"), Step01 = murmurhash3::hash("Step01"), Step2 = murmurhash3::hash("Step2"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MemoryOfTheDragon>&;
	};
	struct Step_Mercenary_Akkare_Bloody : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MeetAgain = murmurhash3::hash("MeetAgain"), Move = murmurhash3::hash("Move"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Mercenary_Akkare_Bloody>&;
	};
	struct Step_Mercenary_Eldin_Bloody : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Move = murmurhash3::hash("Move"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Mercenary_Eldin_Bloody>&;
	};
	struct Step_Mercenary_Firone_Bloody : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Craft = murmurhash3::hash("Craft"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Mercenary_Firone_Bloody>&;
	};
	struct Step_Mercenary_Hateru_Bloody : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MeetAgain = murmurhash3::hash("MeetAgain"), Craft = murmurhash3::hash("Craft"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Mercenary_Hateru_Bloody>&;
	};
	struct Step_Mercenary_Hebra_Bloody : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MeetAgain = murmurhash3::hash("MeetAgain"), Move = murmurhash3::hash("Move"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Mercenary_Hebra_Bloody>&;
	};
	struct Step_Mercenary_HyrulePlain_Bloody : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Move = murmurhash3::hash("Move"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Mercenary_HyrulePlain_Bloody>&;
	};
	struct Step_MercenaryChallenge_Akkare : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MeetAgain = murmurhash3::hash("MeetAgain"), Move = murmurhash3::hash("Move"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MercenaryChallenge_Akkare>&;
	};
	struct Step_MercenaryChallenge_Eldin : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Move = murmurhash3::hash("Move"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MercenaryChallenge_Eldin>&;
	};
	struct Step_MercenaryChallenge_Firone : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Craft = murmurhash3::hash("Craft"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MercenaryChallenge_Firone>&;
	};
	struct Step_MercenaryChallenge_Hateru : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MeetAgain = murmurhash3::hash("MeetAgain"), Craft = murmurhash3::hash("Craft"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MercenaryChallenge_Hateru>&;
	};
	struct Step_MercenaryChallenge_Hebra : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MeetAgain = murmurhash3::hash("MeetAgain"), Move = murmurhash3::hash("Move"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MercenaryChallenge_Hebra>&;
	};
	struct Step_MercenaryChallenge_HyrulePlain : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Move = murmurhash3::hash("Move"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MercenaryChallenge_HyrulePlain>&;
	};
	struct Step_MessageBottle_SOS : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MessageBottle_SOS_01 = murmurhash3::hash("MessageBottle_SOS_01"), MessageBottle_SOS_02 = murmurhash3::hash("MessageBottle_SOS_02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MessageBottle_SOS>&;
	};
	struct Step_MinusYiga : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), BeginBeforeHint = murmurhash3::hash("BeginBeforeHint"), Begin = murmurhash3::hash("Begin"), Again = murmurhash3::hash("Again"), Continue = murmurhash3::hash("Continue"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MinusYiga>&;
	};
	struct Step_MonsterFigures01 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Photo = murmurhash3::hash("Photo"), Display = murmurhash3::hash("Display"), Exhibition = murmurhash3::hash("Exhibition"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MonsterFigures01>&;
	};
	struct Step_MonsterFigures02 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Photo = murmurhash3::hash("Photo"), Display = murmurhash3::hash("Display"), Exhibition = murmurhash3::hash("Exhibition"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MonsterFigures02>&;
	};
	struct Step_MonsterFigures03 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Photo = murmurhash3::hash("Photo"), Display = murmurhash3::hash("Display"), Exhibition = murmurhash3::hash("Exhibition"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MonsterFigures03>&;
	};
	struct Step_MonsterFigures04 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Photo = murmurhash3::hash("Photo"), Display = murmurhash3::hash("Display"), Exhibition = murmurhash3::hash("Exhibition"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MonsterFigures04>&;
	};
	struct Step_MonsterFigures05 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Photo = murmurhash3::hash("Photo"), Display = murmurhash3::hash("Display"), Exhibition = murmurhash3::hash("Exhibition"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MonsterFigures05>&;
	};
	struct Step_MushroomSisters_1 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), GetPresent = murmurhash3::hash("GetPresent"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MushroomSisters_1>&;
	};
	struct Step_MushroomSisters_2 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), GetPresent = murmurhash3::hash("GetPresent"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MushroomSisters_2>&;
	};
	struct Step_MushroomSisters_3 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_MushroomSisters_3>&;
	};
	struct Step_Nazley_DigCave : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Dig = murmurhash3::hash("Dig"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Nazley_DigCave>&;
	};
	struct Step_Neck_IceWaterCave : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Defeat = murmurhash3::hash("Defeat"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Neck_IceWaterCave>&;
	};
	struct Step_NewCanyonMissingPersonsCase : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step0 = murmurhash3::hash("Step0"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_NewCanyonMissingPersonsCase>&;
	};
	struct Step_NewsPaper_Mitsuba : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Tribune01 = murmurhash3::hash("Tribune01"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_NewsPaper_Mitsuba>&;
	};
	struct Step_NoTrespassing : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_NoTrespassing>&;
	};
	struct Step_NowInTheVillageOfLurelin : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_NowInTheVillageOfLurelin>&;
	};
	struct Step_Npc_BaseCamp_Assistant_ReactingStatue : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Npc_BaseCamp_Assistant_ReactingStatue>&;
	};
	struct Step_Npc_BaseCamp_Assistant_ReactingStatue2 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Npc_BaseCamp_Assistant_ReactingStatue2>&;
	};
	struct Step_Npc_BaseCamp_Assistant_ReactingStatue3 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Npc_BaseCamp_Assistant_ReactingStatue3>&;
	};
	struct Step_Npc_BaseCamp_Assistant_ReactingStatue4 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Npc_BaseCamp_Assistant_ReactingStatue4>&;
	};
	struct Step_NushiShop_Challenge00 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), FindNushiShop = murmurhash3::hash("FindNushiShop"), HeardSpot = murmurhash3::hash("HeardSpot"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_NushiShop_Challenge00>&;
	};
	struct Step_NushiShop_Tutorial : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), BringCaveMasterMedal = murmurhash3::hash("BringCaveMasterMedal"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_NushiShop_Tutorial>&;
	};
	struct Step_OldKorokHelp : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), STEP1 = murmurhash3::hash("STEP1"), STEP1_Basecamp = murmurhash3::hash("STEP1_Basecamp"), STEP1_Final = murmurhash3::hash("STEP1_Final"), STEP2 = murmurhash3::hash("STEP2"), STEP2_BaseCamp = murmurhash3::hash("STEP2_BaseCamp"), STEP2_Final = murmurhash3::hash("STEP2_Final"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_OldKorokHelp>&;
	};
	struct Step_Orchestra01 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), AllMember = murmurhash3::hash("AllMember"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Orchestra01>&;
	};
	struct Step_Orchestra02 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Orchestra02>&;
	};
	struct Step_Orchestra03 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), step1 = murmurhash3::hash("step1"), step2 = murmurhash3::hash("step2"), step3 = murmurhash3::hash("step3"), step4 = murmurhash3::hash("step4"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Orchestra03>&;
	};
	struct Step_Orchestra04 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), GetPrize = murmurhash3::hash("GetPrize"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Orchestra04>&;
	};
	struct Step_Our_Treasure : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Craft = murmurhash3::hash("Craft"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Our_Treasure>&;
	};
	struct Step_Parasail_ChuchuDesign : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Parasail_ChuchuDesign>&;
	};
	struct Step_PhotoSpot_Challenge_01 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_PhotoSpot_Challenge_01>&;
	};
	struct Step_PhotoSpot_Challenge_02 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_PhotoSpot_Challenge_02>&;
	};
	struct Step_PhotoSpot_Challenge_03 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_PhotoSpot_Challenge_03>&;
	};
	struct Step_PhotoSpot_Challenge_04 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_PhotoSpot_Challenge_04>&;
	};
	struct Step_PhotoSpot_Challenge_05 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_PhotoSpot_Challenge_05>&;
	};
	struct Step_PhotoSpot_Challenge_06 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_PhotoSpot_Challenge_06>&;
	};
	struct Step_PhotoSpot_Challenge_07 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_PhotoSpot_Challenge_07>&;
	};
	struct Step_PhotoSpot_Challenge_08 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_PhotoSpot_Challenge_08>&;
	};
	struct Step_PhotoSpot_Challenge_09 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_PhotoSpot_Challenge_09>&;
	};
	struct Step_PhotoSpot_Challenge_09_2 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_PhotoSpot_Challenge_09_2>&;
	};
	struct Step_PhotoSpot_Challenge_10 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_PhotoSpot_Challenge_10>&;
	};
	struct Step_PhotoSpot_Challenge_11 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_PhotoSpot_Challenge_11>&;
	};
	struct Step_PhotoSpot_Challenge_12 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_PhotoSpot_Challenge_12>&;
	};
	struct Step_PhotoSpot_Challenge_13 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_PhotoSpot_Challenge_13>&;
	};
	struct Step_PhotoSpot_Challenge_14 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_PhotoSpot_Challenge_14>&;
	};
	struct Step_Raise_GoddesStatue : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), ToGoal = murmurhash3::hash("ToGoal"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Raise_GoddesStatue>&;
	};
	struct Step_Raise_GoddesStatue_Courage : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CheckGoddesStatue = murmurhash3::hash("CheckGoddesStatue"), Report = murmurhash3::hash("Report"), Altarage = murmurhash3::hash("Altarage"), SolvePouch = murmurhash3::hash("SolvePouch"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Raise_GoddesStatue_Courage>&;
	};
	struct Step_Raise_GoddesStatue_Power : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CheckGoddesStatue = murmurhash3::hash("CheckGoddesStatue"), Report = murmurhash3::hash("Report"), Altarage = murmurhash3::hash("Altarage"), SolvePouch = murmurhash3::hash("SolvePouch"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Raise_GoddesStatue_Power>&;
	};
	struct Step_Raise_GoddesStatue_Wisdom : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CheckGoddesStatue = murmurhash3::hash("CheckGoddesStatue"), Report = murmurhash3::hash("Report"), Altarage = murmurhash3::hash("Altarage"), SolvePouch = murmurhash3::hash("SolvePouch"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Raise_GoddesStatue_Wisdom>&;
	};
	struct Step_RepairArmor : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), SubmitMaterial = murmurhash3::hash("SubmitMaterial"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_RepairArmor>&;
	};
	struct Step_RescueHost : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_RescueHost>&;
	};
	struct Step_RescueVehicle01 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Reach = murmurhash3::hash("Reach"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_RescueVehicle01>&;
	};
	struct Step_RescueWell : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Repair = murmurhash3::hash("Repair"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_RescueWell>&;
	};
	struct Step_ResearchEldin : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), SolveAProblem = murmurhash3::hash("SolveAProblem"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_ResearchEldin>&;
	};
	struct Step_ResearchLanayru : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CleanMessenger = murmurhash3::hash("CleanMessenger"), GetPresent = murmurhash3::hash("GetPresent"), GetPresent_Village = murmurhash3::hash("GetPresent_Village"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_ResearchLanayru>&;
	};
	struct Step_RestaurantInTheWell : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MakeFood = murmurhash3::hash("MakeFood"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_RestaurantInTheWell>&;
	};
	struct Step_Rito_ItemExchange : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Collect = murmurhash3::hash("Collect"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Rito_ItemExchange>&;
	};
	struct Step_Rito_MedoArmor : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Rito_MedoArmor>&;
	};
	struct Step_Rito_RevaliWeapon : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Collect = murmurhash3::hash("Collect"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Rito_RevaliWeapon>&;
	};
	struct Step_Rito_ShadowCave : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), GetHint = murmurhash3::hash("GetHint"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Rito_ShadowCave>&;
	};
	struct Step_RitoBridgeRepair : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Report = murmurhash3::hash("Report"), Collect = murmurhash3::hash("Collect"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_RitoBridgeRepair>&;
	};
	struct Step_SageOfFire : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Dream = murmurhash3::hash("Dream"), GoCrater = murmurhash3::hash("GoCrater"), DefeatBossMiddle = murmurhash3::hash("DefeatBossMiddle"), GoMinusField = murmurhash3::hash("GoMinusField"), GoEntranceDungeon = murmurhash3::hash("GoEntranceDungeon"), GoDungeon = murmurhash3::hash("GoDungeon"), Dungeon = murmurhash3::hash("Dungeon"), StartBossBattle = murmurhash3::hash("StartBossBattle"), DefeatBoss = murmurhash3::hash("DefeatBoss"), TouchSecretStone = murmurhash3::hash("TouchSecretStone"), Finale = murmurhash3::hash("Finale"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_SageOfFire>&;
	};
	struct Step_SageOfGerudo : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Underground = murmurhash3::hash("Underground"), PracticeStart = murmurhash3::hash("PracticeStart"), PracticeEnd = murmurhash3::hash("PracticeEnd"), PreDefenseStart = murmurhash3::hash("PreDefenseStart"), PreDefenseEnd = murmurhash3::hash("PreDefenseEnd"), DefenseReady = murmurhash3::hash("DefenseReady"), DefenseStart = murmurhash3::hash("DefenseStart"), DefenseEnd = murmurhash3::hash("DefenseEnd"), DungeonSearch = murmurhash3::hash("DungeonSearch"), DungeonFind = murmurhash3::hash("DungeonFind"), DungeonStart = murmurhash3::hash("DungeonStart"), DungeonBossDead = murmurhash3::hash("DungeonBossDead"), DungeonEnd = murmurhash3::hash("DungeonEnd"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_SageOfGerudo>&;
	};
	struct Step_SageOfSky : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetZonauMajic = murmurhash3::hash("GetZonauMajic"), GoToAlterAfterGetRR = murmurhash3::hash("GoToAlterAfterGetRR"), WarpToCaveOfAwake = murmurhash3::hash("WarpToCaveOfAwake"), GoToBackToGolemInTemple = murmurhash3::hash("GoToBackToGolemInTemple"), GoToBackOfTempleOfTimeAfterWD = murmurhash3::hash("GoToBackOfTempleOfTimeAfterWD"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_SageOfSky>&;
	};
	struct Step_SageOfSoul : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CarryHead_CheckPoint01 = murmurhash3::hash("CarryHead_CheckPoint01"), CarryHead_CheckPoint02 = murmurhash3::hash("CarryHead_CheckPoint02"), CarryHead_CheckPoint04 = murmurhash3::hash("CarryHead_CheckPoint04"), Collected_AllParts = murmurhash3::hash("Collected_AllParts"), GolemAppearance = murmurhash3::hash("GolemAppearance"), LightSpotOn = murmurhash3::hash("LightSpotOn"), Dungeon_DuringDungeonCapture = murmurhash3::hash("Dungeon_DuringDungeonCapture"), Dungeon_Entrance = murmurhash3::hash("Dungeon_Entrance"), Dungeon_BeforeBossBattle = murmurhash3::hash("Dungeon_BeforeBossBattle"), Dungeon_DefeatedBoss = murmurhash3::hash("Dungeon_DefeatedBoss"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_SageOfSoul>&;
	};
	struct Step_SageOfWind : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MountainHut = murmurhash3::hash("MountainHut"), GoToCave = murmurhash3::hash("GoToCave"), FoundTulin = murmurhash3::hash("FoundTulin"), IpponSugi = murmurhash3::hash("IpponSugi"), GetBack = murmurhash3::hash("GetBack"), DefeatEnemy = murmurhash3::hash("DefeatEnemy"), GoToHebra = murmurhash3::hash("GoToHebra"), GoDungeon = murmurhash3::hash("GoDungeon"), CheckTerminal = murmurhash3::hash("CheckTerminal"), DungeonStart = murmurhash3::hash("DungeonStart"), BossBattle = murmurhash3::hash("BossBattle"), DefeatBoss = murmurhash3::hash("DefeatBoss"), TouchSecretStone = murmurhash3::hash("TouchSecretStone"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_SageOfWind>&;
	};
	struct Step_SageOfZora : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MeetParkShido = murmurhash3::hash("MeetParkShido"), ResearchZora = murmurhash3::hash("ResearchZora"), InterimReportToShido = murmurhash3::hash("InterimReportToShido"), InterimReportToShido_Ex = murmurhash3::hash("InterimReportToShido_Ex"), FindWaterBridge = murmurhash3::hash("FindWaterBridge"), ReportToParkShido = murmurhash3::hash("ReportToParkShido"), DefeatLakeBoss = murmurhash3::hash("DefeatLakeBoss"), GoToLakeShido = murmurhash3::hash("GoToLakeShido"), GoToUnderLake = murmurhash3::hash("GoToUnderLake"), SearchRemains = murmurhash3::hash("SearchRemains"), GoToBeforeDungeon = murmurhash3::hash("GoToBeforeDungeon"), GoToBeforeDungeon_00 = murmurhash3::hash("GoToBeforeDungeon_00"), GoToDungeonStart = murmurhash3::hash("GoToDungeonStart"), TryOneTank = murmurhash3::hash("TryOneTank"), GoToBossArea = murmurhash3::hash("GoToBossArea"), DefeatBoss = murmurhash3::hash("DefeatBoss"), TouchSecretStone = murmurhash3::hash("TouchSecretStone"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_SageOfZora>&;
	};
	struct Step_SaihateSubjugation : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Step3 = murmurhash3::hash("Step3"), Step4 = murmurhash3::hash("Step4"), Step5 = murmurhash3::hash("Step5"), Step6 = murmurhash3::hash("Step6"), Step7 = murmurhash3::hash("Step7"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_SaihateSubjugation>&;
	};
	struct Step_SearchCaravan : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step1a = murmurhash3::hash("Step1a"), Step2 = murmurhash3::hash("Step2"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_SearchCaravan>&;
	};
	struct Step_SecretBase_MiniGame : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Retry = murmurhash3::hash("Retry"), Play = murmurhash3::hash("Play"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_SecretBase_MiniGame>&;
	};
	struct Step_ShieldSurfing_MiniGame : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Playing = murmurhash3::hash("Playing"), Retry = murmurhash3::hash("Retry"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_ShieldSurfing_MiniGame>&;
	};
	struct Step_SkyIsland_MiniGame_01 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), EasyGamePlaying = murmurhash3::hash("EasyGamePlaying"), HardGamePlaying = murmurhash3::hash("HardGamePlaying"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_SkyIsland_MiniGame_01>&;
	};
	struct Step_SkyIsland_MiniGame_02 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), EasyGamePlaying = murmurhash3::hash("EasyGamePlaying"), HardGamePlaying = murmurhash3::hash("HardGamePlaying"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_SkyIsland_MiniGame_02>&;
	};
	struct Step_SkyIsland_MiniGame_03 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), EasyGamePlaying = murmurhash3::hash("EasyGamePlaying"), HardGamePlaying = murmurhash3::hash("HardGamePlaying"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_SkyIsland_MiniGame_03>&;
	};
	struct Step_SnowyMountain_Surfing : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_SnowyMountain_Surfing>&;
	};
	struct Step_StatueDevilTutorial : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetBackContainer = murmurhash3::hash("GetBackContainer"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_StatueDevilTutorial>&;
	};
	struct Step_SurveyOfFourVillages : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), EventLightSpot1 = murmurhash3::hash("EventLightSpot1"), EventLightSpot2 = murmurhash3::hash("EventLightSpot2"), EventLightSpot3 = murmurhash3::hash("EventLightSpot3"), EventLightSpot4 = murmurhash3::hash("EventLightSpot4"), EventLightSpot5 = murmurhash3::hash("EventLightSpot5"), _1stSageClear = murmurhash3::hash("1stSageClear"), _2ndSageClear = murmurhash3::hash("2ndSageClear"), _3rdSageClear = murmurhash3::hash("3rdSageClear"), _4thSageClear = murmurhash3::hash("4thSageClear"), ReturnBCAfter4Sage = murmurhash3::hash("ReturnBCAfter4Sage"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_SurveyOfFourVillages>&;
	};
	struct Step_TakeAnimals : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_TakeAnimals>&;
	};
	struct Step_TakeOfIce : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_TakeOfIce>&;
	};
	struct Step_TauraChallenge001 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Finale = murmurhash3::hash("Finale"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_TauraChallenge001>&;
	};
	struct Step_TheStrongestWeapon : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_TheStrongestWeapon>&;
	};
	struct Step_TreasureHunt_kokiri : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_TreasureHunt_kokiri>&;
	};
	struct Step_TreasureOfLambda : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), OpenTreasure = murmurhash3::hash("OpenTreasure"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_TreasureOfLambda>&;
	};
	struct Step_TreasureOfLamda_Dream : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetTreasure = murmurhash3::hash("GetTreasure"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_TreasureOfLamda_Dream>&;
	};
	struct Step_TreasureOfLamda_Dream2 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetTreasure = murmurhash3::hash("GetTreasure"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_TreasureOfLamda_Dream2>&;
	};
	struct Step_TreasureOfLamda_Dream3 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetTreasure = murmurhash3::hash("GetTreasure"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_TreasureOfLamda_Dream3>&;
	};
	struct Step_TreasureOfLamda_DuelPeak : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetTreasure = murmurhash3::hash("GetTreasure"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_TreasureOfLamda_DuelPeak>&;
	};
	struct Step_TreasureOfLamda_FierceDeity : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetOneTreaure = murmurhash3::hash("GetOneTreaure"), GetTwoTreasure = murmurhash3::hash("GetTwoTreasure"), GetThreeTreasure = murmurhash3::hash("GetThreeTreasure"), GetSword = murmurhash3::hash("GetSword"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_TreasureOfLamda_FierceDeity>&;
	};
	struct Step_TreasureOfLamda_Gerudo : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetTreasure = murmurhash3::hash("GetTreasure"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_TreasureOfLamda_Gerudo>&;
	};
	struct Step_TreasureOfLamda_Pirate : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetTreasure = murmurhash3::hash("GetTreasure"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_TreasureOfLamda_Pirate>&;
	};
	struct Step_Tribune01 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Tribune01>&;
	};
	struct Step_Tribune02 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Escape = murmurhash3::hash("Escape"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Tribune02>&;
	};
	struct Step_Tribune03 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Hearing = murmurhash3::hash("Hearing"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Tribune03>&;
	};
	struct Step_Tribune04 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Tribune04>&;
	};
	struct Step_Tribune05 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Carry = murmurhash3::hash("Carry"), Carry2 = murmurhash3::hash("Carry2"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Tribune05>&;
	};
	struct Step_Tribune06 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Tribune06>&;
	};
	struct Step_Tribune07 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), step1 = murmurhash3::hash("step1"), step2 = murmurhash3::hash("step2"), step4 = murmurhash3::hash("step4"), step5 = murmurhash3::hash("step5"), step6 = murmurhash3::hash("step6"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Tribune07>&;
	};
	struct Step_Tribune09 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), HorseTake = murmurhash3::hash("HorseTake"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Tribune09>&;
	};
	struct Step_Tribune10 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), TalkKokkko = murmurhash3::hash("TalkKokkko"), FirstOracle = murmurhash3::hash("FirstOracle"), TimeOverFirst = murmurhash3::hash("TimeOverFirst"), ClearFirst = murmurhash3::hash("ClearFirst"), FinishFirstTrial = murmurhash3::hash("FinishFirstTrial"), SecondOracle = murmurhash3::hash("SecondOracle"), TimeOverSecond = murmurhash3::hash("TimeOverSecond"), ClearSecond = murmurhash3::hash("ClearSecond"), Battle = murmurhash3::hash("Battle"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Tribune10>&;
	};
	struct Step_Tribune11 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Step3 = murmurhash3::hash("Step3"), Step4 = murmurhash3::hash("Step4"), Step5 = murmurhash3::hash("Step5"), Step6 = murmurhash3::hash("Step6"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Tribune11>&;
	};
	struct Step_Tribune13 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Chase = murmurhash3::hash("Chase"), Discovery = murmurhash3::hash("Discovery"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Tribune13>&;
	};
	struct Step_Tribune14 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Step3 = murmurhash3::hash("Step3"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Tribune14>&;
	};
	struct Step_Tribune16 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Arrival = murmurhash3::hash("Arrival"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Tribune16>&;
	};
	struct Step_Uotori_BreakthePirateBase : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Uotori_BreakthePirateBase>&;
	};
	struct Step_Uotori_Designer : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Uotori_Designer>&;
	};
	struct Step_Uotori_ResortPlan : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Contact = murmurhash3::hash("Contact"), Challenge = murmurhash3::hash("Challenge"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Uotori_ResortPlan>&;
	};
	struct Step_Uotori_RevivePlan : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CollectWood = murmurhash3::hash("CollectWood"), Revive = murmurhash3::hash("Revive"), Finale = murmurhash3::hash("Finale"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Uotori_RevivePlan>&;
	};
	struct Step_Uotori_WhiteLineGame : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Uotori_WhiteLineGame>&;
	};
	struct Step_UpgradeOfPurahPad1 : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), EventLightSpot = murmurhash3::hash("EventLightSpot"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_UpgradeOfPurahPad1>&;
	};
	struct Step_WantedCleaning : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_WantedCleaning>&;
	};
	struct Step_WashedAwayBusinessTools : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_WashedAwayBusinessTools>&;
	};
	struct Step_WaterBridgePlace : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), FindDrefan = murmurhash3::hash("FindDrefan"), SearchKingScales = murmurhash3::hash("SearchKingScales"), SearchWaterBridge = murmurhash3::hash("SearchWaterBridge"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_WaterBridgePlace>&;
	};
	struct Step_WellCollection : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_WellCollection>&;
	};
	struct Step_WhichIsStronger : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Step03 = murmurhash3::hash("Step03"), Step04 = murmurhash3::hash("Step04"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_WhichIsStronger>&;
	};
	struct Step_Zonau_GeniusWeapon : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Exchange = murmurhash3::hash("Exchange"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Zonau_GeniusWeapon>&;
	};
	struct Step_ZonauReliefSearch : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Reach_KakarikoVillage = murmurhash3::hash("Reach_KakarikoVillage"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_ZonauReliefSearch>&;
	};
	struct Step_Zora_Enemy_hunt : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Zora_Enemy_hunt>&;
	};
	struct Step_Zora_MessageBottle : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step0 = murmurhash3::hash("Step0"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), GetPrize = murmurhash3::hash("GetPrize"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Zora_MessageBottle>&;
	};
	struct Step_Zora_RuttaTreasure : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), TreasureHunt = murmurhash3::hash("TreasureHunt"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_Zora_RuttaTreasure>&;
	};
	struct Step_ZoraStatue_Picture : Tag::Enum {
		enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), TakePhoto = murmurhash3::hash("TakePhoto"), GetPrize = murmurhash3::hash("GetPrize"), Complete = murmurhash3::hash("Complete"), };
		using type = enum_t<Step_ZoraStatue_Picture>&;
	};
	struct AmiiboData;
	struct BowStand;
	struct ShieldStand;
	struct WeaponStand;
	struct CustomHouseTakeOutNum;
	struct DefeatedEnemyNum;
	struct HorseInnMemberPoint : Tag::Member { using type = s32&; };
	struct RaumiGolemAttachment;
	struct ValidPouchIndex : Tag::Member { using type = s32&; };
	struct WellCollectionRewardUnit : Tag::Member { using type = s32&; };
	struct WellDiscoverNumCurrent : Tag::Member { using type = s32&; };
	struct WellDiscoverNumLeft : Tag::Member { using type = s32&; };
	struct WellDiscoverNumTotal : Tag::Member { using type = s32&; };
	struct WellReportNum : Tag::Member { using type = s32&; };
	struct WellReportNumMinusOne : Tag::Member { using type = s32&; };
	struct WellReportNumThisTime : Tag::Member { using type = s32&; };
	struct World_CurrentDays : Tag::Member { using type = s32&; };
	struct World_CurrentHour : Tag::Member { using type = s32&; };
	struct World_CurrentMinute : Tag::Member { using type = s32&; };
	struct AlbumData;
	struct World_WeatherForecast : Tag::Member { using type = span<s32>*; };
	struct Sequence_CurrentBanc : Tag::Member { using type = string64*; };
	struct Playtime : Tag::Member { using type = u32&; };
	struct World_BloodyMoonTimer : Tag::Member { using type = u64&; };
	struct World_CurrentDateTime : Tag::Member { using type = u64&; };
	struct World_ZonauRespawnTimer : Tag::Member { using type = u64&; };
	struct World_PlayerPos : Tag::Member { using type = vec3f*; };
	struct World_ShootingStarPosition : Tag::Member { using type = vec3f*; };
	struct FigureCreateInfo;
};/* Tag::Structure GameData close */

#include "GameData/OwnedHorseList.hpp"
#include "GameData/DeadHorseList.hpp"
#include "GameData/AutoBuilder.hpp"
#include "GameData/FigureInfo.hpp"
#include "GameData/ActionGuide_IsNew.hpp"
#include "GameData/CheckPoint_IsDisplayFoliage.hpp"
#include "GameData/CustomHouse.hpp"
#include "GameData/DragonMemoryDataForUI.hpp"
#include "GameData/IsActivateCannon.hpp"
#include "GameData/IsAppearKorok.hpp"
#include "GameData/IsDefeatBossEnemy.hpp"
#include "GameData/IsFindTreasureMap.hpp"
#include "GameData/IsGetAdventureMemory.hpp"
#include "GameData/IsGetCaveMasterMedal.hpp"
#include "GameData/IsOpenCannon.hpp"
#include "GameData/IsVisitLocation.hpp"
#include "GameData/IsVisitLocationArea_CaveEntrance.hpp"
#include "GameData/KeyCrystalDungeonUnlocked.hpp"
#include "GameData/MapData.hpp"
#include "GameData/NpcGardenInfo.hpp"
#include "GameData/NpcGardenInfo_HatenoVillage023.hpp"
#include "GameData/NpcServeFood.hpp"
#include "GameData/OwnedCustomizableHorseTack_Reins.hpp"
#include "GameData/OwnedCustomizableHorseTack_Saddle.hpp"
#include "GameData/OwnedParasailPattern.hpp"
#include "GameData/PlayerStatus.hpp"
#include "GameData/ReadyMadeAutoBuilderDraft.hpp"
#include "GameData/RecycleBoxData.hpp"
#include "GameData/ReplaceblePicture.hpp"
#include "GameData/DongoList.hpp"
#include "GameData/DongoLocatorList.hpp"
#include "GameData/LightBallBud.hpp"
#include "GameData/Pouch.hpp"
#include "GameData/ArrivalPointState.hpp"
#include "GameData/ChallengeLogState_Challenge.hpp"
#include "GameData/DungeonState.hpp"
#include "GameData/KeyCrystalDungeonState.hpp"
#include "GameData/KorokCarryProgress.hpp"
#include "GameData/LastWildHorse.hpp"
#include "GameData/MaterialShortCut.hpp"
#include "GameData/PictureBookData.hpp"
#include "GameData/SortPattern.hpp"
#include "GameData/AmiiboData.hpp"
#include "GameData/BowStand.hpp"
#include "GameData/ShieldStand.hpp"
#include "GameData/WeaponStand.hpp"
#include "GameData/CustomHouseTakeOutNum.hpp"
#include "GameData/DefeatedEnemyNum.hpp"
#include "GameData/RaumiGolemAttachment.hpp"
#include "GameData/AlbumData.hpp"
#include "GameData/FigureCreateInfo.hpp"

template <> struct Data::Structure<GameData> : GameData {
	Structure<OwnedHorseList> OwnedHorseList;
	Structure<DeadHorseList> DeadHorseList;
	Structure<AutoBuilder> AutoBuilder;
	Structure<FigureInfo> FigureInfo;
	Structure<ActionGuide_IsNew> ActionGuide_IsNew;
	Structure<CheckPoint_IsDisplayFoliage> CheckPoint_IsDisplayFoliage;
	Structure<CustomHouse> CustomHouse;
	Structure<DragonMemoryDataForUI> DragonMemoryDataForUI;
	Structure<IsActivateCannon> IsActivateCannon;
	Structure<IsAppearKorok> IsAppearKorok;
	Structure<IsDefeatBossEnemy> IsDefeatBossEnemy;
	Structure<IsFindTreasureMap> IsFindTreasureMap;
	Structure<IsGetAdventureMemory> IsGetAdventureMemory;
	Structure<IsGetCaveMasterMedal> IsGetCaveMasterMedal;
	Structure<IsOpenCannon> IsOpenCannon;
	Structure<IsVisitLocation> IsVisitLocation;
	Structure<IsVisitLocationArea_CaveEntrance> IsVisitLocationArea_CaveEntrance;
	Structure<KeyCrystalDungeonUnlocked> KeyCrystalDungeonUnlocked;
	Structure<MapData> MapData;
	Structure<NpcGardenInfo> NpcGardenInfo;
	Structure<NpcGardenInfo_HatenoVillage023> NpcGardenInfo_HatenoVillage023;
	Structure<NpcServeFood> NpcServeFood;
	Member<NushiShop_MedalComplete> NushiShop_MedalComplete;
	Structure<OwnedCustomizableHorseTack_Reins> OwnedCustomizableHorseTack_Reins;
	Structure<OwnedCustomizableHorseTack_Saddle> OwnedCustomizableHorseTack_Saddle;
	Structure<OwnedParasailPattern> OwnedParasailPattern;
	Structure<PlayerStatus> PlayerStatus;
	Structure<ReadyMadeAutoBuilderDraft> ReadyMadeAutoBuilderDraft;
	Structure<RecycleBoxData> RecycleBoxData;
	Structure<ReplaceblePicture> ReplaceblePicture;
	Member<World_IsBloodyMoonDay> World_IsBloodyMoonDay;
	Member<World_IsZonauRespawnDay> World_IsZonauRespawnDay;
	Structure<DongoList> DongoList;
	Structure<DongoLocatorList> DongoLocatorList;
	Structure<LightBallBud> LightBallBud;
	Structure<Pouch> Pouch;
	Structure<ArrivalPointState> ArrivalPointState;
	Structure<ChallengeLogState_Challenge> ChallengeLogState_Challenge;
	Structure<DungeonState> DungeonState;
	Structure<KeyCrystalDungeonState> KeyCrystalDungeonState;
	Structure<KorokCarryProgress> KorokCarryProgress;
	Enum<LastTalkedOrchestraMemberStableHostel> LastTalkedOrchestraMemberStableHostel;
	Structure<LastWildHorse> LastWildHorse;
	Structure<MaterialShortCut> MaterialShortCut;
	Structure<PictureBookData> PictureBookData;
	Enum<SensorMode> SensorMode;
	Structure<SortPattern> SortPattern;
	Enum<Step_AisyaRescue> Step_AisyaRescue;
	Enum<Step_AmberCollector> Step_AmberCollector;
	Enum<Step_ArrowMeister_Momo> Step_ArrowMeister_Momo;
	Enum<Step_AssassinGerudoBase> Step_AssassinGerudoBase;
	Enum<Step_BallBring_MiniGame> Step_BallBring_MiniGame;
	Enum<Step_Basketball_MiniGame> Step_Basketball_MiniGame;
	Enum<Step_Big_Rotate> Step_Big_Rotate;
	Enum<Step_BirdManContest> Step_BirdManContest;
	Enum<Step_BlindRuinsTreasure> Step_BlindRuinsTreasure;
	Enum<Step_BlindRuinsTreasure_Gerudo> Step_BlindRuinsTreasure_Gerudo;
	Enum<Step_BlindRuinsTreasure_Goron> Step_BlindRuinsTreasure_Goron;
	Enum<Step_BlindRuinsTreasure_Rito> Step_BlindRuinsTreasure_Rito;
	Enum<Step_BlindRuinsTreasure_Zora> Step_BlindRuinsTreasure_Zora;
	Enum<Step_BuildHouse> Step_BuildHouse;
	Enum<Step_BuildingMaterialsTutorial> Step_BuildingMaterialsTutorial;
	Enum<Step_CarryGoronKid1> Step_CarryGoronKid1;
	Enum<Step_CarryGoronKid2> Step_CarryGoronKid2;
	Enum<Step_CarryStone> Step_CarryStone;
	Enum<Step_CarryToShrine01> Step_CarryToShrine01;
	Enum<Step_CarryToShrine02> Step_CarryToShrine02;
	Enum<Step_CarryToShrine03> Step_CarryToShrine03;
	Enum<Step_CarryToShrine05> Step_CarryToShrine05;
	Enum<Step_CarryToShrine06> Step_CarryToShrine06;
	Enum<Step_CarryToShrine07> Step_CarryToShrine07;
	Enum<Step_CarryToShrine08_Zora> Step_CarryToShrine08_Zora;
	Enum<Step_CarryToShrine09> Step_CarryToShrine09;
	Enum<Step_CarryToShrine10> Step_CarryToShrine10;
	Enum<Step_CarryToShrine11> Step_CarryToShrine11;
	Enum<Step_CarryToShrine12> Step_CarryToShrine12;
	Enum<Step_CarryToShrine13> Step_CarryToShrine13;
	Enum<Step_CarryToShrine14> Step_CarryToShrine14;
	Enum<Step_CarryToShrine15> Step_CarryToShrine15;
	Enum<Step_CarryToShrine16> Step_CarryToShrine16;
	Enum<Step_CarryToShrine17> Step_CarryToShrine17;
	Enum<Step_CarryToShrine19> Step_CarryToShrine19;
	Enum<Step_CarryToShrine20> Step_CarryToShrine20;
	Enum<Step_CarryToShrine21> Step_CarryToShrine21;
	Enum<Step_CarryToShrine22> Step_CarryToShrine22;
	Enum<Step_CarryToShrine23> Step_CarryToShrine23;
	Enum<Step_CDungeon_AllDone> Step_CDungeon_AllDone;
	Enum<Step_Circuit_Desert> Step_Circuit_Desert;
	Enum<Step_Circuit_FaronWoods_MiniGame> Step_Circuit_FaronWoods_MiniGame;
	Enum<Step_Circuit_Ichikara> Step_Circuit_Ichikara;
	Enum<Step_Circuit_Ichikara_MiniGame> Step_Circuit_Ichikara_MiniGame;
	Enum<Step_Circuit_Uotori_MiniGame> Step_Circuit_Uotori_MiniGame;
	Enum<Step_CleanStatue> Step_CleanStatue;
	Enum<Step_ClueTotheSixthSage> Step_ClueTotheSixthSage;
	Enum<Step_CollectObject_MiniGame> Step_CollectObject_MiniGame;
	Enum<Step_CollectObject_MiniGame_Cliff> Step_CollectObject_MiniGame_Cliff;
	Enum<Step_CollectObject_MiniGame_LakeSide> Step_CollectObject_MiniGame_LakeSide;
	Enum<Step_Connect_AkkareMaze> Step_Connect_AkkareMaze;
	Enum<Step_Connect_FirstIsland> Step_Connect_FirstIsland;
	Enum<Step_Connect_GerudoMaze> Step_Connect_GerudoMaze;
	Enum<Step_Connect_TabantaMaze> Step_Connect_TabantaMaze;
	Enum<Step_CookAtBaseCamp> Step_CookAtBaseCamp;
	Enum<Step_CraftShadowPicture> Step_CraftShadowPicture;
	Enum<Step_CreateArmor> Step_CreateArmor;
	Enum<Step_Createshinguard> Step_Createshinguard;
	Enum<Step_DeepHoleSurvey2> Step_DeepHoleSurvey2;
	Enum<Step_DefeatGanondorf> Step_DefeatGanondorf;
	Enum<Step_DefeatHugeEnemy_1> Step_DefeatHugeEnemy_1;
	Enum<Step_DefeatHugeEnemy_2> Step_DefeatHugeEnemy_2;
	Enum<Step_DefeatHugeEnemy_3> Step_DefeatHugeEnemy_3;
	Enum<Step_DefeatHugeEnemy_4> Step_DefeatHugeEnemy_4;
	Enum<Step_DefeatHugeEnemy_5> Step_DefeatHugeEnemy_5;
	Enum<Step_DefeatHugeEnemy_6> Step_DefeatHugeEnemy_6;
	Enum<Step_DevoteSpring> Step_DevoteSpring;
	Enum<Step_DividedSlate> Step_DividedSlate;
	Enum<Step_EightHeroStatues> Step_EightHeroStatues;
	Enum<Step_EightHeroStatues_After> Step_EightHeroStatues_After;
	Enum<Step_EveryonesMeal> Step_EveryonesMeal;
	Enum<Step_ExcavateFossil1> Step_ExcavateFossil1;
	Enum<Step_ExcavateFossil2> Step_ExcavateFossil2;
	Enum<Step_ExcavateFossil3> Step_ExcavateFossil3;
	Enum<Step_Fairy2> Step_Fairy2;
	Enum<Step_Fairy3> Step_Fairy3;
	Enum<Step_Fairy4> Step_Fairy4;
	Enum<Step_FindDrefan> Step_FindDrefan;
	Enum<Step_FindSunaNui> Step_FindSunaNui;
	Enum<Step_FindSunaNui2> Step_FindSunaNui2;
	Enum<Step_FindWhiteHorse> Step_FindWhiteHorse;
	Enum<Step_FindWithSensors> Step_FindWithSensors;
	Enum<Step_FirstskyislandReturns> Step_FirstskyislandReturns;
	Enum<Step_FullyRipenedFlintstones> Step_FullyRipenedFlintstones;
	Enum<Step_gather_Insect_Z> Step_gather_Insect_Z;
	Enum<Step_GeniusWeapon_Zora> Step_GeniusWeapon_Zora;
	Enum<Step_Genkos_Kitchen> Step_Genkos_Kitchen;
	Enum<Step_Gerudo_UrbosaWeapon> Step_Gerudo_UrbosaWeapon;
	Enum<Step_GerudoCanyon_24hEnduranceComparison> Step_GerudoCanyon_24hEnduranceComparison;
	Enum<Step_GerudoCanyon_Adventure> Step_GerudoCanyon_Adventure;
	Enum<Step_GerudoCanyon_ColdEnduranceComparison> Step_GerudoCanyon_ColdEnduranceComparison;
	Enum<Step_GerudoCanyon_GleeokLiver> Step_GerudoCanyon_GleeokLiver;
	Enum<Step_GerudoCanyon_TumbleweedSweep> Step_GerudoCanyon_TumbleweedSweep;
	Enum<Step_GerudoDesertTreasure> Step_GerudoDesertTreasure;
	Enum<Step_GetCamera> Step_GetCamera;
	Enum<Step_GetMasterSword> Step_GetMasterSword;
	Enum<Step_GetSensorPlus> Step_GetSensorPlus;
	Enum<Step_GetWalker> Step_GetWalker;
	Enum<Step_GetWarpMarker> Step_GetWarpMarker;
	Enum<Step_GiantHorse> Step_GiantHorse;
	Enum<Step_GoneSnowQueen> Step_GoneSnowQueen;
	Enum<Step_Goron_MiniGame_01> Step_Goron_MiniGame_01;
	Enum<Step_Goron_MiniGame_02> Step_Goron_MiniGame_02;
	Enum<Step_Goron_MiniGame_03> Step_Goron_MiniGame_03;
	Enum<Step_Goron_MiniGame_Tutorial_01> Step_Goron_MiniGame_Tutorial_01;
	Enum<Step_Goron_MiniGame_Tutorial_02> Step_Goron_MiniGame_Tutorial_02;
	Enum<Step_Goron_MiniGame_Tutorial_03> Step_Goron_MiniGame_Tutorial_03;
	Enum<Step_GoronPond> Step_GoronPond;
	Enum<Step_GoronReturntoNature> Step_GoronReturntoNature;
	Enum<Step_GotoFironeZonauRemains> Step_GotoFironeZonauRemains;
	Enum<Step_GOToTheCastleOfHyrule> Step_GOToTheCastleOfHyrule;
	Enum<Step_GroundPaintingAir01> Step_GroundPaintingAir01;
	Enum<Step_Hack_GuardGoods> Step_Hack_GuardGoods;
	Enum<Step_HammerGong_MiniGame> Step_HammerGong_MiniGame;
	Enum<Step_Hateno_Cheese> Step_Hateno_Cheese;
	Enum<Step_Hateno_CoolGuy> Step_Hateno_CoolGuy;
	Enum<Step_Hateno_FreshMilk> Step_Hateno_FreshMilk;
	Enum<Step_Hateno_LetUsElection> Step_Hateno_LetUsElection;
	Enum<Step_Hateno_NewCostume> Step_Hateno_NewCostume;
	Enum<Step_Hateno_NewSpecialty> Step_Hateno_NewSpecialty;
	Enum<Step_Hateno_RevitalizeByNewSpeciality> Step_Hateno_RevitalizeByNewSpeciality;
	Enum<Step_Hateno_SecretLifeOfKusayoshi> Step_Hateno_SecretLifeOfKusayoshi;
	Enum<Step_Hateno_SecretLifeOfSagono> Step_Hateno_SecretLifeOfSagono;
	Enum<Step_Hateno_TellMeTeacher01> Step_Hateno_TellMeTeacher01;
	Enum<Step_Hateno_TellMeTeacher02> Step_Hateno_TellMeTeacher02;
	Enum<Step_Hateno_VillageMayorElection> Step_Hateno_VillageMayorElection;
	Enum<Step_Hateno_WhatToPlant> Step_Hateno_WhatToPlant;
	Enum<Step_HatenoPurchasePicture> Step_HatenoPurchasePicture;
	Enum<Step_Hebra_SkyRingChallenge> Step_Hebra_SkyRingChallenge;
	Enum<Step_Hebra_SkyRingChallenge_MiniGame> Step_Hebra_SkyRingChallenge_MiniGame;
	Enum<Step_HorseInnChallenge001> Step_HorseInnChallenge001;
	Enum<Step_HorseInnChallenge002> Step_HorseInnChallenge002;
	Enum<Step_HorseInnChallenge003> Step_HorseInnChallenge003;
	Enum<Step_HorseInnChallenge005> Step_HorseInnChallenge005;
	Enum<Step_HorseInnChallenge007> Step_HorseInnChallenge007;
	Enum<Step_HotSpringEgg> Step_HotSpringEgg;
	Enum<Step_HourseInnChallenge004> Step_HourseInnChallenge004;
	Enum<Step_HuntSalmon> Step_HuntSalmon;
	Enum<Step_HyruleCastleIncident> Step_HyruleCastleIncident;
	Enum<Step_IceMaking> Step_IceMaking;
	Enum<Step_IchikaraChallenge01> Step_IchikaraChallenge01;
	Enum<Step_IchikaraChallenge03> Step_IchikaraChallenge03;
	Enum<Step_IchikaraCircuit_Tutorial> Step_IchikaraCircuit_Tutorial;
	Enum<Step_IchikaraDaughterPhoto> Step_IchikaraDaughterPhoto;
	Enum<Step_IllnessStartsWithFeelings> Step_IllnessStartsWithFeelings;
	Enum<Step_InfiltrationFromTheSky> Step_InfiltrationFromTheSky;
	Enum<Step_InnNeverReturns> Step_InnNeverReturns;
	Enum<Step_JobSunazarashi> Step_JobSunazarashi;
	Enum<Step_Know_FourStonePlates> Step_Know_FourStonePlates;
	Enum<Step_KokkoGuidePost> Step_KokkoGuidePost;
	Enum<Step_Korok_CarryToShrine> Step_Korok_CarryToShrine;
	Enum<Step_Lodge_Chemical001> Step_Lodge_Chemical001;
	Enum<Step_LookingForLightSpot> Step_LookingForLightSpot;
	Enum<Step_LookingForTheVoiceLord> Step_LookingForTheVoiceLord;
	Enum<Step_Mack_SecretBase> Step_Mack_SecretBase;
	Enum<Step_MainChallenge> Step_MainChallenge;
	Enum<Step_MakeAChampionsWeapon_Goron> Step_MakeAChampionsWeapon_Goron;
	Enum<Step_MakeChemicalWeapon> Step_MakeChemicalWeapon;
	Enum<Step_MasterSwordClues> Step_MasterSwordClues;
	Enum<Step_MeatRock> Step_MeatRock;
	Enum<Step_MemoryOfTheDragon> Step_MemoryOfTheDragon;
	Enum<Step_Mercenary_Akkare_Bloody> Step_Mercenary_Akkare_Bloody;
	Enum<Step_Mercenary_Eldin_Bloody> Step_Mercenary_Eldin_Bloody;
	Enum<Step_Mercenary_Firone_Bloody> Step_Mercenary_Firone_Bloody;
	Enum<Step_Mercenary_Hateru_Bloody> Step_Mercenary_Hateru_Bloody;
	Enum<Step_Mercenary_Hebra_Bloody> Step_Mercenary_Hebra_Bloody;
	Enum<Step_Mercenary_HyrulePlain_Bloody> Step_Mercenary_HyrulePlain_Bloody;
	Enum<Step_MercenaryChallenge_Akkare> Step_MercenaryChallenge_Akkare;
	Enum<Step_MercenaryChallenge_Eldin> Step_MercenaryChallenge_Eldin;
	Enum<Step_MercenaryChallenge_Firone> Step_MercenaryChallenge_Firone;
	Enum<Step_MercenaryChallenge_Hateru> Step_MercenaryChallenge_Hateru;
	Enum<Step_MercenaryChallenge_Hebra> Step_MercenaryChallenge_Hebra;
	Enum<Step_MercenaryChallenge_HyrulePlain> Step_MercenaryChallenge_HyrulePlain;
	Enum<Step_MessageBottle_SOS> Step_MessageBottle_SOS;
	Enum<Step_MinusYiga> Step_MinusYiga;
	Enum<Step_MonsterFigures01> Step_MonsterFigures01;
	Enum<Step_MonsterFigures02> Step_MonsterFigures02;
	Enum<Step_MonsterFigures03> Step_MonsterFigures03;
	Enum<Step_MonsterFigures04> Step_MonsterFigures04;
	Enum<Step_MonsterFigures05> Step_MonsterFigures05;
	Enum<Step_MushroomSisters_1> Step_MushroomSisters_1;
	Enum<Step_MushroomSisters_2> Step_MushroomSisters_2;
	Enum<Step_MushroomSisters_3> Step_MushroomSisters_3;
	Enum<Step_Nazley_DigCave> Step_Nazley_DigCave;
	Enum<Step_Neck_IceWaterCave> Step_Neck_IceWaterCave;
	Enum<Step_NewCanyonMissingPersonsCase> Step_NewCanyonMissingPersonsCase;
	Enum<Step_NewsPaper_Mitsuba> Step_NewsPaper_Mitsuba;
	Enum<Step_NoTrespassing> Step_NoTrespassing;
	Enum<Step_NowInTheVillageOfLurelin> Step_NowInTheVillageOfLurelin;
	Enum<Step_Npc_BaseCamp_Assistant_ReactingStatue> Step_Npc_BaseCamp_Assistant_ReactingStatue;
	Enum<Step_Npc_BaseCamp_Assistant_ReactingStatue2> Step_Npc_BaseCamp_Assistant_ReactingStatue2;
	Enum<Step_Npc_BaseCamp_Assistant_ReactingStatue3> Step_Npc_BaseCamp_Assistant_ReactingStatue3;
	Enum<Step_Npc_BaseCamp_Assistant_ReactingStatue4> Step_Npc_BaseCamp_Assistant_ReactingStatue4;
	Enum<Step_NushiShop_Challenge00> Step_NushiShop_Challenge00;
	Enum<Step_NushiShop_Tutorial> Step_NushiShop_Tutorial;
	Enum<Step_OldKorokHelp> Step_OldKorokHelp;
	Enum<Step_Orchestra01> Step_Orchestra01;
	Enum<Step_Orchestra02> Step_Orchestra02;
	Enum<Step_Orchestra03> Step_Orchestra03;
	Enum<Step_Orchestra04> Step_Orchestra04;
	Enum<Step_Our_Treasure> Step_Our_Treasure;
	Enum<Step_Parasail_ChuchuDesign> Step_Parasail_ChuchuDesign;
	Enum<Step_PhotoSpot_Challenge_01> Step_PhotoSpot_Challenge_01;
	Enum<Step_PhotoSpot_Challenge_02> Step_PhotoSpot_Challenge_02;
	Enum<Step_PhotoSpot_Challenge_03> Step_PhotoSpot_Challenge_03;
	Enum<Step_PhotoSpot_Challenge_04> Step_PhotoSpot_Challenge_04;
	Enum<Step_PhotoSpot_Challenge_05> Step_PhotoSpot_Challenge_05;
	Enum<Step_PhotoSpot_Challenge_06> Step_PhotoSpot_Challenge_06;
	Enum<Step_PhotoSpot_Challenge_07> Step_PhotoSpot_Challenge_07;
	Enum<Step_PhotoSpot_Challenge_08> Step_PhotoSpot_Challenge_08;
	Enum<Step_PhotoSpot_Challenge_09> Step_PhotoSpot_Challenge_09;
	Enum<Step_PhotoSpot_Challenge_09_2> Step_PhotoSpot_Challenge_09_2;
	Enum<Step_PhotoSpot_Challenge_10> Step_PhotoSpot_Challenge_10;
	Enum<Step_PhotoSpot_Challenge_11> Step_PhotoSpot_Challenge_11;
	Enum<Step_PhotoSpot_Challenge_12> Step_PhotoSpot_Challenge_12;
	Enum<Step_PhotoSpot_Challenge_13> Step_PhotoSpot_Challenge_13;
	Enum<Step_PhotoSpot_Challenge_14> Step_PhotoSpot_Challenge_14;
	Enum<Step_Raise_GoddesStatue> Step_Raise_GoddesStatue;
	Enum<Step_Raise_GoddesStatue_Courage> Step_Raise_GoddesStatue_Courage;
	Enum<Step_Raise_GoddesStatue_Power> Step_Raise_GoddesStatue_Power;
	Enum<Step_Raise_GoddesStatue_Wisdom> Step_Raise_GoddesStatue_Wisdom;
	Enum<Step_RepairArmor> Step_RepairArmor;
	Enum<Step_RescueHost> Step_RescueHost;
	Enum<Step_RescueVehicle01> Step_RescueVehicle01;
	Enum<Step_RescueWell> Step_RescueWell;
	Enum<Step_ResearchEldin> Step_ResearchEldin;
	Enum<Step_ResearchLanayru> Step_ResearchLanayru;
	Enum<Step_RestaurantInTheWell> Step_RestaurantInTheWell;
	Enum<Step_Rito_ItemExchange> Step_Rito_ItemExchange;
	Enum<Step_Rito_MedoArmor> Step_Rito_MedoArmor;
	Enum<Step_Rito_RevaliWeapon> Step_Rito_RevaliWeapon;
	Enum<Step_Rito_ShadowCave> Step_Rito_ShadowCave;
	Enum<Step_RitoBridgeRepair> Step_RitoBridgeRepair;
	Enum<Step_SageOfFire> Step_SageOfFire;
	Enum<Step_SageOfGerudo> Step_SageOfGerudo;
	Enum<Step_SageOfSky> Step_SageOfSky;
	Enum<Step_SageOfSoul> Step_SageOfSoul;
	Enum<Step_SageOfWind> Step_SageOfWind;
	Enum<Step_SageOfZora> Step_SageOfZora;
	Enum<Step_SaihateSubjugation> Step_SaihateSubjugation;
	Enum<Step_SearchCaravan> Step_SearchCaravan;
	Enum<Step_SecretBase_MiniGame> Step_SecretBase_MiniGame;
	Enum<Step_ShieldSurfing_MiniGame> Step_ShieldSurfing_MiniGame;
	Enum<Step_SkyIsland_MiniGame_01> Step_SkyIsland_MiniGame_01;
	Enum<Step_SkyIsland_MiniGame_02> Step_SkyIsland_MiniGame_02;
	Enum<Step_SkyIsland_MiniGame_03> Step_SkyIsland_MiniGame_03;
	Enum<Step_SnowyMountain_Surfing> Step_SnowyMountain_Surfing;
	Enum<Step_StatueDevilTutorial> Step_StatueDevilTutorial;
	Enum<Step_SurveyOfFourVillages> Step_SurveyOfFourVillages;
	Enum<Step_TakeAnimals> Step_TakeAnimals;
	Enum<Step_TakeOfIce> Step_TakeOfIce;
	Enum<Step_TauraChallenge001> Step_TauraChallenge001;
	Enum<Step_TheStrongestWeapon> Step_TheStrongestWeapon;
	Enum<Step_TreasureHunt_kokiri> Step_TreasureHunt_kokiri;
	Enum<Step_TreasureOfLambda> Step_TreasureOfLambda;
	Enum<Step_TreasureOfLamda_Dream> Step_TreasureOfLamda_Dream;
	Enum<Step_TreasureOfLamda_Dream2> Step_TreasureOfLamda_Dream2;
	Enum<Step_TreasureOfLamda_Dream3> Step_TreasureOfLamda_Dream3;
	Enum<Step_TreasureOfLamda_DuelPeak> Step_TreasureOfLamda_DuelPeak;
	Enum<Step_TreasureOfLamda_FierceDeity> Step_TreasureOfLamda_FierceDeity;
	Enum<Step_TreasureOfLamda_Gerudo> Step_TreasureOfLamda_Gerudo;
	Enum<Step_TreasureOfLamda_Pirate> Step_TreasureOfLamda_Pirate;
	Enum<Step_Tribune01> Step_Tribune01;
	Enum<Step_Tribune02> Step_Tribune02;
	Enum<Step_Tribune03> Step_Tribune03;
	Enum<Step_Tribune04> Step_Tribune04;
	Enum<Step_Tribune05> Step_Tribune05;
	Enum<Step_Tribune06> Step_Tribune06;
	Enum<Step_Tribune07> Step_Tribune07;
	Enum<Step_Tribune09> Step_Tribune09;
	Enum<Step_Tribune10> Step_Tribune10;
	Enum<Step_Tribune11> Step_Tribune11;
	Enum<Step_Tribune13> Step_Tribune13;
	Enum<Step_Tribune14> Step_Tribune14;
	Enum<Step_Tribune16> Step_Tribune16;
	Enum<Step_Uotori_BreakthePirateBase> Step_Uotori_BreakthePirateBase;
	Enum<Step_Uotori_Designer> Step_Uotori_Designer;
	Enum<Step_Uotori_ResortPlan> Step_Uotori_ResortPlan;
	Enum<Step_Uotori_RevivePlan> Step_Uotori_RevivePlan;
	Enum<Step_Uotori_WhiteLineGame> Step_Uotori_WhiteLineGame;
	Enum<Step_UpgradeOfPurahPad1> Step_UpgradeOfPurahPad1;
	Enum<Step_WantedCleaning> Step_WantedCleaning;
	Enum<Step_WashedAwayBusinessTools> Step_WashedAwayBusinessTools;
	Enum<Step_WaterBridgePlace> Step_WaterBridgePlace;
	Enum<Step_WellCollection> Step_WellCollection;
	Enum<Step_WhichIsStronger> Step_WhichIsStronger;
	Enum<Step_Zonau_GeniusWeapon> Step_Zonau_GeniusWeapon;
	Enum<Step_ZonauReliefSearch> Step_ZonauReliefSearch;
	Enum<Step_Zora_Enemy_hunt> Step_Zora_Enemy_hunt;
	Enum<Step_Zora_MessageBottle> Step_Zora_MessageBottle;
	Enum<Step_Zora_RuttaTreasure> Step_Zora_RuttaTreasure;
	Enum<Step_ZoraStatue_Picture> Step_ZoraStatue_Picture;
	Structure<AmiiboData> AmiiboData;
	Structure<BowStand> BowStand;
	Structure<ShieldStand> ShieldStand;
	Structure<WeaponStand> WeaponStand;
	Structure<CustomHouseTakeOutNum> CustomHouseTakeOutNum;
	Structure<DefeatedEnemyNum> DefeatedEnemyNum;
	Member<HorseInnMemberPoint> HorseInnMemberPoint;
	Structure<RaumiGolemAttachment> RaumiGolemAttachment;
	Member<ValidPouchIndex> ValidPouchIndex;
	Member<WellCollectionRewardUnit> WellCollectionRewardUnit;
	Member<WellDiscoverNumCurrent> WellDiscoverNumCurrent;
	Member<WellDiscoverNumLeft> WellDiscoverNumLeft;
	Member<WellDiscoverNumTotal> WellDiscoverNumTotal;
	Member<WellReportNum> WellReportNum;
	Member<WellReportNumMinusOne> WellReportNumMinusOne;
	Member<WellReportNumThisTime> WellReportNumThisTime;
	Member<World_CurrentDays> World_CurrentDays;
	Member<World_CurrentHour> World_CurrentHour;
	Member<World_CurrentMinute> World_CurrentMinute;
	Structure<AlbumData> AlbumData;
	Member<World_WeatherForecast> World_WeatherForecast;
	Member<Sequence_CurrentBanc> Sequence_CurrentBanc;
	Member<Playtime> Playtime;
	Member<World_BloodyMoonTimer> World_BloodyMoonTimer;
	Member<World_CurrentDateTime> World_CurrentDateTime;
	Member<World_ZonauRespawnTimer> World_ZonauRespawnTimer;
	Member<World_PlayerPos> World_PlayerPos;
	Member<World_ShootingStarPosition> World_ShootingStarPosition;
	Structure<FigureCreateInfo> FigureCreateInfo;
	
	explicit Structure(Sav& s) : 
		OwnedHorseList { s },
		DeadHorseList { s },
		AutoBuilder { s },
		FigureInfo { s },
		ActionGuide_IsNew { s },
		CheckPoint_IsDisplayFoliage { s },
		CustomHouse { s },
		DragonMemoryDataForUI { s },
		IsActivateCannon { s },
		IsAppearKorok { s },
		IsDefeatBossEnemy { s },
		IsFindTreasureMap { s },
		IsGetAdventureMemory { s },
		IsGetCaveMasterMedal { s },
		IsOpenCannon { s },
		IsVisitLocation { s },
		IsVisitLocationArea_CaveEntrance { s },
		KeyCrystalDungeonUnlocked { s },
		MapData { s },
		NpcGardenInfo { s },
		NpcGardenInfo_HatenoVillage023 { s },
		NpcServeFood { s },
		NushiShop_MedalComplete { s.get<struct NushiShop_MedalComplete>() },
		OwnedCustomizableHorseTack_Reins { s },
		OwnedCustomizableHorseTack_Saddle { s },
		OwnedParasailPattern { s },
		PlayerStatus { s },
		ReadyMadeAutoBuilderDraft { s },
		RecycleBoxData { s },
		ReplaceblePicture { s },
		World_IsBloodyMoonDay { s.get<struct World_IsBloodyMoonDay>() },
		World_IsZonauRespawnDay { s.get<struct World_IsZonauRespawnDay>() },
		DongoList { s },
		DongoLocatorList { s },
		LightBallBud { s },
		Pouch { s },
		ArrivalPointState { s },
		ChallengeLogState_Challenge { s },
		DungeonState { s },
		KeyCrystalDungeonState { s },
		KorokCarryProgress { s },
		LastTalkedOrchestraMemberStableHostel { s.get<struct LastTalkedOrchestraMemberStableHostel>() },
		LastWildHorse { s },
		MaterialShortCut { s },
		PictureBookData { s },
		SensorMode { s.get<struct SensorMode>() },
		SortPattern { s },
		Step_AisyaRescue { s.get<struct Step_AisyaRescue>() },
		Step_AmberCollector { s.get<struct Step_AmberCollector>() },
		Step_ArrowMeister_Momo { s.get<struct Step_ArrowMeister_Momo>() },
		Step_AssassinGerudoBase { s.get<struct Step_AssassinGerudoBase>() },
		Step_BallBring_MiniGame { s.get<struct Step_BallBring_MiniGame>() },
		Step_Basketball_MiniGame { s.get<struct Step_Basketball_MiniGame>() },
		Step_Big_Rotate { s.get<struct Step_Big_Rotate>() },
		Step_BirdManContest { s.get<struct Step_BirdManContest>() },
		Step_BlindRuinsTreasure { s.get<struct Step_BlindRuinsTreasure>() },
		Step_BlindRuinsTreasure_Gerudo { s.get<struct Step_BlindRuinsTreasure_Gerudo>() },
		Step_BlindRuinsTreasure_Goron { s.get<struct Step_BlindRuinsTreasure_Goron>() },
		Step_BlindRuinsTreasure_Rito { s.get<struct Step_BlindRuinsTreasure_Rito>() },
		Step_BlindRuinsTreasure_Zora { s.get<struct Step_BlindRuinsTreasure_Zora>() },
		Step_BuildHouse { s.get<struct Step_BuildHouse>() },
		Step_BuildingMaterialsTutorial { s.get<struct Step_BuildingMaterialsTutorial>() },
		Step_CarryGoronKid1 { s.get<struct Step_CarryGoronKid1>() },
		Step_CarryGoronKid2 { s.get<struct Step_CarryGoronKid2>() },
		Step_CarryStone { s.get<struct Step_CarryStone>() },
		Step_CarryToShrine01 { s.get<struct Step_CarryToShrine01>() },
		Step_CarryToShrine02 { s.get<struct Step_CarryToShrine02>() },
		Step_CarryToShrine03 { s.get<struct Step_CarryToShrine03>() },
		Step_CarryToShrine05 { s.get<struct Step_CarryToShrine05>() },
		Step_CarryToShrine06 { s.get<struct Step_CarryToShrine06>() },
		Step_CarryToShrine07 { s.get<struct Step_CarryToShrine07>() },
		Step_CarryToShrine08_Zora { s.get<struct Step_CarryToShrine08_Zora>() },
		Step_CarryToShrine09 { s.get<struct Step_CarryToShrine09>() },
		Step_CarryToShrine10 { s.get<struct Step_CarryToShrine10>() },
		Step_CarryToShrine11 { s.get<struct Step_CarryToShrine11>() },
		Step_CarryToShrine12 { s.get<struct Step_CarryToShrine12>() },
		Step_CarryToShrine13 { s.get<struct Step_CarryToShrine13>() },
		Step_CarryToShrine14 { s.get<struct Step_CarryToShrine14>() },
		Step_CarryToShrine15 { s.get<struct Step_CarryToShrine15>() },
		Step_CarryToShrine16 { s.get<struct Step_CarryToShrine16>() },
		Step_CarryToShrine17 { s.get<struct Step_CarryToShrine17>() },
		Step_CarryToShrine19 { s.get<struct Step_CarryToShrine19>() },
		Step_CarryToShrine20 { s.get<struct Step_CarryToShrine20>() },
		Step_CarryToShrine21 { s.get<struct Step_CarryToShrine21>() },
		Step_CarryToShrine22 { s.get<struct Step_CarryToShrine22>() },
		Step_CarryToShrine23 { s.get<struct Step_CarryToShrine23>() },
		Step_CDungeon_AllDone { s.get<struct Step_CDungeon_AllDone>() },
		Step_Circuit_Desert { s.get<struct Step_Circuit_Desert>() },
		Step_Circuit_FaronWoods_MiniGame { s.get<struct Step_Circuit_FaronWoods_MiniGame>() },
		Step_Circuit_Ichikara { s.get<struct Step_Circuit_Ichikara>() },
		Step_Circuit_Ichikara_MiniGame { s.get<struct Step_Circuit_Ichikara_MiniGame>() },
		Step_Circuit_Uotori_MiniGame { s.get<struct Step_Circuit_Uotori_MiniGame>() },
		Step_CleanStatue { s.get<struct Step_CleanStatue>() },
		Step_ClueTotheSixthSage { s.get<struct Step_ClueTotheSixthSage>() },
		Step_CollectObject_MiniGame { s.get<struct Step_CollectObject_MiniGame>() },
		Step_CollectObject_MiniGame_Cliff { s.get<struct Step_CollectObject_MiniGame_Cliff>() },
		Step_CollectObject_MiniGame_LakeSide { s.get<struct Step_CollectObject_MiniGame_LakeSide>() },
		Step_Connect_AkkareMaze { s.get<struct Step_Connect_AkkareMaze>() },
		Step_Connect_FirstIsland { s.get<struct Step_Connect_FirstIsland>() },
		Step_Connect_GerudoMaze { s.get<struct Step_Connect_GerudoMaze>() },
		Step_Connect_TabantaMaze { s.get<struct Step_Connect_TabantaMaze>() },
		Step_CookAtBaseCamp { s.get<struct Step_CookAtBaseCamp>() },
		Step_CraftShadowPicture { s.get<struct Step_CraftShadowPicture>() },
		Step_CreateArmor { s.get<struct Step_CreateArmor>() },
		Step_Createshinguard { s.get<struct Step_Createshinguard>() },
		Step_DeepHoleSurvey2 { s.get<struct Step_DeepHoleSurvey2>() },
		Step_DefeatGanondorf { s.get<struct Step_DefeatGanondorf>() },
		Step_DefeatHugeEnemy_1 { s.get<struct Step_DefeatHugeEnemy_1>() },
		Step_DefeatHugeEnemy_2 { s.get<struct Step_DefeatHugeEnemy_2>() },
		Step_DefeatHugeEnemy_3 { s.get<struct Step_DefeatHugeEnemy_3>() },
		Step_DefeatHugeEnemy_4 { s.get<struct Step_DefeatHugeEnemy_4>() },
		Step_DefeatHugeEnemy_5 { s.get<struct Step_DefeatHugeEnemy_5>() },
		Step_DefeatHugeEnemy_6 { s.get<struct Step_DefeatHugeEnemy_6>() },
		Step_DevoteSpring { s.get<struct Step_DevoteSpring>() },
		Step_DividedSlate { s.get<struct Step_DividedSlate>() },
		Step_EightHeroStatues { s.get<struct Step_EightHeroStatues>() },
		Step_EightHeroStatues_After { s.get<struct Step_EightHeroStatues_After>() },
		Step_EveryonesMeal { s.get<struct Step_EveryonesMeal>() },
		Step_ExcavateFossil1 { s.get<struct Step_ExcavateFossil1>() },
		Step_ExcavateFossil2 { s.get<struct Step_ExcavateFossil2>() },
		Step_ExcavateFossil3 { s.get<struct Step_ExcavateFossil3>() },
		Step_Fairy2 { s.get<struct Step_Fairy2>() },
		Step_Fairy3 { s.get<struct Step_Fairy3>() },
		Step_Fairy4 { s.get<struct Step_Fairy4>() },
		Step_FindDrefan { s.get<struct Step_FindDrefan>() },
		Step_FindSunaNui { s.get<struct Step_FindSunaNui>() },
		Step_FindSunaNui2 { s.get<struct Step_FindSunaNui2>() },
		Step_FindWhiteHorse { s.get<struct Step_FindWhiteHorse>() },
		Step_FindWithSensors { s.get<struct Step_FindWithSensors>() },
		Step_FirstskyislandReturns { s.get<struct Step_FirstskyislandReturns>() },
		Step_FullyRipenedFlintstones { s.get<struct Step_FullyRipenedFlintstones>() },
		Step_gather_Insect_Z { s.get<struct Step_gather_Insect_Z>() },
		Step_GeniusWeapon_Zora { s.get<struct Step_GeniusWeapon_Zora>() },
		Step_Genkos_Kitchen { s.get<struct Step_Genkos_Kitchen>() },
		Step_Gerudo_UrbosaWeapon { s.get<struct Step_Gerudo_UrbosaWeapon>() },
		Step_GerudoCanyon_24hEnduranceComparison { s.get<struct Step_GerudoCanyon_24hEnduranceComparison>() },
		Step_GerudoCanyon_Adventure { s.get<struct Step_GerudoCanyon_Adventure>() },
		Step_GerudoCanyon_ColdEnduranceComparison { s.get<struct Step_GerudoCanyon_ColdEnduranceComparison>() },
		Step_GerudoCanyon_GleeokLiver { s.get<struct Step_GerudoCanyon_GleeokLiver>() },
		Step_GerudoCanyon_TumbleweedSweep { s.get<struct Step_GerudoCanyon_TumbleweedSweep>() },
		Step_GerudoDesertTreasure { s.get<struct Step_GerudoDesertTreasure>() },
		Step_GetCamera { s.get<struct Step_GetCamera>() },
		Step_GetMasterSword { s.get<struct Step_GetMasterSword>() },
		Step_GetSensorPlus { s.get<struct Step_GetSensorPlus>() },
		Step_GetWalker { s.get<struct Step_GetWalker>() },
		Step_GetWarpMarker { s.get<struct Step_GetWarpMarker>() },
		Step_GiantHorse { s.get<struct Step_GiantHorse>() },
		Step_GoneSnowQueen { s.get<struct Step_GoneSnowQueen>() },
		Step_Goron_MiniGame_01 { s.get<struct Step_Goron_MiniGame_01>() },
		Step_Goron_MiniGame_02 { s.get<struct Step_Goron_MiniGame_02>() },
		Step_Goron_MiniGame_03 { s.get<struct Step_Goron_MiniGame_03>() },
		Step_Goron_MiniGame_Tutorial_01 { s.get<struct Step_Goron_MiniGame_Tutorial_01>() },
		Step_Goron_MiniGame_Tutorial_02 { s.get<struct Step_Goron_MiniGame_Tutorial_02>() },
		Step_Goron_MiniGame_Tutorial_03 { s.get<struct Step_Goron_MiniGame_Tutorial_03>() },
		Step_GoronPond { s.get<struct Step_GoronPond>() },
		Step_GoronReturntoNature { s.get<struct Step_GoronReturntoNature>() },
		Step_GotoFironeZonauRemains { s.get<struct Step_GotoFironeZonauRemains>() },
		Step_GOToTheCastleOfHyrule { s.get<struct Step_GOToTheCastleOfHyrule>() },
		Step_GroundPaintingAir01 { s.get<struct Step_GroundPaintingAir01>() },
		Step_Hack_GuardGoods { s.get<struct Step_Hack_GuardGoods>() },
		Step_HammerGong_MiniGame { s.get<struct Step_HammerGong_MiniGame>() },
		Step_Hateno_Cheese { s.get<struct Step_Hateno_Cheese>() },
		Step_Hateno_CoolGuy { s.get<struct Step_Hateno_CoolGuy>() },
		Step_Hateno_FreshMilk { s.get<struct Step_Hateno_FreshMilk>() },
		Step_Hateno_LetUsElection { s.get<struct Step_Hateno_LetUsElection>() },
		Step_Hateno_NewCostume { s.get<struct Step_Hateno_NewCostume>() },
		Step_Hateno_NewSpecialty { s.get<struct Step_Hateno_NewSpecialty>() },
		Step_Hateno_RevitalizeByNewSpeciality { s.get<struct Step_Hateno_RevitalizeByNewSpeciality>() },
		Step_Hateno_SecretLifeOfKusayoshi { s.get<struct Step_Hateno_SecretLifeOfKusayoshi>() },
		Step_Hateno_SecretLifeOfSagono { s.get<struct Step_Hateno_SecretLifeOfSagono>() },
		Step_Hateno_TellMeTeacher01 { s.get<struct Step_Hateno_TellMeTeacher01>() },
		Step_Hateno_TellMeTeacher02 { s.get<struct Step_Hateno_TellMeTeacher02>() },
		Step_Hateno_VillageMayorElection { s.get<struct Step_Hateno_VillageMayorElection>() },
		Step_Hateno_WhatToPlant { s.get<struct Step_Hateno_WhatToPlant>() },
		Step_HatenoPurchasePicture { s.get<struct Step_HatenoPurchasePicture>() },
		Step_Hebra_SkyRingChallenge { s.get<struct Step_Hebra_SkyRingChallenge>() },
		Step_Hebra_SkyRingChallenge_MiniGame { s.get<struct Step_Hebra_SkyRingChallenge_MiniGame>() },
		Step_HorseInnChallenge001 { s.get<struct Step_HorseInnChallenge001>() },
		Step_HorseInnChallenge002 { s.get<struct Step_HorseInnChallenge002>() },
		Step_HorseInnChallenge003 { s.get<struct Step_HorseInnChallenge003>() },
		Step_HorseInnChallenge005 { s.get<struct Step_HorseInnChallenge005>() },
		Step_HorseInnChallenge007 { s.get<struct Step_HorseInnChallenge007>() },
		Step_HotSpringEgg { s.get<struct Step_HotSpringEgg>() },
		Step_HourseInnChallenge004 { s.get<struct Step_HourseInnChallenge004>() },
		Step_HuntSalmon { s.get<struct Step_HuntSalmon>() },
		Step_HyruleCastleIncident { s.get<struct Step_HyruleCastleIncident>() },
		Step_IceMaking { s.get<struct Step_IceMaking>() },
		Step_IchikaraChallenge01 { s.get<struct Step_IchikaraChallenge01>() },
		Step_IchikaraChallenge03 { s.get<struct Step_IchikaraChallenge03>() },
		Step_IchikaraCircuit_Tutorial { s.get<struct Step_IchikaraCircuit_Tutorial>() },
		Step_IchikaraDaughterPhoto { s.get<struct Step_IchikaraDaughterPhoto>() },
		Step_IllnessStartsWithFeelings { s.get<struct Step_IllnessStartsWithFeelings>() },
		Step_InfiltrationFromTheSky { s.get<struct Step_InfiltrationFromTheSky>() },
		Step_InnNeverReturns { s.get<struct Step_InnNeverReturns>() },
		Step_JobSunazarashi { s.get<struct Step_JobSunazarashi>() },
		Step_Know_FourStonePlates { s.get<struct Step_Know_FourStonePlates>() },
		Step_KokkoGuidePost { s.get<struct Step_KokkoGuidePost>() },
		Step_Korok_CarryToShrine { s.get<struct Step_Korok_CarryToShrine>() },
		Step_Lodge_Chemical001 { s.get<struct Step_Lodge_Chemical001>() },
		Step_LookingForLightSpot { s.get<struct Step_LookingForLightSpot>() },
		Step_LookingForTheVoiceLord { s.get<struct Step_LookingForTheVoiceLord>() },
		Step_Mack_SecretBase { s.get<struct Step_Mack_SecretBase>() },
		Step_MainChallenge { s.get<struct Step_MainChallenge>() },
		Step_MakeAChampionsWeapon_Goron { s.get<struct Step_MakeAChampionsWeapon_Goron>() },
		Step_MakeChemicalWeapon { s.get<struct Step_MakeChemicalWeapon>() },
		Step_MasterSwordClues { s.get<struct Step_MasterSwordClues>() },
		Step_MeatRock { s.get<struct Step_MeatRock>() },
		Step_MemoryOfTheDragon { s.get<struct Step_MemoryOfTheDragon>() },
		Step_Mercenary_Akkare_Bloody { s.get<struct Step_Mercenary_Akkare_Bloody>() },
		Step_Mercenary_Eldin_Bloody { s.get<struct Step_Mercenary_Eldin_Bloody>() },
		Step_Mercenary_Firone_Bloody { s.get<struct Step_Mercenary_Firone_Bloody>() },
		Step_Mercenary_Hateru_Bloody { s.get<struct Step_Mercenary_Hateru_Bloody>() },
		Step_Mercenary_Hebra_Bloody { s.get<struct Step_Mercenary_Hebra_Bloody>() },
		Step_Mercenary_HyrulePlain_Bloody { s.get<struct Step_Mercenary_HyrulePlain_Bloody>() },
		Step_MercenaryChallenge_Akkare { s.get<struct Step_MercenaryChallenge_Akkare>() },
		Step_MercenaryChallenge_Eldin { s.get<struct Step_MercenaryChallenge_Eldin>() },
		Step_MercenaryChallenge_Firone { s.get<struct Step_MercenaryChallenge_Firone>() },
		Step_MercenaryChallenge_Hateru { s.get<struct Step_MercenaryChallenge_Hateru>() },
		Step_MercenaryChallenge_Hebra { s.get<struct Step_MercenaryChallenge_Hebra>() },
		Step_MercenaryChallenge_HyrulePlain { s.get<struct Step_MercenaryChallenge_HyrulePlain>() },
		Step_MessageBottle_SOS { s.get<struct Step_MessageBottle_SOS>() },
		Step_MinusYiga { s.get<struct Step_MinusYiga>() },
		Step_MonsterFigures01 { s.get<struct Step_MonsterFigures01>() },
		Step_MonsterFigures02 { s.get<struct Step_MonsterFigures02>() },
		Step_MonsterFigures03 { s.get<struct Step_MonsterFigures03>() },
		Step_MonsterFigures04 { s.get<struct Step_MonsterFigures04>() },
		Step_MonsterFigures05 { s.get<struct Step_MonsterFigures05>() },
		Step_MushroomSisters_1 { s.get<struct Step_MushroomSisters_1>() },
		Step_MushroomSisters_2 { s.get<struct Step_MushroomSisters_2>() },
		Step_MushroomSisters_3 { s.get<struct Step_MushroomSisters_3>() },
		Step_Nazley_DigCave { s.get<struct Step_Nazley_DigCave>() },
		Step_Neck_IceWaterCave { s.get<struct Step_Neck_IceWaterCave>() },
		Step_NewCanyonMissingPersonsCase { s.get<struct Step_NewCanyonMissingPersonsCase>() },
		Step_NewsPaper_Mitsuba { s.get<struct Step_NewsPaper_Mitsuba>() },
		Step_NoTrespassing { s.get<struct Step_NoTrespassing>() },
		Step_NowInTheVillageOfLurelin { s.get<struct Step_NowInTheVillageOfLurelin>() },
		Step_Npc_BaseCamp_Assistant_ReactingStatue { s.get<struct Step_Npc_BaseCamp_Assistant_ReactingStatue>() },
		Step_Npc_BaseCamp_Assistant_ReactingStatue2 { s.get<struct Step_Npc_BaseCamp_Assistant_ReactingStatue2>() },
		Step_Npc_BaseCamp_Assistant_ReactingStatue3 { s.get<struct Step_Npc_BaseCamp_Assistant_ReactingStatue3>() },
		Step_Npc_BaseCamp_Assistant_ReactingStatue4 { s.get<struct Step_Npc_BaseCamp_Assistant_ReactingStatue4>() },
		Step_NushiShop_Challenge00 { s.get<struct Step_NushiShop_Challenge00>() },
		Step_NushiShop_Tutorial { s.get<struct Step_NushiShop_Tutorial>() },
		Step_OldKorokHelp { s.get<struct Step_OldKorokHelp>() },
		Step_Orchestra01 { s.get<struct Step_Orchestra01>() },
		Step_Orchestra02 { s.get<struct Step_Orchestra02>() },
		Step_Orchestra03 { s.get<struct Step_Orchestra03>() },
		Step_Orchestra04 { s.get<struct Step_Orchestra04>() },
		Step_Our_Treasure { s.get<struct Step_Our_Treasure>() },
		Step_Parasail_ChuchuDesign { s.get<struct Step_Parasail_ChuchuDesign>() },
		Step_PhotoSpot_Challenge_01 { s.get<struct Step_PhotoSpot_Challenge_01>() },
		Step_PhotoSpot_Challenge_02 { s.get<struct Step_PhotoSpot_Challenge_02>() },
		Step_PhotoSpot_Challenge_03 { s.get<struct Step_PhotoSpot_Challenge_03>() },
		Step_PhotoSpot_Challenge_04 { s.get<struct Step_PhotoSpot_Challenge_04>() },
		Step_PhotoSpot_Challenge_05 { s.get<struct Step_PhotoSpot_Challenge_05>() },
		Step_PhotoSpot_Challenge_06 { s.get<struct Step_PhotoSpot_Challenge_06>() },
		Step_PhotoSpot_Challenge_07 { s.get<struct Step_PhotoSpot_Challenge_07>() },
		Step_PhotoSpot_Challenge_08 { s.get<struct Step_PhotoSpot_Challenge_08>() },
		Step_PhotoSpot_Challenge_09 { s.get<struct Step_PhotoSpot_Challenge_09>() },
		Step_PhotoSpot_Challenge_09_2 { s.get<struct Step_PhotoSpot_Challenge_09_2>() },
		Step_PhotoSpot_Challenge_10 { s.get<struct Step_PhotoSpot_Challenge_10>() },
		Step_PhotoSpot_Challenge_11 { s.get<struct Step_PhotoSpot_Challenge_11>() },
		Step_PhotoSpot_Challenge_12 { s.get<struct Step_PhotoSpot_Challenge_12>() },
		Step_PhotoSpot_Challenge_13 { s.get<struct Step_PhotoSpot_Challenge_13>() },
		Step_PhotoSpot_Challenge_14 { s.get<struct Step_PhotoSpot_Challenge_14>() },
		Step_Raise_GoddesStatue { s.get<struct Step_Raise_GoddesStatue>() },
		Step_Raise_GoddesStatue_Courage { s.get<struct Step_Raise_GoddesStatue_Courage>() },
		Step_Raise_GoddesStatue_Power { s.get<struct Step_Raise_GoddesStatue_Power>() },
		Step_Raise_GoddesStatue_Wisdom { s.get<struct Step_Raise_GoddesStatue_Wisdom>() },
		Step_RepairArmor { s.get<struct Step_RepairArmor>() },
		Step_RescueHost { s.get<struct Step_RescueHost>() },
		Step_RescueVehicle01 { s.get<struct Step_RescueVehicle01>() },
		Step_RescueWell { s.get<struct Step_RescueWell>() },
		Step_ResearchEldin { s.get<struct Step_ResearchEldin>() },
		Step_ResearchLanayru { s.get<struct Step_ResearchLanayru>() },
		Step_RestaurantInTheWell { s.get<struct Step_RestaurantInTheWell>() },
		Step_Rito_ItemExchange { s.get<struct Step_Rito_ItemExchange>() },
		Step_Rito_MedoArmor { s.get<struct Step_Rito_MedoArmor>() },
		Step_Rito_RevaliWeapon { s.get<struct Step_Rito_RevaliWeapon>() },
		Step_Rito_ShadowCave { s.get<struct Step_Rito_ShadowCave>() },
		Step_RitoBridgeRepair { s.get<struct Step_RitoBridgeRepair>() },
		Step_SageOfFire { s.get<struct Step_SageOfFire>() },
		Step_SageOfGerudo { s.get<struct Step_SageOfGerudo>() },
		Step_SageOfSky { s.get<struct Step_SageOfSky>() },
		Step_SageOfSoul { s.get<struct Step_SageOfSoul>() },
		Step_SageOfWind { s.get<struct Step_SageOfWind>() },
		Step_SageOfZora { s.get<struct Step_SageOfZora>() },
		Step_SaihateSubjugation { s.get<struct Step_SaihateSubjugation>() },
		Step_SearchCaravan { s.get<struct Step_SearchCaravan>() },
		Step_SecretBase_MiniGame { s.get<struct Step_SecretBase_MiniGame>() },
		Step_ShieldSurfing_MiniGame { s.get<struct Step_ShieldSurfing_MiniGame>() },
		Step_SkyIsland_MiniGame_01 { s.get<struct Step_SkyIsland_MiniGame_01>() },
		Step_SkyIsland_MiniGame_02 { s.get<struct Step_SkyIsland_MiniGame_02>() },
		Step_SkyIsland_MiniGame_03 { s.get<struct Step_SkyIsland_MiniGame_03>() },
		Step_SnowyMountain_Surfing { s.get<struct Step_SnowyMountain_Surfing>() },
		Step_StatueDevilTutorial { s.get<struct Step_StatueDevilTutorial>() },
		Step_SurveyOfFourVillages { s.get<struct Step_SurveyOfFourVillages>() },
		Step_TakeAnimals { s.get<struct Step_TakeAnimals>() },
		Step_TakeOfIce { s.get<struct Step_TakeOfIce>() },
		Step_TauraChallenge001 { s.get<struct Step_TauraChallenge001>() },
		Step_TheStrongestWeapon { s.get<struct Step_TheStrongestWeapon>() },
		Step_TreasureHunt_kokiri { s.get<struct Step_TreasureHunt_kokiri>() },
		Step_TreasureOfLambda { s.get<struct Step_TreasureOfLambda>() },
		Step_TreasureOfLamda_Dream { s.get<struct Step_TreasureOfLamda_Dream>() },
		Step_TreasureOfLamda_Dream2 { s.get<struct Step_TreasureOfLamda_Dream2>() },
		Step_TreasureOfLamda_Dream3 { s.get<struct Step_TreasureOfLamda_Dream3>() },
		Step_TreasureOfLamda_DuelPeak { s.get<struct Step_TreasureOfLamda_DuelPeak>() },
		Step_TreasureOfLamda_FierceDeity { s.get<struct Step_TreasureOfLamda_FierceDeity>() },
		Step_TreasureOfLamda_Gerudo { s.get<struct Step_TreasureOfLamda_Gerudo>() },
		Step_TreasureOfLamda_Pirate { s.get<struct Step_TreasureOfLamda_Pirate>() },
		Step_Tribune01 { s.get<struct Step_Tribune01>() },
		Step_Tribune02 { s.get<struct Step_Tribune02>() },
		Step_Tribune03 { s.get<struct Step_Tribune03>() },
		Step_Tribune04 { s.get<struct Step_Tribune04>() },
		Step_Tribune05 { s.get<struct Step_Tribune05>() },
		Step_Tribune06 { s.get<struct Step_Tribune06>() },
		Step_Tribune07 { s.get<struct Step_Tribune07>() },
		Step_Tribune09 { s.get<struct Step_Tribune09>() },
		Step_Tribune10 { s.get<struct Step_Tribune10>() },
		Step_Tribune11 { s.get<struct Step_Tribune11>() },
		Step_Tribune13 { s.get<struct Step_Tribune13>() },
		Step_Tribune14 { s.get<struct Step_Tribune14>() },
		Step_Tribune16 { s.get<struct Step_Tribune16>() },
		Step_Uotori_BreakthePirateBase { s.get<struct Step_Uotori_BreakthePirateBase>() },
		Step_Uotori_Designer { s.get<struct Step_Uotori_Designer>() },
		Step_Uotori_ResortPlan { s.get<struct Step_Uotori_ResortPlan>() },
		Step_Uotori_RevivePlan { s.get<struct Step_Uotori_RevivePlan>() },
		Step_Uotori_WhiteLineGame { s.get<struct Step_Uotori_WhiteLineGame>() },
		Step_UpgradeOfPurahPad1 { s.get<struct Step_UpgradeOfPurahPad1>() },
		Step_WantedCleaning { s.get<struct Step_WantedCleaning>() },
		Step_WashedAwayBusinessTools { s.get<struct Step_WashedAwayBusinessTools>() },
		Step_WaterBridgePlace { s.get<struct Step_WaterBridgePlace>() },
		Step_WellCollection { s.get<struct Step_WellCollection>() },
		Step_WhichIsStronger { s.get<struct Step_WhichIsStronger>() },
		Step_Zonau_GeniusWeapon { s.get<struct Step_Zonau_GeniusWeapon>() },
		Step_ZonauReliefSearch { s.get<struct Step_ZonauReliefSearch>() },
		Step_Zora_Enemy_hunt { s.get<struct Step_Zora_Enemy_hunt>() },
		Step_Zora_MessageBottle { s.get<struct Step_Zora_MessageBottle>() },
		Step_Zora_RuttaTreasure { s.get<struct Step_Zora_RuttaTreasure>() },
		Step_ZoraStatue_Picture { s.get<struct Step_ZoraStatue_Picture>() },
		AmiiboData { s },
		BowStand { s },
		ShieldStand { s },
		WeaponStand { s },
		CustomHouseTakeOutNum { s },
		DefeatedEnemyNum { s },
		HorseInnMemberPoint { s.get<struct HorseInnMemberPoint>() },
		RaumiGolemAttachment { s },
		ValidPouchIndex { s.get<struct ValidPouchIndex>() },
		WellCollectionRewardUnit { s.get<struct WellCollectionRewardUnit>() },
		WellDiscoverNumCurrent { s.get<struct WellDiscoverNumCurrent>() },
		WellDiscoverNumLeft { s.get<struct WellDiscoverNumLeft>() },
		WellDiscoverNumTotal { s.get<struct WellDiscoverNumTotal>() },
		WellReportNum { s.get<struct WellReportNum>() },
		WellReportNumMinusOne { s.get<struct WellReportNumMinusOne>() },
		WellReportNumThisTime { s.get<struct WellReportNumThisTime>() },
		World_CurrentDays { s.get<struct World_CurrentDays>() },
		World_CurrentHour { s.get<struct World_CurrentHour>() },
		World_CurrentMinute { s.get<struct World_CurrentMinute>() },
		AlbumData { s },
		World_WeatherForecast { s.get<struct World_WeatherForecast>() },
		Sequence_CurrentBanc { s.get<struct Sequence_CurrentBanc>() },
		Playtime { s.get<struct Playtime>() },
		World_BloodyMoonTimer { s.get<struct World_BloodyMoonTimer>() },
		World_CurrentDateTime { s.get<struct World_CurrentDateTime>() },
		World_ZonauRespawnTimer { s.get<struct World_ZonauRespawnTimer>() },
		World_PlayerPos { s.get<struct World_PlayerPos>() },
		World_ShootingStarPosition { s.get<struct World_ShootingStarPosition>() },
		FigureCreateInfo { s }
	{ }
};/* Data::Structure GameData close */

template <> hash_t constexpr Data::Hashtable<GameData::NushiShop_MedalComplete> = murmurhash3::hash("NushiShop_MedalComplete");
template <> hash_t constexpr Data::Hashtable<GameData::World_IsBloodyMoonDay> = murmurhash3::hash("World_IsBloodyMoonDay");
template <> hash_t constexpr Data::Hashtable<GameData::World_IsZonauRespawnDay> = murmurhash3::hash("World_IsZonauRespawnDay");
template <> hash_t constexpr Data::Hashtable<GameData::LastTalkedOrchestraMemberStableHostel> = murmurhash3::hash("LastTalkedOrchestraMemberStableHostel");
template <> hash_t constexpr Data::Hashtable<GameData::SensorMode> = murmurhash3::hash("SensorMode");
template <> hash_t constexpr Data::Hashtable<GameData::Step_AisyaRescue> = murmurhash3::hash("Step_AisyaRescue");
template <> hash_t constexpr Data::Hashtable<GameData::Step_AmberCollector> = murmurhash3::hash("Step_AmberCollector");
template <> hash_t constexpr Data::Hashtable<GameData::Step_ArrowMeister_Momo> = murmurhash3::hash("Step_ArrowMeister_Momo");
template <> hash_t constexpr Data::Hashtable<GameData::Step_AssassinGerudoBase> = murmurhash3::hash("Step_AssassinGerudoBase");
template <> hash_t constexpr Data::Hashtable<GameData::Step_BallBring_MiniGame> = murmurhash3::hash("Step_BallBring_MiniGame");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Basketball_MiniGame> = murmurhash3::hash("Step_Basketball_MiniGame");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Big_Rotate> = murmurhash3::hash("Step_Big_Rotate");
template <> hash_t constexpr Data::Hashtable<GameData::Step_BirdManContest> = murmurhash3::hash("Step_BirdManContest");
template <> hash_t constexpr Data::Hashtable<GameData::Step_BlindRuinsTreasure> = murmurhash3::hash("Step_BlindRuinsTreasure");
template <> hash_t constexpr Data::Hashtable<GameData::Step_BlindRuinsTreasure_Gerudo> = murmurhash3::hash("Step_BlindRuinsTreasure_Gerudo");
template <> hash_t constexpr Data::Hashtable<GameData::Step_BlindRuinsTreasure_Goron> = murmurhash3::hash("Step_BlindRuinsTreasure_Goron");
template <> hash_t constexpr Data::Hashtable<GameData::Step_BlindRuinsTreasure_Rito> = murmurhash3::hash("Step_BlindRuinsTreasure_Rito");
template <> hash_t constexpr Data::Hashtable<GameData::Step_BlindRuinsTreasure_Zora> = murmurhash3::hash("Step_BlindRuinsTreasure_Zora");
template <> hash_t constexpr Data::Hashtable<GameData::Step_BuildHouse> = murmurhash3::hash("Step_BuildHouse");
template <> hash_t constexpr Data::Hashtable<GameData::Step_BuildingMaterialsTutorial> = murmurhash3::hash("Step_BuildingMaterialsTutorial");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryGoronKid1> = murmurhash3::hash("Step_CarryGoronKid1");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryGoronKid2> = murmurhash3::hash("Step_CarryGoronKid2");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryStone> = murmurhash3::hash("Step_CarryStone");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine01> = murmurhash3::hash("Step_CarryToShrine01");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine02> = murmurhash3::hash("Step_CarryToShrine02");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine03> = murmurhash3::hash("Step_CarryToShrine03");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine05> = murmurhash3::hash("Step_CarryToShrine05");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine06> = murmurhash3::hash("Step_CarryToShrine06");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine07> = murmurhash3::hash("Step_CarryToShrine07");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine08_Zora> = murmurhash3::hash("Step_CarryToShrine08_Zora");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine09> = murmurhash3::hash("Step_CarryToShrine09");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine10> = murmurhash3::hash("Step_CarryToShrine10");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine11> = murmurhash3::hash("Step_CarryToShrine11");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine12> = murmurhash3::hash("Step_CarryToShrine12");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine13> = murmurhash3::hash("Step_CarryToShrine13");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine14> = murmurhash3::hash("Step_CarryToShrine14");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine15> = murmurhash3::hash("Step_CarryToShrine15");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine16> = murmurhash3::hash("Step_CarryToShrine16");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine17> = murmurhash3::hash("Step_CarryToShrine17");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine19> = murmurhash3::hash("Step_CarryToShrine19");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine20> = murmurhash3::hash("Step_CarryToShrine20");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine21> = murmurhash3::hash("Step_CarryToShrine21");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine22> = murmurhash3::hash("Step_CarryToShrine22");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CarryToShrine23> = murmurhash3::hash("Step_CarryToShrine23");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CDungeon_AllDone> = murmurhash3::hash("Step_CDungeon_AllDone");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Circuit_Desert> = murmurhash3::hash("Step_Circuit_Desert");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Circuit_FaronWoods_MiniGame> = murmurhash3::hash("Step_Circuit_FaronWoods_MiniGame");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Circuit_Ichikara> = murmurhash3::hash("Step_Circuit_Ichikara");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Circuit_Ichikara_MiniGame> = murmurhash3::hash("Step_Circuit_Ichikara_MiniGame");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Circuit_Uotori_MiniGame> = murmurhash3::hash("Step_Circuit_Uotori_MiniGame");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CleanStatue> = murmurhash3::hash("Step_CleanStatue");
template <> hash_t constexpr Data::Hashtable<GameData::Step_ClueTotheSixthSage> = murmurhash3::hash("Step_ClueTotheSixthSage");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CollectObject_MiniGame> = murmurhash3::hash("Step_CollectObject_MiniGame");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CollectObject_MiniGame_Cliff> = murmurhash3::hash("Step_CollectObject_MiniGame_Cliff");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CollectObject_MiniGame_LakeSide> = murmurhash3::hash("Step_CollectObject_MiniGame_LakeSide");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Connect_AkkareMaze> = murmurhash3::hash("Step_Connect_AkkareMaze");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Connect_FirstIsland> = murmurhash3::hash("Step_Connect_FirstIsland");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Connect_GerudoMaze> = murmurhash3::hash("Step_Connect_GerudoMaze");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Connect_TabantaMaze> = murmurhash3::hash("Step_Connect_TabantaMaze");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CookAtBaseCamp> = murmurhash3::hash("Step_CookAtBaseCamp");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CraftShadowPicture> = murmurhash3::hash("Step_CraftShadowPicture");
template <> hash_t constexpr Data::Hashtable<GameData::Step_CreateArmor> = murmurhash3::hash("Step_CreateArmor");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Createshinguard> = murmurhash3::hash("Step_Createshinguard");
template <> hash_t constexpr Data::Hashtable<GameData::Step_DeepHoleSurvey2> = murmurhash3::hash("Step_DeepHoleSurvey2");
template <> hash_t constexpr Data::Hashtable<GameData::Step_DefeatGanondorf> = murmurhash3::hash("Step_DefeatGanondorf");
template <> hash_t constexpr Data::Hashtable<GameData::Step_DefeatHugeEnemy_1> = murmurhash3::hash("Step_DefeatHugeEnemy_1");
template <> hash_t constexpr Data::Hashtable<GameData::Step_DefeatHugeEnemy_2> = murmurhash3::hash("Step_DefeatHugeEnemy_2");
template <> hash_t constexpr Data::Hashtable<GameData::Step_DefeatHugeEnemy_3> = murmurhash3::hash("Step_DefeatHugeEnemy_3");
template <> hash_t constexpr Data::Hashtable<GameData::Step_DefeatHugeEnemy_4> = murmurhash3::hash("Step_DefeatHugeEnemy_4");
template <> hash_t constexpr Data::Hashtable<GameData::Step_DefeatHugeEnemy_5> = murmurhash3::hash("Step_DefeatHugeEnemy_5");
template <> hash_t constexpr Data::Hashtable<GameData::Step_DefeatHugeEnemy_6> = murmurhash3::hash("Step_DefeatHugeEnemy_6");
template <> hash_t constexpr Data::Hashtable<GameData::Step_DevoteSpring> = murmurhash3::hash("Step_DevoteSpring");
template <> hash_t constexpr Data::Hashtable<GameData::Step_DividedSlate> = murmurhash3::hash("Step_DividedSlate");
template <> hash_t constexpr Data::Hashtable<GameData::Step_EightHeroStatues> = murmurhash3::hash("Step_EightHeroStatues");
template <> hash_t constexpr Data::Hashtable<GameData::Step_EightHeroStatues_After> = murmurhash3::hash("Step_EightHeroStatues_After");
template <> hash_t constexpr Data::Hashtable<GameData::Step_EveryonesMeal> = murmurhash3::hash("Step_EveryonesMeal");
template <> hash_t constexpr Data::Hashtable<GameData::Step_ExcavateFossil1> = murmurhash3::hash("Step_ExcavateFossil1");
template <> hash_t constexpr Data::Hashtable<GameData::Step_ExcavateFossil2> = murmurhash3::hash("Step_ExcavateFossil2");
template <> hash_t constexpr Data::Hashtable<GameData::Step_ExcavateFossil3> = murmurhash3::hash("Step_ExcavateFossil3");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Fairy2> = murmurhash3::hash("Step_Fairy2");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Fairy3> = murmurhash3::hash("Step_Fairy3");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Fairy4> = murmurhash3::hash("Step_Fairy4");
template <> hash_t constexpr Data::Hashtable<GameData::Step_FindDrefan> = murmurhash3::hash("Step_FindDrefan");
template <> hash_t constexpr Data::Hashtable<GameData::Step_FindSunaNui> = murmurhash3::hash("Step_FindSunaNui");
template <> hash_t constexpr Data::Hashtable<GameData::Step_FindSunaNui2> = murmurhash3::hash("Step_FindSunaNui2");
template <> hash_t constexpr Data::Hashtable<GameData::Step_FindWhiteHorse> = murmurhash3::hash("Step_FindWhiteHorse");
template <> hash_t constexpr Data::Hashtable<GameData::Step_FindWithSensors> = murmurhash3::hash("Step_FindWithSensors");
template <> hash_t constexpr Data::Hashtable<GameData::Step_FirstskyislandReturns> = murmurhash3::hash("Step_FirstskyislandReturns");
template <> hash_t constexpr Data::Hashtable<GameData::Step_FullyRipenedFlintstones> = murmurhash3::hash("Step_FullyRipenedFlintstones");
template <> hash_t constexpr Data::Hashtable<GameData::Step_gather_Insect_Z> = murmurhash3::hash("Step_gather_Insect_Z");
template <> hash_t constexpr Data::Hashtable<GameData::Step_GeniusWeapon_Zora> = murmurhash3::hash("Step_GeniusWeapon_Zora");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Genkos_Kitchen> = murmurhash3::hash("Step_Genkos_Kitchen");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Gerudo_UrbosaWeapon> = murmurhash3::hash("Step_Gerudo_UrbosaWeapon");
template <> hash_t constexpr Data::Hashtable<GameData::Step_GerudoCanyon_24hEnduranceComparison> = murmurhash3::hash("Step_GerudoCanyon_24hEnduranceComparison");
template <> hash_t constexpr Data::Hashtable<GameData::Step_GerudoCanyon_Adventure> = murmurhash3::hash("Step_GerudoCanyon_Adventure");
template <> hash_t constexpr Data::Hashtable<GameData::Step_GerudoCanyon_ColdEnduranceComparison> = murmurhash3::hash("Step_GerudoCanyon_ColdEnduranceComparison");
template <> hash_t constexpr Data::Hashtable<GameData::Step_GerudoCanyon_GleeokLiver> = murmurhash3::hash("Step_GerudoCanyon_GleeokLiver");
template <> hash_t constexpr Data::Hashtable<GameData::Step_GerudoCanyon_TumbleweedSweep> = murmurhash3::hash("Step_GerudoCanyon_TumbleweedSweep");
template <> hash_t constexpr Data::Hashtable<GameData::Step_GerudoDesertTreasure> = murmurhash3::hash("Step_GerudoDesertTreasure");
template <> hash_t constexpr Data::Hashtable<GameData::Step_GetCamera> = murmurhash3::hash("Step_GetCamera");
template <> hash_t constexpr Data::Hashtable<GameData::Step_GetMasterSword> = murmurhash3::hash("Step_GetMasterSword");
template <> hash_t constexpr Data::Hashtable<GameData::Step_GetSensorPlus> = murmurhash3::hash("Step_GetSensorPlus");
template <> hash_t constexpr Data::Hashtable<GameData::Step_GetWalker> = murmurhash3::hash("Step_GetWalker");
template <> hash_t constexpr Data::Hashtable<GameData::Step_GetWarpMarker> = murmurhash3::hash("Step_GetWarpMarker");
template <> hash_t constexpr Data::Hashtable<GameData::Step_GiantHorse> = murmurhash3::hash("Step_GiantHorse");
template <> hash_t constexpr Data::Hashtable<GameData::Step_GoneSnowQueen> = murmurhash3::hash("Step_GoneSnowQueen");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Goron_MiniGame_01> = murmurhash3::hash("Step_Goron_MiniGame_01");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Goron_MiniGame_02> = murmurhash3::hash("Step_Goron_MiniGame_02");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Goron_MiniGame_03> = murmurhash3::hash("Step_Goron_MiniGame_03");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Goron_MiniGame_Tutorial_01> = murmurhash3::hash("Step_Goron_MiniGame_Tutorial_01");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Goron_MiniGame_Tutorial_02> = murmurhash3::hash("Step_Goron_MiniGame_Tutorial_02");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Goron_MiniGame_Tutorial_03> = murmurhash3::hash("Step_Goron_MiniGame_Tutorial_03");
template <> hash_t constexpr Data::Hashtable<GameData::Step_GoronPond> = murmurhash3::hash("Step_GoronPond");
template <> hash_t constexpr Data::Hashtable<GameData::Step_GoronReturntoNature> = murmurhash3::hash("Step_GoronReturntoNature");
template <> hash_t constexpr Data::Hashtable<GameData::Step_GotoFironeZonauRemains> = murmurhash3::hash("Step_GotoFironeZonauRemains");
template <> hash_t constexpr Data::Hashtable<GameData::Step_GOToTheCastleOfHyrule> = murmurhash3::hash("Step_GOToTheCastleOfHyrule");
template <> hash_t constexpr Data::Hashtable<GameData::Step_GroundPaintingAir01> = murmurhash3::hash("Step_GroundPaintingAir01");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Hack_GuardGoods> = murmurhash3::hash("Step_Hack_GuardGoods");
template <> hash_t constexpr Data::Hashtable<GameData::Step_HammerGong_MiniGame> = murmurhash3::hash("Step_HammerGong_MiniGame");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Hateno_Cheese> = murmurhash3::hash("Step_Hateno_Cheese");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Hateno_CoolGuy> = murmurhash3::hash("Step_Hateno_CoolGuy");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Hateno_FreshMilk> = murmurhash3::hash("Step_Hateno_FreshMilk");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Hateno_LetUsElection> = murmurhash3::hash("Step_Hateno_LetUsElection");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Hateno_NewCostume> = murmurhash3::hash("Step_Hateno_NewCostume");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Hateno_NewSpecialty> = murmurhash3::hash("Step_Hateno_NewSpecialty");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Hateno_RevitalizeByNewSpeciality> = murmurhash3::hash("Step_Hateno_RevitalizeByNewSpeciality");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Hateno_SecretLifeOfKusayoshi> = murmurhash3::hash("Step_Hateno_SecretLifeOfKusayoshi");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Hateno_SecretLifeOfSagono> = murmurhash3::hash("Step_Hateno_SecretLifeOfSagono");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Hateno_TellMeTeacher01> = murmurhash3::hash("Step_Hateno_TellMeTeacher01");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Hateno_TellMeTeacher02> = murmurhash3::hash("Step_Hateno_TellMeTeacher02");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Hateno_VillageMayorElection> = murmurhash3::hash("Step_Hateno_VillageMayorElection");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Hateno_WhatToPlant> = murmurhash3::hash("Step_Hateno_WhatToPlant");
template <> hash_t constexpr Data::Hashtable<GameData::Step_HatenoPurchasePicture> = murmurhash3::hash("Step_HatenoPurchasePicture");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Hebra_SkyRingChallenge> = murmurhash3::hash("Step_Hebra_SkyRingChallenge");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Hebra_SkyRingChallenge_MiniGame> = murmurhash3::hash("Step_Hebra_SkyRingChallenge_MiniGame");
template <> hash_t constexpr Data::Hashtable<GameData::Step_HorseInnChallenge001> = murmurhash3::hash("Step_HorseInnChallenge001");
template <> hash_t constexpr Data::Hashtable<GameData::Step_HorseInnChallenge002> = murmurhash3::hash("Step_HorseInnChallenge002");
template <> hash_t constexpr Data::Hashtable<GameData::Step_HorseInnChallenge003> = murmurhash3::hash("Step_HorseInnChallenge003");
template <> hash_t constexpr Data::Hashtable<GameData::Step_HorseInnChallenge005> = murmurhash3::hash("Step_HorseInnChallenge005");
template <> hash_t constexpr Data::Hashtable<GameData::Step_HorseInnChallenge007> = murmurhash3::hash("Step_HorseInnChallenge007");
template <> hash_t constexpr Data::Hashtable<GameData::Step_HotSpringEgg> = murmurhash3::hash("Step_HotSpringEgg");
template <> hash_t constexpr Data::Hashtable<GameData::Step_HourseInnChallenge004> = murmurhash3::hash("Step_HourseInnChallenge004");
template <> hash_t constexpr Data::Hashtable<GameData::Step_HuntSalmon> = murmurhash3::hash("Step_HuntSalmon");
template <> hash_t constexpr Data::Hashtable<GameData::Step_HyruleCastleIncident> = murmurhash3::hash("Step_HyruleCastleIncident");
template <> hash_t constexpr Data::Hashtable<GameData::Step_IceMaking> = murmurhash3::hash("Step_IceMaking");
template <> hash_t constexpr Data::Hashtable<GameData::Step_IchikaraChallenge01> = murmurhash3::hash("Step_IchikaraChallenge01");
template <> hash_t constexpr Data::Hashtable<GameData::Step_IchikaraChallenge03> = murmurhash3::hash("Step_IchikaraChallenge03");
template <> hash_t constexpr Data::Hashtable<GameData::Step_IchikaraCircuit_Tutorial> = murmurhash3::hash("Step_IchikaraCircuit_Tutorial");
template <> hash_t constexpr Data::Hashtable<GameData::Step_IchikaraDaughterPhoto> = murmurhash3::hash("Step_IchikaraDaughterPhoto");
template <> hash_t constexpr Data::Hashtable<GameData::Step_IllnessStartsWithFeelings> = murmurhash3::hash("Step_IllnessStartsWithFeelings");
template <> hash_t constexpr Data::Hashtable<GameData::Step_InfiltrationFromTheSky> = murmurhash3::hash("Step_InfiltrationFromTheSky");
template <> hash_t constexpr Data::Hashtable<GameData::Step_InnNeverReturns> = murmurhash3::hash("Step_InnNeverReturns");
template <> hash_t constexpr Data::Hashtable<GameData::Step_JobSunazarashi> = murmurhash3::hash("Step_JobSunazarashi");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Know_FourStonePlates> = murmurhash3::hash("Step_Know_FourStonePlates");
template <> hash_t constexpr Data::Hashtable<GameData::Step_KokkoGuidePost> = murmurhash3::hash("Step_KokkoGuidePost");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Korok_CarryToShrine> = murmurhash3::hash("Step_Korok_CarryToShrine");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Lodge_Chemical001> = murmurhash3::hash("Step_Lodge_Chemical001");
template <> hash_t constexpr Data::Hashtable<GameData::Step_LookingForLightSpot> = murmurhash3::hash("Step_LookingForLightSpot");
template <> hash_t constexpr Data::Hashtable<GameData::Step_LookingForTheVoiceLord> = murmurhash3::hash("Step_LookingForTheVoiceLord");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Mack_SecretBase> = murmurhash3::hash("Step_Mack_SecretBase");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MainChallenge> = murmurhash3::hash("Step_MainChallenge");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MakeAChampionsWeapon_Goron> = murmurhash3::hash("Step_MakeAChampionsWeapon_Goron");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MakeChemicalWeapon> = murmurhash3::hash("Step_MakeChemicalWeapon");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MasterSwordClues> = murmurhash3::hash("Step_MasterSwordClues");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MeatRock> = murmurhash3::hash("Step_MeatRock");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MemoryOfTheDragon> = murmurhash3::hash("Step_MemoryOfTheDragon");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Mercenary_Akkare_Bloody> = murmurhash3::hash("Step_Mercenary_Akkare_Bloody");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Mercenary_Eldin_Bloody> = murmurhash3::hash("Step_Mercenary_Eldin_Bloody");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Mercenary_Firone_Bloody> = murmurhash3::hash("Step_Mercenary_Firone_Bloody");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Mercenary_Hateru_Bloody> = murmurhash3::hash("Step_Mercenary_Hateru_Bloody");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Mercenary_Hebra_Bloody> = murmurhash3::hash("Step_Mercenary_Hebra_Bloody");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Mercenary_HyrulePlain_Bloody> = murmurhash3::hash("Step_Mercenary_HyrulePlain_Bloody");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MercenaryChallenge_Akkare> = murmurhash3::hash("Step_MercenaryChallenge_Akkare");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MercenaryChallenge_Eldin> = murmurhash3::hash("Step_MercenaryChallenge_Eldin");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MercenaryChallenge_Firone> = murmurhash3::hash("Step_MercenaryChallenge_Firone");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MercenaryChallenge_Hateru> = murmurhash3::hash("Step_MercenaryChallenge_Hateru");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MercenaryChallenge_Hebra> = murmurhash3::hash("Step_MercenaryChallenge_Hebra");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MercenaryChallenge_HyrulePlain> = murmurhash3::hash("Step_MercenaryChallenge_HyrulePlain");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MessageBottle_SOS> = murmurhash3::hash("Step_MessageBottle_SOS");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MinusYiga> = murmurhash3::hash("Step_MinusYiga");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MonsterFigures01> = murmurhash3::hash("Step_MonsterFigures01");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MonsterFigures02> = murmurhash3::hash("Step_MonsterFigures02");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MonsterFigures03> = murmurhash3::hash("Step_MonsterFigures03");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MonsterFigures04> = murmurhash3::hash("Step_MonsterFigures04");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MonsterFigures05> = murmurhash3::hash("Step_MonsterFigures05");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MushroomSisters_1> = murmurhash3::hash("Step_MushroomSisters_1");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MushroomSisters_2> = murmurhash3::hash("Step_MushroomSisters_2");
template <> hash_t constexpr Data::Hashtable<GameData::Step_MushroomSisters_3> = murmurhash3::hash("Step_MushroomSisters_3");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Nazley_DigCave> = murmurhash3::hash("Step_Nazley_DigCave");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Neck_IceWaterCave> = murmurhash3::hash("Step_Neck_IceWaterCave");
template <> hash_t constexpr Data::Hashtable<GameData::Step_NewCanyonMissingPersonsCase> = murmurhash3::hash("Step_NewCanyonMissingPersonsCase");
template <> hash_t constexpr Data::Hashtable<GameData::Step_NewsPaper_Mitsuba> = murmurhash3::hash("Step_NewsPaper_Mitsuba");
template <> hash_t constexpr Data::Hashtable<GameData::Step_NoTrespassing> = murmurhash3::hash("Step_NoTrespassing");
template <> hash_t constexpr Data::Hashtable<GameData::Step_NowInTheVillageOfLurelin> = murmurhash3::hash("Step_NowInTheVillageOfLurelin");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Npc_BaseCamp_Assistant_ReactingStatue> = murmurhash3::hash("Step_Npc_BaseCamp_Assistant_ReactingStatue");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Npc_BaseCamp_Assistant_ReactingStatue2> = murmurhash3::hash("Step_Npc_BaseCamp_Assistant_ReactingStatue2");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Npc_BaseCamp_Assistant_ReactingStatue3> = murmurhash3::hash("Step_Npc_BaseCamp_Assistant_ReactingStatue3");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Npc_BaseCamp_Assistant_ReactingStatue4> = murmurhash3::hash("Step_Npc_BaseCamp_Assistant_ReactingStatue4");
template <> hash_t constexpr Data::Hashtable<GameData::Step_NushiShop_Challenge00> = murmurhash3::hash("Step_NushiShop_Challenge00");
template <> hash_t constexpr Data::Hashtable<GameData::Step_NushiShop_Tutorial> = murmurhash3::hash("Step_NushiShop_Tutorial");
template <> hash_t constexpr Data::Hashtable<GameData::Step_OldKorokHelp> = murmurhash3::hash("Step_OldKorokHelp");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Orchestra01> = murmurhash3::hash("Step_Orchestra01");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Orchestra02> = murmurhash3::hash("Step_Orchestra02");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Orchestra03> = murmurhash3::hash("Step_Orchestra03");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Orchestra04> = murmurhash3::hash("Step_Orchestra04");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Our_Treasure> = murmurhash3::hash("Step_Our_Treasure");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Parasail_ChuchuDesign> = murmurhash3::hash("Step_Parasail_ChuchuDesign");
template <> hash_t constexpr Data::Hashtable<GameData::Step_PhotoSpot_Challenge_01> = murmurhash3::hash("Step_PhotoSpot_Challenge_01");
template <> hash_t constexpr Data::Hashtable<GameData::Step_PhotoSpot_Challenge_02> = murmurhash3::hash("Step_PhotoSpot_Challenge_02");
template <> hash_t constexpr Data::Hashtable<GameData::Step_PhotoSpot_Challenge_03> = murmurhash3::hash("Step_PhotoSpot_Challenge_03");
template <> hash_t constexpr Data::Hashtable<GameData::Step_PhotoSpot_Challenge_04> = murmurhash3::hash("Step_PhotoSpot_Challenge_04");
template <> hash_t constexpr Data::Hashtable<GameData::Step_PhotoSpot_Challenge_05> = murmurhash3::hash("Step_PhotoSpot_Challenge_05");
template <> hash_t constexpr Data::Hashtable<GameData::Step_PhotoSpot_Challenge_06> = murmurhash3::hash("Step_PhotoSpot_Challenge_06");
template <> hash_t constexpr Data::Hashtable<GameData::Step_PhotoSpot_Challenge_07> = murmurhash3::hash("Step_PhotoSpot_Challenge_07");
template <> hash_t constexpr Data::Hashtable<GameData::Step_PhotoSpot_Challenge_08> = murmurhash3::hash("Step_PhotoSpot_Challenge_08");
template <> hash_t constexpr Data::Hashtable<GameData::Step_PhotoSpot_Challenge_09> = murmurhash3::hash("Step_PhotoSpot_Challenge_09");
template <> hash_t constexpr Data::Hashtable<GameData::Step_PhotoSpot_Challenge_09_2> = murmurhash3::hash("Step_PhotoSpot_Challenge_09_2");
template <> hash_t constexpr Data::Hashtable<GameData::Step_PhotoSpot_Challenge_10> = murmurhash3::hash("Step_PhotoSpot_Challenge_10");
template <> hash_t constexpr Data::Hashtable<GameData::Step_PhotoSpot_Challenge_11> = murmurhash3::hash("Step_PhotoSpot_Challenge_11");
template <> hash_t constexpr Data::Hashtable<GameData::Step_PhotoSpot_Challenge_12> = murmurhash3::hash("Step_PhotoSpot_Challenge_12");
template <> hash_t constexpr Data::Hashtable<GameData::Step_PhotoSpot_Challenge_13> = murmurhash3::hash("Step_PhotoSpot_Challenge_13");
template <> hash_t constexpr Data::Hashtable<GameData::Step_PhotoSpot_Challenge_14> = murmurhash3::hash("Step_PhotoSpot_Challenge_14");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Raise_GoddesStatue> = murmurhash3::hash("Step_Raise_GoddesStatue");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Raise_GoddesStatue_Courage> = murmurhash3::hash("Step_Raise_GoddesStatue_Courage");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Raise_GoddesStatue_Power> = murmurhash3::hash("Step_Raise_GoddesStatue_Power");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Raise_GoddesStatue_Wisdom> = murmurhash3::hash("Step_Raise_GoddesStatue_Wisdom");
template <> hash_t constexpr Data::Hashtable<GameData::Step_RepairArmor> = murmurhash3::hash("Step_RepairArmor");
template <> hash_t constexpr Data::Hashtable<GameData::Step_RescueHost> = murmurhash3::hash("Step_RescueHost");
template <> hash_t constexpr Data::Hashtable<GameData::Step_RescueVehicle01> = murmurhash3::hash("Step_RescueVehicle01");
template <> hash_t constexpr Data::Hashtable<GameData::Step_RescueWell> = murmurhash3::hash("Step_RescueWell");
template <> hash_t constexpr Data::Hashtable<GameData::Step_ResearchEldin> = murmurhash3::hash("Step_ResearchEldin");
template <> hash_t constexpr Data::Hashtable<GameData::Step_ResearchLanayru> = murmurhash3::hash("Step_ResearchLanayru");
template <> hash_t constexpr Data::Hashtable<GameData::Step_RestaurantInTheWell> = murmurhash3::hash("Step_RestaurantInTheWell");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Rito_ItemExchange> = murmurhash3::hash("Step_Rito_ItemExchange");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Rito_MedoArmor> = murmurhash3::hash("Step_Rito_MedoArmor");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Rito_RevaliWeapon> = murmurhash3::hash("Step_Rito_RevaliWeapon");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Rito_ShadowCave> = murmurhash3::hash("Step_Rito_ShadowCave");
template <> hash_t constexpr Data::Hashtable<GameData::Step_RitoBridgeRepair> = murmurhash3::hash("Step_RitoBridgeRepair");
template <> hash_t constexpr Data::Hashtable<GameData::Step_SageOfFire> = murmurhash3::hash("Step_SageOfFire");
template <> hash_t constexpr Data::Hashtable<GameData::Step_SageOfGerudo> = murmurhash3::hash("Step_SageOfGerudo");
template <> hash_t constexpr Data::Hashtable<GameData::Step_SageOfSky> = murmurhash3::hash("Step_SageOfSky");
template <> hash_t constexpr Data::Hashtable<GameData::Step_SageOfSoul> = murmurhash3::hash("Step_SageOfSoul");
template <> hash_t constexpr Data::Hashtable<GameData::Step_SageOfWind> = murmurhash3::hash("Step_SageOfWind");
template <> hash_t constexpr Data::Hashtable<GameData::Step_SageOfZora> = murmurhash3::hash("Step_SageOfZora");
template <> hash_t constexpr Data::Hashtable<GameData::Step_SaihateSubjugation> = murmurhash3::hash("Step_SaihateSubjugation");
template <> hash_t constexpr Data::Hashtable<GameData::Step_SearchCaravan> = murmurhash3::hash("Step_SearchCaravan");
template <> hash_t constexpr Data::Hashtable<GameData::Step_SecretBase_MiniGame> = murmurhash3::hash("Step_SecretBase_MiniGame");
template <> hash_t constexpr Data::Hashtable<GameData::Step_ShieldSurfing_MiniGame> = murmurhash3::hash("Step_ShieldSurfing_MiniGame");
template <> hash_t constexpr Data::Hashtable<GameData::Step_SkyIsland_MiniGame_01> = murmurhash3::hash("Step_SkyIsland_MiniGame_01");
template <> hash_t constexpr Data::Hashtable<GameData::Step_SkyIsland_MiniGame_02> = murmurhash3::hash("Step_SkyIsland_MiniGame_02");
template <> hash_t constexpr Data::Hashtable<GameData::Step_SkyIsland_MiniGame_03> = murmurhash3::hash("Step_SkyIsland_MiniGame_03");
template <> hash_t constexpr Data::Hashtable<GameData::Step_SnowyMountain_Surfing> = murmurhash3::hash("Step_SnowyMountain_Surfing");
template <> hash_t constexpr Data::Hashtable<GameData::Step_StatueDevilTutorial> = murmurhash3::hash("Step_StatueDevilTutorial");
template <> hash_t constexpr Data::Hashtable<GameData::Step_SurveyOfFourVillages> = murmurhash3::hash("Step_SurveyOfFourVillages");
template <> hash_t constexpr Data::Hashtable<GameData::Step_TakeAnimals> = murmurhash3::hash("Step_TakeAnimals");
template <> hash_t constexpr Data::Hashtable<GameData::Step_TakeOfIce> = murmurhash3::hash("Step_TakeOfIce");
template <> hash_t constexpr Data::Hashtable<GameData::Step_TauraChallenge001> = murmurhash3::hash("Step_TauraChallenge001");
template <> hash_t constexpr Data::Hashtable<GameData::Step_TheStrongestWeapon> = murmurhash3::hash("Step_TheStrongestWeapon");
template <> hash_t constexpr Data::Hashtable<GameData::Step_TreasureHunt_kokiri> = murmurhash3::hash("Step_TreasureHunt_kokiri");
template <> hash_t constexpr Data::Hashtable<GameData::Step_TreasureOfLambda> = murmurhash3::hash("Step_TreasureOfLambda");
template <> hash_t constexpr Data::Hashtable<GameData::Step_TreasureOfLamda_Dream> = murmurhash3::hash("Step_TreasureOfLamda_Dream");
template <> hash_t constexpr Data::Hashtable<GameData::Step_TreasureOfLamda_Dream2> = murmurhash3::hash("Step_TreasureOfLamda_Dream2");
template <> hash_t constexpr Data::Hashtable<GameData::Step_TreasureOfLamda_Dream3> = murmurhash3::hash("Step_TreasureOfLamda_Dream3");
template <> hash_t constexpr Data::Hashtable<GameData::Step_TreasureOfLamda_DuelPeak> = murmurhash3::hash("Step_TreasureOfLamda_DuelPeak");
template <> hash_t constexpr Data::Hashtable<GameData::Step_TreasureOfLamda_FierceDeity> = murmurhash3::hash("Step_TreasureOfLamda_FierceDeity");
template <> hash_t constexpr Data::Hashtable<GameData::Step_TreasureOfLamda_Gerudo> = murmurhash3::hash("Step_TreasureOfLamda_Gerudo");
template <> hash_t constexpr Data::Hashtable<GameData::Step_TreasureOfLamda_Pirate> = murmurhash3::hash("Step_TreasureOfLamda_Pirate");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Tribune01> = murmurhash3::hash("Step_Tribune01");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Tribune02> = murmurhash3::hash("Step_Tribune02");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Tribune03> = murmurhash3::hash("Step_Tribune03");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Tribune04> = murmurhash3::hash("Step_Tribune04");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Tribune05> = murmurhash3::hash("Step_Tribune05");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Tribune06> = murmurhash3::hash("Step_Tribune06");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Tribune07> = murmurhash3::hash("Step_Tribune07");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Tribune09> = murmurhash3::hash("Step_Tribune09");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Tribune10> = murmurhash3::hash("Step_Tribune10");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Tribune11> = murmurhash3::hash("Step_Tribune11");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Tribune13> = murmurhash3::hash("Step_Tribune13");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Tribune14> = murmurhash3::hash("Step_Tribune14");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Tribune16> = murmurhash3::hash("Step_Tribune16");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Uotori_BreakthePirateBase> = murmurhash3::hash("Step_Uotori_BreakthePirateBase");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Uotori_Designer> = murmurhash3::hash("Step_Uotori_Designer");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Uotori_ResortPlan> = murmurhash3::hash("Step_Uotori_ResortPlan");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Uotori_RevivePlan> = murmurhash3::hash("Step_Uotori_RevivePlan");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Uotori_WhiteLineGame> = murmurhash3::hash("Step_Uotori_WhiteLineGame");
template <> hash_t constexpr Data::Hashtable<GameData::Step_UpgradeOfPurahPad1> = murmurhash3::hash("Step_UpgradeOfPurahPad1");
template <> hash_t constexpr Data::Hashtable<GameData::Step_WantedCleaning> = murmurhash3::hash("Step_WantedCleaning");
template <> hash_t constexpr Data::Hashtable<GameData::Step_WashedAwayBusinessTools> = murmurhash3::hash("Step_WashedAwayBusinessTools");
template <> hash_t constexpr Data::Hashtable<GameData::Step_WaterBridgePlace> = murmurhash3::hash("Step_WaterBridgePlace");
template <> hash_t constexpr Data::Hashtable<GameData::Step_WellCollection> = murmurhash3::hash("Step_WellCollection");
template <> hash_t constexpr Data::Hashtable<GameData::Step_WhichIsStronger> = murmurhash3::hash("Step_WhichIsStronger");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Zonau_GeniusWeapon> = murmurhash3::hash("Step_Zonau_GeniusWeapon");
template <> hash_t constexpr Data::Hashtable<GameData::Step_ZonauReliefSearch> = murmurhash3::hash("Step_ZonauReliefSearch");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Zora_Enemy_hunt> = murmurhash3::hash("Step_Zora_Enemy_hunt");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Zora_MessageBottle> = murmurhash3::hash("Step_Zora_MessageBottle");
template <> hash_t constexpr Data::Hashtable<GameData::Step_Zora_RuttaTreasure> = murmurhash3::hash("Step_Zora_RuttaTreasure");
template <> hash_t constexpr Data::Hashtable<GameData::Step_ZoraStatue_Picture> = murmurhash3::hash("Step_ZoraStatue_Picture");
template <> hash_t constexpr Data::Hashtable<GameData::HorseInnMemberPoint> = murmurhash3::hash("HorseInnMemberPoint");
template <> hash_t constexpr Data::Hashtable<GameData::ValidPouchIndex> = murmurhash3::hash("ValidPouchIndex");
template <> hash_t constexpr Data::Hashtable<GameData::WellCollectionRewardUnit> = murmurhash3::hash("WellCollectionRewardUnit");
template <> hash_t constexpr Data::Hashtable<GameData::WellDiscoverNumCurrent> = murmurhash3::hash("WellDiscoverNumCurrent");
template <> hash_t constexpr Data::Hashtable<GameData::WellDiscoverNumLeft> = murmurhash3::hash("WellDiscoverNumLeft");
template <> hash_t constexpr Data::Hashtable<GameData::WellDiscoverNumTotal> = murmurhash3::hash("WellDiscoverNumTotal");
template <> hash_t constexpr Data::Hashtable<GameData::WellReportNum> = murmurhash3::hash("WellReportNum");
template <> hash_t constexpr Data::Hashtable<GameData::WellReportNumMinusOne> = murmurhash3::hash("WellReportNumMinusOne");
template <> hash_t constexpr Data::Hashtable<GameData::WellReportNumThisTime> = murmurhash3::hash("WellReportNumThisTime");
template <> hash_t constexpr Data::Hashtable<GameData::World_CurrentDays> = murmurhash3::hash("World_CurrentDays");
template <> hash_t constexpr Data::Hashtable<GameData::World_CurrentHour> = murmurhash3::hash("World_CurrentHour");
template <> hash_t constexpr Data::Hashtable<GameData::World_CurrentMinute> = murmurhash3::hash("World_CurrentMinute");
template <> hash_t constexpr Data::Hashtable<GameData::World_WeatherForecast> = murmurhash3::hash("World_WeatherForecast");
template <> hash_t constexpr Data::Hashtable<GameData::Sequence_CurrentBanc> = murmurhash3::hash("Sequence_CurrentBanc");
template <> hash_t constexpr Data::Hashtable<GameData::Playtime> = 0xe573f564;
template <> hash_t constexpr Data::Hashtable<GameData::World_BloodyMoonTimer> = murmurhash3::hash("World_BloodyMoonTimer");
template <> hash_t constexpr Data::Hashtable<GameData::World_CurrentDateTime> = murmurhash3::hash("World_CurrentDateTime");
template <> hash_t constexpr Data::Hashtable<GameData::World_ZonauRespawnTimer> = murmurhash3::hash("World_ZonauRespawnTimer");
template <> hash_t constexpr Data::Hashtable<GameData::World_PlayerPos> = murmurhash3::hash("World_PlayerPos");
template <> hash_t constexpr Data::Hashtable<GameData::World_ShootingStarPosition> = murmurhash3::hash("World_ShootingStarPosition");