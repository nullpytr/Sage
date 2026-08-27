#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PlayerStatus : Tag::Structure {
	struct Companion;
	struct FirstSkyIslandEventFailureOnce : Tag::Member { using type = bool&; };
	struct HasAnyBluePrint : Tag::Member { using type = bool&; };
	struct IsEquipShoulderBelt : Tag::Member { using type = bool&; };
	struct IsEquipWaistBelt : Tag::Member { using type = bool&; };
	struct IsForceDisableSummonCompanion : Tag::Member { using type = bool&; };
	struct IsForceDisableUseSpecialPower : Tag::Member { using type = bool&; };
	struct IsMasterSwordSleeping : Tag::Member { using type = bool&; };
	struct IsUseCameraPointer : Tag::Member { using type = bool&; };
	struct IsUseTemporaryLife : Tag::Member { using type = bool&; };
	struct UseScopeStartEvent : Tag::Member { using type = bool&; };
	struct ZonauEventFailureOnce : Tag::Member { using type = bool&; };
	struct CurrentSpecialPower : Tag::Enum { using type = ::Enum::Scalar<CurrentSpecialPower>; enum enum_type : hash_t { None = murmurhash3::hash("None"), UltraHand = murmurhash3::hash("UltraHand"), OneTouchBond = murmurhash3::hash("OneTouchBond"), CeilingClipper = murmurhash3::hash("CeilingClipper"), ReverseRecorder = murmurhash3::hash("ReverseRecorder"), AutoBuilder = murmurhash3::hash("AutoBuilder"), SheikahCamera = murmurhash3::hash("SheikahCamera"), Map = murmurhash3::hash("Map"), Amiibo = murmurhash3::hash("Amiibo"), }; };
	struct ParasailPattern : Tag::Enum { using type = ::Enum::Scalar<ParasailPattern>; enum enum_type : hash_t { Default = murmurhash3::hash("Default"), Pattern00 = murmurhash3::hash("Pattern00"), Pattern01 = murmurhash3::hash("Pattern01"), Pattern02 = murmurhash3::hash("Pattern02"), Pattern03 = murmurhash3::hash("Pattern03"), Pattern04 = murmurhash3::hash("Pattern04"), Pattern05 = murmurhash3::hash("Pattern05"), Pattern06 = murmurhash3::hash("Pattern06"), Pattern07 = murmurhash3::hash("Pattern07"), Pattern08 = murmurhash3::hash("Pattern08"), Pattern09 = murmurhash3::hash("Pattern09"), Pattern10 = murmurhash3::hash("Pattern10"), Pattern11 = murmurhash3::hash("Pattern11"), Pattern12 = murmurhash3::hash("Pattern12"), Pattern13 = murmurhash3::hash("Pattern13"), Pattern14 = murmurhash3::hash("Pattern14"), Pattern15 = murmurhash3::hash("Pattern15"), Pattern16 = murmurhash3::hash("Pattern16"), Pattern17 = murmurhash3::hash("Pattern17"), Pattern18 = murmurhash3::hash("Pattern18"), Pattern19 = murmurhash3::hash("Pattern19"), Pattern20 = murmurhash3::hash("Pattern20"), Pattern21 = murmurhash3::hash("Pattern21"), Pattern22 = murmurhash3::hash("Pattern22"), Pattern23 = murmurhash3::hash("Pattern23"), Pattern24 = murmurhash3::hash("Pattern24"), Pattern25 = murmurhash3::hash("Pattern25"), Pattern26 = murmurhash3::hash("Pattern26"), Pattern27 = murmurhash3::hash("Pattern27"), Pattern28 = murmurhash3::hash("Pattern28"), Pattern29 = murmurhash3::hash("Pattern29"), Pattern30 = murmurhash3::hash("Pattern30"), Pattern31 = murmurhash3::hash("Pattern31"), Pattern32 = murmurhash3::hash("Pattern32"), Pattern33 = murmurhash3::hash("Pattern33"), Pattern34 = murmurhash3::hash("Pattern34"), Pattern35 = murmurhash3::hash("Pattern35"), Pattern36 = murmurhash3::hash("Pattern36"), Pattern37 = murmurhash3::hash("Pattern37"), Pattern38 = murmurhash3::hash("Pattern38"), Pattern39 = murmurhash3::hash("Pattern39"), Pattern40 = murmurhash3::hash("Pattern40"), Pattern41 = murmurhash3::hash("Pattern41"), Pattern43 = murmurhash3::hash("Pattern43"), Pattern45 = murmurhash3::hash("Pattern45"), Pattern46 = murmurhash3::hash("Pattern46"), Pattern48 = murmurhash3::hash("Pattern48"), Pattern49 = murmurhash3::hash("Pattern49"), Pattern51 = murmurhash3::hash("Pattern51"), Pattern52 = murmurhash3::hash("Pattern52"), Pattern53 = murmurhash3::hash("Pattern53"), Pattern55 = murmurhash3::hash("Pattern55"), Pattern56 = murmurhash3::hash("Pattern56"), }; };
	struct CookBuffTime : Tag::Member { using type = float&; };
	struct ExtraEnergy : Tag::Member { using type = float&; };
	struct ExtraStamina : Tag::Member { using type = float&; };
	struct MasterSwordSleepTimer : Tag::Member { using type = float&; };
	struct MaxEnergy : Tag::Member { using type = float&; };
	struct MaxStamina : Tag::Member { using type = float&; };
	struct SavePosRadY : Tag::Member { using type = float&; };
	struct TemporaryExtraEnergy : Tag::Member { using type = float&; };
	struct TemporaryExtraStamina : Tag::Member { using type = float&; };
	struct BreakLife : Tag::Member { using type = s32&; };
	struct CookBuff : Tag::Member { using type = s32&; };
	struct CookBuffLv : Tag::Member { using type = s32&; };
	struct CurrentMamo : Tag::Member { using type = s32&; };
	struct CurrentRupee : Tag::Member { using type = s32&; };
	struct ExtraLife : Tag::Member { using type = s32&; };
	struct Life : Tag::Member { using type = s32&; };
	struct MaxLife : Tag::Member { using type = s32&; };
	struct MaxLifeForBeforeVSGanon : Tag::Member { using type = s32&; };
	struct TemporaryBreakLife : Tag::Member { using type = s32&; };
	struct TemporaryExtraLife : Tag::Member { using type = s32&; };
	struct TemporaryLife : Tag::Member { using type = s32&; };
	struct WeaponAttachCount : Tag::Member { using type = s32&; };
	struct SavePos : Tag::Member { using type = vec3f*; };
};/* Tag::Structure GameData::PlayerStatus close */

