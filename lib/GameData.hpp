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
	struct AutoBuilder;
	struct BowStand;
	struct ChallengeLogState_Challenge;
	struct CustomHouse;
	struct CustomHouseTakeOutNum;
	struct DeadHorseList;
	struct DefeatedEnemyNum;
	struct DongoList;
	struct DongoLocatorList;
	struct DragonMemoryDataForUI;
	struct FigureCreateInfo;
	struct FigureInfo;
	struct IsFindTreasureMap;
	struct IsGetAdventureMemory;
	struct IsGetCaveMasterMedal;
	struct IsVisitLocation;
	struct LastWildHorse;
	struct LightBallBud;
	struct MapData;
	struct MaterialShortCut;
	struct NpcGardenInfo;
	struct NpcGardenInfo_HatenoVillage023;
	struct NpcServeFood;
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
	struct ArrivalPointState;
	struct CheckPoint_IsDisplayFoliage;
	struct DungeonState;
	struct IsActivateCannon;
	struct IsAppearKorok;
	struct IsDefeatBossEnemy;
	struct IsOpenCannon;
	struct IsVisitLocationArea_CaveEntrance;
	struct KeyCrystalDungeonState;
	struct KeyCrystalDungeonUnlocked;
	struct KorokCarryProgress;
	struct OwnedCustomizableHorseTack_Reins;
};/* Tag::Structure GameData close */

