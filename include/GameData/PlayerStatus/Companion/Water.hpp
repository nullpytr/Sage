#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PlayerStatus::Companion::Water : Tag::Structure {
	struct IsFollowMode : Tag::Member { using type = bool&; };
	struct IsGet : Tag::Member { using type = bool&; };
	struct IsGoThroughAirWall : Tag::Member { using type = bool&; };
	struct IsGoThroughAirWallPrepare : Tag::Member { using type = bool&; };
	struct IsLeaveFollower : Tag::Member { using type = bool&; };
	struct IsPlayedSoulSageFirstAppearanceEvent : Tag::Member { using type = bool&; };
	struct IsSageDynamicGenerate : Tag::Member { using type = bool&; };
	struct IsSummon : Tag::Member { using type = bool&; };
	struct JoiningCondition : Tag::Enum { using type = ::Enum::Scalar<JoiningCondition>; enum enum_type : hash_t { Joining = murmurhash3::hash("Joining"), BreakawayNotice = murmurhash3::hash("BreakawayNotice"), Breakaway = murmurhash3::hash("Breakaway"), }; };
	struct RemainingEnergy : Tag::Member { using type = float&; };
	struct ForUI;
	struct CurrentPos : Tag::Member { using type = vec3f*; };
};/* Tag::Structure GameData::PlayerStatus::Companion::Water close */

#include "Water/ForUI.hpp"

template <> struct Data::Structure<GameData::PlayerStatus::Companion::Water> : GameData::PlayerStatus::Companion::Water {
	Data::Member<IsFollowMode> IsFollowMode;
	Data::Member<IsGet> IsGet;
	Data::Member<IsGoThroughAirWall> IsGoThroughAirWall;
	Data::Member<IsGoThroughAirWallPrepare> IsGoThroughAirWallPrepare;
	Data::Member<IsLeaveFollower> IsLeaveFollower;
	Data::Member<IsPlayedSoulSageFirstAppearanceEvent> IsPlayedSoulSageFirstAppearanceEvent;
	Data::Member<IsSageDynamicGenerate> IsSageDynamicGenerate;
	Data::Member<IsSummon> IsSummon;
	Data::Member<JoiningCondition> JoiningCondition;
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
};/* Data::Structure GameData::PlayerStatus::Companion::Water close */

template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::IsFollowMode> = murmurhash3::hash("PlayerStatus.Companion.Water.IsFollowMode");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::IsGet> = murmurhash3::hash("PlayerStatus.Companion.Water.IsGet");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::IsGoThroughAirWall> = murmurhash3::hash("PlayerStatus.Companion.Water.IsGoThroughAirWall");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::IsGoThroughAirWallPrepare> = murmurhash3::hash("PlayerStatus.Companion.Water.IsGoThroughAirWallPrepare");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::IsLeaveFollower> = murmurhash3::hash("PlayerStatus.Companion.Water.IsLeaveFollower");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::IsPlayedSoulSageFirstAppearanceEvent> = murmurhash3::hash("PlayerStatus.Companion.Water.IsPlayedSoulSageFirstAppearanceEvent");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::IsSageDynamicGenerate> = murmurhash3::hash("PlayerStatus.Companion.Water.IsSageDynamicGenerate");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::IsSummon> = murmurhash3::hash("PlayerStatus.Companion.Water.IsSummon");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::JoiningCondition> = murmurhash3::hash("PlayerStatus.Companion.Water.JoiningCondition");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::RemainingEnergy> = murmurhash3::hash("PlayerStatus.Companion.Water.RemainingEnergy");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::CurrentPos> = murmurhash3::hash("PlayerStatus.Companion.Water.CurrentPos");