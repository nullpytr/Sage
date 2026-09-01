#pragma once
#include <sage>

struct GameData : Tag::Structure {
	struct HorseInnMemberPoint : Tag::Member { using type = s32&; };
	struct NushiShop_MedalComplete : Tag::Member { using type = bool&; };
	struct Playtime : Tag::Member { using type = u32&; };
	struct Sequence_CurrentBanc : Tag::Member { using type = string64*; };
	struct ValidPouchIndex : Tag::Member { using type = s32&; };
	struct LastTalkedOrchestraMemberStableHostel : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), GerudoCanyon = murmurhash3::hash("GerudoCanyon"), ShirotsumeShinbunsya = murmurhash3::hash("ShirotsumeShinbunsya"), TabantaOhashi = murmurhash3::hash("TabantaOhashi"), Higakkare = murmurhash3::hash("Higakkare"), ShinMaritta = murmurhash3::hash("ShinMaritta"), Minakkare = murmurhash3::hash("Minakkare"), Riverside = murmurhash3::hash("Riverside"), Lakeside = murmurhash3::hash("Lakeside"), Kougen = murmurhash3::hash("Kougen"), Sanroku = murmurhash3::hash("Sanroku"), Shitsugen = murmurhash3::hash("Shitsugen"), Mori = murmurhash3::hash("Mori"), Setsugen = murmurhash3::hash("Setsugen"), Futago = murmurhash3::hash("Futago"), HeigenHazure = murmurhash3::hash("HeigenHazure"), }; };
		using type = enum_t<LastTalkedOrchestraMemberStableHostel>&;
	};
	struct SensorMode : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), Dungeon = murmurhash3::hash("Dungeon"), Actor = murmurhash3::hash("Actor"), }; };
		using type = enum_t<SensorMode>&;
	};
	struct ActionGuide_IsNew;
	struct AlbumData;
	struct AmiiboData;
	struct ArrivalPointState;
	struct AutoBuilder;
	struct BowStand;
	struct ChallengeLogState_Challenge;
	struct CheckPoint_IsDisplayFoliage;
	struct CustomHouse;
	struct CustomHouseTakeOutNum;
	struct DeadHorseList;
	struct DefeatedEnemyNum;
	struct DongoList;
	struct DongoLocatorList;
	struct DragonMemoryDataForUI;
	struct DungeonState;
	struct FigureCreateInfo;
	struct FigureInfo;
	struct IsActivateCannon;
	struct IsAppearKorok;
	struct IsDefeatBossEnemy;
	struct IsFindTreasureMap;
	struct IsGetAdventureMemory;
	struct IsGetCaveMasterMedal;
	struct IsOpenCannon;
	struct IsVisitLocation;
	struct IsVisitLocationArea_CaveEntrance;
	struct KeyCrystalDungeonState;
	struct KeyCrystalDungeonUnlocked;
	struct KorokCarryProgress;
	struct LastWildHorse;
	struct LightBallBud;
	struct MapData;
	struct MaterialShortCut;
	struct NpcGardenInfo;
	struct NpcGardenInfo_HatenoVillage023;
	struct NpcServeFood;
	struct OwnedCustomizableHorseTack_Reins;
	struct OwnedCustomizableHorseTack_Saddle;
	struct OwnedHorseList;
	struct OwnedParasailPattern;
	struct PictureBookData;
	struct PlayerStatus;
	struct Pouch;
	struct RaumiGolemAttachment;
	struct ReadyMadeAutoBuilderDraft;
	struct RecycleBoxData;
	struct ReplaceblePicture;
	struct ShieldStand;
	struct SortPattern;
	struct Step;
	struct WeaponStand;
	struct Well;
	struct World;
};/* Tag::Structure GameData close */

