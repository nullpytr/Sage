#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::ChallengeLogState_Challenge : Tag::Structure {
	struct AisyaRescue : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct AmberCollector : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct ArrowMeister_Momo : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct AssassinGerudoBase : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct BallBring_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Basketball_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Big_Rotate : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct BirdManContest : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct BlindRuinsTreasure : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct BlindRuinsTreasure_Gerudo : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct BlindRuinsTreasure_Goron : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct BlindRuinsTreasure_Rito : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct BlindRuinsTreasure_Zora : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct BuildHouse : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct BuildingMaterialsTutorial : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryGoronKid1 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryGoronKid2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryStone : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine05 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine06 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine07 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine08_Zora : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine09 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine10 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine11 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine12 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine13 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine14 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine15 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine16 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine17 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine19 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine20 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine21 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine22 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CarryToShrine23 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CDungeon_AllDone : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Circuit_Desert : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Circuit_FaronWoods_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Circuit_Ichikara : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Circuit_Ichikara_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Circuit_Uotori_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CleanStatue : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct ClueTotheSixthSage : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CollectObject_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CollectObject_MiniGame_Cliff : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CollectObject_MiniGame_LakeSide : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Connect_AkkareMaze : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Connect_FirstIsland : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Connect_GerudoMaze : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Connect_TabantaMaze : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CookAtBaseCamp : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CraftShadowPicture : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct CreateArmor : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Createshinguard : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct DeepHoleSurvey2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct DefeatGanondorf : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct DefeatHugeEnemy_1 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct DefeatHugeEnemy_2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct DefeatHugeEnemy_3 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct DefeatHugeEnemy_4 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct DefeatHugeEnemy_5 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct DefeatHugeEnemy_6 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct DevoteSpring : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct DividedSlate : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct EightHeroStatues : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct EightHeroStatues_After : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct ExcavateFossil1 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct ExcavateFossil2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct ExcavateFossil3 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Fairy2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Fairy3 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Fairy4 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct FindSunaNui : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct FindSunaNui2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct FindWhiteHorse : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct FindWithSensors : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct FirstskyislandReturns : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct FullyRipenedFlintstones : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct gather_Insect_Z : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct GeniusWeapon_Zora : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Genkos_Kitchen : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Gerudo_UrbosaWeapon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct GerudoCanyon_24hEnduranceComparison : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct GerudoCanyon_Adventure : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct GerudoCanyon_ColdEnduranceComparison : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct GerudoCanyon_GleeokLiver : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct GerudoCanyon_TumbleweedSweep : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct GerudoDesertTreasure : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct GetCamera : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct GetMasterSword : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct GetSensorPlus : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct GetWalker : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct GetWarpMarker : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct GiantHorse : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct GoneSnowQueen : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Goron_MiniGame_01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Goron_MiniGame_02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Goron_MiniGame_03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Goron_MiniGame_Tutorial_01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Goron_MiniGame_Tutorial_02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Goron_MiniGame_Tutorial_03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct GoronPond : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct GoronReturntoNature : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct GotoFironeZonauRemains : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct GOToTheCastleOfHyrule : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct GroundPaintingAir01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Hack_GuardGoods : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct HammerGong_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Hateno_Cheese : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Hateno_CoolGuy : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Hateno_FreshMilk : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Hateno_LetUsElection : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Hateno_NewCostume : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Hateno_NewSpecialty : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Hateno_RevitalizeByNewSpeciality : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Hateno_SecretLifeOfKusayoshi : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Hateno_SecretLifeOfSagono : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Hateno_TellMeTeacher01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Hateno_TellMeTeacher02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Hateno_VillageMayorElection : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Hateno_WhatToPlant : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct HatenoPurchasePicture : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Hebra_SkyRingChallenge : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Hebra_SkyRingChallenge_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct HorseInnChallenge001 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct HorseInnChallenge002 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct HorseInnChallenge003 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct HorseInnChallenge005 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct HorseInnChallenge007 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct HotSpringEgg : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct HourseInnChallenge004 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct HuntSalmon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct HyruleCastleIncident : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct IceMaking : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct IchikaraChallenge01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct IchikaraChallenge03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct IchikaraCircuit_Tutorial : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct IchikaraDaughterPhoto : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct IllnessStartsWithFeelings : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct InfiltrationFromTheSky : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct InnNeverReturns : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct JobSunazarashi : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Know_FourStonePlates : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct KokkoGuidePost : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Korok_CarryToShrine : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Lodge_Chemical001 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct LookingForLightSpot : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct LookingForTheVoiceLord : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Mack_SecretBase : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MainChallenge : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MakeAChampionsWeapon_Goron : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MakeChemicalWeapon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MasterSwordClues : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MeatRock : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MemoryOfTheDragon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Mercenary_Akkare_Bloody : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Mercenary_Eldin_Bloody : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Mercenary_Firone_Bloody : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Mercenary_Hateru_Bloody : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Mercenary_Hebra_Bloody : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Mercenary_HyrulePlain_Bloody : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MercenaryChallenge_Akkare : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MercenaryChallenge_Eldin : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MercenaryChallenge_Firone : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MercenaryChallenge_Hateru : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MercenaryChallenge_Hebra : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MercenaryChallenge_HyrulePlain : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MessageBottle_SOS : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MinusYiga : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MonsterFigures01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MonsterFigures02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MonsterFigures03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MonsterFigures04 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MonsterFigures05 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MushroomSisters_1 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MushroomSisters_2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct MushroomSisters_3 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Nazley_DigCave : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Neck_IceWaterCave : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct NewCanyonMissingPersonsCase : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct NewsPaper_Mitsuba : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct NoTrespassing : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct NowInTheVillageOfLurelin : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Npc_BaseCamp_Assistant_ReactingStatue : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Npc_BaseCamp_Assistant_ReactingStatue2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Npc_BaseCamp_Assistant_ReactingStatue3 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Npc_BaseCamp_Assistant_ReactingStatue4 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct NushiShop_Challenge00 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct NushiShop_Tutorial : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct OldKorokHelp : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Orchestra02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Orchestra03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Orchestra04 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Our_Treasure : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Parasail_ChuchuDesign : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct PhotoSpot_Challenge_01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct PhotoSpot_Challenge_02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct PhotoSpot_Challenge_03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct PhotoSpot_Challenge_04 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct PhotoSpot_Challenge_05 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct PhotoSpot_Challenge_06 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct PhotoSpot_Challenge_07 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct PhotoSpot_Challenge_08 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct PhotoSpot_Challenge_09 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct PhotoSpot_Challenge_09_2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct PhotoSpot_Challenge_10 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct PhotoSpot_Challenge_11 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct PhotoSpot_Challenge_12 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct PhotoSpot_Challenge_13 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct PhotoSpot_Challenge_14 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Raise_GoddesStatue : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Raise_GoddesStatue_Courage : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Raise_GoddesStatue_Power : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Raise_GoddesStatue_Wisdom : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct RepairArmor : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct RescueHost : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct RescueVehicle01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct RescueWell : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct ResearchEldin : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct ResearchLanayru : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct RestaurantInTheWell : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Rito_ItemExchange : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Rito_MedoArmor : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Rito_RevaliWeapon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Rito_ShadowCave : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct RitoBridgeRepair : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct SageOfFire : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct SageOfGerudo : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct SageOfSoul : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct SageOfWind : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct SageOfZora : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct SaihateSubjugation : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct SearchCaravan : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct SecretBase_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct ShieldSurfing_MiniGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct SkyIsland_MiniGame_01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct SkyIsland_MiniGame_02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct SkyIsland_MiniGame_03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct SnowyMountain_Surfing : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct StatueDevilTutorial : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct SurveyOfFourVillages : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct TakeAnimals : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct TakeOfIce : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct TauraChallenge001 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct TheStrongestWeapon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct TreasureHunt_kokiri : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct TreasureOfLambda : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct TreasureOfLamda_Dream : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct TreasureOfLamda_Dream2 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct TreasureOfLamda_Dream3 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct TreasureOfLamda_DuelPeak : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct TreasureOfLamda_FierceDeity : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct TreasureOfLamda_Gerudo : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct TreasureOfLamda_Pirate : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Tribune01 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Tribune02 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Tribune03 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Tribune04 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Tribune05 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Tribune06 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Tribune07 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Tribune09 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Tribune10 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Tribune11 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Tribune13 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Tribune14 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Tribune16 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Uotori_Designer : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Uotori_ResortPlan : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Uotori_RevivePlan : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Uotori_WhiteLineGame : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct WashedAwayBusinessTools : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct WaterBridgePlace : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct WellCollection : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct WhichIsStronger : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Zonau_GeniusWeapon : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct ZonauReliefSearch : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Zora_Enemy_hunt : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Zora_MessageBottle : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct Zora_RuttaTreasure : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
	struct ZoraStatue_Picture : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), New = murmurhash3::hash("New"), Update = murmurhash3::hash("Update"), }; };
		using type = enum_t<values_t>;
	};
};/* Tag::Structure GameData::ChallengeLogState_Challenge close */

