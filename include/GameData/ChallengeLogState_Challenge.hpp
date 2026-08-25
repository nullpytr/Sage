#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::ChallengeLogState_Challenge : Tag::Structure {
	struct AisyaRescue : Tag::Enum { using type = ::Enum::Scalar<AisyaRescue>; using adapter = ::Enum::Scalar<AisyaRescue>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct AmberCollector : Tag::Enum { using type = ::Enum::Scalar<AmberCollector>; using adapter = ::Enum::Scalar<AmberCollector>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct ArrowMeister_Momo : Tag::Enum { using type = ::Enum::Scalar<ArrowMeister_Momo>; using adapter = ::Enum::Scalar<ArrowMeister_Momo>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct AssassinGerudoBase : Tag::Enum { using type = ::Enum::Scalar<AssassinGerudoBase>; using adapter = ::Enum::Scalar<AssassinGerudoBase>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct BallBring_MiniGame : Tag::Enum { using type = ::Enum::Scalar<BallBring_MiniGame>; using adapter = ::Enum::Scalar<BallBring_MiniGame>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Basketball_MiniGame : Tag::Enum { using type = ::Enum::Scalar<Basketball_MiniGame>; using adapter = ::Enum::Scalar<Basketball_MiniGame>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Big_Rotate : Tag::Enum { using type = ::Enum::Scalar<Big_Rotate>; using adapter = ::Enum::Scalar<Big_Rotate>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct BirdManContest : Tag::Enum { using type = ::Enum::Scalar<BirdManContest>; using adapter = ::Enum::Scalar<BirdManContest>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct BlindRuinsTreasure : Tag::Enum { using type = ::Enum::Scalar<BlindRuinsTreasure>; using adapter = ::Enum::Scalar<BlindRuinsTreasure>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct BlindRuinsTreasure_Gerudo : Tag::Enum { using type = ::Enum::Scalar<BlindRuinsTreasure_Gerudo>; using adapter = ::Enum::Scalar<BlindRuinsTreasure_Gerudo>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct BlindRuinsTreasure_Goron : Tag::Enum { using type = ::Enum::Scalar<BlindRuinsTreasure_Goron>; using adapter = ::Enum::Scalar<BlindRuinsTreasure_Goron>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct BlindRuinsTreasure_Rito : Tag::Enum { using type = ::Enum::Scalar<BlindRuinsTreasure_Rito>; using adapter = ::Enum::Scalar<BlindRuinsTreasure_Rito>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct BlindRuinsTreasure_Zora : Tag::Enum { using type = ::Enum::Scalar<BlindRuinsTreasure_Zora>; using adapter = ::Enum::Scalar<BlindRuinsTreasure_Zora>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct BuildHouse : Tag::Enum { using type = ::Enum::Scalar<BuildHouse>; using adapter = ::Enum::Scalar<BuildHouse>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct BuildingMaterialsTutorial : Tag::Enum { using type = ::Enum::Scalar<BuildingMaterialsTutorial>; using adapter = ::Enum::Scalar<BuildingMaterialsTutorial>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryGoronKid1 : Tag::Enum { using type = ::Enum::Scalar<CarryGoronKid1>; using adapter = ::Enum::Scalar<CarryGoronKid1>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryGoronKid2 : Tag::Enum { using type = ::Enum::Scalar<CarryGoronKid2>; using adapter = ::Enum::Scalar<CarryGoronKid2>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryStone : Tag::Enum { using type = ::Enum::Scalar<CarryStone>; using adapter = ::Enum::Scalar<CarryStone>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine01 : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine01>; using adapter = ::Enum::Scalar<CarryToShrine01>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine02 : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine02>; using adapter = ::Enum::Scalar<CarryToShrine02>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine03 : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine03>; using adapter = ::Enum::Scalar<CarryToShrine03>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine05 : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine05>; using adapter = ::Enum::Scalar<CarryToShrine05>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine06 : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine06>; using adapter = ::Enum::Scalar<CarryToShrine06>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine07 : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine07>; using adapter = ::Enum::Scalar<CarryToShrine07>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine08_Zora : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine08_Zora>; using adapter = ::Enum::Scalar<CarryToShrine08_Zora>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine09 : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine09>; using adapter = ::Enum::Scalar<CarryToShrine09>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine10 : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine10>; using adapter = ::Enum::Scalar<CarryToShrine10>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine11 : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine11>; using adapter = ::Enum::Scalar<CarryToShrine11>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine12 : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine12>; using adapter = ::Enum::Scalar<CarryToShrine12>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine13 : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine13>; using adapter = ::Enum::Scalar<CarryToShrine13>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine14 : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine14>; using adapter = ::Enum::Scalar<CarryToShrine14>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine15 : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine15>; using adapter = ::Enum::Scalar<CarryToShrine15>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine16 : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine16>; using adapter = ::Enum::Scalar<CarryToShrine16>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine17 : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine17>; using adapter = ::Enum::Scalar<CarryToShrine17>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine19 : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine19>; using adapter = ::Enum::Scalar<CarryToShrine19>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine20 : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine20>; using adapter = ::Enum::Scalar<CarryToShrine20>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine21 : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine21>; using adapter = ::Enum::Scalar<CarryToShrine21>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine22 : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine22>; using adapter = ::Enum::Scalar<CarryToShrine22>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CarryToShrine23 : Tag::Enum { using type = ::Enum::Scalar<CarryToShrine23>; using adapter = ::Enum::Scalar<CarryToShrine23>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CDungeon_AllDone : Tag::Enum { using type = ::Enum::Scalar<CDungeon_AllDone>; using adapter = ::Enum::Scalar<CDungeon_AllDone>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Circuit_Desert : Tag::Enum { using type = ::Enum::Scalar<Circuit_Desert>; using adapter = ::Enum::Scalar<Circuit_Desert>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Circuit_FaronWoods_MiniGame : Tag::Enum { using type = ::Enum::Scalar<Circuit_FaronWoods_MiniGame>; using adapter = ::Enum::Scalar<Circuit_FaronWoods_MiniGame>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Circuit_Ichikara : Tag::Enum { using type = ::Enum::Scalar<Circuit_Ichikara>; using adapter = ::Enum::Scalar<Circuit_Ichikara>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Circuit_Ichikara_MiniGame : Tag::Enum { using type = ::Enum::Scalar<Circuit_Ichikara_MiniGame>; using adapter = ::Enum::Scalar<Circuit_Ichikara_MiniGame>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Circuit_Uotori_MiniGame : Tag::Enum { using type = ::Enum::Scalar<Circuit_Uotori_MiniGame>; using adapter = ::Enum::Scalar<Circuit_Uotori_MiniGame>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CleanStatue : Tag::Enum { using type = ::Enum::Scalar<CleanStatue>; using adapter = ::Enum::Scalar<CleanStatue>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct ClueTotheSixthSage : Tag::Enum { using type = ::Enum::Scalar<ClueTotheSixthSage>; using adapter = ::Enum::Scalar<ClueTotheSixthSage>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CollectObject_MiniGame : Tag::Enum { using type = ::Enum::Scalar<CollectObject_MiniGame>; using adapter = ::Enum::Scalar<CollectObject_MiniGame>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CollectObject_MiniGame_Cliff : Tag::Enum { using type = ::Enum::Scalar<CollectObject_MiniGame_Cliff>; using adapter = ::Enum::Scalar<CollectObject_MiniGame_Cliff>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CollectObject_MiniGame_LakeSide : Tag::Enum { using type = ::Enum::Scalar<CollectObject_MiniGame_LakeSide>; using adapter = ::Enum::Scalar<CollectObject_MiniGame_LakeSide>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Connect_AkkareMaze : Tag::Enum { using type = ::Enum::Scalar<Connect_AkkareMaze>; using adapter = ::Enum::Scalar<Connect_AkkareMaze>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Connect_FirstIsland : Tag::Enum { using type = ::Enum::Scalar<Connect_FirstIsland>; using adapter = ::Enum::Scalar<Connect_FirstIsland>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Connect_GerudoMaze : Tag::Enum { using type = ::Enum::Scalar<Connect_GerudoMaze>; using adapter = ::Enum::Scalar<Connect_GerudoMaze>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Connect_TabantaMaze : Tag::Enum { using type = ::Enum::Scalar<Connect_TabantaMaze>; using adapter = ::Enum::Scalar<Connect_TabantaMaze>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CookAtBaseCamp : Tag::Enum { using type = ::Enum::Scalar<CookAtBaseCamp>; using adapter = ::Enum::Scalar<CookAtBaseCamp>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CraftShadowPicture : Tag::Enum { using type = ::Enum::Scalar<CraftShadowPicture>; using adapter = ::Enum::Scalar<CraftShadowPicture>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct CreateArmor : Tag::Enum { using type = ::Enum::Scalar<CreateArmor>; using adapter = ::Enum::Scalar<CreateArmor>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Createshinguard : Tag::Enum { using type = ::Enum::Scalar<Createshinguard>; using adapter = ::Enum::Scalar<Createshinguard>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct DeepHoleSurvey2 : Tag::Enum { using type = ::Enum::Scalar<DeepHoleSurvey2>; using adapter = ::Enum::Scalar<DeepHoleSurvey2>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct DefeatGanondorf : Tag::Enum { using type = ::Enum::Scalar<DefeatGanondorf>; using adapter = ::Enum::Scalar<DefeatGanondorf>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct DefeatHugeEnemy_1 : Tag::Enum { using type = ::Enum::Scalar<DefeatHugeEnemy_1>; using adapter = ::Enum::Scalar<DefeatHugeEnemy_1>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct DefeatHugeEnemy_2 : Tag::Enum { using type = ::Enum::Scalar<DefeatHugeEnemy_2>; using adapter = ::Enum::Scalar<DefeatHugeEnemy_2>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct DefeatHugeEnemy_3 : Tag::Enum { using type = ::Enum::Scalar<DefeatHugeEnemy_3>; using adapter = ::Enum::Scalar<DefeatHugeEnemy_3>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct DefeatHugeEnemy_4 : Tag::Enum { using type = ::Enum::Scalar<DefeatHugeEnemy_4>; using adapter = ::Enum::Scalar<DefeatHugeEnemy_4>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct DefeatHugeEnemy_5 : Tag::Enum { using type = ::Enum::Scalar<DefeatHugeEnemy_5>; using adapter = ::Enum::Scalar<DefeatHugeEnemy_5>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct DefeatHugeEnemy_6 : Tag::Enum { using type = ::Enum::Scalar<DefeatHugeEnemy_6>; using adapter = ::Enum::Scalar<DefeatHugeEnemy_6>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct DevoteSpring : Tag::Enum { using type = ::Enum::Scalar<DevoteSpring>; using adapter = ::Enum::Scalar<DevoteSpring>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct DividedSlate : Tag::Enum { using type = ::Enum::Scalar<DividedSlate>; using adapter = ::Enum::Scalar<DividedSlate>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct EightHeroStatues : Tag::Enum { using type = ::Enum::Scalar<EightHeroStatues>; using adapter = ::Enum::Scalar<EightHeroStatues>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct EightHeroStatues_After : Tag::Enum { using type = ::Enum::Scalar<EightHeroStatues_After>; using adapter = ::Enum::Scalar<EightHeroStatues_After>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct ExcavateFossil1 : Tag::Enum { using type = ::Enum::Scalar<ExcavateFossil1>; using adapter = ::Enum::Scalar<ExcavateFossil1>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct ExcavateFossil2 : Tag::Enum { using type = ::Enum::Scalar<ExcavateFossil2>; using adapter = ::Enum::Scalar<ExcavateFossil2>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct ExcavateFossil3 : Tag::Enum { using type = ::Enum::Scalar<ExcavateFossil3>; using adapter = ::Enum::Scalar<ExcavateFossil3>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Fairy2 : Tag::Enum { using type = ::Enum::Scalar<Fairy2>; using adapter = ::Enum::Scalar<Fairy2>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Fairy3 : Tag::Enum { using type = ::Enum::Scalar<Fairy3>; using adapter = ::Enum::Scalar<Fairy3>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Fairy4 : Tag::Enum { using type = ::Enum::Scalar<Fairy4>; using adapter = ::Enum::Scalar<Fairy4>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct FindSunaNui : Tag::Enum { using type = ::Enum::Scalar<FindSunaNui>; using adapter = ::Enum::Scalar<FindSunaNui>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct FindSunaNui2 : Tag::Enum { using type = ::Enum::Scalar<FindSunaNui2>; using adapter = ::Enum::Scalar<FindSunaNui2>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct FindWhiteHorse : Tag::Enum { using type = ::Enum::Scalar<FindWhiteHorse>; using adapter = ::Enum::Scalar<FindWhiteHorse>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct FindWithSensors : Tag::Enum { using type = ::Enum::Scalar<FindWithSensors>; using adapter = ::Enum::Scalar<FindWithSensors>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct FirstskyislandReturns : Tag::Enum { using type = ::Enum::Scalar<FirstskyislandReturns>; using adapter = ::Enum::Scalar<FirstskyislandReturns>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct FullyRipenedFlintstones : Tag::Enum { using type = ::Enum::Scalar<FullyRipenedFlintstones>; using adapter = ::Enum::Scalar<FullyRipenedFlintstones>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct gather_Insect_Z : Tag::Enum { using type = ::Enum::Scalar<gather_Insect_Z>; using adapter = ::Enum::Scalar<gather_Insect_Z>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct GeniusWeapon_Zora : Tag::Enum { using type = ::Enum::Scalar<GeniusWeapon_Zora>; using adapter = ::Enum::Scalar<GeniusWeapon_Zora>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Genkos_Kitchen : Tag::Enum { using type = ::Enum::Scalar<Genkos_Kitchen>; using adapter = ::Enum::Scalar<Genkos_Kitchen>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Gerudo_UrbosaWeapon : Tag::Enum { using type = ::Enum::Scalar<Gerudo_UrbosaWeapon>; using adapter = ::Enum::Scalar<Gerudo_UrbosaWeapon>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct GerudoCanyon_24hEnduranceComparison : Tag::Enum { using type = ::Enum::Scalar<GerudoCanyon_24hEnduranceComparison>; using adapter = ::Enum::Scalar<GerudoCanyon_24hEnduranceComparison>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct GerudoCanyon_Adventure : Tag::Enum { using type = ::Enum::Scalar<GerudoCanyon_Adventure>; using adapter = ::Enum::Scalar<GerudoCanyon_Adventure>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct GerudoCanyon_ColdEnduranceComparison : Tag::Enum { using type = ::Enum::Scalar<GerudoCanyon_ColdEnduranceComparison>; using adapter = ::Enum::Scalar<GerudoCanyon_ColdEnduranceComparison>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct GerudoCanyon_GleeokLiver : Tag::Enum { using type = ::Enum::Scalar<GerudoCanyon_GleeokLiver>; using adapter = ::Enum::Scalar<GerudoCanyon_GleeokLiver>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct GerudoCanyon_TumbleweedSweep : Tag::Enum { using type = ::Enum::Scalar<GerudoCanyon_TumbleweedSweep>; using adapter = ::Enum::Scalar<GerudoCanyon_TumbleweedSweep>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct GerudoDesertTreasure : Tag::Enum { using type = ::Enum::Scalar<GerudoDesertTreasure>; using adapter = ::Enum::Scalar<GerudoDesertTreasure>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct GetCamera : Tag::Enum { using type = ::Enum::Scalar<GetCamera>; using adapter = ::Enum::Scalar<GetCamera>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct GetMasterSword : Tag::Enum { using type = ::Enum::Scalar<GetMasterSword>; using adapter = ::Enum::Scalar<GetMasterSword>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct GetSensorPlus : Tag::Enum { using type = ::Enum::Scalar<GetSensorPlus>; using adapter = ::Enum::Scalar<GetSensorPlus>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct GetWalker : Tag::Enum { using type = ::Enum::Scalar<GetWalker>; using adapter = ::Enum::Scalar<GetWalker>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct GetWarpMarker : Tag::Enum { using type = ::Enum::Scalar<GetWarpMarker>; using adapter = ::Enum::Scalar<GetWarpMarker>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct GiantHorse : Tag::Enum { using type = ::Enum::Scalar<GiantHorse>; using adapter = ::Enum::Scalar<GiantHorse>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct GoneSnowQueen : Tag::Enum { using type = ::Enum::Scalar<GoneSnowQueen>; using adapter = ::Enum::Scalar<GoneSnowQueen>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Goron_MiniGame_01 : Tag::Enum { using type = ::Enum::Scalar<Goron_MiniGame_01>; using adapter = ::Enum::Scalar<Goron_MiniGame_01>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Goron_MiniGame_02 : Tag::Enum { using type = ::Enum::Scalar<Goron_MiniGame_02>; using adapter = ::Enum::Scalar<Goron_MiniGame_02>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Goron_MiniGame_03 : Tag::Enum { using type = ::Enum::Scalar<Goron_MiniGame_03>; using adapter = ::Enum::Scalar<Goron_MiniGame_03>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Goron_MiniGame_Tutorial_01 : Tag::Enum { using type = ::Enum::Scalar<Goron_MiniGame_Tutorial_01>; using adapter = ::Enum::Scalar<Goron_MiniGame_Tutorial_01>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Goron_MiniGame_Tutorial_02 : Tag::Enum { using type = ::Enum::Scalar<Goron_MiniGame_Tutorial_02>; using adapter = ::Enum::Scalar<Goron_MiniGame_Tutorial_02>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Goron_MiniGame_Tutorial_03 : Tag::Enum { using type = ::Enum::Scalar<Goron_MiniGame_Tutorial_03>; using adapter = ::Enum::Scalar<Goron_MiniGame_Tutorial_03>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct GoronPond : Tag::Enum { using type = ::Enum::Scalar<GoronPond>; using adapter = ::Enum::Scalar<GoronPond>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct GoronReturntoNature : Tag::Enum { using type = ::Enum::Scalar<GoronReturntoNature>; using adapter = ::Enum::Scalar<GoronReturntoNature>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct GotoFironeZonauRemains : Tag::Enum { using type = ::Enum::Scalar<GotoFironeZonauRemains>; using adapter = ::Enum::Scalar<GotoFironeZonauRemains>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct GOToTheCastleOfHyrule : Tag::Enum { using type = ::Enum::Scalar<GOToTheCastleOfHyrule>; using adapter = ::Enum::Scalar<GOToTheCastleOfHyrule>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct GroundPaintingAir01 : Tag::Enum { using type = ::Enum::Scalar<GroundPaintingAir01>; using adapter = ::Enum::Scalar<GroundPaintingAir01>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Hack_GuardGoods : Tag::Enum { using type = ::Enum::Scalar<Hack_GuardGoods>; using adapter = ::Enum::Scalar<Hack_GuardGoods>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct HammerGong_MiniGame : Tag::Enum { using type = ::Enum::Scalar<HammerGong_MiniGame>; using adapter = ::Enum::Scalar<HammerGong_MiniGame>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Hateno_Cheese : Tag::Enum { using type = ::Enum::Scalar<Hateno_Cheese>; using adapter = ::Enum::Scalar<Hateno_Cheese>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Hateno_CoolGuy : Tag::Enum { using type = ::Enum::Scalar<Hateno_CoolGuy>; using adapter = ::Enum::Scalar<Hateno_CoolGuy>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Hateno_FreshMilk : Tag::Enum { using type = ::Enum::Scalar<Hateno_FreshMilk>; using adapter = ::Enum::Scalar<Hateno_FreshMilk>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Hateno_LetUsElection : Tag::Enum { using type = ::Enum::Scalar<Hateno_LetUsElection>; using adapter = ::Enum::Scalar<Hateno_LetUsElection>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Hateno_NewCostume : Tag::Enum { using type = ::Enum::Scalar<Hateno_NewCostume>; using adapter = ::Enum::Scalar<Hateno_NewCostume>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Hateno_NewSpecialty : Tag::Enum { using type = ::Enum::Scalar<Hateno_NewSpecialty>; using adapter = ::Enum::Scalar<Hateno_NewSpecialty>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Hateno_RevitalizeByNewSpeciality : Tag::Enum { using type = ::Enum::Scalar<Hateno_RevitalizeByNewSpeciality>; using adapter = ::Enum::Scalar<Hateno_RevitalizeByNewSpeciality>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Hateno_SecretLifeOfKusayoshi : Tag::Enum { using type = ::Enum::Scalar<Hateno_SecretLifeOfKusayoshi>; using adapter = ::Enum::Scalar<Hateno_SecretLifeOfKusayoshi>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Hateno_SecretLifeOfSagono : Tag::Enum { using type = ::Enum::Scalar<Hateno_SecretLifeOfSagono>; using adapter = ::Enum::Scalar<Hateno_SecretLifeOfSagono>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Hateno_TellMeTeacher01 : Tag::Enum { using type = ::Enum::Scalar<Hateno_TellMeTeacher01>; using adapter = ::Enum::Scalar<Hateno_TellMeTeacher01>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Hateno_TellMeTeacher02 : Tag::Enum { using type = ::Enum::Scalar<Hateno_TellMeTeacher02>; using adapter = ::Enum::Scalar<Hateno_TellMeTeacher02>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Hateno_VillageMayorElection : Tag::Enum { using type = ::Enum::Scalar<Hateno_VillageMayorElection>; using adapter = ::Enum::Scalar<Hateno_VillageMayorElection>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Hateno_WhatToPlant : Tag::Enum { using type = ::Enum::Scalar<Hateno_WhatToPlant>; using adapter = ::Enum::Scalar<Hateno_WhatToPlant>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct HatenoPurchasePicture : Tag::Enum { using type = ::Enum::Scalar<HatenoPurchasePicture>; using adapter = ::Enum::Scalar<HatenoPurchasePicture>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Hebra_SkyRingChallenge : Tag::Enum { using type = ::Enum::Scalar<Hebra_SkyRingChallenge>; using adapter = ::Enum::Scalar<Hebra_SkyRingChallenge>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Hebra_SkyRingChallenge_MiniGame : Tag::Enum { using type = ::Enum::Scalar<Hebra_SkyRingChallenge_MiniGame>; using adapter = ::Enum::Scalar<Hebra_SkyRingChallenge_MiniGame>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct HorseInnChallenge001 : Tag::Enum { using type = ::Enum::Scalar<HorseInnChallenge001>; using adapter = ::Enum::Scalar<HorseInnChallenge001>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct HorseInnChallenge002 : Tag::Enum { using type = ::Enum::Scalar<HorseInnChallenge002>; using adapter = ::Enum::Scalar<HorseInnChallenge002>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct HorseInnChallenge003 : Tag::Enum { using type = ::Enum::Scalar<HorseInnChallenge003>; using adapter = ::Enum::Scalar<HorseInnChallenge003>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct HorseInnChallenge005 : Tag::Enum { using type = ::Enum::Scalar<HorseInnChallenge005>; using adapter = ::Enum::Scalar<HorseInnChallenge005>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct HorseInnChallenge007 : Tag::Enum { using type = ::Enum::Scalar<HorseInnChallenge007>; using adapter = ::Enum::Scalar<HorseInnChallenge007>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct HotSpringEgg : Tag::Enum { using type = ::Enum::Scalar<HotSpringEgg>; using adapter = ::Enum::Scalar<HotSpringEgg>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct HourseInnChallenge004 : Tag::Enum { using type = ::Enum::Scalar<HourseInnChallenge004>; using adapter = ::Enum::Scalar<HourseInnChallenge004>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct HuntSalmon : Tag::Enum { using type = ::Enum::Scalar<HuntSalmon>; using adapter = ::Enum::Scalar<HuntSalmon>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct HyruleCastleIncident : Tag::Enum { using type = ::Enum::Scalar<HyruleCastleIncident>; using adapter = ::Enum::Scalar<HyruleCastleIncident>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct IceMaking : Tag::Enum { using type = ::Enum::Scalar<IceMaking>; using adapter = ::Enum::Scalar<IceMaking>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct IchikaraChallenge01 : Tag::Enum { using type = ::Enum::Scalar<IchikaraChallenge01>; using adapter = ::Enum::Scalar<IchikaraChallenge01>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct IchikaraChallenge03 : Tag::Enum { using type = ::Enum::Scalar<IchikaraChallenge03>; using adapter = ::Enum::Scalar<IchikaraChallenge03>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct IchikaraCircuit_Tutorial : Tag::Enum { using type = ::Enum::Scalar<IchikaraCircuit_Tutorial>; using adapter = ::Enum::Scalar<IchikaraCircuit_Tutorial>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct IchikaraDaughterPhoto : Tag::Enum { using type = ::Enum::Scalar<IchikaraDaughterPhoto>; using adapter = ::Enum::Scalar<IchikaraDaughterPhoto>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct IllnessStartsWithFeelings : Tag::Enum { using type = ::Enum::Scalar<IllnessStartsWithFeelings>; using adapter = ::Enum::Scalar<IllnessStartsWithFeelings>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct InfiltrationFromTheSky : Tag::Enum { using type = ::Enum::Scalar<InfiltrationFromTheSky>; using adapter = ::Enum::Scalar<InfiltrationFromTheSky>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct InnNeverReturns : Tag::Enum { using type = ::Enum::Scalar<InnNeverReturns>; using adapter = ::Enum::Scalar<InnNeverReturns>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct JobSunazarashi : Tag::Enum { using type = ::Enum::Scalar<JobSunazarashi>; using adapter = ::Enum::Scalar<JobSunazarashi>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Know_FourStonePlates : Tag::Enum { using type = ::Enum::Scalar<Know_FourStonePlates>; using adapter = ::Enum::Scalar<Know_FourStonePlates>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct KokkoGuidePost : Tag::Enum { using type = ::Enum::Scalar<KokkoGuidePost>; using adapter = ::Enum::Scalar<KokkoGuidePost>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Korok_CarryToShrine : Tag::Enum { using type = ::Enum::Scalar<Korok_CarryToShrine>; using adapter = ::Enum::Scalar<Korok_CarryToShrine>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Lodge_Chemical001 : Tag::Enum { using type = ::Enum::Scalar<Lodge_Chemical001>; using adapter = ::Enum::Scalar<Lodge_Chemical001>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct LookingForLightSpot : Tag::Enum { using type = ::Enum::Scalar<LookingForLightSpot>; using adapter = ::Enum::Scalar<LookingForLightSpot>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct LookingForTheVoiceLord : Tag::Enum { using type = ::Enum::Scalar<LookingForTheVoiceLord>; using adapter = ::Enum::Scalar<LookingForTheVoiceLord>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Mack_SecretBase : Tag::Enum { using type = ::Enum::Scalar<Mack_SecretBase>; using adapter = ::Enum::Scalar<Mack_SecretBase>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MainChallenge : Tag::Enum { using type = ::Enum::Scalar<MainChallenge>; using adapter = ::Enum::Scalar<MainChallenge>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MakeAChampionsWeapon_Goron : Tag::Enum { using type = ::Enum::Scalar<MakeAChampionsWeapon_Goron>; using adapter = ::Enum::Scalar<MakeAChampionsWeapon_Goron>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MakeChemicalWeapon : Tag::Enum { using type = ::Enum::Scalar<MakeChemicalWeapon>; using adapter = ::Enum::Scalar<MakeChemicalWeapon>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MasterSwordClues : Tag::Enum { using type = ::Enum::Scalar<MasterSwordClues>; using adapter = ::Enum::Scalar<MasterSwordClues>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MeatRock : Tag::Enum { using type = ::Enum::Scalar<MeatRock>; using adapter = ::Enum::Scalar<MeatRock>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MemoryOfTheDragon : Tag::Enum { using type = ::Enum::Scalar<MemoryOfTheDragon>; using adapter = ::Enum::Scalar<MemoryOfTheDragon>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Mercenary_Akkare_Bloody : Tag::Enum { using type = ::Enum::Scalar<Mercenary_Akkare_Bloody>; using adapter = ::Enum::Scalar<Mercenary_Akkare_Bloody>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Mercenary_Eldin_Bloody : Tag::Enum { using type = ::Enum::Scalar<Mercenary_Eldin_Bloody>; using adapter = ::Enum::Scalar<Mercenary_Eldin_Bloody>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Mercenary_Firone_Bloody : Tag::Enum { using type = ::Enum::Scalar<Mercenary_Firone_Bloody>; using adapter = ::Enum::Scalar<Mercenary_Firone_Bloody>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Mercenary_Hateru_Bloody : Tag::Enum { using type = ::Enum::Scalar<Mercenary_Hateru_Bloody>; using adapter = ::Enum::Scalar<Mercenary_Hateru_Bloody>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Mercenary_Hebra_Bloody : Tag::Enum { using type = ::Enum::Scalar<Mercenary_Hebra_Bloody>; using adapter = ::Enum::Scalar<Mercenary_Hebra_Bloody>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Mercenary_HyrulePlain_Bloody : Tag::Enum { using type = ::Enum::Scalar<Mercenary_HyrulePlain_Bloody>; using adapter = ::Enum::Scalar<Mercenary_HyrulePlain_Bloody>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MercenaryChallenge_Akkare : Tag::Enum { using type = ::Enum::Scalar<MercenaryChallenge_Akkare>; using adapter = ::Enum::Scalar<MercenaryChallenge_Akkare>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MercenaryChallenge_Eldin : Tag::Enum { using type = ::Enum::Scalar<MercenaryChallenge_Eldin>; using adapter = ::Enum::Scalar<MercenaryChallenge_Eldin>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MercenaryChallenge_Firone : Tag::Enum { using type = ::Enum::Scalar<MercenaryChallenge_Firone>; using adapter = ::Enum::Scalar<MercenaryChallenge_Firone>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MercenaryChallenge_Hateru : Tag::Enum { using type = ::Enum::Scalar<MercenaryChallenge_Hateru>; using adapter = ::Enum::Scalar<MercenaryChallenge_Hateru>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MercenaryChallenge_Hebra : Tag::Enum { using type = ::Enum::Scalar<MercenaryChallenge_Hebra>; using adapter = ::Enum::Scalar<MercenaryChallenge_Hebra>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MercenaryChallenge_HyrulePlain : Tag::Enum { using type = ::Enum::Scalar<MercenaryChallenge_HyrulePlain>; using adapter = ::Enum::Scalar<MercenaryChallenge_HyrulePlain>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MessageBottle_SOS : Tag::Enum { using type = ::Enum::Scalar<MessageBottle_SOS>; using adapter = ::Enum::Scalar<MessageBottle_SOS>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MinusYiga : Tag::Enum { using type = ::Enum::Scalar<MinusYiga>; using adapter = ::Enum::Scalar<MinusYiga>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MonsterFigures01 : Tag::Enum { using type = ::Enum::Scalar<MonsterFigures01>; using adapter = ::Enum::Scalar<MonsterFigures01>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MonsterFigures02 : Tag::Enum { using type = ::Enum::Scalar<MonsterFigures02>; using adapter = ::Enum::Scalar<MonsterFigures02>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MonsterFigures03 : Tag::Enum { using type = ::Enum::Scalar<MonsterFigures03>; using adapter = ::Enum::Scalar<MonsterFigures03>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MonsterFigures04 : Tag::Enum { using type = ::Enum::Scalar<MonsterFigures04>; using adapter = ::Enum::Scalar<MonsterFigures04>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MonsterFigures05 : Tag::Enum { using type = ::Enum::Scalar<MonsterFigures05>; using adapter = ::Enum::Scalar<MonsterFigures05>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MushroomSisters_1 : Tag::Enum { using type = ::Enum::Scalar<MushroomSisters_1>; using adapter = ::Enum::Scalar<MushroomSisters_1>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MushroomSisters_2 : Tag::Enum { using type = ::Enum::Scalar<MushroomSisters_2>; using adapter = ::Enum::Scalar<MushroomSisters_2>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct MushroomSisters_3 : Tag::Enum { using type = ::Enum::Scalar<MushroomSisters_3>; using adapter = ::Enum::Scalar<MushroomSisters_3>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Nazley_DigCave : Tag::Enum { using type = ::Enum::Scalar<Nazley_DigCave>; using adapter = ::Enum::Scalar<Nazley_DigCave>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Neck_IceWaterCave : Tag::Enum { using type = ::Enum::Scalar<Neck_IceWaterCave>; using adapter = ::Enum::Scalar<Neck_IceWaterCave>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct NewCanyonMissingPersonsCase : Tag::Enum { using type = ::Enum::Scalar<NewCanyonMissingPersonsCase>; using adapter = ::Enum::Scalar<NewCanyonMissingPersonsCase>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct NewsPaper_Mitsuba : Tag::Enum { using type = ::Enum::Scalar<NewsPaper_Mitsuba>; using adapter = ::Enum::Scalar<NewsPaper_Mitsuba>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct NoTrespassing : Tag::Enum { using type = ::Enum::Scalar<NoTrespassing>; using adapter = ::Enum::Scalar<NoTrespassing>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct NowInTheVillageOfLurelin : Tag::Enum { using type = ::Enum::Scalar<NowInTheVillageOfLurelin>; using adapter = ::Enum::Scalar<NowInTheVillageOfLurelin>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Npc_BaseCamp_Assistant_ReactingStatue : Tag::Enum { using type = ::Enum::Scalar<Npc_BaseCamp_Assistant_ReactingStatue>; using adapter = ::Enum::Scalar<Npc_BaseCamp_Assistant_ReactingStatue>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Npc_BaseCamp_Assistant_ReactingStatue2 : Tag::Enum { using type = ::Enum::Scalar<Npc_BaseCamp_Assistant_ReactingStatue2>; using adapter = ::Enum::Scalar<Npc_BaseCamp_Assistant_ReactingStatue2>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Npc_BaseCamp_Assistant_ReactingStatue3 : Tag::Enum { using type = ::Enum::Scalar<Npc_BaseCamp_Assistant_ReactingStatue3>; using adapter = ::Enum::Scalar<Npc_BaseCamp_Assistant_ReactingStatue3>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Npc_BaseCamp_Assistant_ReactingStatue4 : Tag::Enum { using type = ::Enum::Scalar<Npc_BaseCamp_Assistant_ReactingStatue4>; using adapter = ::Enum::Scalar<Npc_BaseCamp_Assistant_ReactingStatue4>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct NushiShop_Challenge00 : Tag::Enum { using type = ::Enum::Scalar<NushiShop_Challenge00>; using adapter = ::Enum::Scalar<NushiShop_Challenge00>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct NushiShop_Tutorial : Tag::Enum { using type = ::Enum::Scalar<NushiShop_Tutorial>; using adapter = ::Enum::Scalar<NushiShop_Tutorial>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct OldKorokHelp : Tag::Enum { using type = ::Enum::Scalar<OldKorokHelp>; using adapter = ::Enum::Scalar<OldKorokHelp>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Orchestra02 : Tag::Enum { using type = ::Enum::Scalar<Orchestra02>; using adapter = ::Enum::Scalar<Orchestra02>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Orchestra03 : Tag::Enum { using type = ::Enum::Scalar<Orchestra03>; using adapter = ::Enum::Scalar<Orchestra03>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Orchestra04 : Tag::Enum { using type = ::Enum::Scalar<Orchestra04>; using adapter = ::Enum::Scalar<Orchestra04>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Our_Treasure : Tag::Enum { using type = ::Enum::Scalar<Our_Treasure>; using adapter = ::Enum::Scalar<Our_Treasure>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Parasail_ChuchuDesign : Tag::Enum { using type = ::Enum::Scalar<Parasail_ChuchuDesign>; using adapter = ::Enum::Scalar<Parasail_ChuchuDesign>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct PhotoSpot_Challenge_01 : Tag::Enum { using type = ::Enum::Scalar<PhotoSpot_Challenge_01>; using adapter = ::Enum::Scalar<PhotoSpot_Challenge_01>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct PhotoSpot_Challenge_02 : Tag::Enum { using type = ::Enum::Scalar<PhotoSpot_Challenge_02>; using adapter = ::Enum::Scalar<PhotoSpot_Challenge_02>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct PhotoSpot_Challenge_03 : Tag::Enum { using type = ::Enum::Scalar<PhotoSpot_Challenge_03>; using adapter = ::Enum::Scalar<PhotoSpot_Challenge_03>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct PhotoSpot_Challenge_04 : Tag::Enum { using type = ::Enum::Scalar<PhotoSpot_Challenge_04>; using adapter = ::Enum::Scalar<PhotoSpot_Challenge_04>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct PhotoSpot_Challenge_05 : Tag::Enum { using type = ::Enum::Scalar<PhotoSpot_Challenge_05>; using adapter = ::Enum::Scalar<PhotoSpot_Challenge_05>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct PhotoSpot_Challenge_06 : Tag::Enum { using type = ::Enum::Scalar<PhotoSpot_Challenge_06>; using adapter = ::Enum::Scalar<PhotoSpot_Challenge_06>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct PhotoSpot_Challenge_07 : Tag::Enum { using type = ::Enum::Scalar<PhotoSpot_Challenge_07>; using adapter = ::Enum::Scalar<PhotoSpot_Challenge_07>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct PhotoSpot_Challenge_08 : Tag::Enum { using type = ::Enum::Scalar<PhotoSpot_Challenge_08>; using adapter = ::Enum::Scalar<PhotoSpot_Challenge_08>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct PhotoSpot_Challenge_09 : Tag::Enum { using type = ::Enum::Scalar<PhotoSpot_Challenge_09>; using adapter = ::Enum::Scalar<PhotoSpot_Challenge_09>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct PhotoSpot_Challenge_09_2 : Tag::Enum { using type = ::Enum::Scalar<PhotoSpot_Challenge_09_2>; using adapter = ::Enum::Scalar<PhotoSpot_Challenge_09_2>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct PhotoSpot_Challenge_10 : Tag::Enum { using type = ::Enum::Scalar<PhotoSpot_Challenge_10>; using adapter = ::Enum::Scalar<PhotoSpot_Challenge_10>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct PhotoSpot_Challenge_11 : Tag::Enum { using type = ::Enum::Scalar<PhotoSpot_Challenge_11>; using adapter = ::Enum::Scalar<PhotoSpot_Challenge_11>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct PhotoSpot_Challenge_12 : Tag::Enum { using type = ::Enum::Scalar<PhotoSpot_Challenge_12>; using adapter = ::Enum::Scalar<PhotoSpot_Challenge_12>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct PhotoSpot_Challenge_13 : Tag::Enum { using type = ::Enum::Scalar<PhotoSpot_Challenge_13>; using adapter = ::Enum::Scalar<PhotoSpot_Challenge_13>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct PhotoSpot_Challenge_14 : Tag::Enum { using type = ::Enum::Scalar<PhotoSpot_Challenge_14>; using adapter = ::Enum::Scalar<PhotoSpot_Challenge_14>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Raise_GoddesStatue : Tag::Enum { using type = ::Enum::Scalar<Raise_GoddesStatue>; using adapter = ::Enum::Scalar<Raise_GoddesStatue>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Raise_GoddesStatue_Courage : Tag::Enum { using type = ::Enum::Scalar<Raise_GoddesStatue_Courage>; using adapter = ::Enum::Scalar<Raise_GoddesStatue_Courage>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Raise_GoddesStatue_Power : Tag::Enum { using type = ::Enum::Scalar<Raise_GoddesStatue_Power>; using adapter = ::Enum::Scalar<Raise_GoddesStatue_Power>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Raise_GoddesStatue_Wisdom : Tag::Enum { using type = ::Enum::Scalar<Raise_GoddesStatue_Wisdom>; using adapter = ::Enum::Scalar<Raise_GoddesStatue_Wisdom>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct RepairArmor : Tag::Enum { using type = ::Enum::Scalar<RepairArmor>; using adapter = ::Enum::Scalar<RepairArmor>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct RescueHost : Tag::Enum { using type = ::Enum::Scalar<RescueHost>; using adapter = ::Enum::Scalar<RescueHost>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct RescueVehicle01 : Tag::Enum { using type = ::Enum::Scalar<RescueVehicle01>; using adapter = ::Enum::Scalar<RescueVehicle01>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct RescueWell : Tag::Enum { using type = ::Enum::Scalar<RescueWell>; using adapter = ::Enum::Scalar<RescueWell>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct ResearchEldin : Tag::Enum { using type = ::Enum::Scalar<ResearchEldin>; using adapter = ::Enum::Scalar<ResearchEldin>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct ResearchLanayru : Tag::Enum { using type = ::Enum::Scalar<ResearchLanayru>; using adapter = ::Enum::Scalar<ResearchLanayru>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct RestaurantInTheWell : Tag::Enum { using type = ::Enum::Scalar<RestaurantInTheWell>; using adapter = ::Enum::Scalar<RestaurantInTheWell>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Rito_ItemExchange : Tag::Enum { using type = ::Enum::Scalar<Rito_ItemExchange>; using adapter = ::Enum::Scalar<Rito_ItemExchange>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Rito_MedoArmor : Tag::Enum { using type = ::Enum::Scalar<Rito_MedoArmor>; using adapter = ::Enum::Scalar<Rito_MedoArmor>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Rito_RevaliWeapon : Tag::Enum { using type = ::Enum::Scalar<Rito_RevaliWeapon>; using adapter = ::Enum::Scalar<Rito_RevaliWeapon>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Rito_ShadowCave : Tag::Enum { using type = ::Enum::Scalar<Rito_ShadowCave>; using adapter = ::Enum::Scalar<Rito_ShadowCave>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct RitoBridgeRepair : Tag::Enum { using type = ::Enum::Scalar<RitoBridgeRepair>; using adapter = ::Enum::Scalar<RitoBridgeRepair>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct SageOfFire : Tag::Enum { using type = ::Enum::Scalar<SageOfFire>; using adapter = ::Enum::Scalar<SageOfFire>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct SageOfGerudo : Tag::Enum { using type = ::Enum::Scalar<SageOfGerudo>; using adapter = ::Enum::Scalar<SageOfGerudo>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct SageOfSoul : Tag::Enum { using type = ::Enum::Scalar<SageOfSoul>; using adapter = ::Enum::Scalar<SageOfSoul>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct SageOfWind : Tag::Enum { using type = ::Enum::Scalar<SageOfWind>; using adapter = ::Enum::Scalar<SageOfWind>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct SageOfZora : Tag::Enum { using type = ::Enum::Scalar<SageOfZora>; using adapter = ::Enum::Scalar<SageOfZora>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct SaihateSubjugation : Tag::Enum { using type = ::Enum::Scalar<SaihateSubjugation>; using adapter = ::Enum::Scalar<SaihateSubjugation>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct SearchCaravan : Tag::Enum { using type = ::Enum::Scalar<SearchCaravan>; using adapter = ::Enum::Scalar<SearchCaravan>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct SecretBase_MiniGame : Tag::Enum { using type = ::Enum::Scalar<SecretBase_MiniGame>; using adapter = ::Enum::Scalar<SecretBase_MiniGame>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct ShieldSurfing_MiniGame : Tag::Enum { using type = ::Enum::Scalar<ShieldSurfing_MiniGame>; using adapter = ::Enum::Scalar<ShieldSurfing_MiniGame>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct SkyIsland_MiniGame_01 : Tag::Enum { using type = ::Enum::Scalar<SkyIsland_MiniGame_01>; using adapter = ::Enum::Scalar<SkyIsland_MiniGame_01>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct SkyIsland_MiniGame_02 : Tag::Enum { using type = ::Enum::Scalar<SkyIsland_MiniGame_02>; using adapter = ::Enum::Scalar<SkyIsland_MiniGame_02>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct SkyIsland_MiniGame_03 : Tag::Enum { using type = ::Enum::Scalar<SkyIsland_MiniGame_03>; using adapter = ::Enum::Scalar<SkyIsland_MiniGame_03>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct SnowyMountain_Surfing : Tag::Enum { using type = ::Enum::Scalar<SnowyMountain_Surfing>; using adapter = ::Enum::Scalar<SnowyMountain_Surfing>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct StatueDevilTutorial : Tag::Enum { using type = ::Enum::Scalar<StatueDevilTutorial>; using adapter = ::Enum::Scalar<StatueDevilTutorial>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct SurveyOfFourVillages : Tag::Enum { using type = ::Enum::Scalar<SurveyOfFourVillages>; using adapter = ::Enum::Scalar<SurveyOfFourVillages>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct TakeAnimals : Tag::Enum { using type = ::Enum::Scalar<TakeAnimals>; using adapter = ::Enum::Scalar<TakeAnimals>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct TakeOfIce : Tag::Enum { using type = ::Enum::Scalar<TakeOfIce>; using adapter = ::Enum::Scalar<TakeOfIce>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct TauraChallenge001 : Tag::Enum { using type = ::Enum::Scalar<TauraChallenge001>; using adapter = ::Enum::Scalar<TauraChallenge001>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct TheStrongestWeapon : Tag::Enum { using type = ::Enum::Scalar<TheStrongestWeapon>; using adapter = ::Enum::Scalar<TheStrongestWeapon>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct TreasureHunt_kokiri : Tag::Enum { using type = ::Enum::Scalar<TreasureHunt_kokiri>; using adapter = ::Enum::Scalar<TreasureHunt_kokiri>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct TreasureOfLambda : Tag::Enum { using type = ::Enum::Scalar<TreasureOfLambda>; using adapter = ::Enum::Scalar<TreasureOfLambda>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct TreasureOfLamda_Dream : Tag::Enum { using type = ::Enum::Scalar<TreasureOfLamda_Dream>; using adapter = ::Enum::Scalar<TreasureOfLamda_Dream>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct TreasureOfLamda_Dream2 : Tag::Enum { using type = ::Enum::Scalar<TreasureOfLamda_Dream2>; using adapter = ::Enum::Scalar<TreasureOfLamda_Dream2>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct TreasureOfLamda_Dream3 : Tag::Enum { using type = ::Enum::Scalar<TreasureOfLamda_Dream3>; using adapter = ::Enum::Scalar<TreasureOfLamda_Dream3>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct TreasureOfLamda_DuelPeak : Tag::Enum { using type = ::Enum::Scalar<TreasureOfLamda_DuelPeak>; using adapter = ::Enum::Scalar<TreasureOfLamda_DuelPeak>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct TreasureOfLamda_FierceDeity : Tag::Enum { using type = ::Enum::Scalar<TreasureOfLamda_FierceDeity>; using adapter = ::Enum::Scalar<TreasureOfLamda_FierceDeity>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct TreasureOfLamda_Gerudo : Tag::Enum { using type = ::Enum::Scalar<TreasureOfLamda_Gerudo>; using adapter = ::Enum::Scalar<TreasureOfLamda_Gerudo>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct TreasureOfLamda_Pirate : Tag::Enum { using type = ::Enum::Scalar<TreasureOfLamda_Pirate>; using adapter = ::Enum::Scalar<TreasureOfLamda_Pirate>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Tribune01 : Tag::Enum { using type = ::Enum::Scalar<Tribune01>; using adapter = ::Enum::Scalar<Tribune01>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Tribune02 : Tag::Enum { using type = ::Enum::Scalar<Tribune02>; using adapter = ::Enum::Scalar<Tribune02>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Tribune03 : Tag::Enum { using type = ::Enum::Scalar<Tribune03>; using adapter = ::Enum::Scalar<Tribune03>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Tribune04 : Tag::Enum { using type = ::Enum::Scalar<Tribune04>; using adapter = ::Enum::Scalar<Tribune04>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Tribune05 : Tag::Enum { using type = ::Enum::Scalar<Tribune05>; using adapter = ::Enum::Scalar<Tribune05>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Tribune06 : Tag::Enum { using type = ::Enum::Scalar<Tribune06>; using adapter = ::Enum::Scalar<Tribune06>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Tribune07 : Tag::Enum { using type = ::Enum::Scalar<Tribune07>; using adapter = ::Enum::Scalar<Tribune07>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Tribune09 : Tag::Enum { using type = ::Enum::Scalar<Tribune09>; using adapter = ::Enum::Scalar<Tribune09>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Tribune10 : Tag::Enum { using type = ::Enum::Scalar<Tribune10>; using adapter = ::Enum::Scalar<Tribune10>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Tribune11 : Tag::Enum { using type = ::Enum::Scalar<Tribune11>; using adapter = ::Enum::Scalar<Tribune11>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Tribune13 : Tag::Enum { using type = ::Enum::Scalar<Tribune13>; using adapter = ::Enum::Scalar<Tribune13>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Tribune14 : Tag::Enum { using type = ::Enum::Scalar<Tribune14>; using adapter = ::Enum::Scalar<Tribune14>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Tribune16 : Tag::Enum { using type = ::Enum::Scalar<Tribune16>; using adapter = ::Enum::Scalar<Tribune16>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Uotori_Designer : Tag::Enum { using type = ::Enum::Scalar<Uotori_Designer>; using adapter = ::Enum::Scalar<Uotori_Designer>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Uotori_ResortPlan : Tag::Enum { using type = ::Enum::Scalar<Uotori_ResortPlan>; using adapter = ::Enum::Scalar<Uotori_ResortPlan>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Uotori_RevivePlan : Tag::Enum { using type = ::Enum::Scalar<Uotori_RevivePlan>; using adapter = ::Enum::Scalar<Uotori_RevivePlan>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Uotori_WhiteLineGame : Tag::Enum { using type = ::Enum::Scalar<Uotori_WhiteLineGame>; using adapter = ::Enum::Scalar<Uotori_WhiteLineGame>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct WashedAwayBusinessTools : Tag::Enum { using type = ::Enum::Scalar<WashedAwayBusinessTools>; using adapter = ::Enum::Scalar<WashedAwayBusinessTools>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct WaterBridgePlace : Tag::Enum { using type = ::Enum::Scalar<WaterBridgePlace>; using adapter = ::Enum::Scalar<WaterBridgePlace>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct WellCollection : Tag::Enum { using type = ::Enum::Scalar<WellCollection>; using adapter = ::Enum::Scalar<WellCollection>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct WhichIsStronger : Tag::Enum { using type = ::Enum::Scalar<WhichIsStronger>; using adapter = ::Enum::Scalar<WhichIsStronger>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Zonau_GeniusWeapon : Tag::Enum { using type = ::Enum::Scalar<Zonau_GeniusWeapon>; using adapter = ::Enum::Scalar<Zonau_GeniusWeapon>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct ZonauReliefSearch : Tag::Enum { using type = ::Enum::Scalar<ZonauReliefSearch>; using adapter = ::Enum::Scalar<ZonauReliefSearch>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Zora_Enemy_hunt : Tag::Enum { using type = ::Enum::Scalar<Zora_Enemy_hunt>; using adapter = ::Enum::Scalar<Zora_Enemy_hunt>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Zora_MessageBottle : Tag::Enum { using type = ::Enum::Scalar<Zora_MessageBottle>; using adapter = ::Enum::Scalar<Zora_MessageBottle>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct Zora_RuttaTreasure : Tag::Enum { using type = ::Enum::Scalar<Zora_RuttaTreasure>; using adapter = ::Enum::Scalar<Zora_RuttaTreasure>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
	struct ZoraStatue_Picture : Tag::Enum { using type = ::Enum::Scalar<ZoraStatue_Picture>; using adapter = ::Enum::Scalar<ZoraStatue_Picture>; enum enum_type : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
};/* Tag::Structure GameData::ChallengeLogState_Challenge close */

template <> struct Data::Structure<GameData::ChallengeLogState_Challenge> : GameData::ChallengeLogState_Challenge {
	AisyaRescue::type AisyaRescue;
	AmberCollector::type AmberCollector;
	ArrowMeister_Momo::type ArrowMeister_Momo;
	AssassinGerudoBase::type AssassinGerudoBase;
	BallBring_MiniGame::type BallBring_MiniGame;
	Basketball_MiniGame::type Basketball_MiniGame;
	Big_Rotate::type Big_Rotate;
	BirdManContest::type BirdManContest;
	BlindRuinsTreasure::type BlindRuinsTreasure;
	BlindRuinsTreasure_Gerudo::type BlindRuinsTreasure_Gerudo;
	BlindRuinsTreasure_Goron::type BlindRuinsTreasure_Goron;
	BlindRuinsTreasure_Rito::type BlindRuinsTreasure_Rito;
	BlindRuinsTreasure_Zora::type BlindRuinsTreasure_Zora;
	BuildHouse::type BuildHouse;
	BuildingMaterialsTutorial::type BuildingMaterialsTutorial;
	CarryGoronKid1::type CarryGoronKid1;
	CarryGoronKid2::type CarryGoronKid2;
	CarryStone::type CarryStone;
	CarryToShrine01::type CarryToShrine01;
	CarryToShrine02::type CarryToShrine02;
	CarryToShrine03::type CarryToShrine03;
	CarryToShrine05::type CarryToShrine05;
	CarryToShrine06::type CarryToShrine06;
	CarryToShrine07::type CarryToShrine07;
	CarryToShrine08_Zora::type CarryToShrine08_Zora;
	CarryToShrine09::type CarryToShrine09;
	CarryToShrine10::type CarryToShrine10;
	CarryToShrine11::type CarryToShrine11;
	CarryToShrine12::type CarryToShrine12;
	CarryToShrine13::type CarryToShrine13;
	CarryToShrine14::type CarryToShrine14;
	CarryToShrine15::type CarryToShrine15;
	CarryToShrine16::type CarryToShrine16;
	CarryToShrine17::type CarryToShrine17;
	CarryToShrine19::type CarryToShrine19;
	CarryToShrine20::type CarryToShrine20;
	CarryToShrine21::type CarryToShrine21;
	CarryToShrine22::type CarryToShrine22;
	CarryToShrine23::type CarryToShrine23;
	CDungeon_AllDone::type CDungeon_AllDone;
	Circuit_Desert::type Circuit_Desert;
	Circuit_FaronWoods_MiniGame::type Circuit_FaronWoods_MiniGame;
	Circuit_Ichikara::type Circuit_Ichikara;
	Circuit_Ichikara_MiniGame::type Circuit_Ichikara_MiniGame;
	Circuit_Uotori_MiniGame::type Circuit_Uotori_MiniGame;
	CleanStatue::type CleanStatue;
	ClueTotheSixthSage::type ClueTotheSixthSage;
	CollectObject_MiniGame::type CollectObject_MiniGame;
	CollectObject_MiniGame_Cliff::type CollectObject_MiniGame_Cliff;
	CollectObject_MiniGame_LakeSide::type CollectObject_MiniGame_LakeSide;
	Connect_AkkareMaze::type Connect_AkkareMaze;
	Connect_FirstIsland::type Connect_FirstIsland;
	Connect_GerudoMaze::type Connect_GerudoMaze;
	Connect_TabantaMaze::type Connect_TabantaMaze;
	CookAtBaseCamp::type CookAtBaseCamp;
	CraftShadowPicture::type CraftShadowPicture;
	CreateArmor::type CreateArmor;
	Createshinguard::type Createshinguard;
	DeepHoleSurvey2::type DeepHoleSurvey2;
	DefeatGanondorf::type DefeatGanondorf;
	DefeatHugeEnemy_1::type DefeatHugeEnemy_1;
	DefeatHugeEnemy_2::type DefeatHugeEnemy_2;
	DefeatHugeEnemy_3::type DefeatHugeEnemy_3;
	DefeatHugeEnemy_4::type DefeatHugeEnemy_4;
	DefeatHugeEnemy_5::type DefeatHugeEnemy_5;
	DefeatHugeEnemy_6::type DefeatHugeEnemy_6;
	DevoteSpring::type DevoteSpring;
	DividedSlate::type DividedSlate;
	EightHeroStatues::type EightHeroStatues;
	EightHeroStatues_After::type EightHeroStatues_After;
	ExcavateFossil1::type ExcavateFossil1;
	ExcavateFossil2::type ExcavateFossil2;
	ExcavateFossil3::type ExcavateFossil3;
	Fairy2::type Fairy2;
	Fairy3::type Fairy3;
	Fairy4::type Fairy4;
	FindSunaNui::type FindSunaNui;
	FindSunaNui2::type FindSunaNui2;
	FindWhiteHorse::type FindWhiteHorse;
	FindWithSensors::type FindWithSensors;
	FirstskyislandReturns::type FirstskyislandReturns;
	FullyRipenedFlintstones::type FullyRipenedFlintstones;
	gather_Insect_Z::type gather_Insect_Z;
	GeniusWeapon_Zora::type GeniusWeapon_Zora;
	Genkos_Kitchen::type Genkos_Kitchen;
	Gerudo_UrbosaWeapon::type Gerudo_UrbosaWeapon;
	GerudoCanyon_24hEnduranceComparison::type GerudoCanyon_24hEnduranceComparison;
	GerudoCanyon_Adventure::type GerudoCanyon_Adventure;
	GerudoCanyon_ColdEnduranceComparison::type GerudoCanyon_ColdEnduranceComparison;
	GerudoCanyon_GleeokLiver::type GerudoCanyon_GleeokLiver;
	GerudoCanyon_TumbleweedSweep::type GerudoCanyon_TumbleweedSweep;
	GerudoDesertTreasure::type GerudoDesertTreasure;
	GetCamera::type GetCamera;
	GetMasterSword::type GetMasterSword;
	GetSensorPlus::type GetSensorPlus;
	GetWalker::type GetWalker;
	GetWarpMarker::type GetWarpMarker;
	GiantHorse::type GiantHorse;
	GoneSnowQueen::type GoneSnowQueen;
	Goron_MiniGame_01::type Goron_MiniGame_01;
	Goron_MiniGame_02::type Goron_MiniGame_02;
	Goron_MiniGame_03::type Goron_MiniGame_03;
	Goron_MiniGame_Tutorial_01::type Goron_MiniGame_Tutorial_01;
	Goron_MiniGame_Tutorial_02::type Goron_MiniGame_Tutorial_02;
	Goron_MiniGame_Tutorial_03::type Goron_MiniGame_Tutorial_03;
	GoronPond::type GoronPond;
	GoronReturntoNature::type GoronReturntoNature;
	GotoFironeZonauRemains::type GotoFironeZonauRemains;
	GOToTheCastleOfHyrule::type GOToTheCastleOfHyrule;
	GroundPaintingAir01::type GroundPaintingAir01;
	Hack_GuardGoods::type Hack_GuardGoods;
	HammerGong_MiniGame::type HammerGong_MiniGame;
	Hateno_Cheese::type Hateno_Cheese;
	Hateno_CoolGuy::type Hateno_CoolGuy;
	Hateno_FreshMilk::type Hateno_FreshMilk;
	Hateno_LetUsElection::type Hateno_LetUsElection;
	Hateno_NewCostume::type Hateno_NewCostume;
	Hateno_NewSpecialty::type Hateno_NewSpecialty;
	Hateno_RevitalizeByNewSpeciality::type Hateno_RevitalizeByNewSpeciality;
	Hateno_SecretLifeOfKusayoshi::type Hateno_SecretLifeOfKusayoshi;
	Hateno_SecretLifeOfSagono::type Hateno_SecretLifeOfSagono;
	Hateno_TellMeTeacher01::type Hateno_TellMeTeacher01;
	Hateno_TellMeTeacher02::type Hateno_TellMeTeacher02;
	Hateno_VillageMayorElection::type Hateno_VillageMayorElection;
	Hateno_WhatToPlant::type Hateno_WhatToPlant;
	HatenoPurchasePicture::type HatenoPurchasePicture;
	Hebra_SkyRingChallenge::type Hebra_SkyRingChallenge;
	Hebra_SkyRingChallenge_MiniGame::type Hebra_SkyRingChallenge_MiniGame;
	HorseInnChallenge001::type HorseInnChallenge001;
	HorseInnChallenge002::type HorseInnChallenge002;
	HorseInnChallenge003::type HorseInnChallenge003;
	HorseInnChallenge005::type HorseInnChallenge005;
	HorseInnChallenge007::type HorseInnChallenge007;
	HotSpringEgg::type HotSpringEgg;
	HourseInnChallenge004::type HourseInnChallenge004;
	HuntSalmon::type HuntSalmon;
	HyruleCastleIncident::type HyruleCastleIncident;
	IceMaking::type IceMaking;
	IchikaraChallenge01::type IchikaraChallenge01;
	IchikaraChallenge03::type IchikaraChallenge03;
	IchikaraCircuit_Tutorial::type IchikaraCircuit_Tutorial;
	IchikaraDaughterPhoto::type IchikaraDaughterPhoto;
	IllnessStartsWithFeelings::type IllnessStartsWithFeelings;
	InfiltrationFromTheSky::type InfiltrationFromTheSky;
	InnNeverReturns::type InnNeverReturns;
	JobSunazarashi::type JobSunazarashi;
	Know_FourStonePlates::type Know_FourStonePlates;
	KokkoGuidePost::type KokkoGuidePost;
	Korok_CarryToShrine::type Korok_CarryToShrine;
	Lodge_Chemical001::type Lodge_Chemical001;
	LookingForLightSpot::type LookingForLightSpot;
	LookingForTheVoiceLord::type LookingForTheVoiceLord;
	Mack_SecretBase::type Mack_SecretBase;
	MainChallenge::type MainChallenge;
	MakeAChampionsWeapon_Goron::type MakeAChampionsWeapon_Goron;
	MakeChemicalWeapon::type MakeChemicalWeapon;
	MasterSwordClues::type MasterSwordClues;
	MeatRock::type MeatRock;
	MemoryOfTheDragon::type MemoryOfTheDragon;
	Mercenary_Akkare_Bloody::type Mercenary_Akkare_Bloody;
	Mercenary_Eldin_Bloody::type Mercenary_Eldin_Bloody;
	Mercenary_Firone_Bloody::type Mercenary_Firone_Bloody;
	Mercenary_Hateru_Bloody::type Mercenary_Hateru_Bloody;
	Mercenary_Hebra_Bloody::type Mercenary_Hebra_Bloody;
	Mercenary_HyrulePlain_Bloody::type Mercenary_HyrulePlain_Bloody;
	MercenaryChallenge_Akkare::type MercenaryChallenge_Akkare;
	MercenaryChallenge_Eldin::type MercenaryChallenge_Eldin;
	MercenaryChallenge_Firone::type MercenaryChallenge_Firone;
	MercenaryChallenge_Hateru::type MercenaryChallenge_Hateru;
	MercenaryChallenge_Hebra::type MercenaryChallenge_Hebra;
	MercenaryChallenge_HyrulePlain::type MercenaryChallenge_HyrulePlain;
	MessageBottle_SOS::type MessageBottle_SOS;
	MinusYiga::type MinusYiga;
	MonsterFigures01::type MonsterFigures01;
	MonsterFigures02::type MonsterFigures02;
	MonsterFigures03::type MonsterFigures03;
	MonsterFigures04::type MonsterFigures04;
	MonsterFigures05::type MonsterFigures05;
	MushroomSisters_1::type MushroomSisters_1;
	MushroomSisters_2::type MushroomSisters_2;
	MushroomSisters_3::type MushroomSisters_3;
	Nazley_DigCave::type Nazley_DigCave;
	Neck_IceWaterCave::type Neck_IceWaterCave;
	NewCanyonMissingPersonsCase::type NewCanyonMissingPersonsCase;
	NewsPaper_Mitsuba::type NewsPaper_Mitsuba;
	NoTrespassing::type NoTrespassing;
	NowInTheVillageOfLurelin::type NowInTheVillageOfLurelin;
	Npc_BaseCamp_Assistant_ReactingStatue::type Npc_BaseCamp_Assistant_ReactingStatue;
	Npc_BaseCamp_Assistant_ReactingStatue2::type Npc_BaseCamp_Assistant_ReactingStatue2;
	Npc_BaseCamp_Assistant_ReactingStatue3::type Npc_BaseCamp_Assistant_ReactingStatue3;
	Npc_BaseCamp_Assistant_ReactingStatue4::type Npc_BaseCamp_Assistant_ReactingStatue4;
	NushiShop_Challenge00::type NushiShop_Challenge00;
	NushiShop_Tutorial::type NushiShop_Tutorial;
	OldKorokHelp::type OldKorokHelp;
	Orchestra02::type Orchestra02;
	Orchestra03::type Orchestra03;
	Orchestra04::type Orchestra04;
	Our_Treasure::type Our_Treasure;
	Parasail_ChuchuDesign::type Parasail_ChuchuDesign;
	PhotoSpot_Challenge_01::type PhotoSpot_Challenge_01;
	PhotoSpot_Challenge_02::type PhotoSpot_Challenge_02;
	PhotoSpot_Challenge_03::type PhotoSpot_Challenge_03;
	PhotoSpot_Challenge_04::type PhotoSpot_Challenge_04;
	PhotoSpot_Challenge_05::type PhotoSpot_Challenge_05;
	PhotoSpot_Challenge_06::type PhotoSpot_Challenge_06;
	PhotoSpot_Challenge_07::type PhotoSpot_Challenge_07;
	PhotoSpot_Challenge_08::type PhotoSpot_Challenge_08;
	PhotoSpot_Challenge_09::type PhotoSpot_Challenge_09;
	PhotoSpot_Challenge_09_2::type PhotoSpot_Challenge_09_2;
	PhotoSpot_Challenge_10::type PhotoSpot_Challenge_10;
	PhotoSpot_Challenge_11::type PhotoSpot_Challenge_11;
	PhotoSpot_Challenge_12::type PhotoSpot_Challenge_12;
	PhotoSpot_Challenge_13::type PhotoSpot_Challenge_13;
	PhotoSpot_Challenge_14::type PhotoSpot_Challenge_14;
	Raise_GoddesStatue::type Raise_GoddesStatue;
	Raise_GoddesStatue_Courage::type Raise_GoddesStatue_Courage;
	Raise_GoddesStatue_Power::type Raise_GoddesStatue_Power;
	Raise_GoddesStatue_Wisdom::type Raise_GoddesStatue_Wisdom;
	RepairArmor::type RepairArmor;
	RescueHost::type RescueHost;
	RescueVehicle01::type RescueVehicle01;
	RescueWell::type RescueWell;
	ResearchEldin::type ResearchEldin;
	ResearchLanayru::type ResearchLanayru;
	RestaurantInTheWell::type RestaurantInTheWell;
	Rito_ItemExchange::type Rito_ItemExchange;
	Rito_MedoArmor::type Rito_MedoArmor;
	Rito_RevaliWeapon::type Rito_RevaliWeapon;
	Rito_ShadowCave::type Rito_ShadowCave;
	RitoBridgeRepair::type RitoBridgeRepair;
	SageOfFire::type SageOfFire;
	SageOfGerudo::type SageOfGerudo;
	SageOfSoul::type SageOfSoul;
	SageOfWind::type SageOfWind;
	SageOfZora::type SageOfZora;
	SaihateSubjugation::type SaihateSubjugation;
	SearchCaravan::type SearchCaravan;
	SecretBase_MiniGame::type SecretBase_MiniGame;
	ShieldSurfing_MiniGame::type ShieldSurfing_MiniGame;
	SkyIsland_MiniGame_01::type SkyIsland_MiniGame_01;
	SkyIsland_MiniGame_02::type SkyIsland_MiniGame_02;
	SkyIsland_MiniGame_03::type SkyIsland_MiniGame_03;
	SnowyMountain_Surfing::type SnowyMountain_Surfing;
	StatueDevilTutorial::type StatueDevilTutorial;
	SurveyOfFourVillages::type SurveyOfFourVillages;
	TakeAnimals::type TakeAnimals;
	TakeOfIce::type TakeOfIce;
	TauraChallenge001::type TauraChallenge001;
	TheStrongestWeapon::type TheStrongestWeapon;
	TreasureHunt_kokiri::type TreasureHunt_kokiri;
	TreasureOfLambda::type TreasureOfLambda;
	TreasureOfLamda_Dream::type TreasureOfLamda_Dream;
	TreasureOfLamda_Dream2::type TreasureOfLamda_Dream2;
	TreasureOfLamda_Dream3::type TreasureOfLamda_Dream3;
	TreasureOfLamda_DuelPeak::type TreasureOfLamda_DuelPeak;
	TreasureOfLamda_FierceDeity::type TreasureOfLamda_FierceDeity;
	TreasureOfLamda_Gerudo::type TreasureOfLamda_Gerudo;
	TreasureOfLamda_Pirate::type TreasureOfLamda_Pirate;
	Tribune01::type Tribune01;
	Tribune02::type Tribune02;
	Tribune03::type Tribune03;
	Tribune04::type Tribune04;
	Tribune05::type Tribune05;
	Tribune06::type Tribune06;
	Tribune07::type Tribune07;
	Tribune09::type Tribune09;
	Tribune10::type Tribune10;
	Tribune11::type Tribune11;
	Tribune13::type Tribune13;
	Tribune14::type Tribune14;
	Tribune16::type Tribune16;
	Uotori_Designer::type Uotori_Designer;
	Uotori_ResortPlan::type Uotori_ResortPlan;
	Uotori_RevivePlan::type Uotori_RevivePlan;
	Uotori_WhiteLineGame::type Uotori_WhiteLineGame;
	WashedAwayBusinessTools::type WashedAwayBusinessTools;
	WaterBridgePlace::type WaterBridgePlace;
	WellCollection::type WellCollection;
	WhichIsStronger::type WhichIsStronger;
	Zonau_GeniusWeapon::type Zonau_GeniusWeapon;
	ZonauReliefSearch::type ZonauReliefSearch;
	Zora_Enemy_hunt::type Zora_Enemy_hunt;
	Zora_MessageBottle::type Zora_MessageBottle;
	Zora_RuttaTreasure::type Zora_RuttaTreasure;
	ZoraStatue_Picture::type ZoraStatue_Picture;
	
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