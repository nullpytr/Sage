#pragma once
#include <sage>

struct GameData::ChallengeLogState_Challenge : Tag::Structure {
	struct AisyaRescue : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<AisyaRescue>&;
	};
	struct AmberCollector : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<AmberCollector>&;
	};
	struct ArrowMeister_Momo : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<ArrowMeister_Momo>&;
	};
	struct AssassinGerudoBase : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<AssassinGerudoBase>&;
	};
	struct BallBring_MiniGame : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<BallBring_MiniGame>&;
	};
	struct Basketball_MiniGame : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Basketball_MiniGame>&;
	};
	struct Big_Rotate : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Big_Rotate>&;
	};
	struct BirdManContest : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<BirdManContest>&;
	};
	struct BlindRuinsTreasure : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<BlindRuinsTreasure>&;
	};
	struct BlindRuinsTreasure_Gerudo : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<BlindRuinsTreasure_Gerudo>&;
	};
	struct BlindRuinsTreasure_Goron : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<BlindRuinsTreasure_Goron>&;
	};
	struct BlindRuinsTreasure_Rito : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<BlindRuinsTreasure_Rito>&;
	};
	struct BlindRuinsTreasure_Zora : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<BlindRuinsTreasure_Zora>&;
	};
	struct BuildHouse : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<BuildHouse>&;
	};
	struct BuildingMaterialsTutorial : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<BuildingMaterialsTutorial>&;
	};
	struct CarryGoronKid1 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryGoronKid1>&;
	};
	struct CarryGoronKid2 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryGoronKid2>&;
	};
	struct CarryStone : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryStone>&;
	};
	struct CarryToShrine01 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine01>&;
	};
	struct CarryToShrine02 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine02>&;
	};
	struct CarryToShrine03 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine03>&;
	};
	struct CarryToShrine05 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine05>&;
	};
	struct CarryToShrine06 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine06>&;
	};
	struct CarryToShrine07 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine07>&;
	};
	struct CarryToShrine08_Zora : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine08_Zora>&;
	};
	struct CarryToShrine09 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine09>&;
	};
	struct CarryToShrine10 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine10>&;
	};
	struct CarryToShrine11 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine11>&;
	};
	struct CarryToShrine12 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine12>&;
	};
	struct CarryToShrine13 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine13>&;
	};
	struct CarryToShrine14 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine14>&;
	};
	struct CarryToShrine15 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine15>&;
	};
	struct CarryToShrine16 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine16>&;
	};
	struct CarryToShrine17 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine17>&;
	};
	struct CarryToShrine19 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine19>&;
	};
	struct CarryToShrine20 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine20>&;
	};
	struct CarryToShrine21 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine21>&;
	};
	struct CarryToShrine22 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine22>&;
	};
	struct CarryToShrine23 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CarryToShrine23>&;
	};
	struct CDungeon_AllDone : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CDungeon_AllDone>&;
	};
	struct Circuit_Desert : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Circuit_Desert>&;
	};
	struct Circuit_FaronWoods_MiniGame : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Circuit_FaronWoods_MiniGame>&;
	};
	struct Circuit_Ichikara : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Circuit_Ichikara>&;
	};
	struct Circuit_Ichikara_MiniGame : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Circuit_Ichikara_MiniGame>&;
	};
	struct Circuit_Uotori_MiniGame : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Circuit_Uotori_MiniGame>&;
	};
	struct CleanStatue : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CleanStatue>&;
	};
	struct ClueTotheSixthSage : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<ClueTotheSixthSage>&;
	};
	struct CollectObject_MiniGame : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CollectObject_MiniGame>&;
	};
	struct CollectObject_MiniGame_Cliff : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CollectObject_MiniGame_Cliff>&;
	};
	struct CollectObject_MiniGame_LakeSide : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CollectObject_MiniGame_LakeSide>&;
	};
	struct Connect_AkkareMaze : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Connect_AkkareMaze>&;
	};
	struct Connect_FirstIsland : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Connect_FirstIsland>&;
	};
	struct Connect_GerudoMaze : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Connect_GerudoMaze>&;
	};
	struct Connect_TabantaMaze : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Connect_TabantaMaze>&;
	};
	struct CookAtBaseCamp : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CookAtBaseCamp>&;
	};
	struct CraftShadowPicture : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CraftShadowPicture>&;
	};
	struct CreateArmor : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<CreateArmor>&;
	};
	struct Createshinguard : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Createshinguard>&;
	};
	struct DeepHoleSurvey2 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<DeepHoleSurvey2>&;
	};
	struct DefeatGanondorf : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<DefeatGanondorf>&;
	};
	struct DefeatHugeEnemy_1 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<DefeatHugeEnemy_1>&;
	};
	struct DefeatHugeEnemy_2 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<DefeatHugeEnemy_2>&;
	};
	struct DefeatHugeEnemy_3 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<DefeatHugeEnemy_3>&;
	};
	struct DefeatHugeEnemy_4 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<DefeatHugeEnemy_4>&;
	};
	struct DefeatHugeEnemy_5 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<DefeatHugeEnemy_5>&;
	};
	struct DefeatHugeEnemy_6 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<DefeatHugeEnemy_6>&;
	};
	struct DevoteSpring : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<DevoteSpring>&;
	};
	struct DividedSlate : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<DividedSlate>&;
	};
	struct EightHeroStatues : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<EightHeroStatues>&;
	};
	struct EightHeroStatues_After : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<EightHeroStatues_After>&;
	};
	struct ExcavateFossil1 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<ExcavateFossil1>&;
	};
	struct ExcavateFossil2 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<ExcavateFossil2>&;
	};
	struct ExcavateFossil3 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<ExcavateFossil3>&;
	};
	struct Fairy2 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Fairy2>&;
	};
	struct Fairy3 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Fairy3>&;
	};
	struct Fairy4 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Fairy4>&;
	};
	struct FindSunaNui : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<FindSunaNui>&;
	};
	struct FindSunaNui2 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<FindSunaNui2>&;
	};
	struct FindWhiteHorse : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<FindWhiteHorse>&;
	};
	struct FindWithSensors : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<FindWithSensors>&;
	};
	struct FirstskyislandReturns : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<FirstskyislandReturns>&;
	};
	struct FullyRipenedFlintstones : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<FullyRipenedFlintstones>&;
	};
	struct gather_Insect_Z : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<gather_Insect_Z>&;
	};
	struct GeniusWeapon_Zora : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<GeniusWeapon_Zora>&;
	};
	struct Genkos_Kitchen : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Genkos_Kitchen>&;
	};
	struct Gerudo_UrbosaWeapon : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Gerudo_UrbosaWeapon>&;
	};
	struct GerudoCanyon_24hEnduranceComparison : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<GerudoCanyon_24hEnduranceComparison>&;
	};
	struct GerudoCanyon_Adventure : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<GerudoCanyon_Adventure>&;
	};
	struct GerudoCanyon_ColdEnduranceComparison : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<GerudoCanyon_ColdEnduranceComparison>&;
	};
	struct GerudoCanyon_GleeokLiver : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<GerudoCanyon_GleeokLiver>&;
	};
	struct GerudoCanyon_TumbleweedSweep : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<GerudoCanyon_TumbleweedSweep>&;
	};
	struct GerudoDesertTreasure : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<GerudoDesertTreasure>&;
	};
	struct GetCamera : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<GetCamera>&;
	};
	struct GetMasterSword : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<GetMasterSword>&;
	};
	struct GetSensorPlus : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<GetSensorPlus>&;
	};
	struct GetWalker : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<GetWalker>&;
	};
	struct GetWarpMarker : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<GetWarpMarker>&;
	};
	struct GiantHorse : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<GiantHorse>&;
	};
	struct GoneSnowQueen : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<GoneSnowQueen>&;
	};
	struct Goron_MiniGame_01 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Goron_MiniGame_01>&;
	};
	struct Goron_MiniGame_02 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Goron_MiniGame_02>&;
	};
	struct Goron_MiniGame_03 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Goron_MiniGame_03>&;
	};
	struct Goron_MiniGame_Tutorial_01 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Goron_MiniGame_Tutorial_01>&;
	};
	struct Goron_MiniGame_Tutorial_02 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Goron_MiniGame_Tutorial_02>&;
	};
	struct Goron_MiniGame_Tutorial_03 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Goron_MiniGame_Tutorial_03>&;
	};
	struct GoronPond : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<GoronPond>&;
	};
	struct GoronReturntoNature : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<GoronReturntoNature>&;
	};
	struct GotoFironeZonauRemains : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<GotoFironeZonauRemains>&;
	};
	struct GOToTheCastleOfHyrule : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<GOToTheCastleOfHyrule>&;
	};
	struct GroundPaintingAir01 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<GroundPaintingAir01>&;
	};
	struct Hack_GuardGoods : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Hack_GuardGoods>&;
	};
	struct HammerGong_MiniGame : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<HammerGong_MiniGame>&;
	};
	struct Hateno_Cheese : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Hateno_Cheese>&;
	};
	struct Hateno_CoolGuy : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Hateno_CoolGuy>&;
	};
	struct Hateno_FreshMilk : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Hateno_FreshMilk>&;
	};
	struct Hateno_LetUsElection : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Hateno_LetUsElection>&;
	};
	struct Hateno_NewCostume : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Hateno_NewCostume>&;
	};
	struct Hateno_NewSpecialty : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Hateno_NewSpecialty>&;
	};
	struct Hateno_RevitalizeByNewSpeciality : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Hateno_RevitalizeByNewSpeciality>&;
	};
	struct Hateno_SecretLifeOfKusayoshi : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Hateno_SecretLifeOfKusayoshi>&;
	};
	struct Hateno_SecretLifeOfSagono : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Hateno_SecretLifeOfSagono>&;
	};
	struct Hateno_TellMeTeacher01 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Hateno_TellMeTeacher01>&;
	};
	struct Hateno_TellMeTeacher02 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Hateno_TellMeTeacher02>&;
	};
	struct Hateno_VillageMayorElection : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Hateno_VillageMayorElection>&;
	};
	struct Hateno_WhatToPlant : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Hateno_WhatToPlant>&;
	};
	struct HatenoPurchasePicture : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<HatenoPurchasePicture>&;
	};
	struct Hebra_SkyRingChallenge : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Hebra_SkyRingChallenge>&;
	};
	struct Hebra_SkyRingChallenge_MiniGame : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Hebra_SkyRingChallenge_MiniGame>&;
	};
	struct HorseInnChallenge001 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<HorseInnChallenge001>&;
	};
	struct HorseInnChallenge002 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<HorseInnChallenge002>&;
	};
	struct HorseInnChallenge003 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<HorseInnChallenge003>&;
	};
	struct HorseInnChallenge005 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<HorseInnChallenge005>&;
	};
	struct HorseInnChallenge007 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<HorseInnChallenge007>&;
	};
	struct HotSpringEgg : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<HotSpringEgg>&;
	};
	struct HourseInnChallenge004 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<HourseInnChallenge004>&;
	};
	struct HuntSalmon : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<HuntSalmon>&;
	};
	struct HyruleCastleIncident : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<HyruleCastleIncident>&;
	};
	struct IceMaking : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<IceMaking>&;
	};
	struct IchikaraChallenge01 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<IchikaraChallenge01>&;
	};
	struct IchikaraChallenge03 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<IchikaraChallenge03>&;
	};
	struct IchikaraCircuit_Tutorial : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<IchikaraCircuit_Tutorial>&;
	};
	struct IchikaraDaughterPhoto : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<IchikaraDaughterPhoto>&;
	};
	struct IllnessStartsWithFeelings : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<IllnessStartsWithFeelings>&;
	};
	struct InfiltrationFromTheSky : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<InfiltrationFromTheSky>&;
	};
	struct InnNeverReturns : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<InnNeverReturns>&;
	};
	struct JobSunazarashi : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<JobSunazarashi>&;
	};
	struct Know_FourStonePlates : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Know_FourStonePlates>&;
	};
	struct KokkoGuidePost : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<KokkoGuidePost>&;
	};
	struct Korok_CarryToShrine : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Korok_CarryToShrine>&;
	};
	struct Lodge_Chemical001 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Lodge_Chemical001>&;
	};
	struct LookingForLightSpot : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<LookingForLightSpot>&;
	};
	struct LookingForTheVoiceLord : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<LookingForTheVoiceLord>&;
	};
	struct Mack_SecretBase : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Mack_SecretBase>&;
	};
	struct MainChallenge : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MainChallenge>&;
	};
	struct MakeAChampionsWeapon_Goron : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MakeAChampionsWeapon_Goron>&;
	};
	struct MakeChemicalWeapon : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MakeChemicalWeapon>&;
	};
	struct MasterSwordClues : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MasterSwordClues>&;
	};
	struct MeatRock : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MeatRock>&;
	};
	struct MemoryOfTheDragon : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MemoryOfTheDragon>&;
	};
	struct Mercenary_Akkare_Bloody : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Mercenary_Akkare_Bloody>&;
	};
	struct Mercenary_Eldin_Bloody : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Mercenary_Eldin_Bloody>&;
	};
	struct Mercenary_Firone_Bloody : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Mercenary_Firone_Bloody>&;
	};
	struct Mercenary_Hateru_Bloody : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Mercenary_Hateru_Bloody>&;
	};
	struct Mercenary_Hebra_Bloody : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Mercenary_Hebra_Bloody>&;
	};
	struct Mercenary_HyrulePlain_Bloody : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Mercenary_HyrulePlain_Bloody>&;
	};
	struct MercenaryChallenge_Akkare : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MercenaryChallenge_Akkare>&;
	};
	struct MercenaryChallenge_Eldin : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MercenaryChallenge_Eldin>&;
	};
	struct MercenaryChallenge_Firone : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MercenaryChallenge_Firone>&;
	};
	struct MercenaryChallenge_Hateru : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MercenaryChallenge_Hateru>&;
	};
	struct MercenaryChallenge_Hebra : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MercenaryChallenge_Hebra>&;
	};
	struct MercenaryChallenge_HyrulePlain : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MercenaryChallenge_HyrulePlain>&;
	};
	struct MessageBottle_SOS : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MessageBottle_SOS>&;
	};
	struct MinusYiga : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MinusYiga>&;
	};
	struct MonsterFigures01 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MonsterFigures01>&;
	};
	struct MonsterFigures02 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MonsterFigures02>&;
	};
	struct MonsterFigures03 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MonsterFigures03>&;
	};
	struct MonsterFigures04 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MonsterFigures04>&;
	};
	struct MonsterFigures05 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MonsterFigures05>&;
	};
	struct MushroomSisters_1 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MushroomSisters_1>&;
	};
	struct MushroomSisters_2 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MushroomSisters_2>&;
	};
	struct MushroomSisters_3 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<MushroomSisters_3>&;
	};
	struct Nazley_DigCave : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Nazley_DigCave>&;
	};
	struct Neck_IceWaterCave : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Neck_IceWaterCave>&;
	};
	struct NewCanyonMissingPersonsCase : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<NewCanyonMissingPersonsCase>&;
	};
	struct NewsPaper_Mitsuba : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<NewsPaper_Mitsuba>&;
	};
	struct NoTrespassing : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<NoTrespassing>&;
	};
	struct NowInTheVillageOfLurelin : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<NowInTheVillageOfLurelin>&;
	};
	struct Npc_BaseCamp_Assistant_ReactingStatue : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Npc_BaseCamp_Assistant_ReactingStatue>&;
	};
	struct Npc_BaseCamp_Assistant_ReactingStatue2 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Npc_BaseCamp_Assistant_ReactingStatue2>&;
	};
	struct Npc_BaseCamp_Assistant_ReactingStatue3 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Npc_BaseCamp_Assistant_ReactingStatue3>&;
	};
	struct Npc_BaseCamp_Assistant_ReactingStatue4 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Npc_BaseCamp_Assistant_ReactingStatue4>&;
	};
	struct NushiShop_Challenge00 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<NushiShop_Challenge00>&;
	};
	struct NushiShop_Tutorial : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<NushiShop_Tutorial>&;
	};
	struct OldKorokHelp : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<OldKorokHelp>&;
	};
	struct Orchestra02 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Orchestra02>&;
	};
	struct Orchestra03 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Orchestra03>&;
	};
	struct Orchestra04 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Orchestra04>&;
	};
	struct Our_Treasure : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Our_Treasure>&;
	};
	struct Parasail_ChuchuDesign : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Parasail_ChuchuDesign>&;
	};
	struct PhotoSpot_Challenge_01 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<PhotoSpot_Challenge_01>&;
	};
	struct PhotoSpot_Challenge_02 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<PhotoSpot_Challenge_02>&;
	};
	struct PhotoSpot_Challenge_03 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<PhotoSpot_Challenge_03>&;
	};
	struct PhotoSpot_Challenge_04 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<PhotoSpot_Challenge_04>&;
	};
	struct PhotoSpot_Challenge_05 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<PhotoSpot_Challenge_05>&;
	};
	struct PhotoSpot_Challenge_06 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<PhotoSpot_Challenge_06>&;
	};
	struct PhotoSpot_Challenge_07 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<PhotoSpot_Challenge_07>&;
	};
	struct PhotoSpot_Challenge_08 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<PhotoSpot_Challenge_08>&;
	};
	struct PhotoSpot_Challenge_09 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<PhotoSpot_Challenge_09>&;
	};
	struct PhotoSpot_Challenge_09_2 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<PhotoSpot_Challenge_09_2>&;
	};
	struct PhotoSpot_Challenge_10 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<PhotoSpot_Challenge_10>&;
	};
	struct PhotoSpot_Challenge_11 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<PhotoSpot_Challenge_11>&;
	};
	struct PhotoSpot_Challenge_12 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<PhotoSpot_Challenge_12>&;
	};
	struct PhotoSpot_Challenge_13 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<PhotoSpot_Challenge_13>&;
	};
	struct PhotoSpot_Challenge_14 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<PhotoSpot_Challenge_14>&;
	};
	struct Raise_GoddesStatue : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Raise_GoddesStatue>&;
	};
	struct Raise_GoddesStatue_Courage : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Raise_GoddesStatue_Courage>&;
	};
	struct Raise_GoddesStatue_Power : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Raise_GoddesStatue_Power>&;
	};
	struct Raise_GoddesStatue_Wisdom : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Raise_GoddesStatue_Wisdom>&;
	};
	struct RepairArmor : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<RepairArmor>&;
	};
	struct RescueHost : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<RescueHost>&;
	};
	struct RescueVehicle01 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<RescueVehicle01>&;
	};
	struct RescueWell : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<RescueWell>&;
	};
	struct ResearchEldin : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<ResearchEldin>&;
	};
	struct ResearchLanayru : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<ResearchLanayru>&;
	};
	struct RestaurantInTheWell : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<RestaurantInTheWell>&;
	};
	struct Rito_ItemExchange : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Rito_ItemExchange>&;
	};
	struct Rito_MedoArmor : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Rito_MedoArmor>&;
	};
	struct Rito_RevaliWeapon : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Rito_RevaliWeapon>&;
	};
	struct Rito_ShadowCave : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Rito_ShadowCave>&;
	};
	struct RitoBridgeRepair : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<RitoBridgeRepair>&;
	};
	struct SageOfFire : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<SageOfFire>&;
	};
	struct SageOfGerudo : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<SageOfGerudo>&;
	};
	struct SageOfSoul : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<SageOfSoul>&;
	};
	struct SageOfWind : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<SageOfWind>&;
	};
	struct SageOfZora : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<SageOfZora>&;
	};
	struct SaihateSubjugation : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<SaihateSubjugation>&;
	};
	struct SearchCaravan : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<SearchCaravan>&;
	};
	struct SecretBase_MiniGame : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<SecretBase_MiniGame>&;
	};
	struct ShieldSurfing_MiniGame : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<ShieldSurfing_MiniGame>&;
	};
	struct SkyIsland_MiniGame_01 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<SkyIsland_MiniGame_01>&;
	};
	struct SkyIsland_MiniGame_02 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<SkyIsland_MiniGame_02>&;
	};
	struct SkyIsland_MiniGame_03 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<SkyIsland_MiniGame_03>&;
	};
	struct SnowyMountain_Surfing : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<SnowyMountain_Surfing>&;
	};
	struct StatueDevilTutorial : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<StatueDevilTutorial>&;
	};
	struct SurveyOfFourVillages : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<SurveyOfFourVillages>&;
	};
	struct TakeAnimals : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<TakeAnimals>&;
	};
	struct TakeOfIce : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<TakeOfIce>&;
	};
	struct TauraChallenge001 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<TauraChallenge001>&;
	};
	struct TheStrongestWeapon : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<TheStrongestWeapon>&;
	};
	struct TreasureHunt_kokiri : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<TreasureHunt_kokiri>&;
	};
	struct TreasureOfLambda : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<TreasureOfLambda>&;
	};
	struct TreasureOfLamda_Dream : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<TreasureOfLamda_Dream>&;
	};
	struct TreasureOfLamda_Dream2 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<TreasureOfLamda_Dream2>&;
	};
	struct TreasureOfLamda_Dream3 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<TreasureOfLamda_Dream3>&;
	};
	struct TreasureOfLamda_DuelPeak : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<TreasureOfLamda_DuelPeak>&;
	};
	struct TreasureOfLamda_FierceDeity : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<TreasureOfLamda_FierceDeity>&;
	};
	struct TreasureOfLamda_Gerudo : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<TreasureOfLamda_Gerudo>&;
	};
	struct TreasureOfLamda_Pirate : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<TreasureOfLamda_Pirate>&;
	};
	struct Tribune01 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Tribune01>&;
	};
	struct Tribune02 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Tribune02>&;
	};
	struct Tribune03 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Tribune03>&;
	};
	struct Tribune04 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Tribune04>&;
	};
	struct Tribune05 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Tribune05>&;
	};
	struct Tribune06 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Tribune06>&;
	};
	struct Tribune07 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Tribune07>&;
	};
	struct Tribune09 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Tribune09>&;
	};
	struct Tribune10 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Tribune10>&;
	};
	struct Tribune11 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Tribune11>&;
	};
	struct Tribune13 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Tribune13>&;
	};
	struct Tribune14 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Tribune14>&;
	};
	struct Tribune16 : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Tribune16>&;
	};
	struct Uotori_Designer : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Uotori_Designer>&;
	};
	struct Uotori_ResortPlan : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Uotori_ResortPlan>&;
	};
	struct Uotori_RevivePlan : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Uotori_RevivePlan>&;
	};
	struct Uotori_WhiteLineGame : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Uotori_WhiteLineGame>&;
	};
	struct WashedAwayBusinessTools : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<WashedAwayBusinessTools>&;
	};
	struct WaterBridgePlace : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<WaterBridgePlace>&;
	};
	struct WellCollection : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<WellCollection>&;
	};
	struct WhichIsStronger : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<WhichIsStronger>&;
	};
	struct Zonau_GeniusWeapon : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Zonau_GeniusWeapon>&;
	};
	struct ZonauReliefSearch : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<ZonauReliefSearch>&;
	};
	struct Zora_Enemy_hunt : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Zora_Enemy_hunt>&;
	};
	struct Zora_MessageBottle : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Zora_MessageBottle>&;
	};
	struct Zora_RuttaTreasure : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<Zora_RuttaTreasure>&;
	};
	struct ZoraStatue_Picture : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), };
		using type = enum_t<ZoraStatue_Picture>&;
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
	Enum<CDungeon_AllDone> CDungeon_AllDone;
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
	Enum<gather_Insect_Z> gather_Insect_Z;
	Enum<GeniusWeapon_Zora> GeniusWeapon_Zora;
	Enum<Genkos_Kitchen> Genkos_Kitchen;
	Enum<Gerudo_UrbosaWeapon> Gerudo_UrbosaWeapon;
	Enum<GerudoCanyon_24hEnduranceComparison> GerudoCanyon_24hEnduranceComparison;
	Enum<GerudoCanyon_Adventure> GerudoCanyon_Adventure;
	Enum<GerudoCanyon_ColdEnduranceComparison> GerudoCanyon_ColdEnduranceComparison;
	Enum<GerudoCanyon_GleeokLiver> GerudoCanyon_GleeokLiver;
	Enum<GerudoCanyon_TumbleweedSweep> GerudoCanyon_TumbleweedSweep;
	Enum<GerudoDesertTreasure> GerudoDesertTreasure;
	Enum<GetCamera> GetCamera;
	Enum<GetMasterSword> GetMasterSword;
	Enum<GetSensorPlus> GetSensorPlus;
	Enum<GetWalker> GetWalker;
	Enum<GetWarpMarker> GetWarpMarker;
	Enum<GiantHorse> GiantHorse;
	Enum<GoneSnowQueen> GoneSnowQueen;
	Enum<Goron_MiniGame_01> Goron_MiniGame_01;
	Enum<Goron_MiniGame_02> Goron_MiniGame_02;
	Enum<Goron_MiniGame_03> Goron_MiniGame_03;
	Enum<Goron_MiniGame_Tutorial_01> Goron_MiniGame_Tutorial_01;
	Enum<Goron_MiniGame_Tutorial_02> Goron_MiniGame_Tutorial_02;
	Enum<Goron_MiniGame_Tutorial_03> Goron_MiniGame_Tutorial_03;
	Enum<GoronPond> GoronPond;
	Enum<GoronReturntoNature> GoronReturntoNature;
	Enum<GotoFironeZonauRemains> GotoFironeZonauRemains;
	Enum<GOToTheCastleOfHyrule> GOToTheCastleOfHyrule;
	Enum<GroundPaintingAir01> GroundPaintingAir01;
	Enum<Hack_GuardGoods> Hack_GuardGoods;
	Enum<HammerGong_MiniGame> HammerGong_MiniGame;
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
	Enum<HatenoPurchasePicture> HatenoPurchasePicture;
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
	Enum<Mercenary_Akkare_Bloody> Mercenary_Akkare_Bloody;
	Enum<Mercenary_Eldin_Bloody> Mercenary_Eldin_Bloody;
	Enum<Mercenary_Firone_Bloody> Mercenary_Firone_Bloody;
	Enum<Mercenary_Hateru_Bloody> Mercenary_Hateru_Bloody;
	Enum<Mercenary_Hebra_Bloody> Mercenary_Hebra_Bloody;
	Enum<Mercenary_HyrulePlain_Bloody> Mercenary_HyrulePlain_Bloody;
	Enum<MercenaryChallenge_Akkare> MercenaryChallenge_Akkare;
	Enum<MercenaryChallenge_Eldin> MercenaryChallenge_Eldin;
	Enum<MercenaryChallenge_Firone> MercenaryChallenge_Firone;
	Enum<MercenaryChallenge_Hateru> MercenaryChallenge_Hateru;
	Enum<MercenaryChallenge_Hebra> MercenaryChallenge_Hebra;
	Enum<MercenaryChallenge_HyrulePlain> MercenaryChallenge_HyrulePlain;
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
	Enum<Rito_ItemExchange> Rito_ItemExchange;
	Enum<Rito_MedoArmor> Rito_MedoArmor;
	Enum<Rito_RevaliWeapon> Rito_RevaliWeapon;
	Enum<Rito_ShadowCave> Rito_ShadowCave;
	Enum<RitoBridgeRepair> RitoBridgeRepair;
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
	Enum<Zonau_GeniusWeapon> Zonau_GeniusWeapon;
	Enum<ZonauReliefSearch> ZonauReliefSearch;
	Enum<Zora_Enemy_hunt> Zora_Enemy_hunt;
	Enum<Zora_MessageBottle> Zora_MessageBottle;
	Enum<Zora_RuttaTreasure> Zora_RuttaTreasure;
	Enum<ZoraStatue_Picture> ZoraStatue_Picture;
	
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
		CDungeon_AllDone { s.get<struct CDungeon_AllDone>() },
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
		gather_Insect_Z { s.get<struct gather_Insect_Z>() },
		GeniusWeapon_Zora { s.get<struct GeniusWeapon_Zora>() },
		Genkos_Kitchen { s.get<struct Genkos_Kitchen>() },
		Gerudo_UrbosaWeapon { s.get<struct Gerudo_UrbosaWeapon>() },
		GerudoCanyon_24hEnduranceComparison { s.get<struct GerudoCanyon_24hEnduranceComparison>() },
		GerudoCanyon_Adventure { s.get<struct GerudoCanyon_Adventure>() },
		GerudoCanyon_ColdEnduranceComparison { s.get<struct GerudoCanyon_ColdEnduranceComparison>() },
		GerudoCanyon_GleeokLiver { s.get<struct GerudoCanyon_GleeokLiver>() },
		GerudoCanyon_TumbleweedSweep { s.get<struct GerudoCanyon_TumbleweedSweep>() },
		GerudoDesertTreasure { s.get<struct GerudoDesertTreasure>() },
		GetCamera { s.get<struct GetCamera>() },
		GetMasterSword { s.get<struct GetMasterSword>() },
		GetSensorPlus { s.get<struct GetSensorPlus>() },
		GetWalker { s.get<struct GetWalker>() },
		GetWarpMarker { s.get<struct GetWarpMarker>() },
		GiantHorse { s.get<struct GiantHorse>() },
		GoneSnowQueen { s.get<struct GoneSnowQueen>() },
		Goron_MiniGame_01 { s.get<struct Goron_MiniGame_01>() },
		Goron_MiniGame_02 { s.get<struct Goron_MiniGame_02>() },
		Goron_MiniGame_03 { s.get<struct Goron_MiniGame_03>() },
		Goron_MiniGame_Tutorial_01 { s.get<struct Goron_MiniGame_Tutorial_01>() },
		Goron_MiniGame_Tutorial_02 { s.get<struct Goron_MiniGame_Tutorial_02>() },
		Goron_MiniGame_Tutorial_03 { s.get<struct Goron_MiniGame_Tutorial_03>() },
		GoronPond { s.get<struct GoronPond>() },
		GoronReturntoNature { s.get<struct GoronReturntoNature>() },
		GotoFironeZonauRemains { s.get<struct GotoFironeZonauRemains>() },
		GOToTheCastleOfHyrule { s.get<struct GOToTheCastleOfHyrule>() },
		GroundPaintingAir01 { s.get<struct GroundPaintingAir01>() },
		Hack_GuardGoods { s.get<struct Hack_GuardGoods>() },
		HammerGong_MiniGame { s.get<struct HammerGong_MiniGame>() },
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
		HatenoPurchasePicture { s.get<struct HatenoPurchasePicture>() },
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
		Mercenary_Akkare_Bloody { s.get<struct Mercenary_Akkare_Bloody>() },
		Mercenary_Eldin_Bloody { s.get<struct Mercenary_Eldin_Bloody>() },
		Mercenary_Firone_Bloody { s.get<struct Mercenary_Firone_Bloody>() },
		Mercenary_Hateru_Bloody { s.get<struct Mercenary_Hateru_Bloody>() },
		Mercenary_Hebra_Bloody { s.get<struct Mercenary_Hebra_Bloody>() },
		Mercenary_HyrulePlain_Bloody { s.get<struct Mercenary_HyrulePlain_Bloody>() },
		MercenaryChallenge_Akkare { s.get<struct MercenaryChallenge_Akkare>() },
		MercenaryChallenge_Eldin { s.get<struct MercenaryChallenge_Eldin>() },
		MercenaryChallenge_Firone { s.get<struct MercenaryChallenge_Firone>() },
		MercenaryChallenge_Hateru { s.get<struct MercenaryChallenge_Hateru>() },
		MercenaryChallenge_Hebra { s.get<struct MercenaryChallenge_Hebra>() },
		MercenaryChallenge_HyrulePlain { s.get<struct MercenaryChallenge_HyrulePlain>() },
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
		Rito_ItemExchange { s.get<struct Rito_ItemExchange>() },
		Rito_MedoArmor { s.get<struct Rito_MedoArmor>() },
		Rito_RevaliWeapon { s.get<struct Rito_RevaliWeapon>() },
		Rito_ShadowCave { s.get<struct Rito_ShadowCave>() },
		RitoBridgeRepair { s.get<struct RitoBridgeRepair>() },
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
		Zonau_GeniusWeapon { s.get<struct Zonau_GeniusWeapon>() },
		ZonauReliefSearch { s.get<struct ZonauReliefSearch>() },
		Zora_Enemy_hunt { s.get<struct Zora_Enemy_hunt>() },
		Zora_MessageBottle { s.get<struct Zora_MessageBottle>() },
		Zora_RuttaTreasure { s.get<struct Zora_RuttaTreasure>() },
		ZoraStatue_Picture { s.get<struct ZoraStatue_Picture>() }
	{ }
};/* Data::Structure GameData::ChallengeLogState_Challenge close */

