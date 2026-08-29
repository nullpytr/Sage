#pragma once
#include <sage>

struct GameData::PlayerStatus::Companion::Electric::ForUI : Tag::Structure {
	struct RemainingMinute : Tag::Member { using type = s32&; };
	struct RemainingSecond : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::PlayerStatus::Companion::Electric::ForUI close */

template <> struct Data::Structure<GameData::PlayerStatus::Companion::Electric::ForUI> : GameData::PlayerStatus::Companion::Electric::ForUI {
	Member<RemainingMinute> RemainingMinute;
	Member<RemainingSecond> RemainingSecond;
	
	explicit Structure(Sav& s) : 
		RemainingMinute { s.get<struct RemainingMinute>() },
		RemainingSecond { s.get<struct RemainingSecond>() }
	{ }
};/* Data::Structure GameData::PlayerStatus::Companion::Electric::ForUI close */

template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::ForUI::RemainingMinute> { "PlayerStatus.Companion.Electric.ForUI.RemainingMinute" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::ForUI::RemainingSecond> { "PlayerStatus.Companion.Electric.ForUI.RemainingSecond" };