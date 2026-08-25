#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PlayerStatus::Companion::Electric : Tag::Structure {
	struct IsFollowMode : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsGet : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsGoThroughAirWall : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsGoThroughAirWallPrepare : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsLeaveFollower : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsLightningReady : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsPlayedSoulSageFirstAppearanceEvent : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsSageDynamicGenerate : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsSummon : Tag::Member { using type = bool&; using adapter = bool&; };
	struct JoiningCondition : Tag::Enum { using type = ::Enum::Scalar<JoiningCondition>; using adapter = ::Enum::Scalar<JoiningCondition>; enum enum_type : hash_t { Joining = murmurhash3::hash("Joining"), BreakawayNotice = murmurhash3::hash("BreakawayNotice"), Breakaway = murmurhash3::hash("Breakaway"), }; };
	struct RemainingEnergy : Tag::Member { using type = float&; using adapter = float&; };
	struct ForUI;
	struct CurrentPos : Tag::Member { using type = vec3f; using adapter = vec3f*; };
};/* Tag::Structure GameData::PlayerStatus::Companion::Electric close */

#include "Electric/ForUI.hpp"

template <> struct Data::Structure<GameData::PlayerStatus::Companion::Electric> : GameData::PlayerStatus::Companion::Electric {
	IsFollowMode::type IsFollowMode;
	IsGet::type IsGet;
	IsGoThroughAirWall::type IsGoThroughAirWall;
	IsGoThroughAirWallPrepare::type IsGoThroughAirWallPrepare;
	IsLeaveFollower::type IsLeaveFollower;
	IsLightningReady::type IsLightningReady;
	IsPlayedSoulSageFirstAppearanceEvent::type IsPlayedSoulSageFirstAppearanceEvent;
	IsSageDynamicGenerate::type IsSageDynamicGenerate;
	IsSummon::type IsSummon;
	JoiningCondition::type JoiningCondition;
	RemainingEnergy::type RemainingEnergy;
	Structure<ForUI> ForUI;
	CurrentPos::type CurrentPos;
	
	explicit Structure(Sav& s) : 
		IsFollowMode { s.get<struct IsFollowMode>() },
		IsGet { s.get<struct IsGet>() },
		IsGoThroughAirWall { s.get<struct IsGoThroughAirWall>() },
		IsGoThroughAirWallPrepare { s.get<struct IsGoThroughAirWallPrepare>() },
		IsLeaveFollower { s.get<struct IsLeaveFollower>() },
		IsLightningReady { s.get<struct IsLightningReady>() },
		IsPlayedSoulSageFirstAppearanceEvent { s.get<struct IsPlayedSoulSageFirstAppearanceEvent>() },
		IsSageDynamicGenerate { s.get<struct IsSageDynamicGenerate>() },
		IsSummon { s.get<struct IsSummon>() },
		JoiningCondition { s.get<struct JoiningCondition>() },
		RemainingEnergy { s.get<struct RemainingEnergy>() },
		ForUI { s },
		CurrentPos { s.get<struct CurrentPos>() }
	{ }
};/* Data::Structure GameData::PlayerStatus::Companion::Electric close */

template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::IsFollowMode> = murmurhash3::hash("PlayerStatus.Companion.Electric.IsFollowMode");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::IsGet> = murmurhash3::hash("PlayerStatus.Companion.Electric.IsGet");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::IsGoThroughAirWall> = murmurhash3::hash("PlayerStatus.Companion.Electric.IsGoThroughAirWall");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::IsGoThroughAirWallPrepare> = murmurhash3::hash("PlayerStatus.Companion.Electric.IsGoThroughAirWallPrepare");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::IsLeaveFollower> = murmurhash3::hash("PlayerStatus.Companion.Electric.IsLeaveFollower");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::IsLightningReady> = murmurhash3::hash("PlayerStatus.Companion.Electric.IsLightningReady");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::IsPlayedSoulSageFirstAppearanceEvent> = murmurhash3::hash("PlayerStatus.Companion.Electric.IsPlayedSoulSageFirstAppearanceEvent");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::IsSageDynamicGenerate> = murmurhash3::hash("PlayerStatus.Companion.Electric.IsSageDynamicGenerate");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::IsSummon> = murmurhash3::hash("PlayerStatus.Companion.Electric.IsSummon");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::JoiningCondition> = murmurhash3::hash("PlayerStatus.Companion.Electric.JoiningCondition");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::RemainingEnergy> = murmurhash3::hash("PlayerStatus.Companion.Electric.RemainingEnergy");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::CurrentPos> = murmurhash3::hash("PlayerStatus.Companion.Electric.CurrentPos");