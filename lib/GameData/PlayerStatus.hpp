#pragma once
#include <sage>

struct GameData::PlayerStatus : Tag::Structure {
	struct BreakLife : Tag::Member { using type = s32&; };
	struct CookBuff : Tag::Member { using type = s32&; };
	struct CookBuffLv : Tag::Member { using type = s32&; };
	struct CookBuffTime : Tag::Member { using type = float&; };
	struct CurrentMamo : Tag::Member { using type = s32&; };
	struct CurrentRupee : Tag::Member { using type = s32&; };
	struct ExtraEnergy : Tag::Member { using type = float&; };
	struct ExtraLife : Tag::Member { using type = s32&; };
	struct ExtraStamina : Tag::Member { using type = float&; };
	struct FirstSkyIslandEventFailureOnce : Tag::Member { using type = bool&; };
	struct HasAnyBluePrint : Tag::Member { using type = bool&; };
	struct IsEquipShoulderBelt : Tag::Member { using type = bool&; };
	struct IsEquipWaistBelt : Tag::Member { using type = bool&; };
	struct IsForceDisableSummonCompanion : Tag::Member { using type = bool&; };
	struct IsForceDisableUseSpecialPower : Tag::Member { using type = bool&; };
	struct IsMasterSwordSleeping : Tag::Member { using type = bool&; };
	struct IsUseCameraPointer : Tag::Member { using type = bool&; };
	struct IsUseTemporaryLife : Tag::Member { using type = bool&; };
	struct Life : Tag::Member { using type = s32&; };
	struct MasterSwordSleepTimer : Tag::Member { using type = float&; };
	struct MaxEnergy : Tag::Member { using type = float&; };
	struct MaxLife : Tag::Member { using type = s32&; };
	struct MaxLifeForBeforeVSGanon : Tag::Member { using type = s32&; };
	struct MaxStamina : Tag::Member { using type = float&; };
	struct SavePos : Tag::Member { using type = vec3f*&; };
	struct SavePosRadY : Tag::Member { using type = float&; };
	struct TemporaryBreakLife : Tag::Member { using type = s32&; };
	struct TemporaryExtraEnergy : Tag::Member { using type = float&; };
	struct TemporaryExtraLife : Tag::Member { using type = s32&; };
	struct TemporaryExtraStamina : Tag::Member { using type = float&; };
	struct TemporaryLife : Tag::Member { using type = s32&; };
	struct UseScopeStartEvent : Tag::Member { using type = bool&; };
	struct WeaponAttachCount : Tag::Member { using type = s32&; };
	struct ZonauEventFailureOnce : Tag::Member { using type = bool&; };
	struct CurrentSpecialPower : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), UltraHand = murmurhash3::hash("UltraHand"), OneTouchBond = murmurhash3::hash("OneTouchBond"), CeilingClipper = murmurhash3::hash("CeilingClipper"), ReverseRecorder = murmurhash3::hash("ReverseRecorder"), AutoBuilder = murmurhash3::hash("AutoBuilder"), SheikahCamera = murmurhash3::hash("SheikahCamera"), Map = murmurhash3::hash("Map"), Amiibo = murmurhash3::hash("Amiibo"), }; };
		using type = enum_t<CurrentSpecialPower>&;
	};
	struct ParasailPattern : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Default = murmurhash3::hash("Default"), Pattern00 = murmurhash3::hash("Pattern00"), Pattern01 = murmurhash3::hash("Pattern01"), Pattern02 = murmurhash3::hash("Pattern02"), Pattern03 = murmurhash3::hash("Pattern03"), Pattern04 = murmurhash3::hash("Pattern04"), Pattern05 = murmurhash3::hash("Pattern05"), Pattern06 = murmurhash3::hash("Pattern06"), Pattern07 = murmurhash3::hash("Pattern07"), Pattern08 = murmurhash3::hash("Pattern08"), Pattern09 = murmurhash3::hash("Pattern09"), Pattern10 = murmurhash3::hash("Pattern10"), Pattern11 = murmurhash3::hash("Pattern11"), Pattern12 = murmurhash3::hash("Pattern12"), Pattern13 = murmurhash3::hash("Pattern13"), Pattern14 = murmurhash3::hash("Pattern14"), Pattern15 = murmurhash3::hash("Pattern15"), Pattern16 = murmurhash3::hash("Pattern16"), Pattern17 = murmurhash3::hash("Pattern17"), Pattern18 = murmurhash3::hash("Pattern18"), Pattern19 = murmurhash3::hash("Pattern19"), Pattern20 = murmurhash3::hash("Pattern20"), Pattern21 = murmurhash3::hash("Pattern21"), Pattern22 = murmurhash3::hash("Pattern22"), Pattern23 = murmurhash3::hash("Pattern23"), Pattern24 = murmurhash3::hash("Pattern24"), Pattern25 = murmurhash3::hash("Pattern25"), Pattern26 = murmurhash3::hash("Pattern26"), Pattern27 = murmurhash3::hash("Pattern27"), Pattern28 = murmurhash3::hash("Pattern28"), Pattern29 = murmurhash3::hash("Pattern29"), Pattern30 = murmurhash3::hash("Pattern30"), Pattern31 = murmurhash3::hash("Pattern31"), Pattern32 = murmurhash3::hash("Pattern32"), Pattern33 = murmurhash3::hash("Pattern33"), Pattern34 = murmurhash3::hash("Pattern34"), Pattern35 = murmurhash3::hash("Pattern35"), Pattern36 = murmurhash3::hash("Pattern36"), Pattern37 = murmurhash3::hash("Pattern37"), Pattern38 = murmurhash3::hash("Pattern38"), Pattern39 = murmurhash3::hash("Pattern39"), Pattern40 = murmurhash3::hash("Pattern40"), Pattern41 = murmurhash3::hash("Pattern41"), Pattern43 = murmurhash3::hash("Pattern43"), Pattern45 = murmurhash3::hash("Pattern45"), Pattern46 = murmurhash3::hash("Pattern46"), Pattern48 = murmurhash3::hash("Pattern48"), Pattern49 = murmurhash3::hash("Pattern49"), Pattern51 = murmurhash3::hash("Pattern51"), Pattern52 = murmurhash3::hash("Pattern52"), Pattern53 = murmurhash3::hash("Pattern53"), Pattern55 = murmurhash3::hash("Pattern55"), Pattern56 = murmurhash3::hash("Pattern56"), }; };
		using type = enum_t<ParasailPattern>&;
	};
	struct Companion;
};/* Tag::Structure GameData::PlayerStatus close */

