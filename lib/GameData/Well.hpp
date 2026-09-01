#pragma once
#include <sage>

struct GameData::Well : Tag::Structure {
	struct CollectionRewardUnit : Tag::Member { using type = s32&; };
	struct DiscoverNumCurrent : Tag::Member { using type = s32&; };
	struct DiscoverNumLeft : Tag::Member { using type = s32&; };
	struct DiscoverNumTotal : Tag::Member { using type = s32&; };
	struct ReportNum : Tag::Member { using type = s32&; };
	struct ReportNumMinusOne : Tag::Member { using type = s32&; };
	struct ReportNumThisTime : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::Well close */

template <> struct Data::Structure<GameData::Well> : GameData::Well {
	Member<CollectionRewardUnit> CollectionRewardUnit;
	Member<DiscoverNumCurrent> DiscoverNumCurrent;
	Member<DiscoverNumLeft> DiscoverNumLeft;
	Member<DiscoverNumTotal> DiscoverNumTotal;
	Member<ReportNum> ReportNum;
	Member<ReportNumMinusOne> ReportNumMinusOne;
	Member<ReportNumThisTime> ReportNumThisTime;
	
	explicit Structure(Sav& s) : 
		CollectionRewardUnit { s.get<struct CollectionRewardUnit>() },
		DiscoverNumCurrent { s.get<struct DiscoverNumCurrent>() },
		DiscoverNumLeft { s.get<struct DiscoverNumLeft>() },
		DiscoverNumTotal { s.get<struct DiscoverNumTotal>() },
		ReportNum { s.get<struct ReportNum>() },
		ReportNumMinusOne { s.get<struct ReportNumMinusOne>() },
		ReportNumThisTime { s.get<struct ReportNumThisTime>() }
	{ }
};/* Structure Data::Structure GameData::Well close */

template <> hash_value_t constexpr Data::Hashtable<GameData::Well::CollectionRewardUnit> { "WellCollectionRewardUnit" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Well::DiscoverNumCurrent> { "WellDiscoverNumCurrent" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Well::DiscoverNumLeft> { "WellDiscoverNumLeft" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Well::DiscoverNumTotal> { "WellDiscoverNumTotal" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Well::ReportNum> { "WellReportNum" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Well::ReportNumMinusOne> { "WellReportNumMinusOne" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Well::ReportNumThisTime> { "WellReportNumThisTime" };