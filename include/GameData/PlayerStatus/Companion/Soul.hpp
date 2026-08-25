#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PlayerStatus::Companion::Soul : Tag::Structure {
	struct IsFollowMode : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsGet : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsGoThroughAirWall : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsGoThroughAirWallPrepare : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsLeaveFollower : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsPlayedSoulSageFirstAppearanceEvent : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsSageDynamicGenerate : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsSummon : Tag::Member { using type = bool&; using adapter = bool&; };
	struct JoiningCondition : Tag::Enum { using type = ::Enum::Scalar<JoiningCondition>; using adapter = ::Enum::Scalar<JoiningCondition>; enum enum_type : hash_t { Joining = murmurhash3::hash("Joining"), BreakawayNotice = murmurhash3::hash("BreakawayNotice"), Breakaway = murmurhash3::hash("Breakaway"), }; };
	struct RemainingEnergy : Tag::Member { using type = float&; using adapter = float&; };
	struct ForUI;
	struct CurrentPos : Tag::Member { using type = vec3f; using adapter = vec3f*; };
};/* Tag::Structure GameData::PlayerStatus::Companion::Soul close */

#include "Soul/ForUI.hpp"

template <> struct Data::Structure<GameData::PlayerStatus::Companion::Soul> : GameData::PlayerStatus::Companion::Soul {
	IsFollowMode::type IsFollowMode;
	IsGet::type IsGet;
	IsGoThroughAirWall::type IsGoThroughAirWall;
	IsGoThroughAirWallPrepare::type IsGoThroughAirWallPrepare;
	IsLeaveFollower::type IsLeaveFollower;
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
		IsPlayedSoulSageFirstAppearanceEvent { s.get<struct IsPlayedSoulSageFirstAppearanceEvent>() },
		IsSageDynamicGenerate { s.get<struct IsSageDynamicGenerate>() },
		IsSummon { s.get<struct IsSummon>() },
		JoiningCondition { s.get<struct JoiningCondition>() },
		RemainingEnergy { s.get<struct RemainingEnergy>() },
		ForUI { s },
		CurrentPos { s.get<struct CurrentPos>() }
	{ }
};/* Data::Structure GameData::PlayerStatus::Companion::Soul close */

template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::IsFollowMode> = murmurhash3::hash("PlayerStatus.Companion.Soul.IsFollowMode");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::IsGet> = murmurhash3::hash("PlayerStatus.Companion.Soul.IsGet");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::IsGoThroughAirWall> = murmurhash3::hash("PlayerStatus.Companion.Soul.IsGoThroughAirWall");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::IsGoThroughAirWallPrepare> = murmurhash3::hash("PlayerStatus.Companion.Soul.IsGoThroughAirWallPrepare");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::IsLeaveFollower> = murmurhash3::hash("PlayerStatus.Companion.Soul.IsLeaveFollower");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::IsPlayedSoulSageFirstAppearanceEvent> = murmurhash3::hash("PlayerStatus.Companion.Soul.IsPlayedSoulSageFirstAppearanceEvent");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::IsSageDynamicGenerate> = murmurhash3::hash("PlayerStatus.Companion.Soul.IsSageDynamicGenerate");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::IsSummon> = murmurhash3::hash("PlayerStatus.Companion.Soul.IsSummon");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::JoiningCondition> = murmurhash3::hash("PlayerStatus.Companion.Soul.JoiningCondition");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::RemainingEnergy> = murmurhash3::hash("PlayerStatus.Companion.Soul.RemainingEnergy");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::CurrentPos> = murmurhash3::hash("PlayerStatus.Companion.Soul.CurrentPos");