#include "GameData/ActionGuide_IsNew.hpp"
#include "GameData/AlbumData.hpp"
#include "GameData/AmiiboData.hpp"
#include "GameData/ArrivalPointState.hpp"
#include "GameData/AutoBuilder.hpp"
#include "GameData/BowStand.hpp"
#include "GameData/ChallengeLogState_Challenge.hpp"
#include "GameData/CheckPoint_IsDisplayFoliage.hpp"
#include "GameData/CustomHouse.hpp"
#include "GameData/CustomHouseTakeOutNum.hpp"
#include "GameData/DeadHorseList.hpp"
#include "GameData/DefeatedEnemyNum.hpp"
#include "GameData/DongoList.hpp"
#include "GameData/DongoLocatorList.hpp"
#include "GameData/DragonMemoryDataForUI.hpp"
#include "GameData/DungeonState.hpp"
#include "GameData/FigureCreateInfo.hpp"
#include "GameData/FigureInfo.hpp"
#include "GameData/IsActivateCannon.hpp"
#include "GameData/IsAppearKorok.hpp"
#include "GameData/IsDefeatBossEnemy.hpp"
#include "GameData/IsFindTreasureMap.hpp"
#include "GameData/IsGetAdventureMemory.hpp"
#include "GameData/IsGetCaveMasterMedal.hpp"
#include "GameData/IsOpenCannon.hpp"
#include "GameData/IsVisitLocation.hpp"
#include "GameData/IsVisitLocationArea_CaveEntrance.hpp"
#include "GameData/KeyCrystalDungeonState.hpp"
#include "GameData/KeyCrystalDungeonUnlocked.hpp"
#include "GameData/KorokCarryProgress.hpp"
#include "GameData/LastWildHorse.hpp"
#include "GameData/LightBallBud.hpp"
#include "GameData/MapData.hpp"
#include "GameData/MaterialShortCut.hpp"
#include "GameData/NpcGardenInfo.hpp"
#include "GameData/NpcGardenInfo_HatenoVillage023.hpp"
#include "GameData/NpcServeFood.hpp"
#include "GameData/OwnedCustomizableHorseTack_Reins.hpp"
#include "GameData/OwnedCustomizableHorseTack_Saddle.hpp"
#include "GameData/OwnedHorseList.hpp"
#include "GameData/OwnedParasailPattern.hpp"
#include "GameData/PictureBookData.hpp"
#include "GameData/PlayerStatus.hpp"
#include "GameData/Pouch.hpp"
#include "GameData/RaumiGolemAttachment.hpp"
#include "GameData/ReadyMadeAutoBuilderDraft.hpp"
#include "GameData/RecycleBoxData.hpp"
#include "GameData/ReplaceblePicture.hpp"
#include "GameData/ShieldStand.hpp"
#include "GameData/SortPattern.hpp"
#include "GameData/Step.hpp"
#include "GameData/WeaponStand.hpp"
#include "GameData/Well.hpp"
#include "GameData/World.hpp"

