#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PlayerStatus::Companion::Soul::ForUI : Tag::Structure {
	struct RemainingMinute : Tag::Member { using type = s32&; };
	struct RemainingSecond : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::PlayerStatus::Companion::Soul::ForUI close */

template <> struct Data::Structure<GameData::PlayerStatus::Companion::Soul::ForUI> : GameData::PlayerStatus::Companion::Soul::ForUI {
	Data::Member<RemainingMinute> RemainingMinute;
	Data::Member<RemainingSecond> RemainingSecond;
	
	explicit Structure(Sav& s) : 
		RemainingMinute { s.get<struct RemainingMinute>() },
		RemainingSecond { s.get<struct RemainingSecond>() }
	{ }
};/* Data::Structure GameData::PlayerStatus::Companion::Soul::ForUI close */

template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::ForUI::RemainingMinute> = murmurhash3::hash("PlayerStatus.Companion.Soul.ForUI.RemainingMinute");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Soul::ForUI::RemainingSecond> = murmurhash3::hash("PlayerStatus.Companion.Soul.ForUI.RemainingSecond");