template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::AisyaRescue> = murmurhash3::hash("ChallengeLogState_Challenge.AisyaRescue");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::AmberCollector> = murmurhash3::hash("ChallengeLogState_Challenge.AmberCollector");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::ArrowMeister_Momo> = murmurhash3::hash("ChallengeLogState_Challenge.ArrowMeister_Momo");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::AssassinGerudoBase> = murmurhash3::hash("ChallengeLogState_Challenge.AssassinGerudoBase");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::BallBring_MiniGame> = murmurhash3::hash("ChallengeLogState_Challenge.BallBring_MiniGame");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Basketball_MiniGame> = murmurhash3::hash("ChallengeLogState_Challenge.Basketball_MiniGame");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Big_Rotate> = murmurhash3::hash("ChallengeLogState_Challenge.Big_Rotate");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::BirdManContest> = murmurhash3::hash("ChallengeLogState_Challenge.BirdManContest");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::BlindRuinsTreasure> = murmurhash3::hash("ChallengeLogState_Challenge.BlindRuinsTreasure");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::BlindRuinsTreasure_Gerudo> = murmurhash3::hash("ChallengeLogState_Challenge.BlindRuinsTreasure_Gerudo");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::BlindRuinsTreasure_Goron> = murmurhash3::hash("ChallengeLogState_Challenge.BlindRuinsTreasure_Goron");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::BlindRuinsTreasure_Rito> = murmurhash3::hash("ChallengeLogState_Challenge.BlindRuinsTreasure_Rito");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::BlindRuinsTreasure_Zora> = murmurhash3::hash("ChallengeLogState_Challenge.BlindRuinsTreasure_Zora");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::BuildHouse> = murmurhash3::hash("ChallengeLogState_Challenge.BuildHouse");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::BuildingMaterialsTutorial> = murmurhash3::hash("ChallengeLogState_Challenge.BuildingMaterialsTutorial");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryGoronKid1> = murmurhash3::hash("ChallengeLogState_Challenge.CarryGoronKid1");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryGoronKid2> = murmurhash3::hash("ChallengeLogState_Challenge.CarryGoronKid2");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryStone> = murmurhash3::hash("ChallengeLogState_Challenge.CarryStone");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine01> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine01");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine02> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine02");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine03> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine03");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine05> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine05");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine06> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine06");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine07> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine07");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine08_Zora> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine08_Zora");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine09> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine09");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine10> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine10");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine11> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine11");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine12> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine12");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine13> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine13");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine14> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine14");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine15> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine15");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine16> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine16");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine17> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine17");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine19> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine19");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine20> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine20");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine21> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine21");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine22> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine22");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CarryToShrine23> = murmurhash3::hash("ChallengeLogState_Challenge.CarryToShrine23");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CDungeon_AllDone> = murmurhash3::hash("ChallengeLogState_Challenge.CDungeon_AllDone");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Circuit_Desert> = murmurhash3::hash("ChallengeLogState_Challenge.Circuit_Desert");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Circuit_FaronWoods_MiniGame> = murmurhash3::hash("ChallengeLogState_Challenge.Circuit_FaronWoods_MiniGame");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Circuit_Ichikara> = murmurhash3::hash("ChallengeLogState_Challenge.Circuit_Ichikara");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Circuit_Ichikara_MiniGame> = murmurhash3::hash("ChallengeLogState_Challenge.Circuit_Ichikara_MiniGame");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Circuit_Uotori_MiniGame> = murmurhash3::hash("ChallengeLogState_Challenge.Circuit_Uotori_MiniGame");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CleanStatue> = murmurhash3::hash("ChallengeLogState_Challenge.CleanStatue");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::ClueTotheSixthSage> = murmurhash3::hash("ChallengeLogState_Challenge.ClueTotheSixthSage");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CollectObject_MiniGame> = murmurhash3::hash("ChallengeLogState_Challenge.CollectObject_MiniGame");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CollectObject_MiniGame_Cliff> = murmurhash3::hash("ChallengeLogState_Challenge.CollectObject_MiniGame_Cliff");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CollectObject_MiniGame_LakeSide> = murmurhash3::hash("ChallengeLogState_Challenge.CollectObject_MiniGame_LakeSide");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Connect_AkkareMaze> = murmurhash3::hash("ChallengeLogState_Challenge.Connect_AkkareMaze");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Connect_FirstIsland> = murmurhash3::hash("ChallengeLogState_Challenge.Connect_FirstIsland");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Connect_GerudoMaze> = murmurhash3::hash("ChallengeLogState_Challenge.Connect_GerudoMaze");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Connect_TabantaMaze> = murmurhash3::hash("ChallengeLogState_Challenge.Connect_TabantaMaze");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CookAtBaseCamp> = murmurhash3::hash("ChallengeLogState_Challenge.CookAtBaseCamp");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CraftShadowPicture> = murmurhash3::hash("ChallengeLogState_Challenge.CraftShadowPicture");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::CreateArmor> = murmurhash3::hash("ChallengeLogState_Challenge.CreateArmor");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Createshinguard> = murmurhash3::hash("ChallengeLogState_Challenge.Createshinguard");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::DeepHoleSurvey2> = murmurhash3::hash("ChallengeLogState_Challenge.DeepHoleSurvey2");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::DefeatGanondorf> = murmurhash3::hash("ChallengeLogState_Challenge.DefeatGanondorf");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::DefeatHugeEnemy_1> = murmurhash3::hash("ChallengeLogState_Challenge.DefeatHugeEnemy_1");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::DefeatHugeEnemy_2> = murmurhash3::hash("ChallengeLogState_Challenge.DefeatHugeEnemy_2");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::DefeatHugeEnemy_3> = murmurhash3::hash("ChallengeLogState_Challenge.DefeatHugeEnemy_3");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::DefeatHugeEnemy_4> = murmurhash3::hash("ChallengeLogState_Challenge.DefeatHugeEnemy_4");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::DefeatHugeEnemy_5> = murmurhash3::hash("ChallengeLogState_Challenge.DefeatHugeEnemy_5");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::DefeatHugeEnemy_6> = murmurhash3::hash("ChallengeLogState_Challenge.DefeatHugeEnemy_6");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::DevoteSpring> = murmurhash3::hash("ChallengeLogState_Challenge.DevoteSpring");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::DividedSlate> = murmurhash3::hash("ChallengeLogState_Challenge.DividedSlate");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::EightHeroStatues> = murmurhash3::hash("ChallengeLogState_Challenge.EightHeroStatues");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::EightHeroStatues_After> = murmurhash3::hash("ChallengeLogState_Challenge.EightHeroStatues_After");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::ExcavateFossil1> = murmurhash3::hash("ChallengeLogState_Challenge.ExcavateFossil1");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::ExcavateFossil2> = murmurhash3::hash("ChallengeLogState_Challenge.ExcavateFossil2");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::ExcavateFossil3> = murmurhash3::hash("ChallengeLogState_Challenge.ExcavateFossil3");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Fairy2> = murmurhash3::hash("ChallengeLogState_Challenge.Fairy2");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Fairy3> = murmurhash3::hash("ChallengeLogState_Challenge.Fairy3");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Fairy4> = murmurhash3::hash("ChallengeLogState_Challenge.Fairy4");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::FindSunaNui> = murmurhash3::hash("ChallengeLogState_Challenge.FindSunaNui");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::FindSunaNui2> = murmurhash3::hash("ChallengeLogState_Challenge.FindSunaNui2");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::FindWhiteHorse> = murmurhash3::hash("ChallengeLogState_Challenge.FindWhiteHorse");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::FindWithSensors> = murmurhash3::hash("ChallengeLogState_Challenge.FindWithSensors");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::FirstskyislandReturns> = murmurhash3::hash("ChallengeLogState_Challenge.FirstskyislandReturns");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::FullyRipenedFlintstones> = murmurhash3::hash("ChallengeLogState_Challenge.FullyRipenedFlintstones");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::gather_Insect_Z> = murmurhash3::hash("ChallengeLogState_Challenge.gather_Insect_Z");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GeniusWeapon_Zora> = murmurhash3::hash("ChallengeLogState_Challenge.GeniusWeapon_Zora");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Genkos_Kitchen> = murmurhash3::hash("ChallengeLogState_Challenge.Genkos_Kitchen");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Gerudo_UrbosaWeapon> = murmurhash3::hash("ChallengeLogState_Challenge.Gerudo_UrbosaWeapon");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GerudoCanyon_24hEnduranceComparison> = murmurhash3::hash("ChallengeLogState_Challenge.GerudoCanyon_24hEnduranceComparison");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GerudoCanyon_Adventure> = murmurhash3::hash("ChallengeLogState_Challenge.GerudoCanyon_Adventure");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GerudoCanyon_ColdEnduranceComparison> = murmurhash3::hash("ChallengeLogState_Challenge.GerudoCanyon_ColdEnduranceComparison");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GerudoCanyon_GleeokLiver> = murmurhash3::hash("ChallengeLogState_Challenge.GerudoCanyon_GleeokLiver");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GerudoCanyon_TumbleweedSweep> = murmurhash3::hash("ChallengeLogState_Challenge.GerudoCanyon_TumbleweedSweep");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GerudoDesertTreasure> = murmurhash3::hash("ChallengeLogState_Challenge.GerudoDesertTreasure");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GetCamera> = murmurhash3::hash("ChallengeLogState_Challenge.GetCamera");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GetMasterSword> = murmurhash3::hash("ChallengeLogState_Challenge.GetMasterSword");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GetSensorPlus> = murmurhash3::hash("ChallengeLogState_Challenge.GetSensorPlus");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GetWalker> = murmurhash3::hash("ChallengeLogState_Challenge.GetWalker");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GetWarpMarker> = murmurhash3::hash("ChallengeLogState_Challenge.GetWarpMarker");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GiantHorse> = murmurhash3::hash("ChallengeLogState_Challenge.GiantHorse");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GoneSnowQueen> = murmurhash3::hash("ChallengeLogState_Challenge.GoneSnowQueen");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Goron_MiniGame_01> = murmurhash3::hash("ChallengeLogState_Challenge.Goron_MiniGame_01");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Goron_MiniGame_02> = murmurhash3::hash("ChallengeLogState_Challenge.Goron_MiniGame_02");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Goron_MiniGame_03> = murmurhash3::hash("ChallengeLogState_Challenge.Goron_MiniGame_03");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Goron_MiniGame_Tutorial_01> = murmurhash3::hash("ChallengeLogState_Challenge.Goron_MiniGame_Tutorial_01");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Goron_MiniGame_Tutorial_02> = murmurhash3::hash("ChallengeLogState_Challenge.Goron_MiniGame_Tutorial_02");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Goron_MiniGame_Tutorial_03> = murmurhash3::hash("ChallengeLogState_Challenge.Goron_MiniGame_Tutorial_03");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GoronPond> = murmurhash3::hash("ChallengeLogState_Challenge.GoronPond");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GoronReturntoNature> = murmurhash3::hash("ChallengeLogState_Challenge.GoronReturntoNature");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GotoFironeZonauRemains> = murmurhash3::hash("ChallengeLogState_Challenge.GotoFironeZonauRemains");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GOToTheCastleOfHyrule> = murmurhash3::hash("ChallengeLogState_Challenge.GOToTheCastleOfHyrule");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::GroundPaintingAir01> = murmurhash3::hash("ChallengeLogState_Challenge.GroundPaintingAir01");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hack_GuardGoods> = murmurhash3::hash("ChallengeLogState_Challenge.Hack_GuardGoods");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HammerGong_MiniGame> = murmurhash3::hash("ChallengeLogState_Challenge.HammerGong_MiniGame");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_Cheese> = murmurhash3::hash("ChallengeLogState_Challenge.Hateno_Cheese");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_CoolGuy> = murmurhash3::hash("ChallengeLogState_Challenge.Hateno_CoolGuy");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_FreshMilk> = murmurhash3::hash("ChallengeLogState_Challenge.Hateno_FreshMilk");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_LetUsElection> = murmurhash3::hash("ChallengeLogState_Challenge.Hateno_LetUsElection");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_NewCostume> = murmurhash3::hash("ChallengeLogState_Challenge.Hateno_NewCostume");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_NewSpecialty> = murmurhash3::hash("ChallengeLogState_Challenge.Hateno_NewSpecialty");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_RevitalizeByNewSpeciality> = murmurhash3::hash("ChallengeLogState_Challenge.Hateno_RevitalizeByNewSpeciality");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_SecretLifeOfKusayoshi> = murmurhash3::hash("ChallengeLogState_Challenge.Hateno_SecretLifeOfKusayoshi");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_SecretLifeOfSagono> = murmurhash3::hash("ChallengeLogState_Challenge.Hateno_SecretLifeOfSagono");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_TellMeTeacher01> = murmurhash3::hash("ChallengeLogState_Challenge.Hateno_TellMeTeacher01");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_TellMeTeacher02> = murmurhash3::hash("ChallengeLogState_Challenge.Hateno_TellMeTeacher02");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_VillageMayorElection> = murmurhash3::hash("ChallengeLogState_Challenge.Hateno_VillageMayorElection");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hateno_WhatToPlant> = murmurhash3::hash("ChallengeLogState_Challenge.Hateno_WhatToPlant");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HatenoPurchasePicture> = murmurhash3::hash("ChallengeLogState_Challenge.HatenoPurchasePicture");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hebra_SkyRingChallenge> = murmurhash3::hash("ChallengeLogState_Challenge.Hebra_SkyRingChallenge");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Hebra_SkyRingChallenge_MiniGame> = murmurhash3::hash("ChallengeLogState_Challenge.Hebra_SkyRingChallenge_MiniGame");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HorseInnChallenge001> = murmurhash3::hash("ChallengeLogState_Challenge.HorseInnChallenge001");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HorseInnChallenge002> = murmurhash3::hash("ChallengeLogState_Challenge.HorseInnChallenge002");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HorseInnChallenge003> = murmurhash3::hash("ChallengeLogState_Challenge.HorseInnChallenge003");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HorseInnChallenge005> = murmurhash3::hash("ChallengeLogState_Challenge.HorseInnChallenge005");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HorseInnChallenge007> = murmurhash3::hash("ChallengeLogState_Challenge.HorseInnChallenge007");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HotSpringEgg> = murmurhash3::hash("ChallengeLogState_Challenge.HotSpringEgg");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HourseInnChallenge004> = murmurhash3::hash("ChallengeLogState_Challenge.HourseInnChallenge004");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HuntSalmon> = murmurhash3::hash("ChallengeLogState_Challenge.HuntSalmon");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::HyruleCastleIncident> = murmurhash3::hash("ChallengeLogState_Challenge.HyruleCastleIncident");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::IceMaking> = murmurhash3::hash("ChallengeLogState_Challenge.IceMaking");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::IchikaraChallenge01> = murmurhash3::hash("ChallengeLogState_Challenge.IchikaraChallenge01");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::IchikaraChallenge03> = murmurhash3::hash("ChallengeLogState_Challenge.IchikaraChallenge03");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::IchikaraCircuit_Tutorial> = murmurhash3::hash("ChallengeLogState_Challenge.IchikaraCircuit_Tutorial");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::IchikaraDaughterPhoto> = murmurhash3::hash("ChallengeLogState_Challenge.IchikaraDaughterPhoto");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::IllnessStartsWithFeelings> = murmurhash3::hash("ChallengeLogState_Challenge.IllnessStartsWithFeelings");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::InfiltrationFromTheSky> = murmurhash3::hash("ChallengeLogState_Challenge.InfiltrationFromTheSky");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::InnNeverReturns> = murmurhash3::hash("ChallengeLogState_Challenge.InnNeverReturns");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::JobSunazarashi> = murmurhash3::hash("ChallengeLogState_Challenge.JobSunazarashi");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Know_FourStonePlates> = murmurhash3::hash("ChallengeLogState_Challenge.Know_FourStonePlates");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::KokkoGuidePost> = murmurhash3::hash("ChallengeLogState_Challenge.KokkoGuidePost");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Korok_CarryToShrine> = murmurhash3::hash("ChallengeLogState_Challenge.Korok_CarryToShrine");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Lodge_Chemical001> = murmurhash3::hash("ChallengeLogState_Challenge.Lodge_Chemical001");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::LookingForLightSpot> = murmurhash3::hash("ChallengeLogState_Challenge.LookingForLightSpot");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::LookingForTheVoiceLord> = murmurhash3::hash("ChallengeLogState_Challenge.LookingForTheVoiceLord");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Mack_SecretBase> = murmurhash3::hash("ChallengeLogState_Challenge.Mack_SecretBase");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MainChallenge> = murmurhash3::hash("ChallengeLogState_Challenge.MainChallenge");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MakeAChampionsWeapon_Goron> = murmurhash3::hash("ChallengeLogState_Challenge.MakeAChampionsWeapon_Goron");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MakeChemicalWeapon> = murmurhash3::hash("ChallengeLogState_Challenge.MakeChemicalWeapon");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MasterSwordClues> = murmurhash3::hash("ChallengeLogState_Challenge.MasterSwordClues");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MeatRock> = murmurhash3::hash("ChallengeLogState_Challenge.MeatRock");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MemoryOfTheDragon> = murmurhash3::hash("ChallengeLogState_Challenge.MemoryOfTheDragon");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Mercenary_Akkare_Bloody> = murmurhash3::hash("ChallengeLogState_Challenge.Mercenary_Akkare_Bloody");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Mercenary_Eldin_Bloody> = murmurhash3::hash("ChallengeLogState_Challenge.Mercenary_Eldin_Bloody");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Mercenary_Firone_Bloody> = murmurhash3::hash("ChallengeLogState_Challenge.Mercenary_Firone_Bloody");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Mercenary_Hateru_Bloody> = murmurhash3::hash("ChallengeLogState_Challenge.Mercenary_Hateru_Bloody");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Mercenary_Hebra_Bloody> = murmurhash3::hash("ChallengeLogState_Challenge.Mercenary_Hebra_Bloody");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Mercenary_HyrulePlain_Bloody> = murmurhash3::hash("ChallengeLogState_Challenge.Mercenary_HyrulePlain_Bloody");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MercenaryChallenge_Akkare> = murmurhash3::hash("ChallengeLogState_Challenge.MercenaryChallenge_Akkare");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MercenaryChallenge_Eldin> = murmurhash3::hash("ChallengeLogState_Challenge.MercenaryChallenge_Eldin");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MercenaryChallenge_Firone> = murmurhash3::hash("ChallengeLogState_Challenge.MercenaryChallenge_Firone");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MercenaryChallenge_Hateru> = murmurhash3::hash("ChallengeLogState_Challenge.MercenaryChallenge_Hateru");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MercenaryChallenge_Hebra> = murmurhash3::hash("ChallengeLogState_Challenge.MercenaryChallenge_Hebra");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MercenaryChallenge_HyrulePlain> = murmurhash3::hash("ChallengeLogState_Challenge.MercenaryChallenge_HyrulePlain");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MessageBottle_SOS> = murmurhash3::hash("ChallengeLogState_Challenge.MessageBottle_SOS");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MinusYiga> = murmurhash3::hash("ChallengeLogState_Challenge.MinusYiga");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MonsterFigures01> = murmurhash3::hash("ChallengeLogState_Challenge.MonsterFigures01");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MonsterFigures02> = murmurhash3::hash("ChallengeLogState_Challenge.MonsterFigures02");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MonsterFigures03> = murmurhash3::hash("ChallengeLogState_Challenge.MonsterFigures03");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MonsterFigures04> = murmurhash3::hash("ChallengeLogState_Challenge.MonsterFigures04");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MonsterFigures05> = murmurhash3::hash("ChallengeLogState_Challenge.MonsterFigures05");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MushroomSisters_1> = murmurhash3::hash("ChallengeLogState_Challenge.MushroomSisters_1");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MushroomSisters_2> = murmurhash3::hash("ChallengeLogState_Challenge.MushroomSisters_2");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::MushroomSisters_3> = murmurhash3::hash("ChallengeLogState_Challenge.MushroomSisters_3");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Nazley_DigCave> = murmurhash3::hash("ChallengeLogState_Challenge.Nazley_DigCave");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Neck_IceWaterCave> = murmurhash3::hash("ChallengeLogState_Challenge.Neck_IceWaterCave");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::NewCanyonMissingPersonsCase> = murmurhash3::hash("ChallengeLogState_Challenge.NewCanyonMissingPersonsCase");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::NewsPaper_Mitsuba> = murmurhash3::hash("ChallengeLogState_Challenge.NewsPaper_Mitsuba");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::NoTrespassing> = murmurhash3::hash("ChallengeLogState_Challenge.NoTrespassing");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::NowInTheVillageOfLurelin> = murmurhash3::hash("ChallengeLogState_Challenge.NowInTheVillageOfLurelin");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Npc_BaseCamp_Assistant_ReactingStatue> = murmurhash3::hash("ChallengeLogState_Challenge.Npc_BaseCamp_Assistant_ReactingStatue");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Npc_BaseCamp_Assistant_ReactingStatue2> = murmurhash3::hash("ChallengeLogState_Challenge.Npc_BaseCamp_Assistant_ReactingStatue2");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Npc_BaseCamp_Assistant_ReactingStatue3> = murmurhash3::hash("ChallengeLogState_Challenge.Npc_BaseCamp_Assistant_ReactingStatue3");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Npc_BaseCamp_Assistant_ReactingStatue4> = murmurhash3::hash("ChallengeLogState_Challenge.Npc_BaseCamp_Assistant_ReactingStatue4");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::NushiShop_Challenge00> = murmurhash3::hash("ChallengeLogState_Challenge.NushiShop_Challenge00");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::NushiShop_Tutorial> = murmurhash3::hash("ChallengeLogState_Challenge.NushiShop_Tutorial");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::OldKorokHelp> = murmurhash3::hash("ChallengeLogState_Challenge.OldKorokHelp");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Orchestra02> = murmurhash3::hash("ChallengeLogState_Challenge.Orchestra02");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Orchestra03> = murmurhash3::hash("ChallengeLogState_Challenge.Orchestra03");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Orchestra04> = murmurhash3::hash("ChallengeLogState_Challenge.Orchestra04");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Our_Treasure> = murmurhash3::hash("ChallengeLogState_Challenge.Our_Treasure");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Parasail_ChuchuDesign> = murmurhash3::hash("ChallengeLogState_Challenge.Parasail_ChuchuDesign");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_01> = murmurhash3::hash("ChallengeLogState_Challenge.PhotoSpot_Challenge_01");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_02> = murmurhash3::hash("ChallengeLogState_Challenge.PhotoSpot_Challenge_02");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_03> = murmurhash3::hash("ChallengeLogState_Challenge.PhotoSpot_Challenge_03");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_04> = murmurhash3::hash("ChallengeLogState_Challenge.PhotoSpot_Challenge_04");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_05> = murmurhash3::hash("ChallengeLogState_Challenge.PhotoSpot_Challenge_05");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_06> = murmurhash3::hash("ChallengeLogState_Challenge.PhotoSpot_Challenge_06");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_07> = murmurhash3::hash("ChallengeLogState_Challenge.PhotoSpot_Challenge_07");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_08> = murmurhash3::hash("ChallengeLogState_Challenge.PhotoSpot_Challenge_08");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_09> = murmurhash3::hash("ChallengeLogState_Challenge.PhotoSpot_Challenge_09");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_09_2> = murmurhash3::hash("ChallengeLogState_Challenge.PhotoSpot_Challenge_09_2");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_10> = murmurhash3::hash("ChallengeLogState_Challenge.PhotoSpot_Challenge_10");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_11> = murmurhash3::hash("ChallengeLogState_Challenge.PhotoSpot_Challenge_11");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_12> = murmurhash3::hash("ChallengeLogState_Challenge.PhotoSpot_Challenge_12");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_13> = murmurhash3::hash("ChallengeLogState_Challenge.PhotoSpot_Challenge_13");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::PhotoSpot_Challenge_14> = murmurhash3::hash("ChallengeLogState_Challenge.PhotoSpot_Challenge_14");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Raise_GoddesStatue> = murmurhash3::hash("ChallengeLogState_Challenge.Raise_GoddesStatue");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Raise_GoddesStatue_Courage> = murmurhash3::hash("ChallengeLogState_Challenge.Raise_GoddesStatue_Courage");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Raise_GoddesStatue_Power> = murmurhash3::hash("ChallengeLogState_Challenge.Raise_GoddesStatue_Power");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Raise_GoddesStatue_Wisdom> = murmurhash3::hash("ChallengeLogState_Challenge.Raise_GoddesStatue_Wisdom");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::RepairArmor> = murmurhash3::hash("ChallengeLogState_Challenge.RepairArmor");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::RescueHost> = murmurhash3::hash("ChallengeLogState_Challenge.RescueHost");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::RescueVehicle01> = murmurhash3::hash("ChallengeLogState_Challenge.RescueVehicle01");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::RescueWell> = murmurhash3::hash("ChallengeLogState_Challenge.RescueWell");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::ResearchEldin> = murmurhash3::hash("ChallengeLogState_Challenge.ResearchEldin");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::ResearchLanayru> = murmurhash3::hash("ChallengeLogState_Challenge.ResearchLanayru");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::RestaurantInTheWell> = murmurhash3::hash("ChallengeLogState_Challenge.RestaurantInTheWell");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Rito_ItemExchange> = murmurhash3::hash("ChallengeLogState_Challenge.Rito_ItemExchange");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Rito_MedoArmor> = murmurhash3::hash("ChallengeLogState_Challenge.Rito_MedoArmor");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Rito_RevaliWeapon> = murmurhash3::hash("ChallengeLogState_Challenge.Rito_RevaliWeapon");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Rito_ShadowCave> = murmurhash3::hash("ChallengeLogState_Challenge.Rito_ShadowCave");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::RitoBridgeRepair> = murmurhash3::hash("ChallengeLogState_Challenge.RitoBridgeRepair");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SageOfFire> = murmurhash3::hash("ChallengeLogState_Challenge.SageOfFire");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SageOfGerudo> = murmurhash3::hash("ChallengeLogState_Challenge.SageOfGerudo");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SageOfSoul> = murmurhash3::hash("ChallengeLogState_Challenge.SageOfSoul");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SageOfWind> = murmurhash3::hash("ChallengeLogState_Challenge.SageOfWind");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SageOfZora> = murmurhash3::hash("ChallengeLogState_Challenge.SageOfZora");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SaihateSubjugation> = murmurhash3::hash("ChallengeLogState_Challenge.SaihateSubjugation");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SearchCaravan> = murmurhash3::hash("ChallengeLogState_Challenge.SearchCaravan");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SecretBase_MiniGame> = murmurhash3::hash("ChallengeLogState_Challenge.SecretBase_MiniGame");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::ShieldSurfing_MiniGame> = murmurhash3::hash("ChallengeLogState_Challenge.ShieldSurfing_MiniGame");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SkyIsland_MiniGame_01> = murmurhash3::hash("ChallengeLogState_Challenge.SkyIsland_MiniGame_01");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SkyIsland_MiniGame_02> = murmurhash3::hash("ChallengeLogState_Challenge.SkyIsland_MiniGame_02");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SkyIsland_MiniGame_03> = murmurhash3::hash("ChallengeLogState_Challenge.SkyIsland_MiniGame_03");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SnowyMountain_Surfing> = murmurhash3::hash("ChallengeLogState_Challenge.SnowyMountain_Surfing");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::StatueDevilTutorial> = murmurhash3::hash("ChallengeLogState_Challenge.StatueDevilTutorial");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::SurveyOfFourVillages> = murmurhash3::hash("ChallengeLogState_Challenge.SurveyOfFourVillages");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TakeAnimals> = murmurhash3::hash("ChallengeLogState_Challenge.TakeAnimals");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TakeOfIce> = murmurhash3::hash("ChallengeLogState_Challenge.TakeOfIce");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TauraChallenge001> = murmurhash3::hash("ChallengeLogState_Challenge.TauraChallenge001");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TheStrongestWeapon> = murmurhash3::hash("ChallengeLogState_Challenge.TheStrongestWeapon");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TreasureHunt_kokiri> = murmurhash3::hash("ChallengeLogState_Challenge.TreasureHunt_kokiri");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TreasureOfLambda> = murmurhash3::hash("ChallengeLogState_Challenge.TreasureOfLambda");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TreasureOfLamda_Dream> = murmurhash3::hash("ChallengeLogState_Challenge.TreasureOfLamda_Dream");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TreasureOfLamda_Dream2> = murmurhash3::hash("ChallengeLogState_Challenge.TreasureOfLamda_Dream2");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TreasureOfLamda_Dream3> = murmurhash3::hash("ChallengeLogState_Challenge.TreasureOfLamda_Dream3");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TreasureOfLamda_DuelPeak> = murmurhash3::hash("ChallengeLogState_Challenge.TreasureOfLamda_DuelPeak");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TreasureOfLamda_FierceDeity> = murmurhash3::hash("ChallengeLogState_Challenge.TreasureOfLamda_FierceDeity");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TreasureOfLamda_Gerudo> = murmurhash3::hash("ChallengeLogState_Challenge.TreasureOfLamda_Gerudo");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::TreasureOfLamda_Pirate> = murmurhash3::hash("ChallengeLogState_Challenge.TreasureOfLamda_Pirate");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune01> = murmurhash3::hash("ChallengeLogState_Challenge.Tribune01");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune02> = murmurhash3::hash("ChallengeLogState_Challenge.Tribune02");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune03> = murmurhash3::hash("ChallengeLogState_Challenge.Tribune03");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune04> = murmurhash3::hash("ChallengeLogState_Challenge.Tribune04");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune05> = murmurhash3::hash("ChallengeLogState_Challenge.Tribune05");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune06> = murmurhash3::hash("ChallengeLogState_Challenge.Tribune06");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune07> = murmurhash3::hash("ChallengeLogState_Challenge.Tribune07");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune09> = murmurhash3::hash("ChallengeLogState_Challenge.Tribune09");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune10> = murmurhash3::hash("ChallengeLogState_Challenge.Tribune10");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune11> = murmurhash3::hash("ChallengeLogState_Challenge.Tribune11");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune13> = murmurhash3::hash("ChallengeLogState_Challenge.Tribune13");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune14> = murmurhash3::hash("ChallengeLogState_Challenge.Tribune14");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Tribune16> = murmurhash3::hash("ChallengeLogState_Challenge.Tribune16");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Uotori_Designer> = murmurhash3::hash("ChallengeLogState_Challenge.Uotori_Designer");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Uotori_ResortPlan> = murmurhash3::hash("ChallengeLogState_Challenge.Uotori_ResortPlan");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Uotori_RevivePlan> = murmurhash3::hash("ChallengeLogState_Challenge.Uotori_RevivePlan");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Uotori_WhiteLineGame> = murmurhash3::hash("ChallengeLogState_Challenge.Uotori_WhiteLineGame");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::WashedAwayBusinessTools> = murmurhash3::hash("ChallengeLogState_Challenge.WashedAwayBusinessTools");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::WaterBridgePlace> = murmurhash3::hash("ChallengeLogState_Challenge.WaterBridgePlace");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::WellCollection> = murmurhash3::hash("ChallengeLogState_Challenge.WellCollection");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::WhichIsStronger> = murmurhash3::hash("ChallengeLogState_Challenge.WhichIsStronger");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Zonau_GeniusWeapon> = murmurhash3::hash("ChallengeLogState_Challenge.Zonau_GeniusWeapon");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::ZonauReliefSearch> = murmurhash3::hash("ChallengeLogState_Challenge.ZonauReliefSearch");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Zora_Enemy_hunt> = murmurhash3::hash("ChallengeLogState_Challenge.Zora_Enemy_hunt");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Zora_MessageBottle> = murmurhash3::hash("ChallengeLogState_Challenge.Zora_MessageBottle");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::Zora_RuttaTreasure> = murmurhash3::hash("ChallengeLogState_Challenge.Zora_RuttaTreasure");
template <> hash_t constexpr Data::Hashtable<GameData::ChallengeLogState_Challenge::ZoraStatue_Picture> = murmurhash3::hash("ChallengeLogState_Challenge.ZoraStatue_Picture");