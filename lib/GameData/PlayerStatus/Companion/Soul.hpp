#pragma once
#include <sage>

struct GameData::PlayerStatus::Companion::Soul : Tag::Structure {
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
		enum underlying_enum_t : hash_t { Joining = murmurhash3::hash("Joining"), BreakawayNotice = murmurhash3::hash("BreakawayNotice"), Breakaway = murmurhash3::hash("Breakaway"), };
		using type = enum_t<JoiningCondition>&;
	};
	struct ForUI;
};/* Tag::Structure GameData::PlayerStatus::Companion::Soul close */

#include "Soul/ForUI.hpp"

template <> struct Data::Structure<GameData::PlayerStatus::Companion::Soul> : GameData::PlayerStatus::Companion::Soul {
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
		ForUI { s }
	{ }
};/* Data::Structure GameData::PlayerStatus::Companion::Soul close */

template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::CurrentPos> { "PlayerStatus.Companion.Soul.CurrentPos" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::IsFollowMode> { "PlayerStatus.Companion.Soul.IsFollowMode" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::IsGet> { "PlayerStatus.Companion.Soul.IsGet" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::IsGoThroughAirWall> { "PlayerStatus.Companion.Soul.IsGoThroughAirWall" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::IsGoThroughAirWallPrepare> { "PlayerStatus.Companion.Soul.IsGoThroughAirWallPrepare" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::IsLeaveFollower> { "PlayerStatus.Companion.Soul.IsLeaveFollower" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::IsPlayedSoulSageFirstAppearanceEvent> { "PlayerStatus.Companion.Soul.IsPlayedSoulSageFirstAppearanceEvent" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::IsSageDynamicGenerate> { "PlayerStatus.Companion.Soul.IsSageDynamicGenerate" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::IsSummon> { "PlayerStatus.Companion.Soul.IsSummon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::RemainingEnergy> { "PlayerStatus.Companion.Soul.RemainingEnergy" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::JoiningCondition> { "PlayerStatus.Companion.Soul.JoiningCondition" };