#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PlayerStatus::Companion::Fire : Tag::Structure {
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
};/* Tag::Structure GameData::PlayerStatus::Companion::Fire close */

#include "Fire/ForUI.hpp"

template <> struct Data::Structure<GameData::PlayerStatus::Companion::Fire> : GameData::PlayerStatus::Companion::Fire {
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