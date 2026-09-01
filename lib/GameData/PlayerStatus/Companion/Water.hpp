#pragma once
#include <sage>

struct GameData::PlayerStatus::Companion::Water : Tag::Structure {
	struct CurrentPos : Tag::Member { using type = vec3f*; };
	struct IsFollowMode : Tag::Member { using type = bool&; };
	struct IsGet : Tag::Member { using type = bool&; };
	struct IsGoThroughAirWall : Tag::Member { using type = bool&; };
	struct IsGoThroughAirWallPrepare : Tag::Member { using type = bool&; };
	struct IsLeaveFollower : Tag::Member { using type = bool&; };
	struct IsPlayedSoulSageFirstAppearanceEvent : Tag::Member { using type = bool&; };
	struct IsSageDynamicGenerate : Tag::Member { using type = bool&; };
	struct IsSummon : Tag::Member { using type = bool&; };
	struct RemainingEnergy : Tag::Member { using type = float&; };
	struct JoiningCondition : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Joining = murmurhash3::hash("Joining"), BreakawayNotice = murmurhash3::hash("BreakawayNotice"), Breakaway = murmurhash3::hash("Breakaway"), }; };
		using type = enum_t<JoiningCondition>&;
	};
	struct ForUI;
};/* Tag::Structure GameData::PlayerStatus::Companion::Water close */

#include "Water/ForUI.hpp"

template <> struct Data::Structure<GameData::PlayerStatus::Companion::Water> : GameData::PlayerStatus::Companion::Water {
	Member<CurrentPos> CurrentPos;
	Member<IsFollowMode> IsFollowMode;
	Member<IsGet> IsGet;
	Member<IsGoThroughAirWall> IsGoThroughAirWall;
	Member<IsGoThroughAirWallPrepare> IsGoThroughAirWallPrepare;
	Member<IsLeaveFollower> IsLeaveFollower;
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
		IsPlayedSoulSageFirstAppearanceEvent { s.get<struct IsPlayedSoulSageFirstAppearanceEvent>() },
		IsSageDynamicGenerate { s.get<struct IsSageDynamicGenerate>() },
		IsSummon { s.get<struct IsSummon>() },
		RemainingEnergy { s.get<struct RemainingEnergy>() },
		JoiningCondition { s.get<struct JoiningCondition>() },
		ForUI { s.get<struct ForUI>() }
	{ }
};/* Structure Data::Structure GameData::PlayerStatus::Companion::Water close */

template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::CurrentPos> { "PlayerStatus.Companion.Water.CurrentPos" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::IsFollowMode> { "PlayerStatus.Companion.Water.IsFollowMode" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::IsGet> { "PlayerStatus.Companion.Water.IsGet" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::IsGoThroughAirWall> { "PlayerStatus.Companion.Water.IsGoThroughAirWall" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::IsGoThroughAirWallPrepare> { "PlayerStatus.Companion.Water.IsGoThroughAirWallPrepare" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::IsLeaveFollower> { "PlayerStatus.Companion.Water.IsLeaveFollower" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::IsPlayedSoulSageFirstAppearanceEvent> { "PlayerStatus.Companion.Water.IsPlayedSoulSageFirstAppearanceEvent" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::IsSageDynamicGenerate> { "PlayerStatus.Companion.Water.IsSageDynamicGenerate" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::IsSummon> { "PlayerStatus.Companion.Water.IsSummon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::RemainingEnergy> { "PlayerStatus.Companion.Water.RemainingEnergy" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::JoiningCondition> { "PlayerStatus.Companion.Water.JoiningCondition" };