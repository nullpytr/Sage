#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::DragonMemoryDataForUI : Tag::Structure {
	struct IsNeedIcon : Tag::Member { using type = bool&; using adapter = bool&; };
	struct IsOpenList : Tag::Member { using type = bool&; using adapter = bool&; };
};/* Tag::Structure GameData::DragonMemoryDataForUI close */

template <> struct Data::Structure<GameData::DragonMemoryDataForUI> : GameData::DragonMemoryDataForUI {
	IsNeedIcon::type IsNeedIcon;
	IsOpenList::type IsOpenList;
	
	explicit Structure(Sav& s) : 
		IsNeedIcon { s.get<struct IsNeedIcon>() },
		IsOpenList { s.get<struct IsOpenList>() }
	{ }
};/* Data::Structure GameData::DragonMemoryDataForUI close */

template <> hash_t constexpr Data::Hashtable<GameData::DragonMemoryDataForUI::IsNeedIcon> = murmurhash3::hash("DragonMemoryDataForUI.IsNeedIcon");
template <> hash_t constexpr Data::Hashtable<GameData::DragonMemoryDataForUI::IsOpenList> = murmurhash3::hash("DragonMemoryDataForUI.IsOpenList");