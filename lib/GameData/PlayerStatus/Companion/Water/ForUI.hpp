#pragma once
#include <sage>

struct GameData::PlayerStatus::Companion::Water::ForUI : Tag::Structure {
	struct RemainingMinute : Tag::Member { using type = s32&; };
	struct RemainingSecond : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::PlayerStatus::Companion::Water::ForUI close */

template <> struct Data::Structure<GameData::PlayerStatus::Companion::Water::ForUI> : GameData::PlayerStatus::Companion::Water::ForUI {
	Member<RemainingMinute> RemainingMinute;
	Member<RemainingSecond> RemainingSecond;
	
	explicit Structure(Sav& s) : 
		RemainingMinute { s.get<struct RemainingMinute>() },
		RemainingSecond { s.get<struct RemainingSecond>() }
	{ }
};/* Data::Structure GameData::PlayerStatus::Companion::Water::ForUI close */

template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::ForUI::RemainingMinute> { "PlayerStatus.Companion.Water.ForUI.RemainingMinute" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Water::ForUI::RemainingSecond> { "PlayerStatus.Companion.Water.ForUI.RemainingSecond" };