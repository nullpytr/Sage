#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::Pouch::Food : Tag::Structure {
	struct IsValid : Tag::Member { using type = span<bool>; using adapter = adapter<type>*; };
	struct Content;
};/* Tag::Structure GameData::Pouch::Food close */

#include "Food/Content.hpp"

template <> struct Data::Structure<GameData::Pouch::Food> : GameData::Pouch::Food {
	IsValid::type IsValid;
	Structure<Content> Content;
	
	explicit Structure(Sav& s) : 
		IsValid { s.get<struct IsValid>() },
		Content { s }
	{ }
};/* Data::Structure GameData::Pouch::Food close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Food::IsValid> = murmurhash3::hash("Pouch.Food.IsValid");