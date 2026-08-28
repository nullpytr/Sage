#pragma once
#include <sage>

struct GameData::DongoLocatorList : Tag::Structure {
	struct UseFirstItemList : Tag::Member { using type = span<bool>*; };
	struct DongoID : Tag::Member { using type = span<s32>*; };
	struct PutItemId : Tag::Member { using type = span<s32>*; };
	struct LocatorID : Tag::Member { using type = span<u64>*; };
};/* Tag::Structure GameData::DongoLocatorList close */

template <> struct Data::Structure<GameData::DongoLocatorList> : GameData::DongoLocatorList {
	Member<UseFirstItemList> UseFirstItemList;
	Member<DongoID> DongoID;
	Member<PutItemId> PutItemId;
	Member<LocatorID> LocatorID;
	
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