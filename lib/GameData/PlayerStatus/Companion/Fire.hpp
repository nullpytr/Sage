#pragma once
#include <sage>

struct GameData::PlayerStatus::Companion::Fire : Tag::Structure {
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
};/* Tag::Structure GameData::PlayerStatus::Companion::Fire close */

#include "Fire/ForUI.hpp"

template <> struct Data::Structure<GameData::PlayerStatus::Companion::Fire> : GameData::PlayerStatus::Companion::Fire {
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
};/* Data::Structure GameData::PlayerStatus::Companion::Fire close */

template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::CurrentPos> = murmurhash3::hash("PlayerStatus.Companion.Fire.CurrentPos");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::IsFollowMode> = murmurhash3::hash("PlayerStatus.Companion.Fire.IsFollowMode");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::IsGet> = murmurhash3::hash("PlayerStatus.Companion.Fire.IsGet");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::IsGoThroughAirWall> = murmurhash3::hash("PlayerStatus.Companion.Fire.IsGoThroughAirWall");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::IsGoThroughAirWallPrepare> = murmurhash3::hash("PlayerStatus.Companion.Fire.IsGoThroughAirWallPrepare");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::IsLeaveFollower> = murmurhash3::hash("PlayerStatus.Companion.Fire.IsLeaveFollower");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::IsPlayedSoulSageFirstAppearanceEvent> = murmurhash3::hash("PlayerStatus.Companion.Fire.IsPlayedSoulSageFirstAppearanceEvent");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::IsSageDynamicGenerate> = murmurhash3::hash("PlayerStatus.Companion.Fire.IsSageDynamicGenerate");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::IsSummon> = murmurhash3::hash("PlayerStatus.Companion.Fire.IsSummon");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::RemainingEnergy> = murmurhash3::hash("PlayerStatus.Companion.Fire.RemainingEnergy");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Fire::JoiningCondition> = murmurhash3::hash("PlayerStatus.Companion.Fire.JoiningCondition");