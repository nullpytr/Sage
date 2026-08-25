#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::Pouch::KeyItem : Tag::Structure {
	struct IsValid : Tag::Member { using type = span<bool>; using adapter = adapter<type>*; };
	struct Content;
};/* Tag::Structure GameData::Pouch::KeyItem close */

#include "KeyItem/Content.hpp"

template <> struct Data::Structure<GameData::Pouch::KeyItem> : GameData::Pouch::KeyItem {
	IsValid::type IsValid;
	Structure<Content> Content;
	
	explicit Structure(Sav& s) : 
		IsValid { s.get<struct IsValid>() },
		Content { s }
	{ }
};/* Data::Structure GameData::Pouch::KeyItem close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::KeyItem::IsValid> = murmurhash3::hash("Pouch.KeyItem.IsValid");