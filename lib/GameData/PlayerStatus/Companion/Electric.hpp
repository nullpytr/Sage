#pragma once
#include <sage>

struct GameData::PlayerStatus::Companion::Electric : Tag::Structure {
	struct CurrentPos : Tag::Member { using type = vec3f*; };
	struct IsFollowMode : Tag::Member { using type = bool&; };
	struct IsGet : Tag::Member { using type = bool&; };
	struct IsGoThroughAirWall : Tag::Member { using type = bool&; };
	struct IsGoThroughAirWallPrepare : Tag::Member { using type = bool&; };
	struct IsLeaveFollower : Tag::Member { using type = bool&; };
	struct IsLightningReady : Tag::Member { using type = bool&; };
	struct IsPlayedSoulSageFirstAppearanceEvent : Tag::Member { using type = bool&; };
	struct IsSageDynamicGenerate : Tag::Member { using type = bool&; };
	struct IsSummon : Tag::Member { using type = bool&; };
	struct RemainingEnergy : Tag::Member { using type = float&; };
	struct JoiningCondition : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Joining = murmurhash3::hash("Joining"), BreakawayNotice = murmurhash3::hash("BreakawayNotice"), Breakaway = murmurhash3::hash("Breakaway"), }; };
		using type = enum_t<JoiningCondition>&;
	};
	struct ForUI;
};/* Tag::Structure GameData::PlayerStatus::Companion::Electric close */

#include "Electric/ForUI.hpp"

template <> struct Data::Structure<GameData::PlayerStatus::Companion::Electric> : GameData::PlayerStatus::Companion::Electric {
	Member<CurrentPos> CurrentPos;
	Member<IsFollowMode> IsFollowMode;
	Member<IsGet> IsGet;
	Member<IsGoThroughAirWall> IsGoThroughAirWall;
	Member<IsGoThroughAirWallPrepare> IsGoThroughAirWallPrepare;
	Member<IsLeaveFollower> IsLeaveFollower;
	Member<IsLightningReady> IsLightningReady;
	Member<IsPlayedSoulSageFirstAppearanceEvent> IsPlayedSoulSageFirstAppearanceEvent;
	Member<IsSageDynamicGenerate> IsSageDynamicGenerate;
	Member<IsSummon> IsSummon;
	Member<RemainingEnergy> RemainingEnergy;
	Enum<JoiningCondition> JoiningCondition;
	Structure<ForUI> ForUI;
	
	explicit Structure(Sav& s) : 
		CurrentPos { s.get<struct CurrentPos>() },
		IsFollowMode { s.get<struct IsFollowMode>() },
		IsGet { s.get<struct IsGet>() },
		IsGoThroughAirWall { s.get<struct IsGoThroughAirWall>() },
		IsGoThroughAirWallPrepare { s.get<struct IsGoThroughAirWallPrepare>() },
		IsLeaveFollower { s.get<struct IsLeaveFollower>() },
		IsLightningReady { s.get<struct IsLightningReady>() },
		IsPlayedSoulSageFirstAppearanceEvent { s.get<struct IsPlayedSoulSageFirstAppearanceEvent>() },
		IsSageDynamicGenerate { s.get<struct IsSageDynamicGenerate>() },
		IsSummon { s.get<struct IsSummon>() },
		RemainingEnergy { s.get<struct RemainingEnergy>() },
		JoiningCondition { s.get<struct JoiningCondition>() },
		ForUI { s.get<struct ForUI>() }
	{ }
};/* Structure Data::Structure GameData::PlayerStatus::Companion::Electric close */

template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::CurrentPos> { "PlayerStatus.Companion.Electric.CurrentPos" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::IsFollowMode> { "PlayerStatus.Companion.Electric.IsFollowMode" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::IsGet> { "PlayerStatus.Companion.Electric.IsGet" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::IsGoThroughAirWall> { "PlayerStatus.Companion.Electric.IsGoThroughAirWall" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::IsGoThroughAirWallPrepare> { "PlayerStatus.Companion.Electric.IsGoThroughAirWallPrepare" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::IsLeaveFollower> { "PlayerStatus.Companion.Electric.IsLeaveFollower" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::IsLightningReady> { "PlayerStatus.Companion.Electric.IsLightningReady" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::IsPlayedSoulSageFirstAppearanceEvent> { "PlayerStatus.Companion.Electric.IsPlayedSoulSageFirstAppearanceEvent" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::IsSageDynamicGenerate> { "PlayerStatus.Companion.Electric.IsSageDynamicGenerate" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::IsSummon> { "PlayerStatus.Companion.Electric.IsSummon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::RemainingEnergy> { "PlayerStatus.Companion.Electric.RemainingEnergy" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::JoiningCondition> { "PlayerStatus.Companion.Electric.JoiningCondition" };