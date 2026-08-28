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
};/* Data::Structure GameData::DragonMemoryDataForUI close */

template <> hash_t constexpr Data::Hashtable<GameData::DragonMemoryDataForUI::IsNeedIcon> = murmurhash3::hash("DragonMemoryDataForUI.IsNeedIcon");
template <> hash_t constexpr Data::Hashtable<GameData::DragonMemoryDataForUI::IsOpenList> = murmurhash3::hash("DragonMemoryDataForUI.IsOpenList");