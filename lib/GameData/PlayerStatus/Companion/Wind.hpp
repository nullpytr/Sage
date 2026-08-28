#pragma once
#include <sage>

struct GameData::PlayerStatus::Companion::Wind : Tag::Structure {
	struct IsFollowMode : Tag::Member { using type = bool&; };
	struct IsGet : Tag::Member { using type = bool&; };
	struct IsGoThroughAirWall : Tag::Member { using type = bool&; };
	struct IsGoThroughAirWallPrepare : Tag::Member { using type = bool&; };
	struct IsLeaveFollower : Tag::Member { using type = bool&; };
	struct IsPlayedSoulSageFirstAppearanceEvent : Tag::Member { using type = bool&; };
	struct IsSageDynamicGenerate : Tag::Member { using type = bool&; };
	struct IsSummon : Tag::Member { using type = bool&; };
	struct JoiningCondition : Tag::Enum {
		enum underlying_enum_t : hash_t { Joining = murmurhash3::hash("Joining"), BreakawayNotice = murmurhash3::hash("BreakawayNotice"), Breakaway = murmurhash3::hash("Breakaway"), };
		using type = enum_t<JoiningCondition>&;
	};
	struct RemainingEnergy : Tag::Member { using type = float&; };
	struct ForUI;
	struct CurrentPos : Tag::Member { using type = vec3f*; };
};/* Tag::Structure GameData::PlayerStatus::Companion::Wind close */

#include "Wind/ForUI.hpp"

template <> struct Data::Structure<GameData::PlayerStatus::Companion::Wind> : GameData::PlayerStatus::Companion::Wind {
	Data::Member<IsFollowMode> IsFollowMode;
	Data::Member<IsGet> IsGet;
	Data::Member<IsGoThroughAirWall> IsGoThroughAirWall;
	Data::Member<IsGoThroughAirWallPrepare> IsGoThroughAirWallPrepare;
	Data::Member<IsLeaveFollower> IsLeaveFollower;
	Data::Member<IsPlayedSoulSageFirstAppearanceEvent> IsPlayedSoulSageFirstAppearanceEvent;
	Data::Member<IsSageDynamicGenerate> IsSageDynamicGenerate;
	Data::Member<IsSummon> IsSummon;
	Data::Enum<JoiningCondition> JoiningCondition;
	Data::Member<RemainingEnergy> RemainingEnergy;
	Structure<ForUI> ForUI;
	Data::Member<CurrentPos> CurrentPos;
	
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
};/* Data::Structure GameData::PlayerStatus::Companion::Wind close */

template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::IsFollowMode> = murmurhash3::hash("PlayerStatus.Companion.Wind.IsFollowMode");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::IsGet> = murmurhash3::hash("PlayerStatus.Companion.Wind.IsGet");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::IsGoThroughAirWall> = murmurhash3::hash("PlayerStatus.Companion.Wind.IsGoThroughAirWall");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::IsGoThroughAirWallPrepare> = murmurhash3::hash("PlayerStatus.Companion.Wind.IsGoThroughAirWallPrepare");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::IsLeaveFollower> = murmurhash3::hash("PlayerStatus.Companion.Wind.IsLeaveFollower");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::IsPlayedSoulSageFirstAppearanceEvent> = murmurhash3::hash("PlayerStatus.Companion.Wind.IsPlayedSoulSageFirstAppearanceEvent");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::IsSageDynamicGenerate> = murmurhash3::hash("PlayerStatus.Companion.Wind.IsSageDynamicGenerate");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::IsSummon> = murmurhash3::hash("PlayerStatus.Companion.Wind.IsSummon");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::JoiningCondition> = murmurhash3::hash("PlayerStatus.Companion.Wind.JoiningCondition");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::RemainingEnergy> = murmurhash3::hash("PlayerStatus.Companion.Wind.RemainingEnergy");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::CurrentPos> = murmurhash3::hash("PlayerStatus.Companion.Wind.CurrentPos");