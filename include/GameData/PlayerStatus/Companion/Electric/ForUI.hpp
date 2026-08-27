#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PlayerStatus::Companion::Electric::ForUI : Tag::Structure {
	struct RemainingMinute : Tag::Member { using type = s32&; };
	struct RemainingSecond : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::PlayerStatus::Companion::Electric::ForUI close */

template <> struct Data::Structure<GameData::PlayerStatus::Companion::Electric::ForUI> : GameData::PlayerStatus::Companion::Electric::ForUI {
	Data::Member<RemainingMinute> RemainingMinute;
	Data::Member<RemainingSecond> RemainingSecond;
	
	explicit Structure(Sav& s) : 
		RemainingMinute { s.get<struct RemainingMinute>() },
		RemainingSecond { s.get<struct RemainingSecond>() }
	{ }
};/* Data::Structure GameData::PlayerStatus::Companion::Electric::ForUI close */

template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::ForUI::RemainingMinute> = murmurhash3::hash("PlayerStatus.Companion.Electric.ForUI.RemainingMinute");
template <> hash_t constexpr Data::Hashtable<GameData::PlayerStatus::Companion::Electric::ForUI::RemainingSecond> = murmurhash3::hash("PlayerStatus.Companion.Electric.ForUI.RemainingSecond");