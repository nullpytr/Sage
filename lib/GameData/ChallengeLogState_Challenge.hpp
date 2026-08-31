#pragma once
#include <sage>

struct GameData::ChallengeLogState_Challenge : Tag::Structure {
	struct AisyaRescue : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<AisyaRescue>&;
	};
	struct AmberCollector : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<AmberCollector>&;
	};
	struct ArrowMeister_Momo : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<ArrowMeister_Momo>&;
	};
	struct AssassinGerudoBase : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<AssassinGerudoBase>&;
	};
	struct BallBring_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<BallBring_MiniGame>&;
	};
	struct Basketball_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Basketball_MiniGame>&;
	};
	struct Big_Rotate : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Big_Rotate>&;
	};
	struct BirdManContest : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<BirdManContest>&;
	};
	struct BlindRuinsTreasure : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<BlindRuinsTreasure>&;
	};
	struct BlindRuinsTreasure_Gerudo : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<BlindRuinsTreasure_Gerudo>&;
	};
	struct BlindRuinsTreasure_Goron : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<BlindRuinsTreasure_Goron>&;
	};
	struct BlindRuinsTreasure_Rito : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<BlindRuinsTreasure_Rito>&;
	};
	struct BlindRuinsTreasure_Zora : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<BlindRuinsTreasure_Zora>&;
	};
	struct BuildHouse : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<BuildHouse>&;
	};
	struct BuildingMaterialsTutorial : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<BuildingMaterialsTutorial>&;
	};
	struct CDungeon_AllDone : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CDungeon_AllDone>&;
	};
	struct CarryGoronKid1 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryGoronKid1>&;
	};
	struct CarryGoronKid2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryGoronKid2>&;
	};
	struct CarryStone : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryStone>&;
	};
	struct CarryToShrine01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine01>&;
	};
	struct CarryToShrine02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine02>&;
	};
	struct CarryToShrine03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine03>&;
	};
	struct CarryToShrine05 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine05>&;
	};
	struct CarryToShrine06 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine06>&;
	};
	struct CarryToShrine07 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine07>&;
	};
	struct CarryToShrine08_Zora : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine08_Zora>&;
	};
	struct CarryToShrine09 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine09>&;
	};
	struct CarryToShrine10 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine10>&;
	};
	struct CarryToShrine11 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine11>&;
	};
	struct CarryToShrine12 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine12>&;
	};
	struct CarryToShrine13 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine13>&;
	};
	struct CarryToShrine14 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine14>&;
	};
	struct CarryToShrine15 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine15>&;
	};
	struct CarryToShrine16 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine16>&;
	};
	struct CarryToShrine17 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine17>&;
	};
	struct CarryToShrine19 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine19>&;
	};
	struct CarryToShrine20 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine20>&;
	};
	struct CarryToShrine21 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine21>&;
	};
	struct CarryToShrine22 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine22>&;
	};
	struct CarryToShrine23 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CarryToShrine23>&;
	};
	struct Circuit_Desert : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Circuit_Desert>&;
	};
	struct Circuit_FaronWoods_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Circuit_FaronWoods_MiniGame>&;
	};
	struct Circuit_Ichikara : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Circuit_Ichikara>&;
	};
	struct Circuit_Ichikara_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Circuit_Ichikara_MiniGame>&;
	};
	struct Circuit_Uotori_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Circuit_Uotori_MiniGame>&;
	};
	struct CleanStatue : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CleanStatue>&;
	};
	struct ClueTotheSixthSage : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<ClueTotheSixthSage>&;
	};
	struct CollectObject_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CollectObject_MiniGame>&;
	};
	struct CollectObject_MiniGame_Cliff : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CollectObject_MiniGame_Cliff>&;
	};
	struct CollectObject_MiniGame_LakeSide : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CollectObject_MiniGame_LakeSide>&;
	};
	struct Connect_AkkareMaze : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Connect_AkkareMaze>&;
	};
	struct Connect_FirstIsland : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Connect_FirstIsland>&;
	};
	struct Connect_GerudoMaze : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Connect_GerudoMaze>&;
	};
	struct Connect_TabantaMaze : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Connect_TabantaMaze>&;
	};
	struct CookAtBaseCamp : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CookAtBaseCamp>&;
	};
	struct CraftShadowPicture : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CraftShadowPicture>&;
	};
	struct CreateArmor : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<CreateArmor>&;
	};
	struct Createshinguard : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Createshinguard>&;
	};
	struct DeepHoleSurvey2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<DeepHoleSurvey2>&;
	};
	struct DefeatGanondorf : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<DefeatGanondorf>&;
	};
	struct DefeatHugeEnemy_1 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<DefeatHugeEnemy_1>&;
	};
	struct DefeatHugeEnemy_2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<DefeatHugeEnemy_2>&;
	};
	struct DefeatHugeEnemy_3 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<DefeatHugeEnemy_3>&;
	};
	struct DefeatHugeEnemy_4 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<DefeatHugeEnemy_4>&;
	};
	struct DefeatHugeEnemy_5 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<DefeatHugeEnemy_5>&;
	};
	struct DefeatHugeEnemy_6 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<DefeatHugeEnemy_6>&;
	};
	struct DevoteSpring : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<DevoteSpring>&;
	};
	struct DividedSlate : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<DividedSlate>&;
	};
	struct EightHeroStatues : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<EightHeroStatues>&;
	};
	struct EightHeroStatues_After : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<EightHeroStatues_After>&;
	};
	struct ExcavateFossil1 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<ExcavateFossil1>&;
	};
	struct ExcavateFossil2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<ExcavateFossil2>&;
	};
	struct ExcavateFossil3 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<ExcavateFossil3>&;
	};
	struct Fairy2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Fairy2>&;
	};
	struct Fairy3 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Fairy3>&;
	};
	struct Fairy4 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Fairy4>&;
	};
	struct FindSunaNui : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<FindSunaNui>&;
	};
	struct FindSunaNui2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<FindSunaNui2>&;
	};
	struct FindWhiteHorse : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<FindWhiteHorse>&;
	};
	struct FindWithSensors : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<FindWithSensors>&;
	};
	struct FirstskyislandReturns : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<FirstskyislandReturns>&;
	};
	struct FullyRipenedFlintstones : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<FullyRipenedFlintstones>&;
	};
	struct GOToTheCastleOfHyrule : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<GOToTheCastleOfHyrule>&;
	};
	struct GeniusWeapon_Zora : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<GeniusWeapon_Zora>&;
	};
	struct Genkos_Kitchen : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Genkos_Kitchen>&;
	};
	struct GerudoCanyon_24hEnduranceComparison : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<GerudoCanyon_24hEnduranceComparison>&;
	};
	struct GerudoCanyon_Adventure : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<GerudoCanyon_Adventure>&;
	};
	struct GerudoCanyon_ColdEnduranceComparison : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<GerudoCanyon_ColdEnduranceComparison>&;
	};
	struct GerudoCanyon_GleeokLiver : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<GerudoCanyon_GleeokLiver>&;
	};
	struct GerudoCanyon_TumbleweedSweep : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<GerudoCanyon_TumbleweedSweep>&;
	};
	struct GerudoDesertTreasure : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<GerudoDesertTreasure>&;
	};
	struct Gerudo_UrbosaWeapon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Gerudo_UrbosaWeapon>&;
	};
	struct GetCamera : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<GetCamera>&;
	};
	struct GetMasterSword : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<GetMasterSword>&;
	};
	struct GetSensorPlus : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<GetSensorPlus>&;
	};
	struct GetWalker : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<GetWalker>&;
	};
	struct GetWarpMarker : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<GetWarpMarker>&;
	};
	struct GiantHorse : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<GiantHorse>&;
	};
	struct GoneSnowQueen : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<GoneSnowQueen>&;
	};
	struct GoronPond : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<GoronPond>&;
	};
	struct GoronReturntoNature : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<GoronReturntoNature>&;
	};
	struct Goron_MiniGame_01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Goron_MiniGame_01>&;
	};
	struct Goron_MiniGame_02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Goron_MiniGame_02>&;
	};
	struct Goron_MiniGame_03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Goron_MiniGame_03>&;
	};
	struct Goron_MiniGame_Tutorial_01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Goron_MiniGame_Tutorial_01>&;
	};
	struct Goron_MiniGame_Tutorial_02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Goron_MiniGame_Tutorial_02>&;
	};
	struct Goron_MiniGame_Tutorial_03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Goron_MiniGame_Tutorial_03>&;
	};
	struct GotoFironeZonauRemains : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<GotoFironeZonauRemains>&;
	};
	struct GroundPaintingAir01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<GroundPaintingAir01>&;
	};
	struct Hack_GuardGoods : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Hack_GuardGoods>&;
	};
	struct HammerGong_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<HammerGong_MiniGame>&;
	};
	struct HatenoPurchasePicture : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<HatenoPurchasePicture>&;
	};
	struct Hateno_Cheese : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Hateno_Cheese>&;
	};
	struct Hateno_CoolGuy : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Hateno_CoolGuy>&;
	};
	struct Hateno_FreshMilk : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Hateno_FreshMilk>&;
	};
	struct Hateno_LetUsElection : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Hateno_LetUsElection>&;
	};
	struct Hateno_NewCostume : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Hateno_NewCostume>&;
	};
	struct Hateno_NewSpecialty : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Hateno_NewSpecialty>&;
	};
	struct Hateno_RevitalizeByNewSpeciality : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Hateno_RevitalizeByNewSpeciality>&;
	};
	struct Hateno_SecretLifeOfKusayoshi : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Hateno_SecretLifeOfKusayoshi>&;
	};
	struct Hateno_SecretLifeOfSagono : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Hateno_SecretLifeOfSagono>&;
	};
	struct Hateno_TellMeTeacher01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Hateno_TellMeTeacher01>&;
	};
	struct Hateno_TellMeTeacher02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Hateno_TellMeTeacher02>&;
	};
	struct Hateno_VillageMayorElection : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Hateno_VillageMayorElection>&;
	};
	struct Hateno_WhatToPlant : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Hateno_WhatToPlant>&;
	};
	struct Hebra_SkyRingChallenge : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Hebra_SkyRingChallenge>&;
	};
	struct Hebra_SkyRingChallenge_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Hebra_SkyRingChallenge_MiniGame>&;
	};
	struct HorseInnChallenge001 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<HorseInnChallenge001>&;
	};
	struct HorseInnChallenge002 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<HorseInnChallenge002>&;
	};
	struct HorseInnChallenge003 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<HorseInnChallenge003>&;
	};
	struct HorseInnChallenge005 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<HorseInnChallenge005>&;
	};
	struct HorseInnChallenge007 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<HorseInnChallenge007>&;
	};
	struct HotSpringEgg : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<HotSpringEgg>&;
	};
	struct HourseInnChallenge004 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<HourseInnChallenge004>&;
	};
	struct HuntSalmon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<HuntSalmon>&;
	};
	struct HyruleCastleIncident : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<HyruleCastleIncident>&;
	};
	struct IceMaking : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<IceMaking>&;
	};
	struct IchikaraChallenge01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<IchikaraChallenge01>&;
	};
	struct IchikaraChallenge03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<IchikaraChallenge03>&;
	};
	struct IchikaraCircuit_Tutorial : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<IchikaraCircuit_Tutorial>&;
	};
	struct IchikaraDaughterPhoto : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<IchikaraDaughterPhoto>&;
	};
	struct IllnessStartsWithFeelings : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<IllnessStartsWithFeelings>&;
	};
	struct InfiltrationFromTheSky : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<InfiltrationFromTheSky>&;
	};
	struct InnNeverReturns : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<InnNeverReturns>&;
	};
	struct JobSunazarashi : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<JobSunazarashi>&;
	};
	struct Know_FourStonePlates : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Know_FourStonePlates>&;
	};
	struct KokkoGuidePost : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<KokkoGuidePost>&;
	};
	struct Korok_CarryToShrine : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Korok_CarryToShrine>&;
	};
	struct Lodge_Chemical001 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Lodge_Chemical001>&;
	};
	struct LookingForLightSpot : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<LookingForLightSpot>&;
	};
	struct LookingForTheVoiceLord : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<LookingForTheVoiceLord>&;
	};
	struct Mack_SecretBase : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Mack_SecretBase>&;
	};
	struct MainChallenge : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MainChallenge>&;
	};
	struct MakeAChampionsWeapon_Goron : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MakeAChampionsWeapon_Goron>&;
	};
	struct MakeChemicalWeapon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MakeChemicalWeapon>&;
	};
	struct MasterSwordClues : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MasterSwordClues>&;
	};
	struct MeatRock : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MeatRock>&;
	};
	struct MemoryOfTheDragon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MemoryOfTheDragon>&;
	};
	struct MercenaryChallenge_Akkare : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MercenaryChallenge_Akkare>&;
	};
	struct MercenaryChallenge_Eldin : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MercenaryChallenge_Eldin>&;
	};
	struct MercenaryChallenge_Firone : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MercenaryChallenge_Firone>&;
	};
	struct MercenaryChallenge_Hateru : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MercenaryChallenge_Hateru>&;
	};
	struct MercenaryChallenge_Hebra : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MercenaryChallenge_Hebra>&;
	};
	struct MercenaryChallenge_HyrulePlain : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MercenaryChallenge_HyrulePlain>&;
	};
	struct Mercenary_Akkare_Bloody : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Mercenary_Akkare_Bloody>&;
	};
	struct Mercenary_Eldin_Bloody : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Mercenary_Eldin_Bloody>&;
	};
	struct Mercenary_Firone_Bloody : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Mercenary_Firone_Bloody>&;
	};
	struct Mercenary_Hateru_Bloody : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Mercenary_Hateru_Bloody>&;
	};
	struct Mercenary_Hebra_Bloody : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Mercenary_Hebra_Bloody>&;
	};
	struct Mercenary_HyrulePlain_Bloody : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Mercenary_HyrulePlain_Bloody>&;
	};
	struct MessageBottle_SOS : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MessageBottle_SOS>&;
	};
	struct MinusYiga : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MinusYiga>&;
	};
	struct MonsterFigures01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MonsterFigures01>&;
	};
	struct MonsterFigures02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MonsterFigures02>&;
	};
	struct MonsterFigures03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MonsterFigures03>&;
	};
	struct MonsterFigures04 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MonsterFigures04>&;
	};
	struct MonsterFigures05 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MonsterFigures05>&;
	};
	struct MushroomSisters_1 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MushroomSisters_1>&;
	};
	struct MushroomSisters_2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MushroomSisters_2>&;
	};
	struct MushroomSisters_3 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<MushroomSisters_3>&;
	};
	struct Nazley_DigCave : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Nazley_DigCave>&;
	};
	struct Neck_IceWaterCave : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Neck_IceWaterCave>&;
	};
	struct NewCanyonMissingPersonsCase : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<NewCanyonMissingPersonsCase>&;
	};
	struct NewsPaper_Mitsuba : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<NewsPaper_Mitsuba>&;
	};
	struct NoTrespassing : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<NoTrespassing>&;
	};
	struct NowInTheVillageOfLurelin : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<NowInTheVillageOfLurelin>&;
	};
	struct Npc_BaseCamp_Assistant_ReactingStatue : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Npc_BaseCamp_Assistant_ReactingStatue>&;
	};
	struct Npc_BaseCamp_Assistant_ReactingStatue2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Npc_BaseCamp_Assistant_ReactingStatue2>&;
	};
	struct Npc_BaseCamp_Assistant_ReactingStatue3 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Npc_BaseCamp_Assistant_ReactingStatue3>&;
	};
	struct Npc_BaseCamp_Assistant_ReactingStatue4 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Npc_BaseCamp_Assistant_ReactingStatue4>&;
	};
	struct NushiShop_Challenge00 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<NushiShop_Challenge00>&;
	};
	struct NushiShop_Tutorial : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<NushiShop_Tutorial>&;
	};
	struct OldKorokHelp : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<OldKorokHelp>&;
	};
	struct Orchestra02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Orchestra02>&;
	};
	struct Orchestra03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Orchestra03>&;
	};
	struct Orchestra04 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Orchestra04>&;
	};
	struct Our_Treasure : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Our_Treasure>&;
	};
	struct Parasail_ChuchuDesign : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Parasail_ChuchuDesign>&;
	};
	struct PhotoSpot_Challenge_01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<PhotoSpot_Challenge_01>&;
	};
	struct PhotoSpot_Challenge_02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<PhotoSpot_Challenge_02>&;
	};
	struct PhotoSpot_Challenge_03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<PhotoSpot_Challenge_03>&;
	};
	struct PhotoSpot_Challenge_04 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<PhotoSpot_Challenge_04>&;
	};
	struct PhotoSpot_Challenge_05 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<PhotoSpot_Challenge_05>&;
	};
	struct PhotoSpot_Challenge_06 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<PhotoSpot_Challenge_06>&;
	};
	struct PhotoSpot_Challenge_07 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<PhotoSpot_Challenge_07>&;
	};
	struct PhotoSpot_Challenge_08 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<PhotoSpot_Challenge_08>&;
	};
	struct PhotoSpot_Challenge_09 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<PhotoSpot_Challenge_09>&;
	};
	struct PhotoSpot_Challenge_09_2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<PhotoSpot_Challenge_09_2>&;
	};
	struct PhotoSpot_Challenge_10 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<PhotoSpot_Challenge_10>&;
	};
	struct PhotoSpot_Challenge_11 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<PhotoSpot_Challenge_11>&;
	};
	struct PhotoSpot_Challenge_12 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<PhotoSpot_Challenge_12>&;
	};
	struct PhotoSpot_Challenge_13 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<PhotoSpot_Challenge_13>&;
	};
	struct PhotoSpot_Challenge_14 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<PhotoSpot_Challenge_14>&;
	};
	struct Raise_GoddesStatue : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Raise_GoddesStatue>&;
	};
	struct Raise_GoddesStatue_Courage : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Raise_GoddesStatue_Courage>&;
	};
	struct Raise_GoddesStatue_Power : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Raise_GoddesStatue_Power>&;
	};
	struct Raise_GoddesStatue_Wisdom : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Raise_GoddesStatue_Wisdom>&;
	};
	struct RepairArmor : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<RepairArmor>&;
	};
	struct RescueHost : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<RescueHost>&;
	};
	struct RescueVehicle01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<RescueVehicle01>&;
	};
	struct RescueWell : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<RescueWell>&;
	};
	struct ResearchEldin : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<ResearchEldin>&;
	};
	struct ResearchLanayru : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<ResearchLanayru>&;
	};
	struct RestaurantInTheWell : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<RestaurantInTheWell>&;
	};
	struct RitoBridgeRepair : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<RitoBridgeRepair>&;
	};
	struct Rito_ItemExchange : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Rito_ItemExchange>&;
	};
	struct Rito_MedoArmor : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Rito_MedoArmor>&;
	};
	struct Rito_RevaliWeapon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Rito_RevaliWeapon>&;
	};
	struct Rito_ShadowCave : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Rito_ShadowCave>&;
	};
	struct SageOfFire : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<SageOfFire>&;
	};
	struct SageOfGerudo : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<SageOfGerudo>&;
	};
	struct SageOfSoul : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<SageOfSoul>&;
	};
	struct SageOfWind : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<SageOfWind>&;
	};
	struct SageOfZora : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<SageOfZora>&;
	};
	struct SaihateSubjugation : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<SaihateSubjugation>&;
	};
	struct SearchCaravan : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<SearchCaravan>&;
	};
	struct SecretBase_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<SecretBase_MiniGame>&;
	};
	struct ShieldSurfing_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<ShieldSurfing_MiniGame>&;
	};
	struct SkyIsland_MiniGame_01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<SkyIsland_MiniGame_01>&;
	};
	struct SkyIsland_MiniGame_02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<SkyIsland_MiniGame_02>&;
	};
	struct SkyIsland_MiniGame_03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<SkyIsland_MiniGame_03>&;
	};
	struct SnowyMountain_Surfing : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<SnowyMountain_Surfing>&;
	};
	struct StatueDevilTutorial : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<StatueDevilTutorial>&;
	};
	struct SurveyOfFourVillages : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<SurveyOfFourVillages>&;
	};
	struct TakeAnimals : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<TakeAnimals>&;
	};
	struct TakeOfIce : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<TakeOfIce>&;
	};
	struct TauraChallenge001 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<TauraChallenge001>&;
	};
	struct TheStrongestWeapon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<TheStrongestWeapon>&;
	};
	struct TreasureHunt_kokiri : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<TreasureHunt_kokiri>&;
	};
	struct TreasureOfLambda : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<TreasureOfLambda>&;
	};
	struct TreasureOfLamda_Dream : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<TreasureOfLamda_Dream>&;
	};
	struct TreasureOfLamda_Dream2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<TreasureOfLamda_Dream2>&;
	};
	struct TreasureOfLamda_Dream3 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<TreasureOfLamda_Dream3>&;
	};
	struct TreasureOfLamda_DuelPeak : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<TreasureOfLamda_DuelPeak>&;
	};
	struct TreasureOfLamda_FierceDeity : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<TreasureOfLamda_FierceDeity>&;
	};
	struct TreasureOfLamda_Gerudo : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<TreasureOfLamda_Gerudo>&;
	};
	struct TreasureOfLamda_Pirate : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<TreasureOfLamda_Pirate>&;
	};
	struct Tribune01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Tribune01>&;
	};
	struct Tribune02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Tribune02>&;
	};
	struct Tribune03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Tribune03>&;
	};
	struct Tribune04 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Tribune04>&;
	};
	struct Tribune05 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Tribune05>&;
	};
	struct Tribune06 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Tribune06>&;
	};
	struct Tribune07 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Tribune07>&;
	};
	struct Tribune09 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Tribune09>&;
	};
	struct Tribune10 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Tribune10>&;
	};
	struct Tribune11 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Tribune11>&;
	};
	struct Tribune13 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Tribune13>&;
	};
	struct Tribune14 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Tribune14>&;
	};
	struct Tribune16 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Tribune16>&;
	};
	struct Uotori_Designer : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Uotori_Designer>&;
	};
	struct Uotori_ResortPlan : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Uotori_ResortPlan>&;
	};
	struct Uotori_RevivePlan : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Uotori_RevivePlan>&;
	};
	struct Uotori_WhiteLineGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Uotori_WhiteLineGame>&;
	};
	struct WashedAwayBusinessTools : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<WashedAwayBusinessTools>&;
	};
	struct WaterBridgePlace : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<WaterBridgePlace>&;
	};
	struct WellCollection : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<WellCollection>&;
	};
	struct WhichIsStronger : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<WhichIsStronger>&;
	};
	struct ZonauReliefSearch : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<ZonauReliefSearch>&;
	};
	struct Zonau_GeniusWeapon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Zonau_GeniusWeapon>&;
	};
	struct ZoraStatue_Picture : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<ZoraStatue_Picture>&;
	};
	struct Zora_Enemy_hunt : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Zora_Enemy_hunt>&;
	};
	struct Zora_MessageBottle : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Zora_MessageBottle>&;
	};
	struct Zora_RuttaTreasure : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<Zora_RuttaTreasure>&;
	};
	struct gather_Insect_Z : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<gather_Insect_Z>&;
	};
};/* Tag::Structure GameData::ChallengeLogState_Challenge close */

