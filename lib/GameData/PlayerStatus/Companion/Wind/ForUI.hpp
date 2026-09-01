#pragma once
#include <sage>

struct GameData::PlayerStatus::Companion::Wind::ForUI : Tag::Structure {
	struct RemainingMinute : Tag::Member { using type = s32&; };
	struct RemainingSecond : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::PlayerStatus::Companion::Wind::ForUI close */

template <> struct Data::Structure<GameData::PlayerStatus::Companion::Wind::ForUI> : GameData::PlayerStatus::Companion::Wind::ForUI {
	Member<RemainingMinute> RemainingMinute;
	Member<RemainingSecond> RemainingSecond;
	
	explicit Structure(Sav& s) : 
		RemainingMinute { s.get<struct RemainingMinute>() },
		RemainingSecond { s.get<struct RemainingSecond>() }
	{ }
};/* Structure Data::Structure GameData::PlayerStatus::Companion::Wind::ForUI close */

template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::ForUI::RemainingMinute> { "PlayerStatus.Companion.Wind.ForUI.RemainingMinute" };
template <> hash_value_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Wind::ForUI::RemainingSecond> { "PlayerStatus.Companion.Wind.ForUI.RemainingSecond" };