#include "PlayerStatus/Companion.hpp"

template <> struct Data::Structure<GameData::PlayerStatus> : GameData::PlayerStatus {
	Member<BreakLife> BreakLife;
	Member<CookBuff> CookBuff;
	Member<CookBuffLv> CookBuffLv;
	Member<CookBuffTime> CookBuffTime;
	Member<CurrentMamo> CurrentMamo;
	Member<CurrentRupee> CurrentRupee;
	Member<ExtraEnergy> ExtraEnergy;
	Member<ExtraLife> ExtraLife;
	Member<ExtraStamina> ExtraStamina;
	Member<FirstSkyIslandEventFailureOnce> FirstSkyIslandEventFailureOnce;
	Member<HasAnyBluePrint> HasAnyBluePrint;
	Member<IsEquipShoulderBelt> IsEquipShoulderBelt;
	Member<IsEquipWaistBelt> IsEquipWaistBelt;
	Member<IsForceDisableSummonCompanion> IsForceDisableSummonCompanion;
	Member<IsForceDisableUseSpecialPower> IsForceDisableUseSpecialPower;
	Member<IsMasterSwordSleeping> IsMasterSwordSleeping;
	Member<IsUseCameraPointer> IsUseCameraPointer;
	Member<IsUseTemporaryLife> IsUseTemporaryLife;
	Member<Life> Life;
	Member<MasterSwordSleepTimer> MasterSwordSleepTimer;
	Member<MaxEnergy> MaxEnergy;
	Member<MaxLife> MaxLife;
	Member<MaxLifeForBeforeVSGanon> MaxLifeForBeforeVSGanon;
	Member<MaxStamina> MaxStamina;
	Member<SavePos> SavePos;
	Member<SavePosRadY> SavePosRadY;
	Member<TemporaryBreakLife> TemporaryBreakLife;
	Member<TemporaryExtraEnergy> TemporaryExtraEnergy;
	Member<TemporaryExtraLife> TemporaryExtraLife;
	Member<TemporaryExtraStamina> TemporaryExtraStamina;
	Member<TemporaryLife> TemporaryLife;
	Member<UseScopeStartEvent> UseScopeStartEvent;
	Member<WeaponAttachCount> WeaponAttachCount;
	Member<ZonauEventFailureOnce> ZonauEventFailureOnce;
	Enum<CurrentSpecialPower> CurrentSpecialPower;
	Enum<ParasailPattern> ParasailPattern;
	Structure<Companion> Companion;
	
	explicit Structure(Sav& s) : 
		BreakLife { s.get<struct BreakLife>() },
		CookBuff { s.get<struct CookBuff>() },
		CookBuffLv { s.get<struct CookBuffLv>() },
		CookBuffTime { s.get<struct CookBuffTime>() },
		CurrentMamo { s.get<struct CurrentMamo>() },
		CurrentRupee { s.get<struct CurrentRupee>() },
		ExtraEnergy { s.get<struct ExtraEnergy>() },
		ExtraLife { s.get<struct ExtraLife>() },
		ExtraStamina { s.get<struct ExtraStamina>() },
		FirstSkyIslandEventFailureOnce { s.get<struct FirstSkyIslandEventFailureOnce>() },
		HasAnyBluePrint { s.get<struct HasAnyBluePrint>() },
		IsEquipShoulderBelt { s.get<struct IsEquipShoulderBelt>() },
		IsEquipWaistBelt { s.get<struct IsEquipWaistBelt>() },
		IsForceDisableSummonCompanion { s.get<struct IsForceDisableSummonCompanion>() },
		IsForceDisableUseSpecialPower { s.get<struct IsForceDisableUseSpecialPower>() },
		IsMasterSwordSleeping { s.get<struct IsMasterSwordSleeping>() },
		IsUseCameraPointer { s.get<struct IsUseCameraPointer>() },
		IsUseTemporaryLife { s.get<struct IsUseTemporaryLife>() },
		Life { s.get<struct Life>() },
		MasterSwordSleepTimer { s.get<struct MasterSwordSleepTimer>() },
		MaxEnergy { s.get<struct MaxEnergy>() },
		MaxLife { s.get<struct MaxLife>() },
		MaxLifeForBeforeVSGanon { s.get<struct MaxLifeForBeforeVSGanon>() },
		MaxStamina { s.get<struct MaxStamina>() },
		SavePos { s.get<struct SavePos>() },
		SavePosRadY { s.get<struct SavePosRadY>() },
		TemporaryBreakLife { s.get<struct TemporaryBreakLife>() },
		TemporaryExtraEnergy { s.get<struct TemporaryExtraEnergy>() },
		TemporaryExtraLife { s.get<struct TemporaryExtraLife>() },
		TemporaryExtraStamina { s.get<struct TemporaryExtraStamina>() },
		TemporaryLife { s.get<struct TemporaryLife>() },
		UseScopeStartEvent { s.get<struct UseScopeStartEvent>() },
		WeaponAttachCount { s.get<struct WeaponAttachCount>() },
		ZonauEventFailureOnce { s.get<struct ZonauEventFailureOnce>() },
		CurrentSpecialPower { s.get<struct CurrentSpecialPower>() },
		ParasailPattern { s.get<struct ParasailPattern>() },
		Companion { s.get<struct Companion>() }
	{ }
};/* Structure Data::Structure GameData::PlayerStatus close */