template <> struct Data::Structure<GameData::ChallengeLogState_Challenge> : GameData::ChallengeLogState_Challenge {
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
	Enum<ExcavateFossil1> ExcavateFossil1;
	Enum<ExcavateFossil2> ExcavateFossil2;
	Enum<ExcavateFossil3> ExcavateFossil3;
	Enum<Fairy2> Fairy2;
	Enum<Fairy3> Fairy3;
	Enum<Fairy4> Fairy4;
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
	Enum<Uotori_Designer> Uotori_Designer;
	Enum<Uotori_ResortPlan> Uotori_ResortPlan;
	Enum<Uotori_RevivePlan> Uotori_RevivePlan;
	Enum<Uotori_WhiteLineGame> Uotori_WhiteLineGame;
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
		ExcavateFossil1 { s.get<struct ExcavateFossil1>() },
		ExcavateFossil2 { s.get<struct ExcavateFossil2>() },
		ExcavateFossil3 { s.get<struct ExcavateFossil3>() },
		Fairy2 { s.get<struct Fairy2>() },
		Fairy3 { s.get<struct Fairy3>() },
		Fairy4 { s.get<struct Fairy4>() },
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
		Uotori_Designer { s.get<struct Uotori_Designer>() },
		Uotori_ResortPlan { s.get<struct Uotori_ResortPlan>() },
		Uotori_RevivePlan { s.get<struct Uotori_RevivePlan>() },
		Uotori_WhiteLineGame { s.get<struct Uotori_WhiteLineGame>() },
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
};/* Data::Structure GameData::ChallengeLogState_Challenge close */

