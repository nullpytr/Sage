#pragma once
#include <sage>

struct GameData::PlayerStatus::Companion::Soul::ForUI : Tag::Structure {
	struct RemainingMinute : Tag::Member { using type = s32&; };
	struct RemainingSecond : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::PlayerStatus::Companion::Soul::ForUI close */

template <> struct Data::Structure<GameData::PlayerStatus::Companion::Soul::ForUI> : GameData::PlayerStatus::Companion::Soul::ForUI {
	Member<RemainingMinute> RemainingMinute;
	Member<RemainingSecond> RemainingSecond;
	
	explicit Structure(Sav& s) : 
		RemainingMinute { s.get<struct RemainingMinute>() },
		RemainingSecond { s.get<struct RemainingSecond>() }
	{ }
};/* Structure Data::Structure GameData::PlayerStatus::Companion::Soul::ForUI close */

template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::ForUI::RemainingMinute> { "PlayerStatus.Companion.Soul.ForUI.RemainingMinute" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::ForUI::RemainingSecond> { "PlayerStatus.Companion.Soul.ForUI.RemainingSecond" };