#include "PlayerStatus/Companion.hpp"

template <> struct Data::Structure<GameData::PlayerStatus> : GameData::PlayerStatus {
	Structure<Companion> Companion;
	Data::Member<FirstSkyIslandEventFailureOnce> FirstSkyIslandEventFailureOnce;
	Data::Member<HasAnyBluePrint> HasAnyBluePrint;
	Data::Member<IsEquipShoulderBelt> IsEquipShoulderBelt;
	Data::Member<IsEquipWaistBelt> IsEquipWaistBelt;
	Data::Member<IsForceDisableSummonCompanion> IsForceDisableSummonCompanion;
	Data::Member<IsForceDisableUseSpecialPower> IsForceDisableUseSpecialPower;
	Data::Member<IsMasterSwordSleeping> IsMasterSwordSleeping;
	Data::Member<IsUseCameraPointer> IsUseCameraPointer;
	Data::Member<IsUseTemporaryLife> IsUseTemporaryLife;
	Data::Member<UseScopeStartEvent> UseScopeStartEvent;
	Data::Member<ZonauEventFailureOnce> ZonauEventFailureOnce;
	Data::Member<CurrentSpecialPower> CurrentSpecialPower;
	Data::Member<ParasailPattern> ParasailPattern;
	Data::Member<CookBuffTime> CookBuffTime;
	Data::Member<ExtraEnergy> ExtraEnergy;
	Data::Member<ExtraStamina> ExtraStamina;
	Data::Member<MasterSwordSleepTimer> MasterSwordSleepTimer;
	Data::Member<MaxEnergy> MaxEnergy;
	Data::Member<MaxStamina> MaxStamina;
	Data::Member<SavePosRadY> SavePosRadY;
	Data::Member<TemporaryExtraEnergy> TemporaryExtraEnergy;
	Data::Member<TemporaryExtraStamina> TemporaryExtraStamina;
	Data::Member<BreakLife> BreakLife;
	Data::Member<CookBuff> CookBuff;
	Data::Member<CookBuffLv> CookBuffLv;
	Data::Member<CurrentMamo> CurrentMamo;
	Data::Member<CurrentRupee> CurrentRupee;
	Data::Member<ExtraLife> ExtraLife;
	Data::Member<Life> Life;
	Data::Member<MaxLife> MaxLife;
	Data::Member<MaxLifeForBeforeVSGanon> MaxLifeForBeforeVSGanon;
	Data::Member<TemporaryBreakLife> TemporaryBreakLife;
	Data::Member<TemporaryExtraLife> TemporaryExtraLife;
	Data::Member<TemporaryLife> TemporaryLife;
	Data::Member<WeaponAttachCount> WeaponAttachCount;
	Data::Member<SavePos> SavePos;
	
	explicit Structure(Sav& s) : 
		Companion { s },
		FirstSkyIslandEventFailureOnce { s.get<struct FirstSkyIslandEventFailureOnce>() },
		HasAnyBluePrint { s.get<struct HasAnyBluePrint>() },
		IsEquipShoulderBelt { s.get<struct IsEquipShoulderBelt>() },
		IsEquipWaistBelt { s.get<struct IsEquipWaistBelt>() },
		IsForceDisableSummonCompanion { s.get<struct IsForceDisableSummonCompanion>() },
		IsForceDisableUseSpecialPower { s.get<struct IsForceDisableUseSpecialPower>() },
		IsMasterSwordSleeping { s.get<struct IsMasterSwordSleeping>() },
		IsUseCameraPointer { s.get<struct IsUseCameraPointer>() },
		IsUseTemporaryLife { s.get<struct IsUseTemporaryLife>() },
		UseScopeStartEvent { s.get<struct UseScopeStartEvent>() },
		ZonauEventFailureOnce { s.get<struct ZonauEventFailureOnce>() },
		CurrentSpecialPower { s.get<struct CurrentSpecialPower>() },
		ParasailPattern { s.get<struct ParasailPattern>() },
		CookBuffTime { s.get<struct CookBuffTime>() },
		ExtraEnergy { s.get<struct ExtraEnergy>() },
		ExtraStamina { s.get<struct ExtraStamina>() },
		MasterSwordSleepTimer { s.get<struct MasterSwordSleepTimer>() },
		MaxEnergy { s.get<struct MaxEnergy>() },
		MaxStamina { s.get<struct MaxStamina>() },
		SavePosRadY { s.get<struct SavePosRadY>() },
		TemporaryExtraEnergy { s.get<struct TemporaryExtraEnergy>() },
		TemporaryExtraStamina { s.get<struct TemporaryExtraStamina>() },
		BreakLife { s.get<struct BreakLife>() },
		CookBuff { s.get<struct CookBuff>() },
		CookBuffLv { s.get<struct CookBuffLv>() },
		CurrentMamo { s.get<struct CurrentMamo>() },
		CurrentRupee { s.get<struct CurrentRupee>() },
		ExtraLife { s.get<struct ExtraLife>() },
		Life { s.get<struct Life>() },
		MaxLife { s.get<struct MaxLife>() },
		MaxLifeForBeforeVSGanon { s.get<struct MaxLifeForBeforeVSGanon>() },
		TemporaryBreakLife { s.get<struct TemporaryBreakLife>() },
		TemporaryExtraLife { s.get<struct TemporaryExtraLife>() },
		TemporaryLife { s.get<struct TemporaryLife>() },
		WeaponAttachCount { s.get<struct WeaponAttachCount>() },
		SavePos { s.get<struct SavePos>() }
	{ }
};/* Data::Structure GameData::PlayerStatus close */

