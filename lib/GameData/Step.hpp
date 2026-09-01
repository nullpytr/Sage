#pragma once
#include <sage>

struct GameData::Step : Tag::Structure {
	struct AisyaRescue : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step1a = murmurhash3::hash("Step1a"), Step2 = murmurhash3::hash("Step2"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<AisyaRescue>&;
	};
	struct AmberCollector : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), SellAmbers = murmurhash3::hash("SellAmbers"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<AmberCollector>&;
	};
	struct ArrowMeister_Momo : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), HaveWaterFruit = murmurhash3::hash("HaveWaterFruit"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<ArrowMeister_Momo>&;
	};
	struct AssassinGerudoBase : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Enlist = murmurhash3::hash("Enlist"), Equip = murmurhash3::hash("Equip"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<AssassinGerudoBase>&;
	};
	struct BallBring_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Craft = murmurhash3::hash("Craft"), Playing = murmurhash3::hash("Playing"), Retry = murmurhash3::hash("Retry"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<BallBring_MiniGame>&;
	};
	struct Basketball_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Retry = murmurhash3::hash("Retry"), Playing = murmurhash3::hash("Playing"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Basketball_MiniGame>&;
	};
	struct Big_Rotate : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Big_Rotate>&;
	};
	struct BirdManContest : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Game = murmurhash3::hash("Game"), Retire = murmurhash3::hash("Retire"), Result = murmurhash3::hash("Result"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<BirdManContest>&;
	};
	struct BlindRuinsTreasure : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), LookAtBoard_1 = murmurhash3::hash("LookAtBoard_1"), Search_1 = murmurhash3::hash("Search_1"), GoToCave = murmurhash3::hash("GoToCave"), RewardNotReceived = murmurhash3::hash("RewardNotReceived"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<BlindRuinsTreasure>&;
	};
	struct BlindRuinsTreasure_Gerudo : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<BlindRuinsTreasure_Gerudo>&;
	};
	struct BlindRuinsTreasure_Goron : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<BlindRuinsTreasure_Goron>&;
	};
	struct BlindRuinsTreasure_Rito : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<BlindRuinsTreasure_Rito>&;
	};
	struct BlindRuinsTreasure_Zora : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<BlindRuinsTreasure_Zora>&;
	};
	struct BuildHouse : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Build = murmurhash3::hash("Build"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<BuildHouse>&;
	};
	struct BuildingMaterialsTutorial : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GiveBuildingMaterials = murmurhash3::hash("GiveBuildingMaterials"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<BuildingMaterialsTutorial>&;
	};
	struct CDungeon_AllDone : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), RewardAppeared = murmurhash3::hash("RewardAppeared"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CDungeon_AllDone>&;
	};
	struct CarryGoronKid1 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Reach = murmurhash3::hash("Reach"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryGoronKid1>&;
	};
	struct CarryGoronKid2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), ToStation = murmurhash3::hash("ToStation"), Carry = murmurhash3::hash("Carry"), Reach = murmurhash3::hash("Reach"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryGoronKid2>&;
	};
	struct CarryStone : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CarryStone = murmurhash3::hash("CarryStone"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryStone>&;
	};
	struct CarryToShrine01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine01>&;
	};
	struct CarryToShrine02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine02>&;
	};
	struct CarryToShrine03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine03>&;
	};
	struct CarryToShrine05 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine05>&;
	};
	struct CarryToShrine06 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine06>&;
	};
	struct CarryToShrine07 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine07>&;
	};
	struct CarryToShrine08_Zora : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine08_Zora>&;
	};
	struct CarryToShrine09 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine09>&;
	};
	struct CarryToShrine10 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine10>&;
	};
	struct CarryToShrine11 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine11>&;
	};
	struct CarryToShrine12 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine12>&;
	};
	struct CarryToShrine13 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine13>&;
	};
	struct CarryToShrine14 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine14>&;
	};
	struct CarryToShrine15 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine15>&;
	};
	struct CarryToShrine16 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine16>&;
	};
	struct CarryToShrine17 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine17>&;
	};
	struct CarryToShrine19 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine19>&;
	};
	struct CarryToShrine20 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine20>&;
	};
	struct CarryToShrine21 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine21>&;
	};
	struct CarryToShrine22 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine22>&;
	};
	struct CarryToShrine23 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CarryToShrine23>&;
	};
	struct Circuit_Desert : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Craft = murmurhash3::hash("Craft"), Playing = murmurhash3::hash("Playing"), TimeUp = murmurhash3::hash("TimeUp"), Finish = murmurhash3::hash("Finish"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Circuit_Desert>&;
	};
	struct Circuit_FaronWoods_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Game = murmurhash3::hash("Game"), Retry = murmurhash3::hash("Retry"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Circuit_FaronWoods_MiniGame>&;
	};
	struct Circuit_Ichikara : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Craft = murmurhash3::hash("Craft"), Retry = murmurhash3::hash("Retry"), TimeOver = murmurhash3::hash("TimeOver"), Playing = murmurhash3::hash("Playing"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Circuit_Ichikara>&;
	};
	struct Circuit_Ichikara_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Retry = murmurhash3::hash("Retry"), TimeOver = murmurhash3::hash("TimeOver"), Playing = murmurhash3::hash("Playing"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Circuit_Ichikara_MiniGame>&;
	};
	struct Circuit_Uotori_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Playing = murmurhash3::hash("Playing"), Retry = murmurhash3::hash("Retry"), TimeOver = murmurhash3::hash("TimeOver"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Circuit_Uotori_MiniGame>&;
	};
	struct CleanStatue : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CleanUp = murmurhash3::hash("CleanUp"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CleanStatue>&;
	};
	struct ClueTotheSixthSage : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MeetTauro = murmurhash3::hash("MeetTauro"), RuinsChallenge = murmurhash3::hash("RuinsChallenge"), ZonauChallenge = murmurhash3::hash("ZonauChallenge"), UntilYouReport = murmurhash3::hash("UntilYouReport"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<ClueTotheSixthSage>&;
	};
	struct CollectObject_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Playing = murmurhash3::hash("Playing"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CollectObject_MiniGame>&;
	};
	struct CollectObject_MiniGame_Cliff : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Playing = murmurhash3::hash("Playing"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CollectObject_MiniGame_Cliff>&;
	};
	struct CollectObject_MiniGame_LakeSide : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Playing = murmurhash3::hash("Playing"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CollectObject_MiniGame_LakeSide>&;
	};
	struct Connect_AkkareMaze : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Land = murmurhash3::hash("Land"), Land2 = murmurhash3::hash("Land2"), Sky = murmurhash3::hash("Sky"), Sky1st = murmurhash3::hash("Sky1st"), Sky2nd = murmurhash3::hash("Sky2nd"), Sky3rd = murmurhash3::hash("Sky3rd"), SkyAll = murmurhash3::hash("SkyAll"), Minus = murmurhash3::hash("Minus"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Connect_AkkareMaze>&;
	};
	struct Connect_FirstIsland : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Sky = murmurhash3::hash("Sky"), Collect1st = murmurhash3::hash("Collect1st"), Collect2nd = murmurhash3::hash("Collect2nd"), Collect3rd = murmurhash3::hash("Collect3rd"), SkyGather = murmurhash3::hash("SkyGather"), Minus1st = murmurhash3::hash("Minus1st"), Minus2nd = murmurhash3::hash("Minus2nd"), Minus3rd = murmurhash3::hash("Minus3rd"), Minus4th = murmurhash3::hash("Minus4th"), Minus5th = murmurhash3::hash("Minus5th"), Minus6th = murmurhash3::hash("Minus6th"), MinusGather = murmurhash3::hash("MinusGather"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Connect_FirstIsland>&;
	};
	struct Connect_GerudoMaze : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Land = murmurhash3::hash("Land"), Land2 = murmurhash3::hash("Land2"), Sky = murmurhash3::hash("Sky"), Sky1st = murmurhash3::hash("Sky1st"), Sky2nd = murmurhash3::hash("Sky2nd"), Sky3rd = murmurhash3::hash("Sky3rd"), SkyAll = murmurhash3::hash("SkyAll"), Minus = murmurhash3::hash("Minus"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Connect_GerudoMaze>&;
	};
	struct Connect_TabantaMaze : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Land = murmurhash3::hash("Land"), Land2 = murmurhash3::hash("Land2"), Sky = murmurhash3::hash("Sky"), Sky1st = murmurhash3::hash("Sky1st"), Sky2nd = murmurhash3::hash("Sky2nd"), Sky3rd = murmurhash3::hash("Sky3rd"), SkyAll = murmurhash3::hash("SkyAll"), Minus = murmurhash3::hash("Minus"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Connect_TabantaMaze>&;
	};
	struct CookAtBaseCamp : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CookAtBaseCamp>&;
	};
	struct CraftShadowPicture : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CraftShadowPicture>&;
	};
	struct CreateArmor : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<CreateArmor>&;
	};
	struct Createshinguard : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GatherItem = murmurhash3::hash("GatherItem"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Createshinguard>&;
	};
	struct DeepHoleSurvey2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), AfterInterview = murmurhash3::hash("AfterInterview"), Step01 = murmurhash3::hash("Step01"), Report = murmurhash3::hash("Report"), Buield = murmurhash3::hash("Buield"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<DeepHoleSurvey2>&;
	};
	struct DefeatGanondorf : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), FindWhereabouts = murmurhash3::hash("FindWhereabouts"), GoToDeepHole = murmurhash3::hash("GoToDeepHole"), DefeatMonsterArmy = murmurhash3::hash("DefeatMonsterArmy"), DefeatGanon1 = murmurhash3::hash("DefeatGanon1"), DefeatGanon2 = murmurhash3::hash("DefeatGanon2"), DefeatBlackDragon = murmurhash3::hash("DefeatBlackDragon"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<DefeatGanondorf>&;
	};
	struct DefeatHugeEnemy_1 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Defeat = murmurhash3::hash("Defeat"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<DefeatHugeEnemy_1>&;
	};
	struct DefeatHugeEnemy_2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Defeat = murmurhash3::hash("Defeat"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<DefeatHugeEnemy_2>&;
	};
	struct DefeatHugeEnemy_3 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Defeat = murmurhash3::hash("Defeat"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<DefeatHugeEnemy_3>&;
	};
	struct DefeatHugeEnemy_4 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Defeat = murmurhash3::hash("Defeat"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<DefeatHugeEnemy_4>&;
	};
	struct DefeatHugeEnemy_5 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Defeat = murmurhash3::hash("Defeat"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<DefeatHugeEnemy_5>&;
	};
	struct DefeatHugeEnemy_6 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), EventLightSpot = murmurhash3::hash("EventLightSpot"), Defeat = murmurhash3::hash("Defeat"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<DefeatHugeEnemy_6>&;
	};
	struct DevoteSpring : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<DevoteSpring>&;
	};
	struct DividedSlate : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), RepairSlate = murmurhash3::hash("RepairSlate"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<DividedSlate>&;
	};
	struct EightHeroStatues : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<EightHeroStatues>&;
	};
	struct EightHeroStatues_After : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step1_GoRoom = murmurhash3::hash("Step1_GoRoom"), Step2 = murmurhash3::hash("Step2"), Step3 = murmurhash3::hash("Step3"), Step4 = murmurhash3::hash("Step4"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<EightHeroStatues_After>&;
	};
	struct EveryonesMeal : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Collect = murmurhash3::hash("Collect"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<EveryonesMeal>&;
	};
	struct ExcavateFossil1 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), LightPoint = murmurhash3::hash("LightPoint"), GoFossil = murmurhash3::hash("GoFossil"), Excavate = murmurhash3::hash("Excavate"), NextLightPoint = murmurhash3::hash("NextLightPoint"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<ExcavateFossil1>&;
	};
	struct ExcavateFossil2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GoFossil = murmurhash3::hash("GoFossil"), Excavate = murmurhash3::hash("Excavate"), NextLightPoint = murmurhash3::hash("NextLightPoint"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<ExcavateFossil2>&;
	};
	struct ExcavateFossil3 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GoFossil = murmurhash3::hash("GoFossil"), Excavate = murmurhash3::hash("Excavate"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<ExcavateFossil3>&;
	};
	struct Fairy2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), ReturnUmayado = murmurhash3::hash("ReturnUmayado"), CarryNPC = murmurhash3::hash("CarryNPC"), CarryNPC2 = murmurhash3::hash("CarryNPC2"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Fairy2>&;
	};
	struct Fairy3 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), GoToOrchestra = murmurhash3::hash("GoToOrchestra"), Craft = murmurhash3::hash("Craft"), Reach = murmurhash3::hash("Reach"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Fairy3>&;
	};
	struct Fairy4 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), GoToOrchestra = murmurhash3::hash("GoToOrchestra"), CarryNPC = murmurhash3::hash("CarryNPC"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Fairy4>&;
	};
	struct FindDrefan : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), FindDrefan = murmurhash3::hash("FindDrefan"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<FindDrefan>&;
	};
	struct FindSunaNui : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), SetUp = murmurhash3::hash("SetUp"), Playing = murmurhash3::hash("Playing"), Result = murmurhash3::hash("Result"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<FindSunaNui>&;
	};
	struct FindSunaNui2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Playing = murmurhash3::hash("Playing"), Result = murmurhash3::hash("Result"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<FindSunaNui2>&;
	};
	struct FindWhiteHorse : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<FindWhiteHorse>&;
	};
	struct FindWithSensors : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), TestSensor = murmurhash3::hash("TestSensor"), Find = murmurhash3::hash("Find"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<FindWithSensors>&;
	};
	struct FirstskyislandReturns : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), BeforeGame = murmurhash3::hash("BeforeGame"), ReturnReady = murmurhash3::hash("ReturnReady"), InGameWhenActiveTorchNumIs0 = murmurhash3::hash("InGameWhenActiveTorchNumIs0"), InGameWhenActiveTorchNumIs1 = murmurhash3::hash("InGameWhenActiveTorchNumIs1"), InGameWhenActiveTorchNumIs2 = murmurhash3::hash("InGameWhenActiveTorchNumIs2"), GameClear = murmurhash3::hash("GameClear"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<FirstskyislandReturns>&;
	};
	struct FullyRipenedFlintstones : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetFlintstones = murmurhash3::hash("GetFlintstones"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<FullyRipenedFlintstones>&;
	};
	struct GOToTheCastleOfHyrule : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MeetPurah = murmurhash3::hash("MeetPurah"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<GOToTheCastleOfHyrule>&;
	};
	struct GeniusWeapon_Zora : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<GeniusWeapon_Zora>&;
	};
	struct Genkos_Kitchen : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), HaveFish = murmurhash3::hash("HaveFish"), GetPresent = murmurhash3::hash("GetPresent"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Genkos_Kitchen>&;
	};
	struct GerudoCanyon_24hEnduranceComparison : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Prepare = murmurhash3::hash("Prepare"), Comparison = murmurhash3::hash("Comparison"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<GerudoCanyon_24hEnduranceComparison>&;
	};
	struct GerudoCanyon_Adventure : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<GerudoCanyon_Adventure>&;
	};
	struct GerudoCanyon_ColdEnduranceComparison : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Prepare = murmurhash3::hash("Prepare"), Comparison = murmurhash3::hash("Comparison"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<GerudoCanyon_ColdEnduranceComparison>&;
	};
	struct GerudoCanyon_GleeokLiver : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<GerudoCanyon_GleeokLiver>&;
	};
	struct GerudoCanyon_TumbleweedSweep : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<GerudoCanyon_TumbleweedSweep>&;
	};
	struct GerudoDesertTreasure : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<GerudoDesertTreasure>&;
	};
	struct Gerudo_UrbosaWeapon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Gerudo_UrbosaWeapon>&;
	};
	struct GetCamera : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GotoUnderground = murmurhash3::hash("GotoUnderground"), TakePicture = murmurhash3::hash("TakePicture"), ReturnBaseCamp = murmurhash3::hash("ReturnBaseCamp"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<GetCamera>&;
	};
	struct GetMasterSword : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Order = murmurhash3::hash("Order"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<GetMasterSword>&;
	};
	struct GetSensorPlus : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<GetSensorPlus>&;
	};
	struct GetWalker : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<GetWalker>&;
	};
	struct GetWarpMarker : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), EventLightSpot = murmurhash3::hash("EventLightSpot"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Step03 = murmurhash3::hash("Step03"), Step04 = murmurhash3::hash("Step04"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<GetWarpMarker>&;
	};
	struct GiantHorse : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Step3 = murmurhash3::hash("Step3"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<GiantHorse>&;
	};
	struct GoneSnowQueen : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step0 = murmurhash3::hash("Step0"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Step3 = murmurhash3::hash("Step3"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<GoneSnowQueen>&;
	};
	struct GoronPond : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), FindThePond = murmurhash3::hash("FindThePond"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<GoronPond>&;
	};
	struct GoronReturntoNature : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), FindGraveyard = murmurhash3::hash("FindGraveyard"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<GoronReturntoNature>&;
	};
	struct Goron_MiniGame_01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Craft = murmurhash3::hash("Craft"), Playing = murmurhash3::hash("Playing"), Finish = murmurhash3::hash("Finish"), Retire = murmurhash3::hash("Retire"), PlayerOut = murmurhash3::hash("PlayerOut"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Goron_MiniGame_01>&;
	};
	struct Goron_MiniGame_02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Craft = murmurhash3::hash("Craft"), Playing = murmurhash3::hash("Playing"), TimeOver = murmurhash3::hash("TimeOver"), Retire = murmurhash3::hash("Retire"), Finish = murmurhash3::hash("Finish"), PlayerOut = murmurhash3::hash("PlayerOut"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Goron_MiniGame_02>&;
	};
	struct Goron_MiniGame_03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Craft = murmurhash3::hash("Craft"), Playing = murmurhash3::hash("Playing"), Retire = murmurhash3::hash("Retire"), CourseOut = murmurhash3::hash("CourseOut"), Finish = murmurhash3::hash("Finish"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Goron_MiniGame_03>&;
	};
	struct Goron_MiniGame_Tutorial_01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), BeforeGame = murmurhash3::hash("BeforeGame"), Craft = murmurhash3::hash("Craft"), Playing = murmurhash3::hash("Playing"), Finish = murmurhash3::hash("Finish"), Retire = murmurhash3::hash("Retire"), PlayerOut = murmurhash3::hash("PlayerOut"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Goron_MiniGame_Tutorial_01>&;
	};
	struct Goron_MiniGame_Tutorial_02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), BeforeGame = murmurhash3::hash("BeforeGame"), Craft = murmurhash3::hash("Craft"), Playing = murmurhash3::hash("Playing"), TimeOver = murmurhash3::hash("TimeOver"), Retire = murmurhash3::hash("Retire"), Finish = murmurhash3::hash("Finish"), PlayerOut = murmurhash3::hash("PlayerOut"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Goron_MiniGame_Tutorial_02>&;
	};
	struct Goron_MiniGame_Tutorial_03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), BeforeGame = murmurhash3::hash("BeforeGame"), Craft = murmurhash3::hash("Craft"), Playing = murmurhash3::hash("Playing"), Retire = murmurhash3::hash("Retire"), CourseOut = murmurhash3::hash("CourseOut"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Goron_MiniGame_Tutorial_03>&;
	};
	struct GotoFironeZonauRemains : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), DecipherTheIithograph = murmurhash3::hash("DecipherTheIithograph"), EventLightSpot01 = murmurhash3::hash("EventLightSpot01"), EventLightSpot02 = murmurhash3::hash("EventLightSpot02"), ZonauRemains_ArriveObservatory = murmurhash3::hash("ZonauRemains_ArriveObservatory"), ZonauRemains_TalkResearcher = murmurhash3::hash("ZonauRemains_TalkResearcher"), ZonauRemains_AppearsSkyIsland = murmurhash3::hash("ZonauRemains_AppearsSkyIsland"), ZonauRemains_OpenedTheDoor = murmurhash3::hash("ZonauRemains_OpenedTheDoor"), ZonauRemains_TouchTheHead = murmurhash3::hash("ZonauRemains_TouchTheHead"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<GotoFironeZonauRemains>&;
	};
	struct GroundPaintingAir01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GoToWandererA = murmurhash3::hash("GoToWandererA"), GoToWandererB = murmurhash3::hash("GoToWandererB"), Carry = murmurhash3::hash("Carry"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<GroundPaintingAir01>&;
	};
	struct Hack_GuardGoods : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Defeat = murmurhash3::hash("Defeat"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Hack_GuardGoods>&;
	};
	struct HammerGong_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Playing = murmurhash3::hash("Playing"), Retry = murmurhash3::hash("Retry"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<HammerGong_MiniGame>&;
	};
	struct HatenoPurchasePicture : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Purchase = murmurhash3::hash("Purchase"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<HatenoPurchasePicture>&;
	};
	struct Hateno_Cheese : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Hateno_Cheese>&;
	};
	struct Hateno_CoolGuy : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Report = murmurhash3::hash("Report"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Hateno_CoolGuy>&;
	};
	struct Hateno_FreshMilk : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Hateno_FreshMilk>&;
	};
	struct Hateno_LetUsElection : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Ready1 = murmurhash3::hash("Ready1"), Ready2 = murmurhash3::hash("Ready2"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Hateno_LetUsElection>&;
	};
	struct Hateno_NewCostume : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Hateno_NewCostume>&;
	};
	struct Hateno_NewSpecialty : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), ReChallenge = murmurhash3::hash("ReChallenge"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Hateno_NewSpecialty>&;
	};
	struct Hateno_RevitalizeByNewSpeciality : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Hateno_RevitalizeByNewSpeciality>&;
	};
	struct Hateno_SecretLifeOfKusayoshi : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Hateno_SecretLifeOfKusayoshi>&;
	};
	struct Hateno_SecretLifeOfSagono : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Hateno_SecretLifeOfSagono>&;
	};
	struct Hateno_TellMeTeacher01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), TakeAPicture = murmurhash3::hash("TakeAPicture"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Hateno_TellMeTeacher01>&;
	};
	struct Hateno_TellMeTeacher02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Hateno_TellMeTeacher02>&;
	};
	struct Hateno_VillageMayorElection : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Step03 = murmurhash3::hash("Step03"), Step04 = murmurhash3::hash("Step04"), Step05 = murmurhash3::hash("Step05"), Step06 = murmurhash3::hash("Step06"), Step07 = murmurhash3::hash("Step07"), Step08 = murmurhash3::hash("Step08"), Step09 = murmurhash3::hash("Step09"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Hateno_VillageMayorElection>&;
	};
	struct Hateno_WhatToPlant : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Choice = murmurhash3::hash("Choice"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Hateno_WhatToPlant>&;
	};
	struct Hebra_SkyRingChallenge : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Preparation = murmurhash3::hash("Preparation"), Playing = murmurhash3::hash("Playing"), Retry = murmurhash3::hash("Retry"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Hebra_SkyRingChallenge>&;
	};
	struct Hebra_SkyRingChallenge_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Playing = murmurhash3::hash("Playing"), Retry = murmurhash3::hash("Retry"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Hebra_SkyRingChallenge_MiniGame>&;
	};
	struct HorseInnChallenge001 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Repair = murmurhash3::hash("Repair"), Repair2 = murmurhash3::hash("Repair2"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<HorseInnChallenge001>&;
	};
	struct HorseInnChallenge002 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), step1 = murmurhash3::hash("step1"), Report = murmurhash3::hash("Report"), Report2 = murmurhash3::hash("Report2"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<HorseInnChallenge002>&;
	};
	struct HorseInnChallenge003 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CupsuleDrop = murmurhash3::hash("CupsuleDrop"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<HorseInnChallenge003>&;
	};
	struct HorseInnChallenge005 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<HorseInnChallenge005>&;
	};
	struct HorseInnChallenge007 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Step3 = murmurhash3::hash("Step3"), AfterDefeat = murmurhash3::hash("AfterDefeat"), GetReward = murmurhash3::hash("GetReward"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<HorseInnChallenge007>&;
	};
	struct HotSpringEgg : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), FindHotSpring = murmurhash3::hash("FindHotSpring"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<HotSpringEgg>&;
	};
	struct HourseInnChallenge004 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), TryToDestroy = murmurhash3::hash("TryToDestroy"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<HourseInnChallenge004>&;
	};
	struct HuntSalmon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Report = murmurhash3::hash("Report"), GetPrize = murmurhash3::hash("GetPrize"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<HuntSalmon>&;
	};
	struct HyruleCastleIncident : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CastleSurvey = murmurhash3::hash("CastleSurvey"), ReturnBCAfterDefeatMonster = murmurhash3::hash("ReturnBCAfterDefeatMonster"), GoToCannon = murmurhash3::hash("GoToCannon"), UseTerminal = murmurhash3::hash("UseTerminal"), UseCannon = murmurhash3::hash("UseCannon"), ToLand = murmurhash3::hash("ToLand"), EventLightSpot = murmurhash3::hash("EventLightSpot"), EventLightSpot2 = murmurhash3::hash("EventLightSpot2"), EventLightSpot3 = murmurhash3::hash("EventLightSpot3"), EventLightSpot4 = murmurhash3::hash("EventLightSpot4"), EventLightSpot5 = murmurhash3::hash("EventLightSpot5"), UnderSurveyOfFourVillages = murmurhash3::hash("UnderSurveyOfFourVillages"), ResearchCastle = murmurhash3::hash("ResearchCastle"), DefeatBlackZelda = murmurhash3::hash("DefeatBlackZelda"), ReturnBCAfterBlackZelda = murmurhash3::hash("ReturnBCAfterBlackZelda"), UnderFindTheFifthSage = murmurhash3::hash("UnderFindTheFifthSage"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<HyruleCastleIncident>&;
	};
	struct IceMaking : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<IceMaking>&;
	};
	struct IchikaraChallenge01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Research = murmurhash3::hash("Research"), Child_Talk = murmurhash3::hash("Child_Talk"), Quiz2 = murmurhash3::hash("Quiz2"), Cooking = murmurhash3::hash("Cooking"), GotoRopeway = murmurhash3::hash("GotoRopeway"), MammyReport = murmurhash3::hash("MammyReport"), PaPaTalk = murmurhash3::hash("PaPaTalk"), Memory = murmurhash3::hash("Memory"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<IchikaraChallenge01>&;
	};
	struct IchikaraChallenge03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<IchikaraChallenge03>&;
	};
	struct IchikaraCircuit_Tutorial : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Craft = murmurhash3::hash("Craft"), Retry = murmurhash3::hash("Retry"), TimeOver = murmurhash3::hash("TimeOver"), Playing = murmurhash3::hash("Playing"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<IchikaraCircuit_Tutorial>&;
	};
	struct IchikaraDaughterPhoto : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<IchikaraDaughterPhoto>&;
	};
	struct IllnessStartsWithFeelings : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Finale = murmurhash3::hash("Finale"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<IllnessStartsWithFeelings>&;
	};
	struct InfiltrationFromTheSky : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<InfiltrationFromTheSky>&;
	};
	struct InnNeverReturns : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<InnNeverReturns>&;
	};
	struct JobSunazarashi : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Drive1 = murmurhash3::hash("Drive1"), Arrival = murmurhash3::hash("Arrival"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<JobSunazarashi>&;
	};
	struct Know_FourStonePlates : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Know_FourStonePlates>&;
	};
	struct KokkoGuidePost : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), step1 = murmurhash3::hash("step1"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<KokkoGuidePost>&;
	};
	struct Korok_CarryToShrine : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Carry = murmurhash3::hash("Carry"), Crystal = murmurhash3::hash("Crystal"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Korok_CarryToShrine>&;
	};
	struct Lodge_Chemical001 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), DefeatAnEnemy = murmurhash3::hash("DefeatAnEnemy"), DefeatedEnemies = murmurhash3::hash("DefeatedEnemies"), GetPresent = murmurhash3::hash("GetPresent"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Lodge_Chemical001>&;
	};
	struct LookingForLightSpot : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GoToLightSpotOfPurahPad = murmurhash3::hash("GoToLightSpotOfPurahPad"), GoBackToTempleEntrance = murmurhash3::hash("GoBackToTempleEntrance"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<LookingForLightSpot>&;
	};
	struct LookingForTheVoiceLord : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<LookingForTheVoiceLord>&;
	};
	struct Mack_SecretBase : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Mack_SecretBase>&;
	};
	struct MainChallenge : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetZonauMajic = murmurhash3::hash("GetZonauMajic"), GoToAlterAfterGetRR = murmurhash3::hash("GoToAlterAfterGetRR"), WarpToCaveOfAwake = murmurhash3::hash("WarpToCaveOfAwake"), GoToBackToGolemInTemple = murmurhash3::hash("GoToBackToGolemInTemple"), GoToBackOfTempleOfTimeAfterWD = murmurhash3::hash("GoToBackOfTempleOfTimeAfterWD"), LookingForZelda = murmurhash3::hash("LookingForZelda"), GoToDeepHole = murmurhash3::hash("GoToDeepHole"), DefeatMonsterArmy = murmurhash3::hash("DefeatMonsterArmy"), DefeatGanon1 = murmurhash3::hash("DefeatGanon1"), DefeatGanon2 = murmurhash3::hash("DefeatGanon2"), DefeatBlackDragon = murmurhash3::hash("DefeatBlackDragon"), CatchZelda = murmurhash3::hash("CatchZelda"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MainChallenge>&;
	};
	struct MakeAChampionsWeapon_Goron : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MakeWeapon = murmurhash3::hash("MakeWeapon"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MakeAChampionsWeapon_Goron>&;
	};
	struct MakeChemicalWeapon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MakeChemicalWeapon>&;
	};
	struct MasterSwordClues : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), TalkOldKorok = murmurhash3::hash("TalkOldKorok"), TalKDekuTree = murmurhash3::hash("TalKDekuTree"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MasterSwordClues>&;
	};
	struct MeatRock : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CarryARock = murmurhash3::hash("CarryARock"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MeatRock>&;
	};
	struct MemoryOfTheDragon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GoTemple = murmurhash3::hash("GoTemple"), GoTemple2 = murmurhash3::hash("GoTemple2"), Step01 = murmurhash3::hash("Step01"), Step2 = murmurhash3::hash("Step2"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MemoryOfTheDragon>&;
	};
	struct MercenaryChallenge_Akkare : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MeetAgain = murmurhash3::hash("MeetAgain"), Move = murmurhash3::hash("Move"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MercenaryChallenge_Akkare>&;
	};
	struct MercenaryChallenge_Eldin : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Move = murmurhash3::hash("Move"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MercenaryChallenge_Eldin>&;
	};
	struct MercenaryChallenge_Firone : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Craft = murmurhash3::hash("Craft"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MercenaryChallenge_Firone>&;
	};
	struct MercenaryChallenge_Hateru : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MeetAgain = murmurhash3::hash("MeetAgain"), Craft = murmurhash3::hash("Craft"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MercenaryChallenge_Hateru>&;
	};
	struct MercenaryChallenge_Hebra : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MeetAgain = murmurhash3::hash("MeetAgain"), Move = murmurhash3::hash("Move"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MercenaryChallenge_Hebra>&;
	};
	struct MercenaryChallenge_HyrulePlain : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Move = murmurhash3::hash("Move"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MercenaryChallenge_HyrulePlain>&;
	};
	struct Mercenary_Akkare_Bloody : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MeetAgain = murmurhash3::hash("MeetAgain"), Move = murmurhash3::hash("Move"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Mercenary_Akkare_Bloody>&;
	};
	struct Mercenary_Eldin_Bloody : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Move = murmurhash3::hash("Move"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Mercenary_Eldin_Bloody>&;
	};
	struct Mercenary_Firone_Bloody : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Craft = murmurhash3::hash("Craft"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Mercenary_Firone_Bloody>&;
	};
	struct Mercenary_Hateru_Bloody : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MeetAgain = murmurhash3::hash("MeetAgain"), Craft = murmurhash3::hash("Craft"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Mercenary_Hateru_Bloody>&;
	};
	struct Mercenary_Hebra_Bloody : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MeetAgain = murmurhash3::hash("MeetAgain"), Move = murmurhash3::hash("Move"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Mercenary_Hebra_Bloody>&;
	};
	struct Mercenary_HyrulePlain_Bloody : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Move = murmurhash3::hash("Move"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Mercenary_HyrulePlain_Bloody>&;
	};
	struct MessageBottle_SOS : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MessageBottle_SOS_01 = murmurhash3::hash("MessageBottle_SOS_01"), MessageBottle_SOS_02 = murmurhash3::hash("MessageBottle_SOS_02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MessageBottle_SOS>&;
	};
	struct MinusYiga : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), BeginBeforeHint = murmurhash3::hash("BeginBeforeHint"), Begin = murmurhash3::hash("Begin"), Again = murmurhash3::hash("Again"), Continue = murmurhash3::hash("Continue"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MinusYiga>&;
	};
	struct MonsterFigures01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Photo = murmurhash3::hash("Photo"), Display = murmurhash3::hash("Display"), Exhibition = murmurhash3::hash("Exhibition"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MonsterFigures01>&;
	};
	struct MonsterFigures02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Photo = murmurhash3::hash("Photo"), Display = murmurhash3::hash("Display"), Exhibition = murmurhash3::hash("Exhibition"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MonsterFigures02>&;
	};
	struct MonsterFigures03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Photo = murmurhash3::hash("Photo"), Display = murmurhash3::hash("Display"), Exhibition = murmurhash3::hash("Exhibition"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MonsterFigures03>&;
	};
	struct MonsterFigures04 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Photo = murmurhash3::hash("Photo"), Display = murmurhash3::hash("Display"), Exhibition = murmurhash3::hash("Exhibition"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MonsterFigures04>&;
	};
	struct MonsterFigures05 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Photo = murmurhash3::hash("Photo"), Display = murmurhash3::hash("Display"), Exhibition = murmurhash3::hash("Exhibition"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MonsterFigures05>&;
	};
	struct MushroomSisters_1 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), GetPresent = murmurhash3::hash("GetPresent"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MushroomSisters_1>&;
	};
	struct MushroomSisters_2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), GetPresent = murmurhash3::hash("GetPresent"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MushroomSisters_2>&;
	};
	struct MushroomSisters_3 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<MushroomSisters_3>&;
	};
	struct Nazley_DigCave : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Dig = murmurhash3::hash("Dig"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Nazley_DigCave>&;
	};
	struct Neck_IceWaterCave : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Defeat = murmurhash3::hash("Defeat"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Neck_IceWaterCave>&;
	};
	struct NewCanyonMissingPersonsCase : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step0 = murmurhash3::hash("Step0"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<NewCanyonMissingPersonsCase>&;
	};
	struct NewsPaper_Mitsuba : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Tribune01 = murmurhash3::hash("Tribune01"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<NewsPaper_Mitsuba>&;
	};
	struct NoTrespassing : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Carry = murmurhash3::hash("Carry"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<NoTrespassing>&;
	};
	struct NowInTheVillageOfLurelin : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<NowInTheVillageOfLurelin>&;
	};
	struct Npc_BaseCamp_Assistant_ReactingStatue : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Npc_BaseCamp_Assistant_ReactingStatue>&;
	};
	struct Npc_BaseCamp_Assistant_ReactingStatue2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Npc_BaseCamp_Assistant_ReactingStatue2>&;
	};
	struct Npc_BaseCamp_Assistant_ReactingStatue3 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Npc_BaseCamp_Assistant_ReactingStatue3>&;
	};
	struct Npc_BaseCamp_Assistant_ReactingStatue4 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Npc_BaseCamp_Assistant_ReactingStatue4>&;
	};
	struct NushiShop_Challenge00 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), FindNushiShop = murmurhash3::hash("FindNushiShop"), HeardSpot = murmurhash3::hash("HeardSpot"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<NushiShop_Challenge00>&;
	};
	struct NushiShop_Tutorial : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), BringCaveMasterMedal = murmurhash3::hash("BringCaveMasterMedal"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<NushiShop_Tutorial>&;
	};
	struct OldKorokHelp : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), STEP1 = murmurhash3::hash("STEP1"), STEP1_Basecamp = murmurhash3::hash("STEP1_Basecamp"), STEP1_Final = murmurhash3::hash("STEP1_Final"), STEP2 = murmurhash3::hash("STEP2"), STEP2_BaseCamp = murmurhash3::hash("STEP2_BaseCamp"), STEP2_Final = murmurhash3::hash("STEP2_Final"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<OldKorokHelp>&;
	};
	struct Orchestra01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), AllMember = murmurhash3::hash("AllMember"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Orchestra01>&;
	};
	struct Orchestra02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Orchestra02>&;
	};
	struct Orchestra03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), step1 = murmurhash3::hash("step1"), step2 = murmurhash3::hash("step2"), step3 = murmurhash3::hash("step3"), step4 = murmurhash3::hash("step4"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Orchestra03>&;
	};
	struct Orchestra04 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), GetPrize = murmurhash3::hash("GetPrize"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Orchestra04>&;
	};
	struct Our_Treasure : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Craft = murmurhash3::hash("Craft"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Our_Treasure>&;
	};
	struct Parasail_ChuchuDesign : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Parasail_ChuchuDesign>&;
	};
	struct PhotoSpot_Challenge_01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<PhotoSpot_Challenge_01>&;
	};
	struct PhotoSpot_Challenge_02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<PhotoSpot_Challenge_02>&;
	};
	struct PhotoSpot_Challenge_03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<PhotoSpot_Challenge_03>&;
	};
	struct PhotoSpot_Challenge_04 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<PhotoSpot_Challenge_04>&;
	};
	struct PhotoSpot_Challenge_05 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<PhotoSpot_Challenge_05>&;
	};
	struct PhotoSpot_Challenge_06 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<PhotoSpot_Challenge_06>&;
	};
	struct PhotoSpot_Challenge_07 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<PhotoSpot_Challenge_07>&;
	};
	struct PhotoSpot_Challenge_08 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<PhotoSpot_Challenge_08>&;
	};
	struct PhotoSpot_Challenge_09 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<PhotoSpot_Challenge_09>&;
	};
	struct PhotoSpot_Challenge_09_2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<PhotoSpot_Challenge_09_2>&;
	};
	struct PhotoSpot_Challenge_10 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<PhotoSpot_Challenge_10>&;
	};
	struct PhotoSpot_Challenge_11 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<PhotoSpot_Challenge_11>&;
	};
	struct PhotoSpot_Challenge_12 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<PhotoSpot_Challenge_12>&;
	};
	struct PhotoSpot_Challenge_13 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<PhotoSpot_Challenge_13>&;
	};
	struct PhotoSpot_Challenge_14 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<PhotoSpot_Challenge_14>&;
	};
	struct Raise_GoddesStatue : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), ToGoal = murmurhash3::hash("ToGoal"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Raise_GoddesStatue>&;
	};
	struct Raise_GoddesStatue_Courage : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CheckGoddesStatue = murmurhash3::hash("CheckGoddesStatue"), Report = murmurhash3::hash("Report"), Altarage = murmurhash3::hash("Altarage"), SolvePouch = murmurhash3::hash("SolvePouch"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Raise_GoddesStatue_Courage>&;
	};
	struct Raise_GoddesStatue_Power : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CheckGoddesStatue = murmurhash3::hash("CheckGoddesStatue"), Report = murmurhash3::hash("Report"), Altarage = murmurhash3::hash("Altarage"), SolvePouch = murmurhash3::hash("SolvePouch"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Raise_GoddesStatue_Power>&;
	};
	struct Raise_GoddesStatue_Wisdom : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CheckGoddesStatue = murmurhash3::hash("CheckGoddesStatue"), Report = murmurhash3::hash("Report"), Altarage = murmurhash3::hash("Altarage"), SolvePouch = murmurhash3::hash("SolvePouch"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Raise_GoddesStatue_Wisdom>&;
	};
	struct RepairArmor : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), SubmitMaterial = murmurhash3::hash("SubmitMaterial"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<RepairArmor>&;
	};
	struct RescueHost : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<RescueHost>&;
	};
	struct RescueVehicle01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Reach = murmurhash3::hash("Reach"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<RescueVehicle01>&;
	};
	struct RescueWell : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Repair = murmurhash3::hash("Repair"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<RescueWell>&;
	};
	struct ResearchEldin : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), SolveAProblem = murmurhash3::hash("SolveAProblem"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<ResearchEldin>&;
	};
	struct ResearchLanayru : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CleanMessenger = murmurhash3::hash("CleanMessenger"), GetPresent = murmurhash3::hash("GetPresent"), GetPresent_Village = murmurhash3::hash("GetPresent_Village"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<ResearchLanayru>&;
	};
	struct RestaurantInTheWell : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MakeFood = murmurhash3::hash("MakeFood"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<RestaurantInTheWell>&;
	};
	struct RitoBridgeRepair : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Report = murmurhash3::hash("Report"), Collect = murmurhash3::hash("Collect"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<RitoBridgeRepair>&;
	};
	struct Rito_ItemExchange : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Collect = murmurhash3::hash("Collect"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Rito_ItemExchange>&;
	};
	struct Rito_MedoArmor : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Rito_MedoArmor>&;
	};
	struct Rito_RevaliWeapon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Collect = murmurhash3::hash("Collect"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Rito_RevaliWeapon>&;
	};
	struct Rito_ShadowCave : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), GetHint = murmurhash3::hash("GetHint"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Rito_ShadowCave>&;
	};
	struct SageOfFire : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Dream = murmurhash3::hash("Dream"), GoCrater = murmurhash3::hash("GoCrater"), DefeatBossMiddle = murmurhash3::hash("DefeatBossMiddle"), GoMinusField = murmurhash3::hash("GoMinusField"), GoEntranceDungeon = murmurhash3::hash("GoEntranceDungeon"), GoDungeon = murmurhash3::hash("GoDungeon"), Dungeon = murmurhash3::hash("Dungeon"), StartBossBattle = murmurhash3::hash("StartBossBattle"), DefeatBoss = murmurhash3::hash("DefeatBoss"), TouchSecretStone = murmurhash3::hash("TouchSecretStone"), Finale = murmurhash3::hash("Finale"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<SageOfFire>&;
	};
	struct SageOfGerudo : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Underground = murmurhash3::hash("Underground"), PracticeStart = murmurhash3::hash("PracticeStart"), PracticeEnd = murmurhash3::hash("PracticeEnd"), PreDefenseStart = murmurhash3::hash("PreDefenseStart"), PreDefenseEnd = murmurhash3::hash("PreDefenseEnd"), DefenseReady = murmurhash3::hash("DefenseReady"), DefenseStart = murmurhash3::hash("DefenseStart"), DefenseEnd = murmurhash3::hash("DefenseEnd"), DungeonSearch = murmurhash3::hash("DungeonSearch"), DungeonFind = murmurhash3::hash("DungeonFind"), DungeonStart = murmurhash3::hash("DungeonStart"), DungeonBossDead = murmurhash3::hash("DungeonBossDead"), DungeonEnd = murmurhash3::hash("DungeonEnd"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<SageOfGerudo>&;
	};
	struct SageOfSky : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetZonauMajic = murmurhash3::hash("GetZonauMajic"), GoToAlterAfterGetRR = murmurhash3::hash("GoToAlterAfterGetRR"), WarpToCaveOfAwake = murmurhash3::hash("WarpToCaveOfAwake"), GoToBackToGolemInTemple = murmurhash3::hash("GoToBackToGolemInTemple"), GoToBackOfTempleOfTimeAfterWD = murmurhash3::hash("GoToBackOfTempleOfTimeAfterWD"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<SageOfSky>&;
	};
	struct SageOfSoul : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CarryHead_CheckPoint01 = murmurhash3::hash("CarryHead_CheckPoint01"), CarryHead_CheckPoint02 = murmurhash3::hash("CarryHead_CheckPoint02"), CarryHead_CheckPoint04 = murmurhash3::hash("CarryHead_CheckPoint04"), Collected_AllParts = murmurhash3::hash("Collected_AllParts"), GolemAppearance = murmurhash3::hash("GolemAppearance"), LightSpotOn = murmurhash3::hash("LightSpotOn"), Dungeon_DuringDungeonCapture = murmurhash3::hash("Dungeon_DuringDungeonCapture"), Dungeon_Entrance = murmurhash3::hash("Dungeon_Entrance"), Dungeon_BeforeBossBattle = murmurhash3::hash("Dungeon_BeforeBossBattle"), Dungeon_DefeatedBoss = murmurhash3::hash("Dungeon_DefeatedBoss"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<SageOfSoul>&;
	};
	struct SageOfWind : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MountainHut = murmurhash3::hash("MountainHut"), GoToCave = murmurhash3::hash("GoToCave"), FoundTulin = murmurhash3::hash("FoundTulin"), IpponSugi = murmurhash3::hash("IpponSugi"), GetBack = murmurhash3::hash("GetBack"), DefeatEnemy = murmurhash3::hash("DefeatEnemy"), GoToHebra = murmurhash3::hash("GoToHebra"), GoDungeon = murmurhash3::hash("GoDungeon"), CheckTerminal = murmurhash3::hash("CheckTerminal"), DungeonStart = murmurhash3::hash("DungeonStart"), BossBattle = murmurhash3::hash("BossBattle"), DefeatBoss = murmurhash3::hash("DefeatBoss"), TouchSecretStone = murmurhash3::hash("TouchSecretStone"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<SageOfWind>&;
	};
	struct SageOfZora : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), MeetParkShido = murmurhash3::hash("MeetParkShido"), ResearchZora = murmurhash3::hash("ResearchZora"), InterimReportToShido = murmurhash3::hash("InterimReportToShido"), InterimReportToShido_Ex = murmurhash3::hash("InterimReportToShido_Ex"), FindWaterBridge = murmurhash3::hash("FindWaterBridge"), ReportToParkShido = murmurhash3::hash("ReportToParkShido"), DefeatLakeBoss = murmurhash3::hash("DefeatLakeBoss"), GoToLakeShido = murmurhash3::hash("GoToLakeShido"), GoToUnderLake = murmurhash3::hash("GoToUnderLake"), SearchRemains = murmurhash3::hash("SearchRemains"), GoToBeforeDungeon = murmurhash3::hash("GoToBeforeDungeon"), GoToBeforeDungeon_00 = murmurhash3::hash("GoToBeforeDungeon_00"), GoToDungeonStart = murmurhash3::hash("GoToDungeonStart"), TryOneTank = murmurhash3::hash("TryOneTank"), GoToBossArea = murmurhash3::hash("GoToBossArea"), DefeatBoss = murmurhash3::hash("DefeatBoss"), TouchSecretStone = murmurhash3::hash("TouchSecretStone"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<SageOfZora>&;
	};
	struct SaihateSubjugation : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Step3 = murmurhash3::hash("Step3"), Step4 = murmurhash3::hash("Step4"), Step5 = murmurhash3::hash("Step5"), Step6 = murmurhash3::hash("Step6"), Step7 = murmurhash3::hash("Step7"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<SaihateSubjugation>&;
	};
	struct SearchCaravan : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step1a = murmurhash3::hash("Step1a"), Step2 = murmurhash3::hash("Step2"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<SearchCaravan>&;
	};
	struct SecretBase_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Retry = murmurhash3::hash("Retry"), Play = murmurhash3::hash("Play"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<SecretBase_MiniGame>&;
	};
	struct ShieldSurfing_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Playing = murmurhash3::hash("Playing"), Retry = murmurhash3::hash("Retry"), TimeOver = murmurhash3::hash("TimeOver"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<ShieldSurfing_MiniGame>&;
	};
	struct SkyIsland_MiniGame_01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), EasyGamePlaying = murmurhash3::hash("EasyGamePlaying"), HardGamePlaying = murmurhash3::hash("HardGamePlaying"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<SkyIsland_MiniGame_01>&;
	};
	struct SkyIsland_MiniGame_02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), EasyGamePlaying = murmurhash3::hash("EasyGamePlaying"), HardGamePlaying = murmurhash3::hash("HardGamePlaying"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<SkyIsland_MiniGame_02>&;
	};
	struct SkyIsland_MiniGame_03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), EasyGamePlaying = murmurhash3::hash("EasyGamePlaying"), HardGamePlaying = murmurhash3::hash("HardGamePlaying"), Finish = murmurhash3::hash("Finish"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<SkyIsland_MiniGame_03>&;
	};
	struct SnowyMountain_Surfing : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<SnowyMountain_Surfing>&;
	};
	struct StatueDevilTutorial : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetBackContainer = murmurhash3::hash("GetBackContainer"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<StatueDevilTutorial>&;
	};
	struct SurveyOfFourVillages : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), EventLightSpot1 = murmurhash3::hash("EventLightSpot1"), EventLightSpot2 = murmurhash3::hash("EventLightSpot2"), EventLightSpot3 = murmurhash3::hash("EventLightSpot3"), EventLightSpot4 = murmurhash3::hash("EventLightSpot4"), EventLightSpot5 = murmurhash3::hash("EventLightSpot5"), _1stSageClear = murmurhash3::hash("1stSageClear"), _2ndSageClear = murmurhash3::hash("2ndSageClear"), _3rdSageClear = murmurhash3::hash("3rdSageClear"), _4thSageClear = murmurhash3::hash("4thSageClear"), ReturnBCAfter4Sage = murmurhash3::hash("ReturnBCAfter4Sage"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<SurveyOfFourVillages>&;
	};
	struct TakeAnimals : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<TakeAnimals>&;
	};
	struct TakeOfIce : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<TakeOfIce>&;
	};
	struct TauraChallenge001 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Finale = murmurhash3::hash("Finale"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<TauraChallenge001>&;
	};
	struct TheStrongestWeapon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<TheStrongestWeapon>&;
	};
	struct TreasureHunt_kokiri : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<TreasureHunt_kokiri>&;
	};
	struct TreasureOfLambda : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), OpenTreasure = murmurhash3::hash("OpenTreasure"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<TreasureOfLambda>&;
	};
	struct TreasureOfLamda_Dream : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetTreasure = murmurhash3::hash("GetTreasure"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<TreasureOfLamda_Dream>&;
	};
	struct TreasureOfLamda_Dream2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetTreasure = murmurhash3::hash("GetTreasure"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<TreasureOfLamda_Dream2>&;
	};
	struct TreasureOfLamda_Dream3 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetTreasure = murmurhash3::hash("GetTreasure"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<TreasureOfLamda_Dream3>&;
	};
	struct TreasureOfLamda_DuelPeak : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetTreasure = murmurhash3::hash("GetTreasure"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<TreasureOfLamda_DuelPeak>&;
	};
	struct TreasureOfLamda_FierceDeity : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetOneTreaure = murmurhash3::hash("GetOneTreaure"), GetTwoTreasure = murmurhash3::hash("GetTwoTreasure"), GetThreeTreasure = murmurhash3::hash("GetThreeTreasure"), GetSword = murmurhash3::hash("GetSword"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<TreasureOfLamda_FierceDeity>&;
	};
	struct TreasureOfLamda_Gerudo : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetTreasure = murmurhash3::hash("GetTreasure"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<TreasureOfLamda_Gerudo>&;
	};
	struct TreasureOfLamda_Pirate : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), GetTreasure = murmurhash3::hash("GetTreasure"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<TreasureOfLamda_Pirate>&;
	};
	struct Tribune01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Exterminate = murmurhash3::hash("Exterminate"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Tribune01>&;
	};
	struct Tribune02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Escape = murmurhash3::hash("Escape"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Tribune02>&;
	};
	struct Tribune03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Hearing = murmurhash3::hash("Hearing"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Tribune03>&;
	};
	struct Tribune04 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Tribune04>&;
	};
	struct Tribune05 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Carry = murmurhash3::hash("Carry"), Carry2 = murmurhash3::hash("Carry2"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Tribune05>&;
	};
	struct Tribune06 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Tribune06>&;
	};
	struct Tribune07 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), step1 = murmurhash3::hash("step1"), step2 = murmurhash3::hash("step2"), step4 = murmurhash3::hash("step4"), step5 = murmurhash3::hash("step5"), step6 = murmurhash3::hash("step6"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Tribune07>&;
	};
	struct Tribune09 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), HorseTake = murmurhash3::hash("HorseTake"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Tribune09>&;
	};
	struct Tribune10 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), TalkKokkko = murmurhash3::hash("TalkKokkko"), FirstOracle = murmurhash3::hash("FirstOracle"), TimeOverFirst = murmurhash3::hash("TimeOverFirst"), ClearFirst = murmurhash3::hash("ClearFirst"), FinishFirstTrial = murmurhash3::hash("FinishFirstTrial"), SecondOracle = murmurhash3::hash("SecondOracle"), TimeOverSecond = murmurhash3::hash("TimeOverSecond"), ClearSecond = murmurhash3::hash("ClearSecond"), Battle = murmurhash3::hash("Battle"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Tribune10>&;
	};
	struct Tribune11 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Step3 = murmurhash3::hash("Step3"), Step4 = murmurhash3::hash("Step4"), Step5 = murmurhash3::hash("Step5"), Step6 = murmurhash3::hash("Step6"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Tribune11>&;
	};
	struct Tribune13 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Chase = murmurhash3::hash("Chase"), Discovery = murmurhash3::hash("Discovery"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Tribune13>&;
	};
	struct Tribune14 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Step3 = murmurhash3::hash("Step3"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Tribune14>&;
	};
	struct Tribune16 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Carry = murmurhash3::hash("Carry"), Arrival = murmurhash3::hash("Arrival"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Tribune16>&;
	};
	struct Uotori_BreakthePirateBase : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Uotori_BreakthePirateBase>&;
	};
	struct Uotori_Designer : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Uotori_Designer>&;
	};
	struct Uotori_ResortPlan : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Contact = murmurhash3::hash("Contact"), Challenge = murmurhash3::hash("Challenge"), Report = murmurhash3::hash("Report"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Uotori_ResortPlan>&;
	};
	struct Uotori_RevivePlan : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), CollectWood = murmurhash3::hash("CollectWood"), Revive = murmurhash3::hash("Revive"), Finale = murmurhash3::hash("Finale"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Uotori_RevivePlan>&;
	};
	struct Uotori_WhiteLineGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Uotori_WhiteLineGame>&;
	};
	struct UpgradeOfPurahPad1 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), EventLightSpot = murmurhash3::hash("EventLightSpot"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<UpgradeOfPurahPad1>&;
	};
	struct WantedCleaning : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<WantedCleaning>&;
	};
	struct WashedAwayBusinessTools : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Reward = murmurhash3::hash("Reward"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<WashedAwayBusinessTools>&;
	};
	struct WaterBridgePlace : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), FindDrefan = murmurhash3::hash("FindDrefan"), SearchKingScales = murmurhash3::hash("SearchKingScales"), SearchWaterBridge = murmurhash3::hash("SearchWaterBridge"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<WaterBridgePlace>&;
	};
	struct WellCollection : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Search = murmurhash3::hash("Search"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<WellCollection>&;
	};
	struct WhichIsStronger : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step01 = murmurhash3::hash("Step01"), Step02 = murmurhash3::hash("Step02"), Step03 = murmurhash3::hash("Step03"), Step04 = murmurhash3::hash("Step04"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<WhichIsStronger>&;
	};
	struct ZonauReliefSearch : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Reach_KakarikoVillage = murmurhash3::hash("Reach_KakarikoVillage"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<ZonauReliefSearch>&;
	};
	struct Zonau_GeniusWeapon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Exchange = murmurhash3::hash("Exchange"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Zonau_GeniusWeapon>&;
	};
	struct ZoraStatue_Picture : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), TakePhoto = murmurhash3::hash("TakePhoto"), GetPrize = murmurhash3::hash("GetPrize"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<ZoraStatue_Picture>&;
	};
	struct Zora_Enemy_hunt : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Zora_Enemy_hunt>&;
	};
	struct Zora_MessageBottle : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step0 = murmurhash3::hash("Step0"), Step1 = murmurhash3::hash("Step1"), Step2 = murmurhash3::hash("Step2"), GetPrize = murmurhash3::hash("GetPrize"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Zora_MessageBottle>&;
	};
	struct Zora_RuttaTreasure : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), TreasureHunt = murmurhash3::hash("TreasureHunt"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<Zora_RuttaTreasure>&;
	};
	struct gather_Insect_Z : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { NotReady = murmurhash3::hash("NotReady"), Ready = murmurhash3::hash("Ready"), Step1 = murmurhash3::hash("Step1"), Complete = murmurhash3::hash("Complete"), }; };
		using type = enum_t<gather_Insect_Z>&;
	};
};/* Tag::Structure GameData::Step close */