template <> struct Data::Structure<GameData> : GameData {
	Member<HorseInnMemberPoint> HorseInnMemberPoint;
	Member<NushiShop_MedalComplete> NushiShop_MedalComplete;
	Member<Playtime> Playtime;
	Member<Sequence_CurrentBanc> Sequence_CurrentBanc;
	Member<ValidPouchIndex> ValidPouchIndex;
	Enum<LastTalkedOrchestraMemberStableHostel> LastTalkedOrchestraMemberStableHostel;
	Enum<SensorMode> SensorMode;
	Structure<ActionGuide_IsNew> ActionGuide_IsNew;
	Structure<AlbumData> AlbumData;
	Structure<AmiiboData> AmiiboData;
	Structure<ArrivalPointState> ArrivalPointState;
	Structure<AutoBuilder> AutoBuilder;
	Structure<BowStand> BowStand;
	Structure<ChallengeLogState_Challenge> ChallengeLogState_Challenge;
	Structure<CheckPoint_IsDisplayFoliage> CheckPoint_IsDisplayFoliage;
	Structure<CustomHouse> CustomHouse;
	Structure<CustomHouseTakeOutNum> CustomHouseTakeOutNum;
	Structure<DeadHorseList> DeadHorseList;
	Structure<DefeatedEnemyNum> DefeatedEnemyNum;
	Structure<DongoList> DongoList;
	Structure<DongoLocatorList> DongoLocatorList;
	Structure<DragonMemoryDataForUI> DragonMemoryDataForUI;
	Structure<DungeonState> DungeonState;
	Structure<FigureCreateInfo> FigureCreateInfo;
	Structure<FigureInfo> FigureInfo;
	Structure<IsActivateCannon> IsActivateCannon;
	Structure<IsAppearKorok> IsAppearKorok;
	Structure<IsDefeatBossEnemy> IsDefeatBossEnemy;
	Structure<IsFindTreasureMap> IsFindTreasureMap;
	Structure<IsGetAdventureMemory> IsGetAdventureMemory;
	Structure<IsGetCaveMasterMedal> IsGetCaveMasterMedal;
	Structure<IsOpenCannon> IsOpenCannon;
	Structure<IsVisitLocation> IsVisitLocation;
	Structure<IsVisitLocationArea_CaveEntrance> IsVisitLocationArea_CaveEntrance;
	Structure<KeyCrystalDungeonState> KeyCrystalDungeonState;
	Structure<KeyCrystalDungeonUnlocked> KeyCrystalDungeonUnlocked;
	Structure<KorokCarryProgress> KorokCarryProgress;
	Structure<LastWildHorse> LastWildHorse;
	Structure<LightBallBud> LightBallBud;
	Structure<MapData> MapData;
	Structure<MaterialShortCut> MaterialShortCut;
	Structure<NpcGardenInfo> NpcGardenInfo;
	Structure<NpcGardenInfo_HatenoVillage023> NpcGardenInfo_HatenoVillage023;
	Structure<NpcServeFood> NpcServeFood;
	Structure<OwnedCustomizableHorseTack_Reins> OwnedCustomizableHorseTack_Reins;
	Structure<OwnedCustomizableHorseTack_Saddle> OwnedCustomizableHorseTack_Saddle;
	Structure<OwnedHorseList> OwnedHorseList;
	Structure<OwnedParasailPattern> OwnedParasailPattern;
	Structure<PictureBookData> PictureBookData;
	Structure<PlayerStatus> PlayerStatus;
	Structure<Pouch> Pouch;
	Structure<RaumiGolemAttachment> RaumiGolemAttachment;
	Structure<ReadyMadeAutoBuilderDraft> ReadyMadeAutoBuilderDraft;
	Structure<RecycleBoxData> RecycleBoxData;
	Structure<ReplaceblePicture> ReplaceblePicture;
	Structure<ShieldStand> ShieldStand;
	Structure<SortPattern> SortPattern;
	Structure<Step> Step;
	Structure<WeaponStand> WeaponStand;
	Structure<Well> Well;
	Structure<World> World;
	
	explicit Structure(Sav& s) : 
		HorseInnMemberPoint { s.get<struct HorseInnMemberPoint>() },
		NushiShop_MedalComplete { s.get<struct NushiShop_MedalComplete>() },
		Playtime { s.get<struct Playtime>() },
		Sequence_CurrentBanc { s.get<struct Sequence_CurrentBanc>() },
		ValidPouchIndex { s.get<struct ValidPouchIndex>() },
		LastTalkedOrchestraMemberStableHostel { s.get<struct LastTalkedOrchestraMemberStableHostel>() },
		SensorMode { s.get<struct SensorMode>() },
		ActionGuide_IsNew { s },
		AlbumData { s },
		AmiiboData { s },
		ArrivalPointState { s },
		AutoBuilder { s },
		BowStand { s },
		ChallengeLogState_Challenge { s },
		CheckPoint_IsDisplayFoliage { s },
		CustomHouse { s },
		CustomHouseTakeOutNum { s },
		DeadHorseList { s },
		DefeatedEnemyNum { s },
		DongoList { s },
		DongoLocatorList { s },
		DragonMemoryDataForUI { s },
		DungeonState { s },
		FigureCreateInfo { s },
		FigureInfo { s },
		IsActivateCannon { s },
		IsAppearKorok { s },
		IsDefeatBossEnemy { s },
		IsFindTreasureMap { s },
		IsGetAdventureMemory { s },
		IsGetCaveMasterMedal { s },
		IsOpenCannon { s },
		IsVisitLocation { s },
		IsVisitLocationArea_CaveEntrance { s },
		KeyCrystalDungeonState { s },
		KeyCrystalDungeonUnlocked { s },
		KorokCarryProgress { s },
		LastWildHorse { s },
		LightBallBud { s },
		MapData { s },
		MaterialShortCut { s },
		NpcGardenInfo { s },
		NpcGardenInfo_HatenoVillage023 { s },
		NpcServeFood { s },
		OwnedCustomizableHorseTack_Reins { s },
		OwnedCustomizableHorseTack_Saddle { s },
		OwnedHorseList { s },
		OwnedParasailPattern { s },
		PictureBookData { s },
		PlayerStatus { s },
		Pouch { s },
		RaumiGolemAttachment { s },
		ReadyMadeAutoBuilderDraft { s },
		RecycleBoxData { s },
		ReplaceblePicture { s },
		ShieldStand { s },
		SortPattern { s },
		Step { s },
		WeaponStand { s },
		Well { s },
		World { s }
	{ }
};/* Data::Structure GameData close */

template <> hash_value_t constexpr Data::Hashtable<GameData::HorseInnMemberPoint> { "HorseInnMemberPoint" };
template <> hash_value_t constexpr Data::Hashtable<GameData::NushiShop_MedalComplete> { "NushiShop_MedalComplete" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Playtime> { 0xe573f564 };
template <> hash_value_t constexpr Data::Hashtable<GameData::Sequence_CurrentBanc> { "Sequence_CurrentBanc" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ValidPouchIndex> { "ValidPouchIndex" };
template <> hash_value_t constexpr Data::Hashtable<GameData::LastTalkedOrchestraMemberStableHostel> { "LastTalkedOrchestraMemberStableHostel" };
template <> hash_value_t constexpr Data::Hashtable<GameData::SensorMode> { "SensorMode" };