#include "GameData/ActionGuide_IsNew.hpp"
#include "GameData/AlbumData.hpp"
#include "GameData/AmiiboData.hpp"
#include "GameData/AutoBuilder.hpp"
#include "GameData/BowStand.hpp"
#include "GameData/ChallengeLogState_Challenge.hpp"
#include "GameData/CustomHouse.hpp"
#include "GameData/CustomHouseTakeOutNum.hpp"
#include "GameData/DeadHorseList.hpp"
#include "GameData/DefeatedEnemyNum.hpp"
#include "GameData/DongoList.hpp"
#include "GameData/DongoLocatorList.hpp"
#include "GameData/DragonMemoryDataForUI.hpp"
#include "GameData/FigureCreateInfo.hpp"
#include "GameData/FigureInfo.hpp"
#include "GameData/IsFindTreasureMap.hpp"
#include "GameData/IsGetAdventureMemory.hpp"
#include "GameData/IsGetCaveMasterMedal.hpp"
#include "GameData/IsVisitLocation.hpp"
#include "GameData/LastWildHorse.hpp"
#include "GameData/LightBallBud.hpp"
#include "GameData/MapData.hpp"
#include "GameData/MaterialShortCut.hpp"
#include "GameData/NpcGardenInfo.hpp"
#include "GameData/NpcGardenInfo_HatenoVillage023.hpp"
#include "GameData/NpcServeFood.hpp"
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
#include "GameData/ArrivalPointState.hpp"
#include "GameData/CheckPoint_IsDisplayFoliage.hpp"
#include "GameData/DungeonState.hpp"
#include "GameData/IsActivateCannon.hpp"
#include "GameData/IsAppearKorok.hpp"
#include "GameData/IsDefeatBossEnemy.hpp"
#include "GameData/IsOpenCannon.hpp"
#include "GameData/IsVisitLocationArea_CaveEntrance.hpp"
#include "GameData/KeyCrystalDungeonState.hpp"
#include "GameData/KeyCrystalDungeonUnlocked.hpp"
#include "GameData/KorokCarryProgress.hpp"
#include "GameData/OwnedCustomizableHorseTack_Reins.hpp"

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
	Structure<AutoBuilder> AutoBuilder;
	Structure<BowStand> BowStand;
	Structure<ChallengeLogState_Challenge> ChallengeLogState_Challenge;
	Structure<CustomHouse> CustomHouse;
	Structure<CustomHouseTakeOutNum> CustomHouseTakeOutNum;
	Structure<DeadHorseList> DeadHorseList;
	Structure<DefeatedEnemyNum> DefeatedEnemyNum;
	Structure<DongoList> DongoList;
	Structure<DongoLocatorList> DongoLocatorList;
	Structure<DragonMemoryDataForUI> DragonMemoryDataForUI;
	Structure<FigureCreateInfo> FigureCreateInfo;
	Structure<FigureInfo> FigureInfo;
	Structure<IsFindTreasureMap> IsFindTreasureMap;
	Structure<IsGetAdventureMemory> IsGetAdventureMemory;
	Structure<IsGetCaveMasterMedal> IsGetCaveMasterMedal;
	Structure<IsVisitLocation> IsVisitLocation;
	Structure<LastWildHorse> LastWildHorse;
	Structure<LightBallBud> LightBallBud;
	Structure<MapData> MapData;
	Structure<MaterialShortCut> MaterialShortCut;
	Structure<NpcGardenInfo> NpcGardenInfo;
	Structure<NpcGardenInfo_HatenoVillage023> NpcGardenInfo_HatenoVillage023;
	Structure<NpcServeFood> NpcServeFood;
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
	Map<ArrivalPointState> ArrivalPointState;
	Map<CheckPoint_IsDisplayFoliage> CheckPoint_IsDisplayFoliage;
	Map<DungeonState> DungeonState;
	Map<IsActivateCannon> IsActivateCannon;
	Map<IsAppearKorok> IsAppearKorok;
	Map<IsDefeatBossEnemy> IsDefeatBossEnemy;
	Map<IsOpenCannon> IsOpenCannon;
	Map<IsVisitLocationArea_CaveEntrance> IsVisitLocationArea_CaveEntrance;
	Map<KeyCrystalDungeonState> KeyCrystalDungeonState;
	Map<KeyCrystalDungeonUnlocked> KeyCrystalDungeonUnlocked;
	Map<KorokCarryProgress> KorokCarryProgress;
	Map<OwnedCustomizableHorseTack_Reins> OwnedCustomizableHorseTack_Reins;
	
	explicit Structure(Sav& s) : 
		HorseInnMemberPoint { s.get<struct HorseInnMemberPoint>() },
		NushiShop_MedalComplete { s.get<struct NushiShop_MedalComplete>() },
		Playtime { s.get<struct Playtime>() },
		Sequence_CurrentBanc { s.get<struct Sequence_CurrentBanc>() },
		ValidPouchIndex { s.get<struct ValidPouchIndex>() },
		LastTalkedOrchestraMemberStableHostel { s.get<struct LastTalkedOrchestraMemberStableHostel>() },
		SensorMode { s.get<struct SensorMode>() },
		ActionGuide_IsNew { s.get<struct ActionGuide_IsNew>() },
		AlbumData { s.get<struct AlbumData>() },
		AmiiboData { s.get<struct AmiiboData>() },
		AutoBuilder { s.get<struct AutoBuilder>() },
		BowStand { s.get<struct BowStand>() },
		ChallengeLogState_Challenge { s.get<struct ChallengeLogState_Challenge>() },
		CustomHouse { s.get<struct CustomHouse>() },
		CustomHouseTakeOutNum { s.get<struct CustomHouseTakeOutNum>() },
		DeadHorseList { s.get<struct DeadHorseList>() },
		DefeatedEnemyNum { s.get<struct DefeatedEnemyNum>() },
		DongoList { s.get<struct DongoList>() },
		DongoLocatorList { s.get<struct DongoLocatorList>() },
		DragonMemoryDataForUI { s.get<struct DragonMemoryDataForUI>() },
		FigureCreateInfo { s.get<struct FigureCreateInfo>() },
		FigureInfo { s.get<struct FigureInfo>() },
		IsFindTreasureMap { s.get<struct IsFindTreasureMap>() },
		IsGetAdventureMemory { s.get<struct IsGetAdventureMemory>() },
		IsGetCaveMasterMedal { s.get<struct IsGetCaveMasterMedal>() },
		IsVisitLocation { s.get<struct IsVisitLocation>() },
		LastWildHorse { s.get<struct LastWildHorse>() },
		LightBallBud { s.get<struct LightBallBud>() },
		MapData { s.get<struct MapData>() },
		MaterialShortCut { s.get<struct MaterialShortCut>() },
		NpcGardenInfo { s.get<struct NpcGardenInfo>() },
		NpcGardenInfo_HatenoVillage023 { s.get<struct NpcGardenInfo_HatenoVillage023>() },
		NpcServeFood { s.get<struct NpcServeFood>() },
		OwnedCustomizableHorseTack_Saddle { s.get<struct OwnedCustomizableHorseTack_Saddle>() },
		OwnedHorseList { s.get<struct OwnedHorseList>() },
		OwnedParasailPattern { s.get<struct OwnedParasailPattern>() },
		PictureBookData { s.get<struct PictureBookData>() },
		PlayerStatus { s.get<struct PlayerStatus>() },
		Pouch { s.get<struct Pouch>() },
		RaumiGolemAttachment { s.get<struct RaumiGolemAttachment>() },
		ReadyMadeAutoBuilderDraft { s.get<struct ReadyMadeAutoBuilderDraft>() },
		RecycleBoxData { s.get<struct RecycleBoxData>() },
		ReplaceblePicture { s.get<struct ReplaceblePicture>() },
		ShieldStand { s.get<struct ShieldStand>() },
		SortPattern { s.get<struct SortPattern>() },
		Step { s.get<struct Step>() },
		WeaponStand { s.get<struct WeaponStand>() },
		Well { s.get<struct Well>() },
		World { s.get<struct World>() },
		ArrivalPointState { s.get<struct ArrivalPointState>() },
		CheckPoint_IsDisplayFoliage { s.get<struct CheckPoint_IsDisplayFoliage>() },
		DungeonState { s.get<struct DungeonState>() },
		IsActivateCannon { s.get<struct IsActivateCannon>() },
		IsAppearKorok { s.get<struct IsAppearKorok>() },
		IsDefeatBossEnemy { s.get<struct IsDefeatBossEnemy>() },
		IsOpenCannon { s.get<struct IsOpenCannon>() },
		IsVisitLocationArea_CaveEntrance { s.get<struct IsVisitLocationArea_CaveEntrance>() },
		KeyCrystalDungeonState { s.get<struct KeyCrystalDungeonState>() },
		KeyCrystalDungeonUnlocked { s.get<struct KeyCrystalDungeonUnlocked>() },
		KorokCarryProgress { s.get<struct KorokCarryProgress>() },
		OwnedCustomizableHorseTack_Reins { s.get<struct OwnedCustomizableHorseTack_Reins>() }
	{ }
};/* Structure Data::Structure GameData close */

template <> hash_value_t constexpr Data::Hashtable<GameData::HorseInnMemberPoint> { "HorseInnMemberPoint" };
template <> hash_value_t constexpr Data::Hashtable<GameData::NushiShop_MedalComplete> { "NushiShop_MedalComplete" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Playtime> { 0xe573f564 };
template <> hash_value_t constexpr Data::Hashtable<GameData::Sequence_CurrentBanc> { "Sequence_CurrentBanc" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ValidPouchIndex> { "ValidPouchIndex" };
template <> hash_value_t constexpr Data::Hashtable<GameData::LastTalkedOrchestraMemberStableHostel> { "LastTalkedOrchestraMemberStableHostel" };
template <> hash_value_t constexpr Data::Hashtable<GameData::SensorMode> { "SensorMode" };