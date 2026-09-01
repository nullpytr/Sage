#pragma once
#include <sage>

struct GameData::DragonMemoryDataForUI : Tag::Structure {
	struct IsNeedIcon : Tag::Member { using type = bool&; };
	struct IsOpenList : Tag::Member { using type = bool&; };
};/* Tag::Structure GameData::DragonMemoryDataForUI close */

template <> struct Data::Structure<GameData::DragonMemoryDataForUI> : GameData::DragonMemoryDataForUI {
	Member<IsNeedIcon> IsNeedIcon;
	Member<IsOpenList> IsOpenList;
	
	explicit Structure(Sav& s) : 
		IsNeedIcon { s.get<struct IsNeedIcon>() },
		IsOpenList { s.get<struct IsOpenList>() }
	{ }
};/* Structure Data::Structure GameData::DragonMemoryDataForUI close */

template <> hash_value_t constexpr Data::Hashtable<GameData::DragonMemoryDataForUI::IsNeedIcon> { "DragonMemoryDataForUI.IsNeedIcon" };
template <> hash_value_t constexpr Data::Hashtable<GameData::DragonMemoryDataForUI::IsOpenList> { "DragonMemoryDataForUI.IsOpenList" };