template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::BreakLife> { "PlayerStatus.BreakLife" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::CookBuff> { "PlayerStatus.CookBuff" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::CookBuffLv> { "PlayerStatus.CookBuffLv" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::CookBuffTime> { "PlayerStatus.CookBuffTime" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::CurrentMamo> { "PlayerStatus.CurrentMamo" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::CurrentRupee> { "PlayerStatus.CurrentRupee" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::ExtraEnergy> { "PlayerStatus.ExtraEnergy" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::ExtraLife> { "PlayerStatus.ExtraLife" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::ExtraStamina> { "PlayerStatus.ExtraStamina" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::FirstSkyIslandEventFailureOnce> { "PlayerStatus.FirstSkyIslandEventFailureOnce" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::HasAnyBluePrint> { "PlayerStatus.HasAnyBluePrint" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::IsEquipShoulderBelt> { "PlayerStatus.IsEquipShoulderBelt" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::IsEquipWaistBelt> { "PlayerStatus.IsEquipWaistBelt" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::IsForceDisableSummonCompanion> { "PlayerStatus.IsForceDisableSummonCompanion" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::IsForceDisableUseSpecialPower> { "PlayerStatus.IsForceDisableUseSpecialPower" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::IsMasterSwordSleeping> { "PlayerStatus.IsMasterSwordSleeping" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::IsUseCameraPointer> { "PlayerStatus.IsUseCameraPointer" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::IsUseTemporaryLife> { "PlayerStatus.IsUseTemporaryLife" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Life> { "PlayerStatus.Life" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::MasterSwordSleepTimer> { "PlayerStatus.MasterSwordSleepTimer" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::MaxEnergy> { "PlayerStatus.MaxEnergy" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::MaxLife> { "PlayerStatus.MaxLife" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::MaxLifeForBeforeVSGanon> { "PlayerStatus.MaxLifeForBeforeVSGanon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::MaxStamina> { "PlayerStatus.MaxStamina" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::SavePos> { "PlayerStatus.SavePos" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::SavePosRadY> { "PlayerStatus.SavePosRadY" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::TemporaryBreakLife> { "PlayerStatus.TemporaryBreakLife" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::TemporaryExtraEnergy> { "PlayerStatus.TemporaryExtraEnergy" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::TemporaryExtraLife> { "PlayerStatus.TemporaryExtraLife" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::TemporaryExtraStamina> { "PlayerStatus.TemporaryExtraStamina" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::TemporaryLife> { "PlayerStatus.TemporaryLife" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::UseScopeStartEvent> { "PlayerStatus.UseScopeStartEvent" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::WeaponAttachCount> { "PlayerStatus.WeaponAttachCount" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::ZonauEventFailureOnce> { "PlayerStatus.ZonauEventFailureOnce" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::CurrentSpecialPower> { "PlayerStatus.CurrentSpecialPower" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::ParasailPattern> { "PlayerStatus.ParasailPattern" };