template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::FirstSkyIslandEventFailureOnce> = murmurhash3::hash("PlayerStatus.FirstSkyIslandEventFailureOnce");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::HasAnyBluePrint> = murmurhash3::hash("PlayerStatus.HasAnyBluePrint");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::IsEquipShoulderBelt> = murmurhash3::hash("PlayerStatus.IsEquipShoulderBelt");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::IsEquipWaistBelt> = murmurhash3::hash("PlayerStatus.IsEquipWaistBelt");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::IsForceDisableSummonCompanion> = murmurhash3::hash("PlayerStatus.IsForceDisableSummonCompanion");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::IsForceDisableUseSpecialPower> = murmurhash3::hash("PlayerStatus.IsForceDisableUseSpecialPower");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::IsMasterSwordSleeping> = murmurhash3::hash("PlayerStatus.IsMasterSwordSleeping");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::IsUseCameraPointer> = murmurhash3::hash("PlayerStatus.IsUseCameraPointer");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::IsUseTemporaryLife> = murmurhash3::hash("PlayerStatus.IsUseTemporaryLife");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::UseScopeStartEvent> = murmurhash3::hash("PlayerStatus.UseScopeStartEvent");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::ZonauEventFailureOnce> = murmurhash3::hash("PlayerStatus.ZonauEventFailureOnce");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::CurrentSpecialPower> = murmurhash3::hash("PlayerStatus.CurrentSpecialPower");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::ParasailPattern> = murmurhash3::hash("PlayerStatus.ParasailPattern");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::CookBuffTime> = murmurhash3::hash("PlayerStatus.CookBuffTime");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::ExtraEnergy> = murmurhash3::hash("PlayerStatus.ExtraEnergy");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::ExtraStamina> = murmurhash3::hash("PlayerStatus.ExtraStamina");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::MasterSwordSleepTimer> = murmurhash3::hash("PlayerStatus.MasterSwordSleepTimer");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::MaxEnergy> = murmurhash3::hash("PlayerStatus.MaxEnergy");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::MaxStamina> = murmurhash3::hash("PlayerStatus.MaxStamina");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::SavePosRadY> = murmurhash3::hash("PlayerStatus.SavePosRadY");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::TemporaryExtraEnergy> = murmurhash3::hash("PlayerStatus.TemporaryExtraEnergy");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::TemporaryExtraStamina> = murmurhash3::hash("PlayerStatus.TemporaryExtraStamina");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::BreakLife> = murmurhash3::hash("PlayerStatus.BreakLife");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::CookBuff> = murmurhash3::hash("PlayerStatus.CookBuff");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::CookBuffLv> = murmurhash3::hash("PlayerStatus.CookBuffLv");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::CurrentMamo> = murmurhash3::hash("PlayerStatus.CurrentMamo");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::CurrentRupee> = murmurhash3::hash("PlayerStatus.CurrentRupee");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::ExtraLife> = murmurhash3::hash("PlayerStatus.ExtraLife");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Life> = murmurhash3::hash("PlayerStatus.Life");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::MaxLife> = murmurhash3::hash("PlayerStatus.MaxLife");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::MaxLifeForBeforeVSGanon> = murmurhash3::hash("PlayerStatus.MaxLifeForBeforeVSGanon");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::TemporaryBreakLife> = murmurhash3::hash("PlayerStatus.TemporaryBreakLife");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::TemporaryExtraLife> = murmurhash3::hash("PlayerStatus.TemporaryExtraLife");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::TemporaryLife> = murmurhash3::hash("PlayerStatus.TemporaryLife");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::WeaponAttachCount> = murmurhash3::hash("PlayerStatus.WeaponAttachCount");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::SavePos> = murmurhash3::hash("PlayerStatus.SavePos");