template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::AisyaRescue> { "ChallengeLogState_Challenge.AisyaRescue" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::AmberCollector> { "ChallengeLogState_Challenge.AmberCollector" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::ArrowMeister_Momo> { "ChallengeLogState_Challenge.ArrowMeister_Momo" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::AssassinGerudoBase> { "ChallengeLogState_Challenge.AssassinGerudoBase" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::BallBring_MiniGame> { "ChallengeLogState_Challenge.BallBring_MiniGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Basketball_MiniGame> { "ChallengeLogState_Challenge.Basketball_MiniGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Big_Rotate> { "ChallengeLogState_Challenge.Big_Rotate" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::BirdManContest> { "ChallengeLogState_Challenge.BirdManContest" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::BlindRuinsTreasure> { "ChallengeLogState_Challenge.BlindRuinsTreasure" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::BlindRuinsTreasure_Gerudo> { "ChallengeLogState_Challenge.BlindRuinsTreasure_Gerudo" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::BlindRuinsTreasure_Goron> { "ChallengeLogState_Challenge.BlindRuinsTreasure_Goron" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::BlindRuinsTreasure_Rito> { "ChallengeLogState_Challenge.BlindRuinsTreasure_Rito" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::BlindRuinsTreasure_Zora> { "ChallengeLogState_Challenge.BlindRuinsTreasure_Zora" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::BuildHouse> { "ChallengeLogState_Challenge.BuildHouse" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::BuildingMaterialsTutorial> { "ChallengeLogState_Challenge.BuildingMaterialsTutorial" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CDungeon_AllDone> { "ChallengeLogState_Challenge.CDungeon_AllDone" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryGoronKid1> { "ChallengeLogState_Challenge.CarryGoronKid1" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryGoronKid2> { "ChallengeLogState_Challenge.CarryGoronKid2" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryStone> { "ChallengeLogState_Challenge.CarryStone" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine01> { "ChallengeLogState_Challenge.CarryToShrine01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine02> { "ChallengeLogState_Challenge.CarryToShrine02" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine03> { "ChallengeLogState_Challenge.CarryToShrine03" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine05> { "ChallengeLogState_Challenge.CarryToShrine05" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine06> { "ChallengeLogState_Challenge.CarryToShrine06" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine07> { "ChallengeLogState_Challenge.CarryToShrine07" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine08_Zora> { "ChallengeLogState_Challenge.CarryToShrine08_Zora" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine09> { "ChallengeLogState_Challenge.CarryToShrine09" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine10> { "ChallengeLogState_Challenge.CarryToShrine10" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine11> { "ChallengeLogState_Challenge.CarryToShrine11" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine12> { "ChallengeLogState_Challenge.CarryToShrine12" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine13> { "ChallengeLogState_Challenge.CarryToShrine13" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine14> { "ChallengeLogState_Challenge.CarryToShrine14" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine15> { "ChallengeLogState_Challenge.CarryToShrine15" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine16> { "ChallengeLogState_Challenge.CarryToShrine16" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine17> { "ChallengeLogState_Challenge.CarryToShrine17" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine19> { "ChallengeLogState_Challenge.CarryToShrine19" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine20> { "ChallengeLogState_Challenge.CarryToShrine20" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine21> { "ChallengeLogState_Challenge.CarryToShrine21" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine22> { "ChallengeLogState_Challenge.CarryToShrine22" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine23> { "ChallengeLogState_Challenge.CarryToShrine23" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Circuit_Desert> { "ChallengeLogState_Challenge.Circuit_Desert" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Circuit_FaronWoods_MiniGame> { "ChallengeLogState_Challenge.Circuit_FaronWoods_MiniGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Circuit_Ichikara> { "ChallengeLogState_Challenge.Circuit_Ichikara" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Circuit_Ichikara_MiniGame> { "ChallengeLogState_Challenge.Circuit_Ichikara_MiniGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Circuit_Uotori_MiniGame> { "ChallengeLogState_Challenge.Circuit_Uotori_MiniGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CleanStatue> { "ChallengeLogState_Challenge.CleanStatue" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::ClueTotheSixthSage> { "ChallengeLogState_Challenge.ClueTotheSixthSage" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CollectObject_MiniGame> { "ChallengeLogState_Challenge.CollectObject_MiniGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CollectObject_MiniGame_Cliff> { "ChallengeLogState_Challenge.CollectObject_MiniGame_Cliff" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CollectObject_MiniGame_LakeSide> { "ChallengeLogState_Challenge.CollectObject_MiniGame_LakeSide" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Connect_AkkareMaze> { "ChallengeLogState_Challenge.Connect_AkkareMaze" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Connect_FirstIsland> { "ChallengeLogState_Challenge.Connect_FirstIsland" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Connect_GerudoMaze> { "ChallengeLogState_Challenge.Connect_GerudoMaze" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Connect_TabantaMaze> { "ChallengeLogState_Challenge.Connect_TabantaMaze" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CookAtBaseCamp> { "ChallengeLogState_Challenge.CookAtBaseCamp" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CraftShadowPicture> { "ChallengeLogState_Challenge.CraftShadowPicture" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CreateArmor> { "ChallengeLogState_Challenge.CreateArmor" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Createshinguard> { "ChallengeLogState_Challenge.Createshinguard" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::DeepHoleSurvey2> { "ChallengeLogState_Challenge.DeepHoleSurvey2" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::DefeatGanondorf> { "ChallengeLogState_Challenge.DefeatGanondorf" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::DefeatHugeEnemy_1> { "ChallengeLogState_Challenge.DefeatHugeEnemy_1" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::DefeatHugeEnemy_2> { "ChallengeLogState_Challenge.DefeatHugeEnemy_2" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::DefeatHugeEnemy_3> { "ChallengeLogState_Challenge.DefeatHugeEnemy_3" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::DefeatHugeEnemy_4> { "ChallengeLogState_Challenge.DefeatHugeEnemy_4" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::DefeatHugeEnemy_5> { "ChallengeLogState_Challenge.DefeatHugeEnemy_5" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::DefeatHugeEnemy_6> { "ChallengeLogState_Challenge.DefeatHugeEnemy_6" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::DevoteSpring> { "ChallengeLogState_Challenge.DevoteSpring" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::DividedSlate> { "ChallengeLogState_Challenge.DividedSlate" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::EightHeroStatues> { "ChallengeLogState_Challenge.EightHeroStatues" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::EightHeroStatues_After> { "ChallengeLogState_Challenge.EightHeroStatues_After" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::ExcavateFossil1> { "ChallengeLogState_Challenge.ExcavateFossil1" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::ExcavateFossil2> { "ChallengeLogState_Challenge.ExcavateFossil2" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::ExcavateFossil3> { "ChallengeLogState_Challenge.ExcavateFossil3" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Fairy2> { "ChallengeLogState_Challenge.Fairy2" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Fairy3> { "ChallengeLogState_Challenge.Fairy3" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Fairy4> { "ChallengeLogState_Challenge.Fairy4" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::FindSunaNui> { "ChallengeLogState_Challenge.FindSunaNui" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::FindSunaNui2> { "ChallengeLogState_Challenge.FindSunaNui2" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::FindWhiteHorse> { "ChallengeLogState_Challenge.FindWhiteHorse" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::FindWithSensors> { "ChallengeLogState_Challenge.FindWithSensors" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::FirstskyislandReturns> { "ChallengeLogState_Challenge.FirstskyislandReturns" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::FullyRipenedFlintstones> { "ChallengeLogState_Challenge.FullyRipenedFlintstones" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GOToTheCastleOfHyrule> { "ChallengeLogState_Challenge.GOToTheCastleOfHyrule" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GeniusWeapon_Zora> { "ChallengeLogState_Challenge.GeniusWeapon_Zora" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Genkos_Kitchen> { "ChallengeLogState_Challenge.Genkos_Kitchen" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GerudoCanyon_24hEnduranceComparison> { "ChallengeLogState_Challenge.GerudoCanyon_24hEnduranceComparison" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GerudoCanyon_Adventure> { "ChallengeLogState_Challenge.GerudoCanyon_Adventure" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GerudoCanyon_ColdEnduranceComparison> { "ChallengeLogState_Challenge.GerudoCanyon_ColdEnduranceComparison" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GerudoCanyon_GleeokLiver> { "ChallengeLogState_Challenge.GerudoCanyon_GleeokLiver" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GerudoCanyon_TumbleweedSweep> { "ChallengeLogState_Challenge.GerudoCanyon_TumbleweedSweep" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GerudoDesertTreasure> { "ChallengeLogState_Challenge.GerudoDesertTreasure" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Gerudo_UrbosaWeapon> { "ChallengeLogState_Challenge.Gerudo_UrbosaWeapon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GetCamera> { "ChallengeLogState_Challenge.GetCamera" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GetMasterSword> { "ChallengeLogState_Challenge.GetMasterSword" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GetSensorPlus> { "ChallengeLogState_Challenge.GetSensorPlus" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GetWalker> { "ChallengeLogState_Challenge.GetWalker" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GetWarpMarker> { "ChallengeLogState_Challenge.GetWarpMarker" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GiantHorse> { "ChallengeLogState_Challenge.GiantHorse" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GoneSnowQueen> { "ChallengeLogState_Challenge.GoneSnowQueen" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GoronPond> { "ChallengeLogState_Challenge.GoronPond" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GoronReturntoNature> { "ChallengeLogState_Challenge.GoronReturntoNature" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Goron_MiniGame_01> { "ChallengeLogState_Challenge.Goron_MiniGame_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Goron_MiniGame_02> { "ChallengeLogState_Challenge.Goron_MiniGame_02" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Goron_MiniGame_03> { "ChallengeLogState_Challenge.Goron_MiniGame_03" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Goron_MiniGame_Tutorial_01> { "ChallengeLogState_Challenge.Goron_MiniGame_Tutorial_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Goron_MiniGame_Tutorial_02> { "ChallengeLogState_Challenge.Goron_MiniGame_Tutorial_02" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Goron_MiniGame_Tutorial_03> { "ChallengeLogState_Challenge.Goron_MiniGame_Tutorial_03" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GotoFironeZonauRemains> { "ChallengeLogState_Challenge.GotoFironeZonauRemains" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GroundPaintingAir01> { "ChallengeLogState_Challenge.GroundPaintingAir01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hack_GuardGoods> { "ChallengeLogState_Challenge.Hack_GuardGoods" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HammerGong_MiniGame> { "ChallengeLogState_Challenge.HammerGong_MiniGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HatenoPurchasePicture> { "ChallengeLogState_Challenge.HatenoPurchasePicture" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_Cheese> { "ChallengeLogState_Challenge.Hateno_Cheese" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_CoolGuy> { "ChallengeLogState_Challenge.Hateno_CoolGuy" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_FreshMilk> { "ChallengeLogState_Challenge.Hateno_FreshMilk" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_LetUsElection> { "ChallengeLogState_Challenge.Hateno_LetUsElection" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_NewCostume> { "ChallengeLogState_Challenge.Hateno_NewCostume" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_NewSpecialty> { "ChallengeLogState_Challenge.Hateno_NewSpecialty" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_RevitalizeByNewSpeciality> { "ChallengeLogState_Challenge.Hateno_RevitalizeByNewSpeciality" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_SecretLifeOfKusayoshi> { "ChallengeLogState_Challenge.Hateno_SecretLifeOfKusayoshi" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_SecretLifeOfSagono> { "ChallengeLogState_Challenge.Hateno_SecretLifeOfSagono" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_TellMeTeacher01> { "ChallengeLogState_Challenge.Hateno_TellMeTeacher01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_TellMeTeacher02> { "ChallengeLogState_Challenge.Hateno_TellMeTeacher02" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_VillageMayorElection> { "ChallengeLogState_Challenge.Hateno_VillageMayorElection" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_WhatToPlant> { "ChallengeLogState_Challenge.Hateno_WhatToPlant" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hebra_SkyRingChallenge> { "ChallengeLogState_Challenge.Hebra_SkyRingChallenge" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hebra_SkyRingChallenge_MiniGame> { "ChallengeLogState_Challenge.Hebra_SkyRingChallenge_MiniGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HorseInnChallenge001> { "ChallengeLogState_Challenge.HorseInnChallenge001" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HorseInnChallenge002> { "ChallengeLogState_Challenge.HorseInnChallenge002" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HorseInnChallenge003> { "ChallengeLogState_Challenge.HorseInnChallenge003" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HorseInnChallenge005> { "ChallengeLogState_Challenge.HorseInnChallenge005" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HorseInnChallenge007> { "ChallengeLogState_Challenge.HorseInnChallenge007" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HotSpringEgg> { "ChallengeLogState_Challenge.HotSpringEgg" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HourseInnChallenge004> { "ChallengeLogState_Challenge.HourseInnChallenge004" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HuntSalmon> { "ChallengeLogState_Challenge.HuntSalmon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HyruleCastleIncident> { "ChallengeLogState_Challenge.HyruleCastleIncident" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::IceMaking> { "ChallengeLogState_Challenge.IceMaking" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::IchikaraChallenge01> { "ChallengeLogState_Challenge.IchikaraChallenge01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::IchikaraChallenge03> { "ChallengeLogState_Challenge.IchikaraChallenge03" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::IchikaraCircuit_Tutorial> { "ChallengeLogState_Challenge.IchikaraCircuit_Tutorial" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::IchikaraDaughterPhoto> { "ChallengeLogState_Challenge.IchikaraDaughterPhoto" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::IllnessStartsWithFeelings> { "ChallengeLogState_Challenge.IllnessStartsWithFeelings" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::InfiltrationFromTheSky> { "ChallengeLogState_Challenge.InfiltrationFromTheSky" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::InnNeverReturns> { "ChallengeLogState_Challenge.InnNeverReturns" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::JobSunazarashi> { "ChallengeLogState_Challenge.JobSunazarashi" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Know_FourStonePlates> { "ChallengeLogState_Challenge.Know_FourStonePlates" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::KokkoGuidePost> { "ChallengeLogState_Challenge.KokkoGuidePost" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Korok_CarryToShrine> { "ChallengeLogState_Challenge.Korok_CarryToShrine" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Lodge_Chemical001> { "ChallengeLogState_Challenge.Lodge_Chemical001" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::LookingForLightSpot> { "ChallengeLogState_Challenge.LookingForLightSpot" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::LookingForTheVoiceLord> { "ChallengeLogState_Challenge.LookingForTheVoiceLord" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Mack_SecretBase> { "ChallengeLogState_Challenge.Mack_SecretBase" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MainChallenge> { "ChallengeLogState_Challenge.MainChallenge" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MakeAChampionsWeapon_Goron> { "ChallengeLogState_Challenge.MakeAChampionsWeapon_Goron" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MakeChemicalWeapon> { "ChallengeLogState_Challenge.MakeChemicalWeapon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MasterSwordClues> { "ChallengeLogState_Challenge.MasterSwordClues" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MeatRock> { "ChallengeLogState_Challenge.MeatRock" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MemoryOfTheDragon> { "ChallengeLogState_Challenge.MemoryOfTheDragon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MercenaryChallenge_Akkare> { "ChallengeLogState_Challenge.MercenaryChallenge_Akkare" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MercenaryChallenge_Eldin> { "ChallengeLogState_Challenge.MercenaryChallenge_Eldin" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MercenaryChallenge_Firone> { "ChallengeLogState_Challenge.MercenaryChallenge_Firone" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MercenaryChallenge_Hateru> { "ChallengeLogState_Challenge.MercenaryChallenge_Hateru" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MercenaryChallenge_Hebra> { "ChallengeLogState_Challenge.MercenaryChallenge_Hebra" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MercenaryChallenge_HyrulePlain> { "ChallengeLogState_Challenge.MercenaryChallenge_HyrulePlain" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Mercenary_Akkare_Bloody> { "ChallengeLogState_Challenge.Mercenary_Akkare_Bloody" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Mercenary_Eldin_Bloody> { "ChallengeLogState_Challenge.Mercenary_Eldin_Bloody" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Mercenary_Firone_Bloody> { "ChallengeLogState_Challenge.Mercenary_Firone_Bloody" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Mercenary_Hateru_Bloody> { "ChallengeLogState_Challenge.Mercenary_Hateru_Bloody" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Mercenary_Hebra_Bloody> { "ChallengeLogState_Challenge.Mercenary_Hebra_Bloody" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Mercenary_HyrulePlain_Bloody> { "ChallengeLogState_Challenge.Mercenary_HyrulePlain_Bloody" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MessageBottle_SOS> { "ChallengeLogState_Challenge.MessageBottle_SOS" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MinusYiga> { "ChallengeLogState_Challenge.MinusYiga" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MonsterFigures01> { "ChallengeLogState_Challenge.MonsterFigures01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MonsterFigures02> { "ChallengeLogState_Challenge.MonsterFigures02" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MonsterFigures03> { "ChallengeLogState_Challenge.MonsterFigures03" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MonsterFigures04> { "ChallengeLogState_Challenge.MonsterFigures04" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MonsterFigures05> { "ChallengeLogState_Challenge.MonsterFigures05" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MushroomSisters_1> { "ChallengeLogState_Challenge.MushroomSisters_1" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MushroomSisters_2> { "ChallengeLogState_Challenge.MushroomSisters_2" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MushroomSisters_3> { "ChallengeLogState_Challenge.MushroomSisters_3" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Nazley_DigCave> { "ChallengeLogState_Challenge.Nazley_DigCave" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Neck_IceWaterCave> { "ChallengeLogState_Challenge.Neck_IceWaterCave" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::NewCanyonMissingPersonsCase> { "ChallengeLogState_Challenge.NewCanyonMissingPersonsCase" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::NewsPaper_Mitsuba> { "ChallengeLogState_Challenge.NewsPaper_Mitsuba" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::NoTrespassing> { "ChallengeLogState_Challenge.NoTrespassing" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::NowInTheVillageOfLurelin> { "ChallengeLogState_Challenge.NowInTheVillageOfLurelin" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Npc_BaseCamp_Assistant_ReactingStatue> { "ChallengeLogState_Challenge.Npc_BaseCamp_Assistant_ReactingStatue" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Npc_BaseCamp_Assistant_ReactingStatue2> { "ChallengeLogState_Challenge.Npc_BaseCamp_Assistant_ReactingStatue2" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Npc_BaseCamp_Assistant_ReactingStatue3> { "ChallengeLogState_Challenge.Npc_BaseCamp_Assistant_ReactingStatue3" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Npc_BaseCamp_Assistant_ReactingStatue4> { "ChallengeLogState_Challenge.Npc_BaseCamp_Assistant_ReactingStatue4" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::NushiShop_Challenge00> { "ChallengeLogState_Challenge.NushiShop_Challenge00" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::NushiShop_Tutorial> { "ChallengeLogState_Challenge.NushiShop_Tutorial" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::OldKorokHelp> { "ChallengeLogState_Challenge.OldKorokHelp" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Orchestra02> { "ChallengeLogState_Challenge.Orchestra02" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Orchestra03> { "ChallengeLogState_Challenge.Orchestra03" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Orchestra04> { "ChallengeLogState_Challenge.Orchestra04" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Our_Treasure> { "ChallengeLogState_Challenge.Our_Treasure" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Parasail_ChuchuDesign> { "ChallengeLogState_Challenge.Parasail_ChuchuDesign" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_01> { "ChallengeLogState_Challenge.PhotoSpot_Challenge_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_02> { "ChallengeLogState_Challenge.PhotoSpot_Challenge_02" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_03> { "ChallengeLogState_Challenge.PhotoSpot_Challenge_03" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_04> { "ChallengeLogState_Challenge.PhotoSpot_Challenge_04" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_05> { "ChallengeLogState_Challenge.PhotoSpot_Challenge_05" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_06> { "ChallengeLogState_Challenge.PhotoSpot_Challenge_06" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_07> { "ChallengeLogState_Challenge.PhotoSpot_Challenge_07" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_08> { "ChallengeLogState_Challenge.PhotoSpot_Challenge_08" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_09> { "ChallengeLogState_Challenge.PhotoSpot_Challenge_09" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_09_2> { "ChallengeLogState_Challenge.PhotoSpot_Challenge_09_2" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_10> { "ChallengeLogState_Challenge.PhotoSpot_Challenge_10" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_11> { "ChallengeLogState_Challenge.PhotoSpot_Challenge_11" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_12> { "ChallengeLogState_Challenge.PhotoSpot_Challenge_12" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_13> { "ChallengeLogState_Challenge.PhotoSpot_Challenge_13" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_14> { "ChallengeLogState_Challenge.PhotoSpot_Challenge_14" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Raise_GoddesStatue> { "ChallengeLogState_Challenge.Raise_GoddesStatue" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Raise_GoddesStatue_Courage> { "ChallengeLogState_Challenge.Raise_GoddesStatue_Courage" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Raise_GoddesStatue_Power> { "ChallengeLogState_Challenge.Raise_GoddesStatue_Power" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Raise_GoddesStatue_Wisdom> { "ChallengeLogState_Challenge.Raise_GoddesStatue_Wisdom" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::RepairArmor> { "ChallengeLogState_Challenge.RepairArmor" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::RescueHost> { "ChallengeLogState_Challenge.RescueHost" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::RescueVehicle01> { "ChallengeLogState_Challenge.RescueVehicle01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::RescueWell> { "ChallengeLogState_Challenge.RescueWell" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::ResearchEldin> { "ChallengeLogState_Challenge.ResearchEldin" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::ResearchLanayru> { "ChallengeLogState_Challenge.ResearchLanayru" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::RestaurantInTheWell> { "ChallengeLogState_Challenge.RestaurantInTheWell" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::RitoBridgeRepair> { "ChallengeLogState_Challenge.RitoBridgeRepair" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Rito_ItemExchange> { "ChallengeLogState_Challenge.Rito_ItemExchange" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Rito_MedoArmor> { "ChallengeLogState_Challenge.Rito_MedoArmor" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Rito_RevaliWeapon> { "ChallengeLogState_Challenge.Rito_RevaliWeapon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Rito_ShadowCave> { "ChallengeLogState_Challenge.Rito_ShadowCave" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SageOfFire> { "ChallengeLogState_Challenge.SageOfFire" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SageOfGerudo> { "ChallengeLogState_Challenge.SageOfGerudo" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SageOfSoul> { "ChallengeLogState_Challenge.SageOfSoul" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SageOfWind> { "ChallengeLogState_Challenge.SageOfWind" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SageOfZora> { "ChallengeLogState_Challenge.SageOfZora" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SaihateSubjugation> { "ChallengeLogState_Challenge.SaihateSubjugation" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SearchCaravan> { "ChallengeLogState_Challenge.SearchCaravan" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SecretBase_MiniGame> { "ChallengeLogState_Challenge.SecretBase_MiniGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::ShieldSurfing_MiniGame> { "ChallengeLogState_Challenge.ShieldSurfing_MiniGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SkyIsland_MiniGame_01> { "ChallengeLogState_Challenge.SkyIsland_MiniGame_01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SkyIsland_MiniGame_02> { "ChallengeLogState_Challenge.SkyIsland_MiniGame_02" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SkyIsland_MiniGame_03> { "ChallengeLogState_Challenge.SkyIsland_MiniGame_03" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SnowyMountain_Surfing> { "ChallengeLogState_Challenge.SnowyMountain_Surfing" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::StatueDevilTutorial> { "ChallengeLogState_Challenge.StatueDevilTutorial" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SurveyOfFourVillages> { "ChallengeLogState_Challenge.SurveyOfFourVillages" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TakeAnimals> { "ChallengeLogState_Challenge.TakeAnimals" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TakeOfIce> { "ChallengeLogState_Challenge.TakeOfIce" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TauraChallenge001> { "ChallengeLogState_Challenge.TauraChallenge001" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TheStrongestWeapon> { "ChallengeLogState_Challenge.TheStrongestWeapon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TreasureHunt_kokiri> { "ChallengeLogState_Challenge.TreasureHunt_kokiri" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TreasureOfLambda> { "ChallengeLogState_Challenge.TreasureOfLambda" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TreasureOfLamda_Dream> { "ChallengeLogState_Challenge.TreasureOfLamda_Dream" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TreasureOfLamda_Dream2> { "ChallengeLogState_Challenge.TreasureOfLamda_Dream2" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TreasureOfLamda_Dream3> { "ChallengeLogState_Challenge.TreasureOfLamda_Dream3" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TreasureOfLamda_DuelPeak> { "ChallengeLogState_Challenge.TreasureOfLamda_DuelPeak" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TreasureOfLamda_FierceDeity> { "ChallengeLogState_Challenge.TreasureOfLamda_FierceDeity" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TreasureOfLamda_Gerudo> { "ChallengeLogState_Challenge.TreasureOfLamda_Gerudo" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TreasureOfLamda_Pirate> { "ChallengeLogState_Challenge.TreasureOfLamda_Pirate" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune01> { "ChallengeLogState_Challenge.Tribune01" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune02> { "ChallengeLogState_Challenge.Tribune02" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune03> { "ChallengeLogState_Challenge.Tribune03" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune04> { "ChallengeLogState_Challenge.Tribune04" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune05> { "ChallengeLogState_Challenge.Tribune05" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune06> { "ChallengeLogState_Challenge.Tribune06" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune07> { "ChallengeLogState_Challenge.Tribune07" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune09> { "ChallengeLogState_Challenge.Tribune09" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune10> { "ChallengeLogState_Challenge.Tribune10" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune11> { "ChallengeLogState_Challenge.Tribune11" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune13> { "ChallengeLogState_Challenge.Tribune13" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune14> { "ChallengeLogState_Challenge.Tribune14" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune16> { "ChallengeLogState_Challenge.Tribune16" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Uotori_Designer> { "ChallengeLogState_Challenge.Uotori_Designer" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Uotori_ResortPlan> { "ChallengeLogState_Challenge.Uotori_ResortPlan" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Uotori_RevivePlan> { "ChallengeLogState_Challenge.Uotori_RevivePlan" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Uotori_WhiteLineGame> { "ChallengeLogState_Challenge.Uotori_WhiteLineGame" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::WashedAwayBusinessTools> { "ChallengeLogState_Challenge.WashedAwayBusinessTools" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::WaterBridgePlace> { "ChallengeLogState_Challenge.WaterBridgePlace" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::WellCollection> { "ChallengeLogState_Challenge.WellCollection" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::WhichIsStronger> { "ChallengeLogState_Challenge.WhichIsStronger" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::ZonauReliefSearch> { "ChallengeLogState_Challenge.ZonauReliefSearch" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Zonau_GeniusWeapon> { "ChallengeLogState_Challenge.Zonau_GeniusWeapon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::ZoraStatue_Picture> { "ChallengeLogState_Challenge.ZoraStatue_Picture" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Zora_Enemy_hunt> { "ChallengeLogState_Challenge.Zora_Enemy_hunt" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Zora_MessageBottle> { "ChallengeLogState_Challenge.Zora_MessageBottle" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Zora_RuttaTreasure> { "ChallengeLogState_Challenge.Zora_RuttaTreasure" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::gather_Insect_Z> { "ChallengeLogState_Challenge.gather_Insect_Z" };