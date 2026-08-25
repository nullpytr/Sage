#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PlayerStatus::Companion::Fire : Tag::Structure {
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
};/* Tag::Structure GameData::PlayerStatus::Companion::Fire close */

#include "Fire/ForUI.hpp"

template <> struct Data::Structure<GameData::PlayerStatus::Companion::Fire> : GameData::PlayerStatus::Companion::Fire {
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
};/* Data::Structure GameData::PlayerStatus::Companion::Fire close */

template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::IsFollowMode> = murmurhash3::hash("PlayerStatus.Companion.Fire.IsFollowMode");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::IsGet> = murmurhash3::hash("PlayerStatus.Companion.Fire.IsGet");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::IsGoThroughAirWall> = murmurhash3::hash("PlayerStatus.Companion.Fire.IsGoThroughAirWall");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::IsGoThroughAirWallPrepare> = murmurhash3::hash("PlayerStatus.Companion.Fire.IsGoThroughAirWallPrepare");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::IsLeaveFollower> = murmurhash3::hash("PlayerStatus.Companion.Fire.IsLeaveFollower");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::IsPlayedSoulSageFirstAppearanceEvent> = murmurhash3::hash("PlayerStatus.Companion.Fire.IsPlayedSoulSageFirstAppearanceEvent");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::IsSageDynamicGenerate> = murmurhash3::hash("PlayerStatus.Companion.Fire.IsSageDynamicGenerate");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::IsSummon> = murmurhash3::hash("PlayerStatus.Companion.Fire.IsSummon");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::JoiningCondition> = murmurhash3::hash("PlayerStatus.Companion.Fire.JoiningCondition");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::RemainingEnergy> = murmurhash3::hash("PlayerStatus.Companion.Fire.RemainingEnergy");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::CurrentPos> = murmurhash3::hash("PlayerStatus.Companion.Fire.CurrentPos");