template <> struct Data::Structure<GameData::Step> : GameData::Step {
	Enum<AisyaRescue> AisyaRescue;
	Enum<AmberCollector> AmberCollector;
	Enum<ArrowMeister_Momo> ArrowMeister_Momo;
	Enum<AssassinGerudoBase> AssassinGerudoBase;
	Enum<BallBring_MiniGame> BallBring_MiniGame;
	Enum<Basketball_MiniGame> Basketball_MiniGame;
	Enum<Big_Rotate> Big_Rotate;
	Enum<BirdManContest> BirdManContest;
	Enum<BlindRuinsTreasure> BlindRuinsTreasure;
	Enum<BlindRuinsTreasure_Gerudo> BlindRuinsTreasure_Gerudo;
	Enum<BlindRuinsTreasure_Goron> BlindRuinsTreasure_Goron;
	Enum<BlindRuinsTreasure_Rito> BlindRuinsTreasure_Rito;
	Enum<BlindRuinsTreasure_Zora> BlindRuinsTreasure_Zora;
	Enum<BuildHouse> BuildHouse;
	Enum<BuildingMaterialsTutorial> BuildingMaterialsTutorial;
	Enum<CDungeon_AllDone> CDungeon_AllDone;
	Enum<CarryGoronKid1> CarryGoronKid1;
	Enum<CarryGoronKid2> CarryGoronKid2;
	Enum<CarryStone> CarryStone;
	Enum<CarryToShrine01> CarryToShrine01;
	Enum<CarryToShrine02> CarryToShrine02;
	Enum<CarryToShrine03> CarryToShrine03;
	Enum<CarryToShrine05> CarryToShrine05;
	Enum<CarryToShrine06> CarryToShrine06;
	Enum<CarryToShrine07> CarryToShrine07;
	Enum<CarryToShrine08_Zora> CarryToShrine08_Zora;
	Enum<CarryToShrine09> CarryToShrine09;
	Enum<CarryToShrine10> CarryToShrine10;
	Enum<CarryToShrine11> CarryToShrine11;
	Enum<CarryToShrine12> CarryToShrine12;
	Enum<CarryToShrine13> CarryToShrine13;
	Enum<CarryToShrine14> CarryToShrine14;
	Enum<CarryToShrine15> CarryToShrine15;
	Enum<CarryToShrine16> CarryToShrine16;
	Enum<CarryToShrine17> CarryToShrine17;
	Enum<CarryToShrine19> CarryToShrine19;
	Enum<CarryToShrine20> CarryToShrine20;
	Enum<CarryToShrine21> CarryToShrine21;
	Enum<CarryToShrine22> CarryToShrine22;
	Enum<CarryToShrine23> CarryToShrine23;
	Enum<Circuit_Desert> Circuit_Desert;
	Enum<Circuit_FaronWoods_MiniGame> Circuit_FaronWoods_MiniGame;
	Enum<Circuit_Ichikara> Circuit_Ichikara;
	Enum<Circuit_Ichikara_MiniGame> Circuit_Ichikara_MiniGame;
	Enum<Circuit_Uotori_MiniGame> Circuit_Uotori_MiniGame;
	Enum<CleanStatue> CleanStatue;
	Enum<ClueTotheSixthSage> ClueTotheSixthSage;
	Enum<CollectObject_MiniGame> CollectObject_MiniGame;
	Enum<CollectObject_MiniGame_Cliff> CollectObject_MiniGame_Cliff;
	Enum<CollectObject_MiniGame_LakeSide> CollectObject_MiniGame_LakeSide;
	Enum<Connect_AkkareMaze> Connect_AkkareMaze;
	Enum<Connect_FirstIsland> Connect_FirstIsland;
	Enum<Connect_GerudoMaze> Connect_GerudoMaze;
	Enum<Connect_TabantaMaze> Connect_TabantaMaze;
	Enum<CookAtBaseCamp> CookAtBaseCamp;
	Enum<CraftShadowPicture> CraftShadowPicture;
	Enum<CreateArmor> CreateArmor;
	Enum<Createshinguard> Createshinguard;
	Enum<DeepHoleSurvey2> DeepHoleSurvey2;
	Enum<DefeatGanondorf> DefeatGanondorf;
	Enum<DefeatHugeEnemy_1> DefeatHugeEnemy_1;
	Enum<DefeatHugeEnemy_2> DefeatHugeEnemy_2;
	Enum<DefeatHugeEnemy_3> DefeatHugeEnemy_3;
	Enum<DefeatHugeEnemy_4> DefeatHugeEnemy_4;
	Enum<DefeatHugeEnemy_5> DefeatHugeEnemy_5;
	Enum<DefeatHugeEnemy_6> DefeatHugeEnemy_6;
	Enum<DevoteSpring> DevoteSpring;
	Enum<DividedSlate> DividedSlate;
	Enum<EightHeroStatues> EightHeroStatues;
	Enum<EightHeroStatues_After> EightHeroStatues_After;
	Enum<EveryonesMeal> EveryonesMeal;
	Enum<ExcavateFossil1> ExcavateFossil1;
	Enum<ExcavateFossil2> ExcavateFossil2;
	Enum<ExcavateFossil3> ExcavateFossil3;
	Enum<Fairy2> Fairy2;
	Enum<Fairy3> Fairy3;
	Enum<Fairy4> Fairy4;
	Enum<FindDrefan> FindDrefan;
	Enum<FindSunaNui> FindSunaNui;
	Enum<FindSunaNui2> FindSunaNui2;
	Enum<FindWhiteHorse> FindWhiteHorse;
	Enum<FindWithSensors> FindWithSensors;
	Enum<FirstskyislandReturns> FirstskyislandReturns;
	Enum<FullyRipenedFlintstones> FullyRipenedFlintstones;
	Enum<GOToTheCastleOfHyrule> GOToTheCastleOfHyrule;
	Enum<GeniusWeapon_Zora> GeniusWeapon_Zora;
	Enum<Genkos_Kitchen> Genkos_Kitchen;
	Enum<GerudoCanyon_24hEnduranceComparison> GerudoCanyon_24hEnduranceComparison;
	Enum<GerudoCanyon_Adventure> GerudoCanyon_Adventure;
	Enum<GerudoCanyon_ColdEnduranceComparison> GerudoCanyon_ColdEnduranceComparison;
	Enum<GerudoCanyon_GleeokLiver> GerudoCanyon_GleeokLiver;
	Enum<GerudoCanyon_TumbleweedSweep> GerudoCanyon_TumbleweedSweep;
	Enum<GerudoDesertTreasure> GerudoDesertTreasure;
	Enum<Gerudo_UrbosaWeapon> Gerudo_UrbosaWeapon;
	Enum<GetCamera> GetCamera;
	Enum<GetMasterSword> GetMasterSword;
	Enum<GetSensorPlus> GetSensorPlus;
	Enum<GetWalker> GetWalker;
	Enum<GetWarpMarker> GetWarpMarker;
	Enum<GiantHorse> GiantHorse;
	Enum<GoneSnowQueen> GoneSnowQueen;
	Enum<GoronPond> GoronPond;
	Enum<GoronReturntoNature> GoronReturntoNature;
	Enum<Goron_MiniGame_01> Goron_MiniGame_01;
	Enum<Goron_MiniGame_02> Goron_MiniGame_02;
	Enum<Goron_MiniGame_03> Goron_MiniGame_03;
	Enum<Goron_MiniGame_Tutorial_01> Goron_MiniGame_Tutorial_01;
	Enum<Goron_MiniGame_Tutorial_02> Goron_MiniGame_Tutorial_02;
	Enum<Goron_MiniGame_Tutorial_03> Goron_MiniGame_Tutorial_03;
	Enum<GotoFironeZonauRemains> GotoFironeZonauRemains;
	Enum<GroundPaintingAir01> GroundPaintingAir01;
	Enum<Hack_GuardGoods> Hack_GuardGoods;
	Enum<HammerGong_MiniGame> HammerGong_MiniGame;
	Enum<HatenoPurchasePicture> HatenoPurchasePicture;
	Enum<Hateno_Cheese> Hateno_Cheese;
	Enum<Hateno_CoolGuy> Hateno_CoolGuy;
	Enum<Hateno_FreshMilk> Hateno_FreshMilk;
	Enum<Hateno_LetUsElection> Hateno_LetUsElection;
	Enum<Hateno_NewCostume> Hateno_NewCostume;
	Enum<Hateno_NewSpecialty> Hateno_NewSpecialty;
	Enum<Hateno_RevitalizeByNewSpeciality> Hateno_RevitalizeByNewSpeciality;
	Enum<Hateno_SecretLifeOfKusayoshi> Hateno_SecretLifeOfKusayoshi;
	Enum<Hateno_SecretLifeOfSagono> Hateno_SecretLifeOfSagono;
	Enum<Hateno_TellMeTeacher01> Hateno_TellMeTeacher01;
	Enum<Hateno_TellMeTeacher02> Hateno_TellMeTeacher02;
	Enum<Hateno_VillageMayorElection> Hateno_VillageMayorElection;
	Enum<Hateno_WhatToPlant> Hateno_WhatToPlant;
	Enum<Hebra_SkyRingChallenge> Hebra_SkyRingChallenge;
	Enum<Hebra_SkyRingChallenge_MiniGame> Hebra_SkyRingChallenge_MiniGame;
	Enum<HorseInnChallenge001> HorseInnChallenge001;
	Enum<HorseInnChallenge002> HorseInnChallenge002;
	Enum<HorseInnChallenge003> HorseInnChallenge003;
	Enum<HorseInnChallenge005> HorseInnChallenge005;
	Enum<HorseInnChallenge007> HorseInnChallenge007;
	Enum<HotSpringEgg> HotSpringEgg;
	Enum<HourseInnChallenge004> HourseInnChallenge004;
	Enum<HuntSalmon> HuntSalmon;
	Enum<HyruleCastleIncident> HyruleCastleIncident;
	Enum<IceMaking> IceMaking;
	Enum<IchikaraChallenge01> IchikaraChallenge01;
	Enum<IchikaraChallenge03> IchikaraChallenge03;
	Enum<IchikaraCircuit_Tutorial> IchikaraCircuit_Tutorial;
	Enum<IchikaraDaughterPhoto> IchikaraDaughterPhoto;
	Enum<IllnessStartsWithFeelings> IllnessStartsWithFeelings;
	Enum<InfiltrationFromTheSky> InfiltrationFromTheSky;
	Enum<InnNeverReturns> InnNeverReturns;
	Enum<JobSunazarashi> JobSunazarashi;
	Enum<Know_FourStonePlates> Know_FourStonePlates;
	Enum<KokkoGuidePost> KokkoGuidePost;
	Enum<Korok_CarryToShrine> Korok_CarryToShrine;
	Enum<Lodge_Chemical001> Lodge_Chemical001;
	Enum<LookingForLightSpot> LookingForLightSpot;
	Enum<LookingForTheVoiceLord> LookingForTheVoiceLord;
	Enum<Mack_SecretBase> Mack_SecretBase;
	Enum<MainChallenge> MainChallenge;
	Enum<MakeAChampionsWeapon_Goron> MakeAChampionsWeapon_Goron;
	Enum<MakeChemicalWeapon> MakeChemicalWeapon;
	Enum<MasterSwordClues> MasterSwordClues;
	Enum<MeatRock> MeatRock;
	Enum<MemoryOfTheDragon> MemoryOfTheDragon;
	Enum<MercenaryChallenge_Akkare> MercenaryChallenge_Akkare;
	Enum<MercenaryChallenge_Eldin> MercenaryChallenge_Eldin;
	Enum<MercenaryChallenge_Firone> MercenaryChallenge_Firone;
	Enum<MercenaryChallenge_Hateru> MercenaryChallenge_Hateru;
	Enum<MercenaryChallenge_Hebra> MercenaryChallenge_Hebra;
	Enum<MercenaryChallenge_HyrulePlain> MercenaryChallenge_HyrulePlain;
	Enum<Mercenary_Akkare_Bloody> Mercenary_Akkare_Bloody;
	Enum<Mercenary_Eldin_Bloody> Mercenary_Eldin_Bloody;
	Enum<Mercenary_Firone_Bloody> Mercenary_Firone_Bloody;
	Enum<Mercenary_Hateru_Bloody> Mercenary_Hateru_Bloody;
	Enum<Mercenary_Hebra_Bloody> Mercenary_Hebra_Bloody;
	Enum<Mercenary_HyrulePlain_Bloody> Mercenary_HyrulePlain_Bloody;
	Enum<MessageBottle_SOS> MessageBottle_SOS;
	Enum<MinusYiga> MinusYiga;
	Enum<MonsterFigures01> MonsterFigures01;
	Enum<MonsterFigures02> MonsterFigures02;
	Enum<MonsterFigures03> MonsterFigures03;
	Enum<MonsterFigures04> MonsterFigures04;
	Enum<MonsterFigures05> MonsterFigures05;
	Enum<MushroomSisters_1> MushroomSisters_1;
	Enum<MushroomSisters_2> MushroomSisters_2;
	Enum<MushroomSisters_3> MushroomSisters_3;
	Enum<Nazley_DigCave> Nazley_DigCave;
	Enum<Neck_IceWaterCave> Neck_IceWaterCave;
	Enum<NewCanyonMissingPersonsCase> NewCanyonMissingPersonsCase;
	Enum<NewsPaper_Mitsuba> NewsPaper_Mitsuba;
	Enum<NoTrespassing> NoTrespassing;
	Enum<NowInTheVillageOfLurelin> NowInTheVillageOfLurelin;
	Enum<Npc_BaseCamp_Assistant_ReactingStatue> Npc_BaseCamp_Assistant_ReactingStatue;
	Enum<Npc_BaseCamp_Assistant_ReactingStatue2> Npc_BaseCamp_Assistant_ReactingStatue2;
	Enum<Npc_BaseCamp_Assistant_ReactingStatue3> Npc_BaseCamp_Assistant_ReactingStatue3;
	Enum<Npc_BaseCamp_Assistant_ReactingStatue4> Npc_BaseCamp_Assistant_ReactingStatue4;
	Enum<NushiShop_Challenge00> NushiShop_Challenge00;
	Enum<NushiShop_Tutorial> NushiShop_Tutorial;
	Enum<OldKorokHelp> OldKorokHelp;
	Enum<Orchestra01> Orchestra01;
	Enum<Orchestra02> Orchestra02;
	Enum<Orchestra03> Orchestra03;
	Enum<Orchestra04> Orchestra04;
	Enum<Our_Treasure> Our_Treasure;
	Enum<Parasail_ChuchuDesign> Parasail_ChuchuDesign;
	Enum<PhotoSpot_Challenge_01> PhotoSpot_Challenge_01;
	Enum<PhotoSpot_Challenge_02> PhotoSpot_Challenge_02;
	Enum<PhotoSpot_Challenge_03> PhotoSpot_Challenge_03;
	Enum<PhotoSpot_Challenge_04> PhotoSpot_Challenge_04;
	Enum<PhotoSpot_Challenge_05> PhotoSpot_Challenge_05;
	Enum<PhotoSpot_Challenge_06> PhotoSpot_Challenge_06;
	Enum<PhotoSpot_Challenge_07> PhotoSpot_Challenge_07;
	Enum<PhotoSpot_Challenge_08> PhotoSpot_Challenge_08;
	Enum<PhotoSpot_Challenge_09> PhotoSpot_Challenge_09;
	Enum<PhotoSpot_Challenge_09_2> PhotoSpot_Challenge_09_2;
	Enum<PhotoSpot_Challenge_10> PhotoSpot_Challenge_10;
	Enum<PhotoSpot_Challenge_11> PhotoSpot_Challenge_11;
	Enum<PhotoSpot_Challenge_12> PhotoSpot_Challenge_12;
	Enum<PhotoSpot_Challenge_13> PhotoSpot_Challenge_13;
	Enum<PhotoSpot_Challenge_14> PhotoSpot_Challenge_14;
	Enum<Raise_GoddesStatue> Raise_GoddesStatue;
	Enum<Raise_GoddesStatue_Courage> Raise_GoddesStatue_Courage;
	Enum<Raise_GoddesStatue_Power> Raise_GoddesStatue_Power;
	Enum<Raise_GoddesStatue_Wisdom> Raise_GoddesStatue_Wisdom;
	Enum<RepairArmor> RepairArmor;
	Enum<RescueHost> RescueHost;
	Enum<RescueVehicle01> RescueVehicle01;
	Enum<RescueWell> RescueWell;
	Enum<ResearchEldin> ResearchEldin;
	Enum<ResearchLanayru> ResearchLanayru;
	Enum<RestaurantInTheWell> RestaurantInTheWell;
	Enum<RitoBridgeRepair> RitoBridgeRepair;
	Enum<Rito_ItemExchange> Rito_ItemExchange;
	Enum<Rito_MedoArmor> Rito_MedoArmor;
	Enum<Rito_RevaliWeapon> Rito_RevaliWeapon;
	Enum<Rito_ShadowCave> Rito_ShadowCave;
	Enum<SageOfFire> SageOfFire;
	Enum<SageOfGerudo> SageOfGerudo;
	Enum<SageOfSky> SageOfSky;
	Enum<SageOfSoul> SageOfSoul;
	Enum<SageOfWind> SageOfWind;
	Enum<SageOfZora> SageOfZora;
	Enum<SaihateSubjugation> SaihateSubjugation;
	Enum<SearchCaravan> SearchCaravan;
	Enum<SecretBase_MiniGame> SecretBase_MiniGame;
	Enum<ShieldSurfing_MiniGame> ShieldSurfing_MiniGame;
	Enum<SkyIsland_MiniGame_01> SkyIsland_MiniGame_01;
	Enum<SkyIsland_MiniGame_02> SkyIsland_MiniGame_02;
	Enum<SkyIsland_MiniGame_03> SkyIsland_MiniGame_03;
	Enum<SnowyMountain_Surfing> SnowyMountain_Surfing;
	Enum<StatueDevilTutorial> StatueDevilTutorial;
	Enum<SurveyOfFourVillages> SurveyOfFourVillages;
	Enum<TakeAnimals> TakeAnimals;
	Enum<TakeOfIce> TakeOfIce;
	Enum<TauraChallenge001> TauraChallenge001;
	Enum<TheStrongestWeapon> TheStrongestWeapon;
	Enum<TreasureHunt_kokiri> TreasureHunt_kokiri;
	Enum<TreasureOfLambda> TreasureOfLambda;
	Enum<TreasureOfLamda_Dream> TreasureOfLamda_Dream;
	Enum<TreasureOfLamda_Dream2> TreasureOfLamda_Dream2;
	Enum<TreasureOfLamda_Dream3> TreasureOfLamda_Dream3;
	Enum<TreasureOfLamda_DuelPeak> TreasureOfLamda_DuelPeak;
	Enum<TreasureOfLamda_FierceDeity> TreasureOfLamda_FierceDeity;
	Enum<TreasureOfLamda_Gerudo> TreasureOfLamda_Gerudo;
	Enum<TreasureOfLamda_Pirate> TreasureOfLamda_Pirate;
	Enum<Tribune01> Tribune01;
	Enum<Tribune02> Tribune02;
	Enum<Tribune03> Tribune03;
	Enum<Tribune04> Tribune04;
	Enum<Tribune05> Tribune05;
	Enum<Tribune06> Tribune06;
	Enum<Tribune07> Tribune07;
	Enum<Tribune09> Tribune09;
	Enum<Tribune10> Tribune10;
	Enum<Tribune11> Tribune11;
	Enum<Tribune13> Tribune13;
	Enum<Tribune14> Tribune14;
	Enum<Tribune16> Tribune16;
	Enum<Uotori_BreakthePirateBase> Uotori_BreakthePirateBase;
	Enum<Uotori_Designer> Uotori_Designer;
	Enum<Uotori_ResortPlan> Uotori_ResortPlan;
	Enum<Uotori_RevivePlan> Uotori_RevivePlan;
	Enum<Uotori_WhiteLineGame> Uotori_WhiteLineGame;
	Enum<UpgradeOfPurahPad1> UpgradeOfPurahPad1;
	Enum<WantedCleaning> WantedCleaning;
	Enum<WashedAwayBusinessTools> WashedAwayBusinessTools;
	Enum<WaterBridgePlace> WaterBridgePlace;
	Enum<WellCollection> WellCollection;
	Enum<WhichIsStronger> WhichIsStronger;
	Enum<ZonauReliefSearch> ZonauReliefSearch;
	Enum<Zonau_GeniusWeapon> Zonau_GeniusWeapon;
	Enum<ZoraStatue_Picture> ZoraStatue_Picture;
	Enum<Zora_Enemy_hunt> Zora_Enemy_hunt;
	Enum<Zora_MessageBottle> Zora_MessageBottle;
	Enum<Zora_RuttaTreasure> Zora_RuttaTreasure;
	Enum<gather_Insect_Z> gather_Insect_Z;
	
	explicit Structure(Sav& s) : 
		AisyaRescue { s.get<struct AisyaRescue>() },
		AmberCollector { s.get<struct AmberCollector>() },
		ArrowMeister_Momo { s.get<struct ArrowMeister_Momo>() },
		AssassinGerudoBase { s.get<struct AssassinGerudoBase>() },
		BallBring_MiniGame { s.get<struct BallBring_MiniGame>() },
		Basketball_MiniGame { s.get<struct Basketball_MiniGame>() },
		Big_Rotate { s.get<struct Big_Rotate>() },
		BirdManContest { s.get<struct BirdManContest>() },
		BlindRuinsTreasure { s.get<struct BlindRuinsTreasure>() },
		BlindRuinsTreasure_Gerudo { s.get<struct BlindRuinsTreasure_Gerudo>() },
		BlindRuinsTreasure_Goron { s.get<struct BlindRuinsTreasure_Goron>() },
		BlindRuinsTreasure_Rito { s.get<struct BlindRuinsTreasure_Rito>() },
		BlindRuinsTreasure_Zora { s.get<struct BlindRuinsTreasure_Zora>() },
		BuildHouse { s.get<struct BuildHouse>() },
		BuildingMaterialsTutorial { s.get<struct BuildingMaterialsTutorial>() },
		CDungeon_AllDone { s.get<struct CDungeon_AllDone>() },
		CarryGoronKid1 { s.get<struct CarryGoronKid1>() },
		CarryGoronKid2 { s.get<struct CarryGoronKid2>() },
		CarryStone { s.get<struct CarryStone>() },
		CarryToShrine01 { s.get<struct CarryToShrine01>() },
		CarryToShrine02 { s.get<struct CarryToShrine02>() },
		CarryToShrine03 { s.get<struct CarryToShrine03>() },
		CarryToShrine05 { s.get<struct CarryToShrine05>() },
		CarryToShrine06 { s.get<struct CarryToShrine06>() },
		CarryToShrine07 { s.get<struct CarryToShrine07>() },
		CarryToShrine08_Zora { s.get<struct CarryToShrine08_Zora>() },
		CarryToShrine09 { s.get<struct CarryToShrine09>() },
		CarryToShrine10 { s.get<struct CarryToShrine10>() },
		CarryToShrine11 { s.get<struct CarryToShrine11>() },
		CarryToShrine12 { s.get<struct CarryToShrine12>() },
		CarryToShrine13 { s.get<struct CarryToShrine13>() },
		CarryToShrine14 { s.get<struct CarryToShrine14>() },
		CarryToShrine15 { s.get<struct CarryToShrine15>() },
		CarryToShrine16 { s.get<struct CarryToShrine16>() },
		CarryToShrine17 { s.get<struct CarryToShrine17>() },
		CarryToShrine19 { s.get<struct CarryToShrine19>() },
		CarryToShrine20 { s.get<struct CarryToShrine20>() },
		CarryToShrine21 { s.get<struct CarryToShrine21>() },
		CarryToShrine22 { s.get<struct CarryToShrine22>() },
		CarryToShrine23 { s.get<struct CarryToShrine23>() },
		Circuit_Desert { s.get<struct Circuit_Desert>() },
		Circuit_FaronWoods_MiniGame { s.get<struct Circuit_FaronWoods_MiniGame>() },
		Circuit_Ichikara { s.get<struct Circuit_Ichikara>() },
		Circuit_Ichikara_MiniGame { s.get<struct Circuit_Ichikara_MiniGame>() },
		Circuit_Uotori_MiniGame { s.get<struct Circuit_Uotori_MiniGame>() },
		CleanStatue { s.get<struct CleanStatue>() },
		ClueTotheSixthSage { s.get<struct ClueTotheSixthSage>() },
		CollectObject_MiniGame { s.get<struct CollectObject_MiniGame>() },
		CollectObject_MiniGame_Cliff { s.get<struct CollectObject_MiniGame_Cliff>() },
		CollectObject_MiniGame_LakeSide { s.get<struct CollectObject_MiniGame_LakeSide>() },
		Connect_AkkareMaze { s.get<struct Connect_AkkareMaze>() },
		Connect_FirstIsland { s.get<struct Connect_FirstIsland>() },
		Connect_GerudoMaze { s.get<struct Connect_GerudoMaze>() },
		Connect_TabantaMaze { s.get<struct Connect_TabantaMaze>() },
		CookAtBaseCamp { s.get<struct CookAtBaseCamp>() },
		CraftShadowPicture { s.get<struct CraftShadowPicture>() },
		CreateArmor { s.get<struct CreateArmor>() },
		Createshinguard { s.get<struct Createshinguard>() },
		DeepHoleSurvey2 { s.get<struct DeepHoleSurvey2>() },
		DefeatGanondorf { s.get<struct DefeatGanondorf>() },
		DefeatHugeEnemy_1 { s.get<struct DefeatHugeEnemy_1>() },
		DefeatHugeEnemy_2 { s.get<struct DefeatHugeEnemy_2>() },
		DefeatHugeEnemy_3 { s.get<struct DefeatHugeEnemy_3>() },
		DefeatHugeEnemy_4 { s.get<struct DefeatHugeEnemy_4>() },
		DefeatHugeEnemy_5 { s.get<struct DefeatHugeEnemy_5>() },
		DefeatHugeEnemy_6 { s.get<struct DefeatHugeEnemy_6>() },
		DevoteSpring { s.get<struct DevoteSpring>() },
		DividedSlate { s.get<struct DividedSlate>() },
		EightHeroStatues { s.get<struct EightHeroStatues>() },
		EightHeroStatues_After { s.get<struct EightHeroStatues_After>() },
		EveryonesMeal { s.get<struct EveryonesMeal>() },
		ExcavateFossil1 { s.get<struct ExcavateFossil1>() },
		ExcavateFossil2 { s.get<struct ExcavateFossil2>() },
		ExcavateFossil3 { s.get<struct ExcavateFossil3>() },
		Fairy2 { s.get<struct Fairy2>() },
		Fairy3 { s.get<struct Fairy3>() },
		Fairy4 { s.get<struct Fairy4>() },
		FindDrefan { s.get<struct FindDrefan>() },
		FindSunaNui { s.get<struct FindSunaNui>() },
		FindSunaNui2 { s.get<struct FindSunaNui2>() },
		FindWhiteHorse { s.get<struct FindWhiteHorse>() },
		FindWithSensors { s.get<struct FindWithSensors>() },
		FirstskyislandReturns { s.get<struct FirstskyislandReturns>() },
		FullyRipenedFlintstones { s.get<struct FullyRipenedFlintstones>() },
		GOToTheCastleOfHyrule { s.get<struct GOToTheCastleOfHyrule>() },
		GeniusWeapon_Zora { s.get<struct GeniusWeapon_Zora>() },
		Genkos_Kitchen { s.get<struct Genkos_Kitchen>() },
		GerudoCanyon_24hEnduranceComparison { s.get<struct GerudoCanyon_24hEnduranceComparison>() },
		GerudoCanyon_Adventure { s.get<struct GerudoCanyon_Adventure>() },
		GerudoCanyon_ColdEnduranceComparison { s.get<struct GerudoCanyon_ColdEnduranceComparison>() },
		GerudoCanyon_GleeokLiver { s.get<struct GerudoCanyon_GleeokLiver>() },
		GerudoCanyon_TumbleweedSweep { s.get<struct GerudoCanyon_TumbleweedSweep>() },
		GerudoDesertTreasure { s.get<struct GerudoDesertTreasure>() },
		Gerudo_UrbosaWeapon { s.get<struct Gerudo_UrbosaWeapon>() },
		GetCamera { s.get<struct GetCamera>() },
		GetMasterSword { s.get<struct GetMasterSword>() },
		GetSensorPlus { s.get<struct GetSensorPlus>() },
		GetWalker { s.get<struct GetWalker>() },
		GetWarpMarker { s.get<struct GetWarpMarker>() },
		GiantHorse { s.get<struct GiantHorse>() },
		GoneSnowQueen { s.get<struct GoneSnowQueen>() },
		GoronPond { s.get<struct GoronPond>() },
		GoronReturntoNature { s.get<struct GoronReturntoNature>() },
		Goron_MiniGame_01 { s.get<struct Goron_MiniGame_01>() },
		Goron_MiniGame_02 { s.get<struct Goron_MiniGame_02>() },
		Goron_MiniGame_03 { s.get<struct Goron_MiniGame_03>() },
		Goron_MiniGame_Tutorial_01 { s.get<struct Goron_MiniGame_Tutorial_01>() },
		Goron_MiniGame_Tutorial_02 { s.get<struct Goron_MiniGame_Tutorial_02>() },
		Goron_MiniGame_Tutorial_03 { s.get<struct Goron_MiniGame_Tutorial_03>() },
		GotoFironeZonauRemains { s.get<struct GotoFironeZonauRemains>() },
		GroundPaintingAir01 { s.get<struct GroundPaintingAir01>() },
		Hack_GuardGoods { s.get<struct Hack_GuardGoods>() },
		HammerGong_MiniGame { s.get<struct HammerGong_MiniGame>() },
		HatenoPurchasePicture { s.get<struct HatenoPurchasePicture>() },
		Hateno_Cheese { s.get<struct Hateno_Cheese>() },
		Hateno_CoolGuy { s.get<struct Hateno_CoolGuy>() },
		Hateno_FreshMilk { s.get<struct Hateno_FreshMilk>() },
		Hateno_LetUsElection { s.get<struct Hateno_LetUsElection>() },
		Hateno_NewCostume { s.get<struct Hateno_NewCostume>() },
		Hateno_NewSpecialty { s.get<struct Hateno_NewSpecialty>() },
		Hateno_RevitalizeByNewSpeciality { s.get<struct Hateno_RevitalizeByNewSpeciality>() },
		Hateno_SecretLifeOfKusayoshi { s.get<struct Hateno_SecretLifeOfKusayoshi>() },
		Hateno_SecretLifeOfSagono { s.get<struct Hateno_SecretLifeOfSagono>() },
		Hateno_TellMeTeacher01 { s.get<struct Hateno_TellMeTeacher01>() },
		Hateno_TellMeTeacher02 { s.get<struct Hateno_TellMeTeacher02>() },
		Hateno_VillageMayorElection { s.get<struct Hateno_VillageMayorElection>() },
		Hateno_WhatToPlant { s.get<struct Hateno_WhatToPlant>() },
		Hebra_SkyRingChallenge { s.get<struct Hebra_SkyRingChallenge>() },
		Hebra_SkyRingChallenge_MiniGame { s.get<struct Hebra_SkyRingChallenge_MiniGame>() },
		HorseInnChallenge001 { s.get<struct HorseInnChallenge001>() },
		HorseInnChallenge002 { s.get<struct HorseInnChallenge002>() },
		HorseInnChallenge003 { s.get<struct HorseInnChallenge003>() },
		HorseInnChallenge005 { s.get<struct HorseInnChallenge005>() },
		HorseInnChallenge007 { s.get<struct HorseInnChallenge007>() },
		HotSpringEgg { s.get<struct HotSpringEgg>() },
		HourseInnChallenge004 { s.get<struct HourseInnChallenge004>() },
		HuntSalmon { s.get<struct HuntSalmon>() },
		HyruleCastleIncident { s.get<struct HyruleCastleIncident>() },
		IceMaking { s.get<struct IceMaking>() },
		IchikaraChallenge01 { s.get<struct IchikaraChallenge01>() },
		IchikaraChallenge03 { s.get<struct IchikaraChallenge03>() },
		IchikaraCircuit_Tutorial { s.get<struct IchikaraCircuit_Tutorial>() },
		IchikaraDaughterPhoto { s.get<struct IchikaraDaughterPhoto>() },
		IllnessStartsWithFeelings { s.get<struct IllnessStartsWithFeelings>() },
		InfiltrationFromTheSky { s.get<struct InfiltrationFromTheSky>() },
		InnNeverReturns { s.get<struct InnNeverReturns>() },
		JobSunazarashi { s.get<struct JobSunazarashi>() },
		Know_FourStonePlates { s.get<struct Know_FourStonePlates>() },
		KokkoGuidePost { s.get<struct KokkoGuidePost>() },
		Korok_CarryToShrine { s.get<struct Korok_CarryToShrine>() },
		Lodge_Chemical001 { s.get<struct Lodge_Chemical001>() },
		LookingForLightSpot { s.get<struct LookingForLightSpot>() },
		LookingForTheVoiceLord { s.get<struct LookingForTheVoiceLord>() },
		Mack_SecretBase { s.get<struct Mack_SecretBase>() },
		MainChallenge { s.get<struct MainChallenge>() },
		MakeAChampionsWeapon_Goron { s.get<struct MakeAChampionsWeapon_Goron>() },
		MakeChemicalWeapon { s.get<struct MakeChemicalWeapon>() },
		MasterSwordClues { s.get<struct MasterSwordClues>() },
		MeatRock { s.get<struct MeatRock>() },
		MemoryOfTheDragon { s.get<struct MemoryOfTheDragon>() },
		MercenaryChallenge_Akkare { s.get<struct MercenaryChallenge_Akkare>() },
		MercenaryChallenge_Eldin { s.get<struct MercenaryChallenge_Eldin>() },
		MercenaryChallenge_Firone { s.get<struct MercenaryChallenge_Firone>() },
		MercenaryChallenge_Hateru { s.get<struct MercenaryChallenge_Hateru>() },
		MercenaryChallenge_Hebra { s.get<struct MercenaryChallenge_Hebra>() },
		MercenaryChallenge_HyrulePlain { s.get<struct MercenaryChallenge_HyrulePlain>() },
		Mercenary_Akkare_Bloody { s.get<struct Mercenary_Akkare_Bloody>() },
		Mercenary_Eldin_Bloody { s.get<struct Mercenary_Eldin_Bloody>() },
		Mercenary_Firone_Bloody { s.get<struct Mercenary_Firone_Bloody>() },
		Mercenary_Hateru_Bloody { s.get<struct Mercenary_Hateru_Bloody>() },
		Mercenary_Hebra_Bloody { s.get<struct Mercenary_Hebra_Bloody>() },
		Mercenary_HyrulePlain_Bloody { s.get<struct Mercenary_HyrulePlain_Bloody>() },
		MessageBottle_SOS { s.get<struct MessageBottle_SOS>() },
		MinusYiga { s.get<struct MinusYiga>() },
		MonsterFigures01 { s.get<struct MonsterFigures01>() },
		MonsterFigures02 { s.get<struct MonsterFigures02>() },
		MonsterFigures03 { s.get<struct MonsterFigures03>() },
		MonsterFigures04 { s.get<struct MonsterFigures04>() },
		MonsterFigures05 { s.get<struct MonsterFigures05>() },
		MushroomSisters_1 { s.get<struct MushroomSisters_1>() },
		MushroomSisters_2 { s.get<struct MushroomSisters_2>() },
		MushroomSisters_3 { s.get<struct MushroomSisters_3>() },
		Nazley_DigCave { s.get<struct Nazley_DigCave>() },
		Neck_IceWaterCave { s.get<struct Neck_IceWaterCave>() },
		NewCanyonMissingPersonsCase { s.get<struct NewCanyonMissingPersonsCase>() },
		NewsPaper_Mitsuba { s.get<struct NewsPaper_Mitsuba>() },
		NoTrespassing { s.get<struct NoTrespassing>() },
		NowInTheVillageOfLurelin { s.get<struct NowInTheVillageOfLurelin>() },
		Npc_BaseCamp_Assistant_ReactingStatue { s.get<struct Npc_BaseCamp_Assistant_ReactingStatue>() },
		Npc_BaseCamp_Assistant_ReactingStatue2 { s.get<struct Npc_BaseCamp_Assistant_ReactingStatue2>() },
		Npc_BaseCamp_Assistant_ReactingStatue3 { s.get<struct Npc_BaseCamp_Assistant_ReactingStatue3>() },
		Npc_BaseCamp_Assistant_ReactingStatue4 { s.get<struct Npc_BaseCamp_Assistant_ReactingStatue4>() },
		NushiShop_Challenge00 { s.get<struct NushiShop_Challenge00>() },
		NushiShop_Tutorial { s.get<struct NushiShop_Tutorial>() },
		OldKorokHelp { s.get<struct OldKorokHelp>() },
		Orchestra01 { s.get<struct Orchestra01>() },
		Orchestra02 { s.get<struct Orchestra02>() },
		Orchestra03 { s.get<struct Orchestra03>() },
		Orchestra04 { s.get<struct Orchestra04>() },
		Our_Treasure { s.get<struct Our_Treasure>() },
		Parasail_ChuchuDesign { s.get<struct Parasail_ChuchuDesign>() },
		PhotoSpot_Challenge_01 { s.get<struct PhotoSpot_Challenge_01>() },
		PhotoSpot_Challenge_02 { s.get<struct PhotoSpot_Challenge_02>() },
		PhotoSpot_Challenge_03 { s.get<struct PhotoSpot_Challenge_03>() },
		PhotoSpot_Challenge_04 { s.get<struct PhotoSpot_Challenge_04>() },
		PhotoSpot_Challenge_05 { s.get<struct PhotoSpot_Challenge_05>() },
		PhotoSpot_Challenge_06 { s.get<struct PhotoSpot_Challenge_06>() },
		PhotoSpot_Challenge_07 { s.get<struct PhotoSpot_Challenge_07>() },
		PhotoSpot_Challenge_08 { s.get<struct PhotoSpot_Challenge_08>() },
		PhotoSpot_Challenge_09 { s.get<struct PhotoSpot_Challenge_09>() },
		PhotoSpot_Challenge_09_2 { s.get<struct PhotoSpot_Challenge_09_2>() },
		PhotoSpot_Challenge_10 { s.get<struct PhotoSpot_Challenge_10>() },
		PhotoSpot_Challenge_11 { s.get<struct PhotoSpot_Challenge_11>() },
		PhotoSpot_Challenge_12 { s.get<struct PhotoSpot_Challenge_12>() },
		PhotoSpot_Challenge_13 { s.get<struct PhotoSpot_Challenge_13>() },
		PhotoSpot_Challenge_14 { s.get<struct PhotoSpot_Challenge_14>() },
		Raise_GoddesStatue { s.get<struct Raise_GoddesStatue>() },
		Raise_GoddesStatue_Courage { s.get<struct Raise_GoddesStatue_Courage>() },
		Raise_GoddesStatue_Power { s.get<struct Raise_GoddesStatue_Power>() },
		Raise_GoddesStatue_Wisdom { s.get<struct Raise_GoddesStatue_Wisdom>() },
		RepairArmor { s.get<struct RepairArmor>() },
		RescueHost { s.get<struct RescueHost>() },
		RescueVehicle01 { s.get<struct RescueVehicle01>() },
		RescueWell { s.get<struct RescueWell>() },
		ResearchEldin { s.get<struct ResearchEldin>() },
		ResearchLanayru { s.get<struct ResearchLanayru>() },
		RestaurantInTheWell { s.get<struct RestaurantInTheWell>() },
		RitoBridgeRepair { s.get<struct RitoBridgeRepair>() },
		Rito_ItemExchange { s.get<struct Rito_ItemExchange>() },
		Rito_MedoArmor { s.get<struct Rito_MedoArmor>() },
		Rito_RevaliWeapon { s.get<struct Rito_RevaliWeapon>() },
		Rito_ShadowCave { s.get<struct Rito_ShadowCave>() },
		SageOfFire { s.get<struct SageOfFire>() },
		SageOfGerudo { s.get<struct SageOfGerudo>() },
		SageOfSky { s.get<struct SageOfSky>() },
		SageOfSoul { s.get<struct SageOfSoul>() },
		SageOfWind { s.get<struct SageOfWind>() },
		SageOfZora { s.get<struct SageOfZora>() },
		SaihateSubjugation { s.get<struct SaihateSubjugation>() },
		SearchCaravan { s.get<struct SearchCaravan>() },
		SecretBase_MiniGame { s.get<struct SecretBase_MiniGame>() },
		ShieldSurfing_MiniGame { s.get<struct ShieldSurfing_MiniGame>() },
		SkyIsland_MiniGame_01 { s.get<struct SkyIsland_MiniGame_01>() },
		SkyIsland_MiniGame_02 { s.get<struct SkyIsland_MiniGame_02>() },
		SkyIsland_MiniGame_03 { s.get<struct SkyIsland_MiniGame_03>() },
		SnowyMountain_Surfing { s.get<struct SnowyMountain_Surfing>() },
		StatueDevilTutorial { s.get<struct StatueDevilTutorial>() },
		SurveyOfFourVillages { s.get<struct SurveyOfFourVillages>() },
		TakeAnimals { s.get<struct TakeAnimals>() },
		TakeOfIce { s.get<struct TakeOfIce>() },
		TauraChallenge001 { s.get<struct TauraChallenge001>() },
		TheStrongestWeapon { s.get<struct TheStrongestWeapon>() },
		TreasureHunt_kokiri { s.get<struct TreasureHunt_kokiri>() },
		TreasureOfLambda { s.get<struct TreasureOfLambda>() },
		TreasureOfLamda_Dream { s.get<struct TreasureOfLamda_Dream>() },
		TreasureOfLamda_Dream2 { s.get<struct TreasureOfLamda_Dream2>() },
		TreasureOfLamda_Dream3 { s.get<struct TreasureOfLamda_Dream3>() },
		TreasureOfLamda_DuelPeak { s.get<struct TreasureOfLamda_DuelPeak>() },
		TreasureOfLamda_FierceDeity { s.get<struct TreasureOfLamda_FierceDeity>() },
		TreasureOfLamda_Gerudo { s.get<struct TreasureOfLamda_Gerudo>() },
		TreasureOfLamda_Pirate { s.get<struct TreasureOfLamda_Pirate>() },
		Tribune01 { s.get<struct Tribune01>() },
		Tribune02 { s.get<struct Tribune02>() },
		Tribune03 { s.get<struct Tribune03>() },
		Tribune04 { s.get<struct Tribune04>() },
		Tribune05 { s.get<struct Tribune05>() },
		Tribune06 { s.get<struct Tribune06>() },
		Tribune07 { s.get<struct Tribune07>() },
		Tribune09 { s.get<struct Tribune09>() },
		Tribune10 { s.get<struct Tribune10>() },
		Tribune11 { s.get<struct Tribune11>() },
		Tribune13 { s.get<struct Tribune13>() },
		Tribune14 { s.get<struct Tribune14>() },
		Tribune16 { s.get<struct Tribune16>() },
		Uotori_BreakthePirateBase { s.get<struct Uotori_BreakthePirateBase>() },
		Uotori_Designer { s.get<struct Uotori_Designer>() },
		Uotori_ResortPlan { s.get<struct Uotori_ResortPlan>() },
		Uotori_RevivePlan { s.get<struct Uotori_RevivePlan>() },
		Uotori_WhiteLineGame { s.get<struct Uotori_WhiteLineGame>() },
		UpgradeOfPurahPad1 { s.get<struct UpgradeOfPurahPad1>() },
		WantedCleaning { s.get<struct WantedCleaning>() },
		WashedAwayBusinessTools { s.get<struct WashedAwayBusinessTools>() },
		WaterBridgePlace { s.get<struct WaterBridgePlace>() },
		WellCollection { s.get<struct WellCollection>() },
		WhichIsStronger { s.get<struct WhichIsStronger>() },
		ZonauReliefSearch { s.get<struct ZonauReliefSearch>() },
		Zonau_GeniusWeapon { s.get<struct Zonau_GeniusWeapon>() },
		ZoraStatue_Picture { s.get<struct ZoraStatue_Picture>() },
		Zora_Enemy_hunt { s.get<struct Zora_Enemy_hunt>() },
		Zora_MessageBottle { s.get<struct Zora_MessageBottle>() },
		Zora_RuttaTreasure { s.get<struct Zora_RuttaTreasure>() },
		gather_Insect_Z { s.get<struct gather_Insect_Z>() }
	{ }
};/* Structure Data::Structure GameData::Step close */

