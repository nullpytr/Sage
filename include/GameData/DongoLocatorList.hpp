#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::DongoLocatorList : Tag::Structure {
	struct UseFirstItemList : Tag::Member { using type = span<bool>; using adapter = adapter<type>*; };
	struct DongoID : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct PutItemId : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
	struct LocatorID : Tag::Member { using type = span<u64>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::DongoLocatorList close */

template <> struct Data::Structure<GameData::DongoLocatorList> : GameData::DongoLocatorList {
	UseFirstItemList::type UseFirstItemList;
	DongoID::type DongoID;
	PutItemId::type PutItemId;
	LocatorID::type LocatorID;
	
	explicit Structure(Sav& s) : 
		UseFirstItemList { s.get<struct UseFirstItemList>() },
		DongoID { s.get<struct DongoID>() },
		PutItemId { s.get<struct PutItemId>() },
		LocatorID { s.get<struct LocatorID>() }
	{ }
};/* Data::Structure GameData::DongoLocatorList close */

template <> hash_t constexpr Data::Hashtable<GameData::DongoLocatorList::UseFirstItemList> = murmurhash3::hash("DongoLocatorList.UseFirstItemList");
template <> hash_t constexpr Data::Hashtable<GameData::DongoLocatorList::DongoID> = murmurhash3::hash("DongoLocatorList.DongoID");
template <> hash_t constexpr Data::Hashtable<GameData::DongoLocatorList::PutItemId> = murmurhash3::hash("DongoLocatorList.PutItemId");
template <> hash_t constexpr Data::Hashtable<GameData::DongoLocatorList::LocatorID> = murmurhash3::hash("DongoLocatorList.LocatorID");