template <> struct Data::Structure<GameData::ChallengeLogState_Challenge> : GameData::ChallengeLogState_Challenge {
	Data::Enum<AisyaRescue> AisyaRescue;
	Data::Enum<AmberCollector> AmberCollector;
	Data::Enum<ArrowMeister_Momo> ArrowMeister_Momo;
	Data::Enum<AssassinGerudoBase> AssassinGerudoBase;
	Data::Enum<BallBring_MiniGame> BallBring_MiniGame;
	Data::Enum<Basketball_MiniGame> Basketball_MiniGame;
	Data::Enum<Big_Rotate> Big_Rotate;
	Data::Enum<BirdManContest> BirdManContest;
	Data::Enum<BlindRuinsTreasure> BlindRuinsTreasure;
	Data::Enum<BlindRuinsTreasure_Gerudo> BlindRuinsTreasure_Gerudo;
	Data::Enum<BlindRuinsTreasure_Goron> BlindRuinsTreasure_Goron;
	Data::Enum<BlindRuinsTreasure_Rito> BlindRuinsTreasure_Rito;
	Data::Enum<BlindRuinsTreasure_Zora> BlindRuinsTreasure_Zora;
	Data::Enum<BuildHouse> BuildHouse;
	Data::Enum<BuildingMaterialsTutorial> BuildingMaterialsTutorial;
	Data::Enum<CarryGoronKid1> CarryGoronKid1;
	Data::Enum<CarryGoronKid2> CarryGoronKid2;
	Data::Enum<CarryStone> CarryStone;
	Data::Enum<CarryToShrine01> CarryToShrine01;
	Data::Enum<CarryToShrine02> CarryToShrine02;
	Data::Enum<CarryToShrine03> CarryToShrine03;
	Data::Enum<CarryToShrine05> CarryToShrine05;
	Data::Enum<CarryToShrine06> CarryToShrine06;
	Data::Enum<CarryToShrine07> CarryToShrine07;
	Data::Enum<CarryToShrine08_Zora> CarryToShrine08_Zora;
	Data::Enum<CarryToShrine09> CarryToShrine09;
	Data::Enum<CarryToShrine10> CarryToShrine10;
	Data::Enum<CarryToShrine11> CarryToShrine11;
	Data::Enum<CarryToShrine12> CarryToShrine12;
	Data::Enum<CarryToShrine13> CarryToShrine13;
	Data::Enum<CarryToShrine14> CarryToShrine14;
	Data::Enum<CarryToShrine15> CarryToShrine15;
	Data::Enum<CarryToShrine16> CarryToShrine16;
	Data::Enum<CarryToShrine17> CarryToShrine17;
	Data::Enum<CarryToShrine19> CarryToShrine19;
	Data::Enum<CarryToShrine20> CarryToShrine20;
	Data::Enum<CarryToShrine21> CarryToShrine21;
	Data::Enum<CarryToShrine22> CarryToShrine22;
	Data::Enum<CarryToShrine23> CarryToShrine23;
	Data::Enum<CDungeon_AllDone> CDungeon_AllDone;
	Data::Enum<Circuit_Desert> Circuit_Desert;
	Data::Enum<Circuit_FaronWoods_MiniGame> Circuit_FaronWoods_MiniGame;
	Data::Enum<Circuit_Ichikara> Circuit_Ichikara;
	Data::Enum<Circuit_Ichikara_MiniGame> Circuit_Ichikara_MiniGame;
	Data::Enum<Circuit_Uotori_MiniGame> Circuit_Uotori_MiniGame;
	Data::Enum<CleanStatue> CleanStatue;
	Data::Enum<ClueTotheSixthSage> ClueTotheSixthSage;
	Data::Enum<CollectObject_MiniGame> CollectObject_MiniGame;
	Data::Enum<CollectObject_MiniGame_Cliff> CollectObject_MiniGame_Cliff;
	Data::Enum<CollectObject_MiniGame_LakeSide> CollectObject_MiniGame_LakeSide;
	Data::Enum<Connect_AkkareMaze> Connect_AkkareMaze;
	Data::Enum<Connect_FirstIsland> Connect_FirstIsland;
	Data::Enum<Connect_GerudoMaze> Connect_GerudoMaze;
	Data::Enum<Connect_TabantaMaze> Connect_TabantaMaze;
	Data::Enum<CookAtBaseCamp> CookAtBaseCamp;
	Data::Enum<CraftShadowPicture> CraftShadowPicture;
	Data::Enum<CreateArmor> CreateArmor;
	Data::Enum<Createshinguard> Createshinguard;
	Data::Enum<DeepHoleSurvey2> DeepHoleSurvey2;
	Data::Enum<DefeatGanondorf> DefeatGanondorf;
	Data::Enum<DefeatHugeEnemy_1> DefeatHugeEnemy_1;
	Data::Enum<DefeatHugeEnemy_2> DefeatHugeEnemy_2;
	Data::Enum<DefeatHugeEnemy_3> DefeatHugeEnemy_3;
	Data::Enum<DefeatHugeEnemy_4> DefeatHugeEnemy_4;
	Data::Enum<DefeatHugeEnemy_5> DefeatHugeEnemy_5;
	Data::Enum<DefeatHugeEnemy_6> DefeatHugeEnemy_6;
	Data::Enum<DevoteSpring> DevoteSpring;
	Data::Enum<DividedSlate> DividedSlate;
	Data::Enum<EightHeroStatues> EightHeroStatues;
	Data::Enum<EightHeroStatues_After> EightHeroStatues_After;
	Data::Enum<ExcavateFossil1> ExcavateFossil1;
	Data::Enum<ExcavateFossil2> ExcavateFossil2;
	Data::Enum<ExcavateFossil3> ExcavateFossil3;
	Data::Enum<Fairy2> Fairy2;
	Data::Enum<Fairy3> Fairy3;
	Data::Enum<Fairy4> Fairy4;
	Data::Enum<FindSunaNui> FindSunaNui;
	Data::Enum<FindSunaNui2> FindSunaNui2;
	Data::Enum<FindWhiteHorse> FindWhiteHorse;
	Data::Enum<FindWithSensors> FindWithSensors;
	Data::Enum<FirstskyislandReturns> FirstskyislandReturns;
	Data::Enum<FullyRipenedFlintstones> FullyRipenedFlintstones;
	Data::Enum<gather_Insect_Z> gather_Insect_Z;
	Data::Enum<GeniusWeapon_Zora> GeniusWeapon_Zora;
	Data::Enum<Genkos_Kitchen> Genkos_Kitchen;
	Data::Enum<Gerudo_UrbosaWeapon> Gerudo_UrbosaWeapon;
	Data::Enum<GerudoCanyon_24hEnduranceComparison> GerudoCanyon_24hEnduranceComparison;
	Data::Enum<GerudoCanyon_Adventure> GerudoCanyon_Adventure;
	Data::Enum<GerudoCanyon_ColdEnduranceComparison> GerudoCanyon_ColdEnduranceComparison;
	Data::Enum<GerudoCanyon_GleeokLiver> GerudoCanyon_GleeokLiver;
	Data::Enum<GerudoCanyon_TumbleweedSweep> GerudoCanyon_TumbleweedSweep;
	Data::Enum<GerudoDesertTreasure> GerudoDesertTreasure;
	Data::Enum<GetCamera> GetCamera;
	Data::Enum<GetMasterSword> GetMasterSword;
	Data::Enum<GetSensorPlus> GetSensorPlus;
	Data::Enum<GetWalker> GetWalker;
	Data::Enum<GetWarpMarker> GetWarpMarker;
	Data::Enum<GiantHorse> GiantHorse;
	Data::Enum<GoneSnowQueen> GoneSnowQueen;
	Data::Enum<Goron_MiniGame_01> Goron_MiniGame_01;
	Data::Enum<Goron_MiniGame_02> Goron_MiniGame_02;
	Data::Enum<Goron_MiniGame_03> Goron_MiniGame_03;
	Data::Enum<Goron_MiniGame_Tutorial_01> Goron_MiniGame_Tutorial_01;
	Data::Enum<Goron_MiniGame_Tutorial_02> Goron_MiniGame_Tutorial_02;
	Data::Enum<Goron_MiniGame_Tutorial_03> Goron_MiniGame_Tutorial_03;
	Data::Enum<GoronPond> GoronPond;
	Data::Enum<GoronReturntoNature> GoronReturntoNature;
	Data::Enum<GotoFironeZonauRemains> GotoFironeZonauRemains;
	Data::Enum<GOToTheCastleOfHyrule> GOToTheCastleOfHyrule;
	Data::Enum<GroundPaintingAir01> GroundPaintingAir01;
	Data::Enum<Hack_GuardGoods> Hack_GuardGoods;
	Data::Enum<HammerGong_MiniGame> HammerGong_MiniGame;
	Data::Enum<Hateno_Cheese> Hateno_Cheese;
	Data::Enum<Hateno_CoolGuy> Hateno_CoolGuy;
	Data::Enum<Hateno_FreshMilk> Hateno_FreshMilk;
	Data::Enum<Hateno_LetUsElection> Hateno_LetUsElection;
	Data::Enum<Hateno_NewCostume> Hateno_NewCostume;
	Data::Enum<Hateno_NewSpecialty> Hateno_NewSpecialty;
	Data::Enum<Hateno_RevitalizeByNewSpeciality> Hateno_RevitalizeByNewSpeciality;
	Data::Enum<Hateno_SecretLifeOfKusayoshi> Hateno_SecretLifeOfKusayoshi;
	Data::Enum<Hateno_SecretLifeOfSagono> Hateno_SecretLifeOfSagono;
	Data::Enum<Hateno_TellMeTeacher01> Hateno_TellMeTeacher01;
	Data::Enum<Hateno_TellMeTeacher02> Hateno_TellMeTeacher02;
	Data::Enum<Hateno_VillageMayorElection> Hateno_VillageMayorElection;
	Data::Enum<Hateno_WhatToPlant> Hateno_WhatToPlant;
	Data::Enum<HatenoPurchasePicture> HatenoPurchasePicture;
	Data::Enum<Hebra_SkyRingChallenge> Hebra_SkyRingChallenge;
	Data::Enum<Hebra_SkyRingChallenge_MiniGame> Hebra_SkyRingChallenge_MiniGame;
	Data::Enum<HorseInnChallenge001> HorseInnChallenge001;
	Data::Enum<HorseInnChallenge002> HorseInnChallenge002;
	Data::Enum<HorseInnChallenge003> HorseInnChallenge003;
	Data::Enum<HorseInnChallenge005> HorseInnChallenge005;
	Data::Enum<HorseInnChallenge007> HorseInnChallenge007;
	Data::Enum<HotSpringEgg> HotSpringEgg;
	Data::Enum<HourseInnChallenge004> HourseInnChallenge004;
	Data::Enum<HuntSalmon> HuntSalmon;
	Data::Enum<HyruleCastleIncident> HyruleCastleIncident;
	Data::Enum<IceMaking> IceMaking;
	Data::Enum<IchikaraChallenge01> IchikaraChallenge01;
	Data::Enum<IchikaraChallenge03> IchikaraChallenge03;
	Data::Enum<IchikaraCircuit_Tutorial> IchikaraCircuit_Tutorial;
	Data::Enum<IchikaraDaughterPhoto> IchikaraDaughterPhoto;
	Data::Enum<IllnessStartsWithFeelings> IllnessStartsWithFeelings;
	Data::Enum<InfiltrationFromTheSky> InfiltrationFromTheSky;
	Data::Enum<InnNeverReturns> InnNeverReturns;
	Data::Enum<JobSunazarashi> JobSunazarashi;
	Data::Enum<Know_FourStonePlates> Know_FourStonePlates;
	Data::Enum<KokkoGuidePost> KokkoGuidePost;
	Data::Enum<Korok_CarryToShrine> Korok_CarryToShrine;
	Data::Enum<Lodge_Chemical001> Lodge_Chemical001;
	Data::Enum<LookingForLightSpot> LookingForLightSpot;
	Data::Enum<LookingForTheVoiceLord> LookingForTheVoiceLord;
	Data::Enum<Mack_SecretBase> Mack_SecretBase;
	Data::Enum<MainChallenge> MainChallenge;
	Data::Enum<MakeAChampionsWeapon_Goron> MakeAChampionsWeapon_Goron;
	Data::Enum<MakeChemicalWeapon> MakeChemicalWeapon;
	Data::Enum<MasterSwordClues> MasterSwordClues;
	Data::Enum<MeatRock> MeatRock;
	Data::Enum<MemoryOfTheDragon> MemoryOfTheDragon;
	Data::Enum<Mercenary_Akkare_Bloody> Mercenary_Akkare_Bloody;
	Data::Enum<Mercenary_Eldin_Bloody> Mercenary_Eldin_Bloody;
	Data::Enum<Mercenary_Firone_Bloody> Mercenary_Firone_Bloody;
	Data::Enum<Mercenary_Hateru_Bloody> Mercenary_Hateru_Bloody;
	Data::Enum<Mercenary_Hebra_Bloody> Mercenary_Hebra_Bloody;
	Data::Enum<Mercenary_HyrulePlain_Bloody> Mercenary_HyrulePlain_Bloody;
	Data::Enum<MercenaryChallenge_Akkare> MercenaryChallenge_Akkare;
	Data::Enum<MercenaryChallenge_Eldin> MercenaryChallenge_Eldin;
	Data::Enum<MercenaryChallenge_Firone> MercenaryChallenge_Firone;
	Data::Enum<MercenaryChallenge_Hateru> MercenaryChallenge_Hateru;
	Data::Enum<MercenaryChallenge_Hebra> MercenaryChallenge_Hebra;
	Data::Enum<MercenaryChallenge_HyrulePlain> MercenaryChallenge_HyrulePlain;
	Data::Enum<MessageBottle_SOS> MessageBottle_SOS;
	Data::Enum<MinusYiga> MinusYiga;
	Data::Enum<MonsterFigures01> MonsterFigures01;
	Data::Enum<MonsterFigures02> MonsterFigures02;
	Data::Enum<MonsterFigures03> MonsterFigures03;
	Data::Enum<MonsterFigures04> MonsterFigures04;
	Data::Enum<MonsterFigures05> MonsterFigures05;
	Data::Enum<MushroomSisters_1> MushroomSisters_1;
	Data::Enum<MushroomSisters_2> MushroomSisters_2;
	Data::Enum<MushroomSisters_3> MushroomSisters_3;
	Data::Enum<Nazley_DigCave> Nazley_DigCave;
	Data::Enum<Neck_IceWaterCave> Neck_IceWaterCave;
	Data::Enum<NewCanyonMissingPersonsCase> NewCanyonMissingPersonsCase;
	Data::Enum<NewsPaper_Mitsuba> NewsPaper_Mitsuba;
	Data::Enum<NoTrespassing> NoTrespassing;
	Data::Enum<NowInTheVillageOfLurelin> NowInTheVillageOfLurelin;
	Data::Enum<Npc_BaseCamp_Assistant_ReactingStatue> Npc_BaseCamp_Assistant_ReactingStatue;
	Data::Enum<Npc_BaseCamp_Assistant_ReactingStatue2> Npc_BaseCamp_Assistant_ReactingStatue2;
	Data::Enum<Npc_BaseCamp_Assistant_ReactingStatue3> Npc_BaseCamp_Assistant_ReactingStatue3;
	Data::Enum<Npc_BaseCamp_Assistant_ReactingStatue4> Npc_BaseCamp_Assistant_ReactingStatue4;
	Data::Enum<NushiShop_Challenge00> NushiShop_Challenge00;
	Data::Enum<NushiShop_Tutorial> NushiShop_Tutorial;
	Data::Enum<OldKorokHelp> OldKorokHelp;
	Data::Enum<Orchestra02> Orchestra02;
	Data::Enum<Orchestra03> Orchestra03;
	Data::Enum<Orchestra04> Orchestra04;
	Data::Enum<Our_Treasure> Our_Treasure;
	Data::Enum<Parasail_ChuchuDesign> Parasail_ChuchuDesign;
	Data::Enum<PhotoSpot_Challenge_01> PhotoSpot_Challenge_01;
	Data::Enum<PhotoSpot_Challenge_02> PhotoSpot_Challenge_02;
	Data::Enum<PhotoSpot_Challenge_03> PhotoSpot_Challenge_03;
	Data::Enum<PhotoSpot_Challenge_04> PhotoSpot_Challenge_04;
	Data::Enum<PhotoSpot_Challenge_05> PhotoSpot_Challenge_05;
	Data::Enum<PhotoSpot_Challenge_06> PhotoSpot_Challenge_06;
	Data::Enum<PhotoSpot_Challenge_07> PhotoSpot_Challenge_07;
	Data::Enum<PhotoSpot_Challenge_08> PhotoSpot_Challenge_08;
	Data::Enum<PhotoSpot_Challenge_09> PhotoSpot_Challenge_09;
	Data::Enum<PhotoSpot_Challenge_09_2> PhotoSpot_Challenge_09_2;
	Data::Enum<PhotoSpot_Challenge_10> PhotoSpot_Challenge_10;
	Data::Enum<PhotoSpot_Challenge_11> PhotoSpot_Challenge_11;
	Data::Enum<PhotoSpot_Challenge_12> PhotoSpot_Challenge_12;
	Data::Enum<PhotoSpot_Challenge_13> PhotoSpot_Challenge_13;
	Data::Enum<PhotoSpot_Challenge_14> PhotoSpot_Challenge_14;
	Data::Enum<Raise_GoddesStatue> Raise_GoddesStatue;
	Data::Enum<Raise_GoddesStatue_Courage> Raise_GoddesStatue_Courage;
	Data::Enum<Raise_GoddesStatue_Power> Raise_GoddesStatue_Power;
	Data::Enum<Raise_GoddesStatue_Wisdom> Raise_GoddesStatue_Wisdom;
	Data::Enum<RepairArmor> RepairArmor;
	Data::Enum<RescueHost> RescueHost;
	Data::Enum<RescueVehicle01> RescueVehicle01;
	Data::Enum<RescueWell> RescueWell;
	Data::Enum<ResearchEldin> ResearchEldin;
	Data::Enum<ResearchLanayru> ResearchLanayru;
	Data::Enum<RestaurantInTheWell> RestaurantInTheWell;
	Data::Enum<Rito_ItemExchange> Rito_ItemExchange;
	Data::Enum<Rito_MedoArmor> Rito_MedoArmor;
	Data::Enum<Rito_RevaliWeapon> Rito_RevaliWeapon;
	Data::Enum<Rito_ShadowCave> Rito_ShadowCave;
	Data::Enum<RitoBridgeRepair> RitoBridgeRepair;
	Data::Enum<SageOfFire> SageOfFire;
	Data::Enum<SageOfGerudo> SageOfGerudo;
	Data::Enum<SageOfSoul> SageOfSoul;
	Data::Enum<SageOfWind> SageOfWind;
	Data::Enum<SageOfZora> SageOfZora;
	Data::Enum<SaihateSubjugation> SaihateSubjugation;
	Data::Enum<SearchCaravan> SearchCaravan;
	Data::Enum<SecretBase_MiniGame> SecretBase_MiniGame;
	Data::Enum<ShieldSurfing_MiniGame> ShieldSurfing_MiniGame;
	Data::Enum<SkyIsland_MiniGame_01> SkyIsland_MiniGame_01;
	Data::Enum<SkyIsland_MiniGame_02> SkyIsland_MiniGame_02;
	Data::Enum<SkyIsland_MiniGame_03> SkyIsland_MiniGame_03;
	Data::Enum<SnowyMountain_Surfing> SnowyMountain_Surfing;
	Data::Enum<StatueDevilTutorial> StatueDevilTutorial;
	Data::Enum<SurveyOfFourVillages> SurveyOfFourVillages;
	Data::Enum<TakeAnimals> TakeAnimals;
	Data::Enum<TakeOfIce> TakeOfIce;
	Data::Enum<TauraChallenge001> TauraChallenge001;
	Data::Enum<TheStrongestWeapon> TheStrongestWeapon;
	Data::Enum<TreasureHunt_kokiri> TreasureHunt_kokiri;
	Data::Enum<TreasureOfLambda> TreasureOfLambda;
	Data::Enum<TreasureOfLamda_Dream> TreasureOfLamda_Dream;
	Data::Enum<TreasureOfLamda_Dream2> TreasureOfLamda_Dream2;
	Data::Enum<TreasureOfLamda_Dream3> TreasureOfLamda_Dream3;
	Data::Enum<TreasureOfLamda_DuelPeak> TreasureOfLamda_DuelPeak;
	Data::Enum<TreasureOfLamda_FierceDeity> TreasureOfLamda_FierceDeity;
	Data::Enum<TreasureOfLamda_Gerudo> TreasureOfLamda_Gerudo;
	Data::Enum<TreasureOfLamda_Pirate> TreasureOfLamda_Pirate;
	Data::Enum<Tribune01> Tribune01;
	Data::Enum<Tribune02> Tribune02;
	Data::Enum<Tribune03> Tribune03;
	Data::Enum<Tribune04> Tribune04;
	Data::Enum<Tribune05> Tribune05;
	Data::Enum<Tribune06> Tribune06;
	Data::Enum<Tribune07> Tribune07;
	Data::Enum<Tribune09> Tribune09;
	Data::Enum<Tribune10> Tribune10;
	Data::Enum<Tribune11> Tribune11;
	Data::Enum<Tribune13> Tribune13;
	Data::Enum<Tribune14> Tribune14;
	Data::Enum<Tribune16> Tribune16;
	Data::Enum<Uotori_Designer> Uotori_Designer;
	Data::Enum<Uotori_ResortPlan> Uotori_ResortPlan;
	Data::Enum<Uotori_RevivePlan> Uotori_RevivePlan;
	Data::Enum<Uotori_WhiteLineGame> Uotori_WhiteLineGame;
	Data::Enum<WashedAwayBusinessTools> WashedAwayBusinessTools;
	Data::Enum<WaterBridgePlace> WaterBridgePlace;
	Data::Enum<WellCollection> WellCollection;
	Data::Enum<WhichIsStronger> WhichIsStronger;
	Data::Enum<Zonau_GeniusWeapon> Zonau_GeniusWeapon;
	Data::Enum<ZonauReliefSearch> ZonauReliefSearch;
	Data::Enum<Zora_Enemy_hunt> Zora_Enemy_hunt;
	Data::Enum<Zora_MessageBottle> Zora_MessageBottle;
	Data::Enum<Zora_RuttaTreasure> Zora_RuttaTreasure;
	Data::Enum<ZoraStatue_Picture> ZoraStatue_Picture;
	
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