template <> hash_value_t constexpr Data::Hashtable<GameData::Step::AisyaRescue> { "Step_AisyaRescue" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::AmberCollector> { "Step_AmberCollector" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::ArrowMeister_Momo> { "Step_ArrowMeister_Momo" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::AssassinGerudoBase> { "Step_AssassinGerudoBase" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::BallBring_MiniGame> { "Step_BallBring_MiniGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Basketball_MiniGame> { "Step_Basketball_MiniGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Big_Rotate> { "Step_Big_Rotate" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::BirdManContest> { "Step_BirdManContest" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::BlindRuinsTreasure> { "Step_BlindRuinsTreasure" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::BlindRuinsTreasure_Gerudo> { "Step_BlindRuinsTreasure_Gerudo" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::BlindRuinsTreasure_Goron> { "Step_BlindRuinsTreasure_Goron" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::BlindRuinsTreasure_Rito> { "Step_BlindRuinsTreasure_Rito" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::BlindRuinsTreasure_Zora> { "Step_BlindRuinsTreasure_Zora" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::BuildHouse> { "Step_BuildHouse" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::BuildingMaterialsTutorial> { "Step_BuildingMaterialsTutorial" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CDungeon_AllDone> { "Step_CDungeon_AllDone" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryGoronKid1> { "Step_CarryGoronKid1" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryGoronKid2> { "Step_CarryGoronKid2" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryStone> { "Step_CarryStone" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine01> { "Step_CarryToShrine01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine02> { "Step_CarryToShrine02" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine03> { "Step_CarryToShrine03" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine05> { "Step_CarryToShrine05" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine06> { "Step_CarryToShrine06" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine07> { "Step_CarryToShrine07" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine08_Zora> { "Step_CarryToShrine08_Zora" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine09> { "Step_CarryToShrine09" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine10> { "Step_CarryToShrine10" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine11> { "Step_CarryToShrine11" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine12> { "Step_CarryToShrine12" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine13> { "Step_CarryToShrine13" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine14> { "Step_CarryToShrine14" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine15> { "Step_CarryToShrine15" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine16> { "Step_CarryToShrine16" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine17> { "Step_CarryToShrine17" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine19> { "Step_CarryToShrine19" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine20> { "Step_CarryToShrine20" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine21> { "Step_CarryToShrine21" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine22> { "Step_CarryToShrine22" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CarryToShrine23> { "Step_CarryToShrine23" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Circuit_Desert> { "Step_Circuit_Desert" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Circuit_FaronWoods_MiniGame> { "Step_Circuit_FaronWoods_MiniGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Circuit_Ichikara> { "Step_Circuit_Ichikara" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Circuit_Ichikara_MiniGame> { "Step_Circuit_Ichikara_MiniGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Circuit_Uotori_MiniGame> { "Step_Circuit_Uotori_MiniGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CleanStatue> { "Step_CleanStatue" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::ClueTotheSixthSage> { "Step_ClueTotheSixthSage" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CollectObject_MiniGame> { "Step_CollectObject_MiniGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CollectObject_MiniGame_Cliff> { "Step_CollectObject_MiniGame_Cliff" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CollectObject_MiniGame_LakeSide> { "Step_CollectObject_MiniGame_LakeSide" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Connect_AkkareMaze> { "Step_Connect_AkkareMaze" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Connect_FirstIsland> { "Step_Connect_FirstIsland" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Connect_GerudoMaze> { "Step_Connect_GerudoMaze" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Connect_TabantaMaze> { "Step_Connect_TabantaMaze" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CookAtBaseCamp> { "Step_CookAtBaseCamp" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CraftShadowPicture> { "Step_CraftShadowPicture" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::CreateArmor> { "Step_CreateArmor" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Createshinguard> { "Step_Createshinguard" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::DeepHoleSurvey2> { "Step_DeepHoleSurvey2" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::DefeatGanondorf> { "Step_DefeatGanondorf" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::DefeatHugeEnemy_1> { "Step_DefeatHugeEnemy_1" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::DefeatHugeEnemy_2> { "Step_DefeatHugeEnemy_2" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::DefeatHugeEnemy_3> { "Step_DefeatHugeEnemy_3" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::DefeatHugeEnemy_4> { "Step_DefeatHugeEnemy_4" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::DefeatHugeEnemy_5> { "Step_DefeatHugeEnemy_5" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::DefeatHugeEnemy_6> { "Step_DefeatHugeEnemy_6" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::DevoteSpring> { "Step_DevoteSpring" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::DividedSlate> { "Step_DividedSlate" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::EightHeroStatues> { "Step_EightHeroStatues" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::EightHeroStatues_After> { "Step_EightHeroStatues_After" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::EveryonesMeal> { "Step_EveryonesMeal" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::ExcavateFossil1> { "Step_ExcavateFossil1" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::ExcavateFossil2> { "Step_ExcavateFossil2" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::ExcavateFossil3> { "Step_ExcavateFossil3" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Fairy2> { "Step_Fairy2" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Fairy3> { "Step_Fairy3" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Fairy4> { "Step_Fairy4" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::FindDrefan> { "Step_FindDrefan" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::FindSunaNui> { "Step_FindSunaNui" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::FindSunaNui2> { "Step_FindSunaNui2" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::FindWhiteHorse> { "Step_FindWhiteHorse" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::FindWithSensors> { "Step_FindWithSensors" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::FirstskyislandReturns> { "Step_FirstskyislandReturns" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::FullyRipenedFlintstones> { "Step_FullyRipenedFlintstones" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::GOToTheCastleOfHyrule> { "Step_GOToTheCastleOfHyrule" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::GeniusWeapon_Zora> { "Step_GeniusWeapon_Zora" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Genkos_Kitchen> { "Step_Genkos_Kitchen" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::GerudoCanyon_24hEnduranceComparison> { "Step_GerudoCanyon_24hEnduranceComparison" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::GerudoCanyon_Adventure> { "Step_GerudoCanyon_Adventure" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::GerudoCanyon_ColdEnduranceComparison> { "Step_GerudoCanyon_ColdEnduranceComparison" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::GerudoCanyon_GleeokLiver> { "Step_GerudoCanyon_GleeokLiver" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::GerudoCanyon_TumbleweedSweep> { "Step_GerudoCanyon_TumbleweedSweep" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::GerudoDesertTreasure> { "Step_GerudoDesertTreasure" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Gerudo_UrbosaWeapon> { "Step_Gerudo_UrbosaWeapon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::GetCamera> { "Step_GetCamera" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::GetMasterSword> { "Step_GetMasterSword" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::GetSensorPlus> { "Step_GetSensorPlus" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::GetWalker> { "Step_GetWalker" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::GetWarpMarker> { "Step_GetWarpMarker" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::GiantHorse> { "Step_GiantHorse" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::GoneSnowQueen> { "Step_GoneSnowQueen" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::GoronPond> { "Step_GoronPond" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::GoronReturntoNature> { "Step_GoronReturntoNature" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Goron_MiniGame_01> { "Step_Goron_MiniGame_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Goron_MiniGame_02> { "Step_Goron_MiniGame_02" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Goron_MiniGame_03> { "Step_Goron_MiniGame_03" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Goron_MiniGame_Tutorial_01> { "Step_Goron_MiniGame_Tutorial_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Goron_MiniGame_Tutorial_02> { "Step_Goron_MiniGame_Tutorial_02" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Goron_MiniGame_Tutorial_03> { "Step_Goron_MiniGame_Tutorial_03" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::GotoFironeZonauRemains> { "Step_GotoFironeZonauRemains" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::GroundPaintingAir01> { "Step_GroundPaintingAir01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Hack_GuardGoods> { "Step_Hack_GuardGoods" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::HammerGong_MiniGame> { "Step_HammerGong_MiniGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::HatenoPurchasePicture> { "Step_HatenoPurchasePicture" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Hateno_Cheese> { "Step_Hateno_Cheese" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Hateno_CoolGuy> { "Step_Hateno_CoolGuy" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Hateno_FreshMilk> { "Step_Hateno_FreshMilk" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Hateno_LetUsElection> { "Step_Hateno_LetUsElection" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Hateno_NewCostume> { "Step_Hateno_NewCostume" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Hateno_NewSpecialty> { "Step_Hateno_NewSpecialty" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Hateno_RevitalizeByNewSpeciality> { "Step_Hateno_RevitalizeByNewSpeciality" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Hateno_SecretLifeOfKusayoshi> { "Step_Hateno_SecretLifeOfKusayoshi" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Hateno_SecretLifeOfSagono> { "Step_Hateno_SecretLifeOfSagono" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Hateno_TellMeTeacher01> { "Step_Hateno_TellMeTeacher01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Hateno_TellMeTeacher02> { "Step_Hateno_TellMeTeacher02" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Hateno_VillageMayorElection> { "Step_Hateno_VillageMayorElection" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Hateno_WhatToPlant> { "Step_Hateno_WhatToPlant" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Hebra_SkyRingChallenge> { "Step_Hebra_SkyRingChallenge" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Hebra_SkyRingChallenge_MiniGame> { "Step_Hebra_SkyRingChallenge_MiniGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::HorseInnChallenge001> { "Step_HorseInnChallenge001" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::HorseInnChallenge002> { "Step_HorseInnChallenge002" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::HorseInnChallenge003> { "Step_HorseInnChallenge003" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::HorseInnChallenge005> { "Step_HorseInnChallenge005" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::HorseInnChallenge007> { "Step_HorseInnChallenge007" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::HotSpringEgg> { "Step_HotSpringEgg" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::HourseInnChallenge004> { "Step_HourseInnChallenge004" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::HuntSalmon> { "Step_HuntSalmon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::HyruleCastleIncident> { "Step_HyruleCastleIncident" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::IceMaking> { "Step_IceMaking" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::IchikaraChallenge01> { "Step_IchikaraChallenge01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::IchikaraChallenge03> { "Step_IchikaraChallenge03" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::IchikaraCircuit_Tutorial> { "Step_IchikaraCircuit_Tutorial" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::IchikaraDaughterPhoto> { "Step_IchikaraDaughterPhoto" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::IllnessStartsWithFeelings> { "Step_IllnessStartsWithFeelings" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::InfiltrationFromTheSky> { "Step_InfiltrationFromTheSky" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::InnNeverReturns> { "Step_InnNeverReturns" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::JobSunazarashi> { "Step_JobSunazarashi" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Know_FourStonePlates> { "Step_Know_FourStonePlates" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::KokkoGuidePost> { "Step_KokkoGuidePost" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Korok_CarryToShrine> { "Step_Korok_CarryToShrine" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Lodge_Chemical001> { "Step_Lodge_Chemical001" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::LookingForLightSpot> { "Step_LookingForLightSpot" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::LookingForTheVoiceLord> { "Step_LookingForTheVoiceLord" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Mack_SecretBase> { "Step_Mack_SecretBase" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MainChallenge> { "Step_MainChallenge" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MakeAChampionsWeapon_Goron> { "Step_MakeAChampionsWeapon_Goron" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MakeChemicalWeapon> { "Step_MakeChemicalWeapon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MasterSwordClues> { "Step_MasterSwordClues" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MeatRock> { "Step_MeatRock" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MemoryOfTheDragon> { "Step_MemoryOfTheDragon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MercenaryChallenge_Akkare> { "Step_MercenaryChallenge_Akkare" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MercenaryChallenge_Eldin> { "Step_MercenaryChallenge_Eldin" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MercenaryChallenge_Firone> { "Step_MercenaryChallenge_Firone" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MercenaryChallenge_Hateru> { "Step_MercenaryChallenge_Hateru" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MercenaryChallenge_Hebra> { "Step_MercenaryChallenge_Hebra" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MercenaryChallenge_HyrulePlain> { "Step_MercenaryChallenge_HyrulePlain" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Mercenary_Akkare_Bloody> { "Step_Mercenary_Akkare_Bloody" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Mercenary_Eldin_Bloody> { "Step_Mercenary_Eldin_Bloody" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Mercenary_Firone_Bloody> { "Step_Mercenary_Firone_Bloody" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Mercenary_Hateru_Bloody> { "Step_Mercenary_Hateru_Bloody" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Mercenary_Hebra_Bloody> { "Step_Mercenary_Hebra_Bloody" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Mercenary_HyrulePlain_Bloody> { "Step_Mercenary_HyrulePlain_Bloody" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MessageBottle_SOS> { "Step_MessageBottle_SOS" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MinusYiga> { "Step_MinusYiga" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MonsterFigures01> { "Step_MonsterFigures01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MonsterFigures02> { "Step_MonsterFigures02" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MonsterFigures03> { "Step_MonsterFigures03" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MonsterFigures04> { "Step_MonsterFigures04" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MonsterFigures05> { "Step_MonsterFigures05" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MushroomSisters_1> { "Step_MushroomSisters_1" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MushroomSisters_2> { "Step_MushroomSisters_2" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::MushroomSisters_3> { "Step_MushroomSisters_3" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Nazley_DigCave> { "Step_Nazley_DigCave" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Neck_IceWaterCave> { "Step_Neck_IceWaterCave" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::NewCanyonMissingPersonsCase> { "Step_NewCanyonMissingPersonsCase" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::NewsPaper_Mitsuba> { "Step_NewsPaper_Mitsuba" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::NoTrespassing> { "Step_NoTrespassing" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::NowInTheVillageOfLurelin> { "Step_NowInTheVillageOfLurelin" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Npc_BaseCamp_Assistant_ReactingStatue> { "Step_Npc_BaseCamp_Assistant_ReactingStatue" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Npc_BaseCamp_Assistant_ReactingStatue2> { "Step_Npc_BaseCamp_Assistant_ReactingStatue2" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Npc_BaseCamp_Assistant_ReactingStatue3> { "Step_Npc_BaseCamp_Assistant_ReactingStatue3" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Npc_BaseCamp_Assistant_ReactingStatue4> { "Step_Npc_BaseCamp_Assistant_ReactingStatue4" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::NushiShop_Challenge00> { "Step_NushiShop_Challenge00" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::NushiShop_Tutorial> { "Step_NushiShop_Tutorial" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::OldKorokHelp> { "Step_OldKorokHelp" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Orchestra01> { "Step_Orchestra01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Orchestra02> { "Step_Orchestra02" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Orchestra03> { "Step_Orchestra03" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Orchestra04> { "Step_Orchestra04" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Our_Treasure> { "Step_Our_Treasure" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Parasail_ChuchuDesign> { "Step_Parasail_ChuchuDesign" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::PhotoSpot_Challenge_01> { "Step_PhotoSpot_Challenge_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::PhotoSpot_Challenge_02> { "Step_PhotoSpot_Challenge_02" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::PhotoSpot_Challenge_03> { "Step_PhotoSpot_Challenge_03" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::PhotoSpot_Challenge_04> { "Step_PhotoSpot_Challenge_04" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::PhotoSpot_Challenge_05> { "Step_PhotoSpot_Challenge_05" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::PhotoSpot_Challenge_06> { "Step_PhotoSpot_Challenge_06" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::PhotoSpot_Challenge_07> { "Step_PhotoSpot_Challenge_07" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::PhotoSpot_Challenge_08> { "Step_PhotoSpot_Challenge_08" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::PhotoSpot_Challenge_09> { "Step_PhotoSpot_Challenge_09" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::PhotoSpot_Challenge_09_2> { "Step_PhotoSpot_Challenge_09_2" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::PhotoSpot_Challenge_10> { "Step_PhotoSpot_Challenge_10" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::PhotoSpot_Challenge_11> { "Step_PhotoSpot_Challenge_11" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::PhotoSpot_Challenge_12> { "Step_PhotoSpot_Challenge_12" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::PhotoSpot_Challenge_13> { "Step_PhotoSpot_Challenge_13" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::PhotoSpot_Challenge_14> { "Step_PhotoSpot_Challenge_14" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Raise_GoddesStatue> { "Step_Raise_GoddesStatue" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Raise_GoddesStatue_Courage> { "Step_Raise_GoddesStatue_Courage" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Raise_GoddesStatue_Power> { "Step_Raise_GoddesStatue_Power" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Raise_GoddesStatue_Wisdom> { "Step_Raise_GoddesStatue_Wisdom" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::RepairArmor> { "Step_RepairArmor" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::RescueHost> { "Step_RescueHost" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::RescueVehicle01> { "Step_RescueVehicle01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::RescueWell> { "Step_RescueWell" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::ResearchEldin> { "Step_ResearchEldin" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::ResearchLanayru> { "Step_ResearchLanayru" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::RestaurantInTheWell> { "Step_RestaurantInTheWell" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::RitoBridgeRepair> { "Step_RitoBridgeRepair" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Rito_ItemExchange> { "Step_Rito_ItemExchange" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Rito_MedoArmor> { "Step_Rito_MedoArmor" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Rito_RevaliWeapon> { "Step_Rito_RevaliWeapon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Rito_ShadowCave> { "Step_Rito_ShadowCave" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::SageOfFire> { "Step_SageOfFire" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::SageOfGerudo> { "Step_SageOfGerudo" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::SageOfSky> { "Step_SageOfSky" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::SageOfSoul> { "Step_SageOfSoul" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::SageOfWind> { "Step_SageOfWind" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::SageOfZora> { "Step_SageOfZora" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::SaihateSubjugation> { "Step_SaihateSubjugation" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::SearchCaravan> { "Step_SearchCaravan" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::SecretBase_MiniGame> { "Step_SecretBase_MiniGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::ShieldSurfing_MiniGame> { "Step_ShieldSurfing_MiniGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::SkyIsland_MiniGame_01> { "Step_SkyIsland_MiniGame_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::SkyIsland_MiniGame_02> { "Step_SkyIsland_MiniGame_02" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::SkyIsland_MiniGame_03> { "Step_SkyIsland_MiniGame_03" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::SnowyMountain_Surfing> { "Step_SnowyMountain_Surfing" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::StatueDevilTutorial> { "Step_StatueDevilTutorial" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::SurveyOfFourVillages> { "Step_SurveyOfFourVillages" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::TakeAnimals> { "Step_TakeAnimals" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::TakeOfIce> { "Step_TakeOfIce" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::TauraChallenge001> { "Step_TauraChallenge001" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::TheStrongestWeapon> { "Step_TheStrongestWeapon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::TreasureHunt_kokiri> { "Step_TreasureHunt_kokiri" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::TreasureOfLambda> { "Step_TreasureOfLambda" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::TreasureOfLamda_Dream> { "Step_TreasureOfLamda_Dream" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::TreasureOfLamda_Dream2> { "Step_TreasureOfLamda_Dream2" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::TreasureOfLamda_Dream3> { "Step_TreasureOfLamda_Dream3" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::TreasureOfLamda_DuelPeak> { "Step_TreasureOfLamda_DuelPeak" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::TreasureOfLamda_FierceDeity> { "Step_TreasureOfLamda_FierceDeity" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::TreasureOfLamda_Gerudo> { "Step_TreasureOfLamda_Gerudo" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::TreasureOfLamda_Pirate> { "Step_TreasureOfLamda_Pirate" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Tribune01> { "Step_Tribune01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Tribune02> { "Step_Tribune02" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Tribune03> { "Step_Tribune03" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Tribune04> { "Step_Tribune04" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Tribune05> { "Step_Tribune05" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Tribune06> { "Step_Tribune06" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Tribune07> { "Step_Tribune07" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Tribune09> { "Step_Tribune09" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Tribune10> { "Step_Tribune10" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Tribune11> { "Step_Tribune11" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Tribune13> { "Step_Tribune13" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Tribune14> { "Step_Tribune14" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Tribune16> { "Step_Tribune16" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Uotori_BreakthePirateBase> { "Step_Uotori_BreakthePirateBase" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Uotori_Designer> { "Step_Uotori_Designer" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Uotori_ResortPlan> { "Step_Uotori_ResortPlan" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Uotori_RevivePlan> { "Step_Uotori_RevivePlan" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Uotori_WhiteLineGame> { "Step_Uotori_WhiteLineGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::UpgradeOfPurahPad1> { "Step_UpgradeOfPurahPad1" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::WantedCleaning> { "Step_WantedCleaning" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::WashedAwayBusinessTools> { "Step_WashedAwayBusinessTools" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::WaterBridgePlace> { "Step_WaterBridgePlace" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::WellCollection> { "Step_WellCollection" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::WhichIsStronger> { "Step_WhichIsStronger" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::ZonauReliefSearch> { "Step_ZonauReliefSearch" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Zonau_GeniusWeapon> { "Step_Zonau_GeniusWeapon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::ZoraStatue_Picture> { "Step_ZoraStatue_Picture" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Zora_Enemy_hunt> { "Step_Zora_Enemy_hunt" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Zora_MessageBottle> { "Step_Zora_MessageBottle" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::Zora_RuttaTreasure> { "Step_Zora_RuttaTreasure" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Step::gather_Insect_Z> { "Step_gather_Insect_Z" };