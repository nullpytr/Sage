#pragma once
#include <sage>

struct GameData::PlayerStatus::Companion::Wind : Tag::Structure {
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
};/* Tag::Structure GameData::PlayerStatus::Companion::Wind close */

#include "Wind/ForUI.hpp"

template <> struct Data::Structure<GameData::PlayerStatus::Companion::Wind> : GameData::PlayerStatus::Companion::Wind {
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
};/* Data::Structure GameData::PlayerStatus::Companion::Wind close */

template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::CurrentPos> { "PlayerStatus.Companion.Wind.CurrentPos" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::IsFollowMode> { "PlayerStatus.Companion.Wind.IsFollowMode" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::IsGet> { "PlayerStatus.Companion.Wind.IsGet" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::IsGoThroughAirWall> { "PlayerStatus.Companion.Wind.IsGoThroughAirWall" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::IsGoThroughAirWallPrepare> { "PlayerStatus.Companion.Wind.IsGoThroughAirWallPrepare" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::IsLeaveFollower> { "PlayerStatus.Companion.Wind.IsLeaveFollower" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::IsPlayedSoulSageFirstAppearanceEvent> { "PlayerStatus.Companion.Wind.IsPlayedSoulSageFirstAppearanceEvent" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::IsSageDynamicGenerate> { "PlayerStatus.Companion.Wind.IsSageDynamicGenerate" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::IsSummon> { "PlayerStatus.Companion.Wind.IsSummon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::RemainingEnergy> { "PlayerStatus.Companion.Wind.RemainingEnergy" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::JoiningCondition> { "PlayerStatus.Companion.Wind.JoiningCondition" };