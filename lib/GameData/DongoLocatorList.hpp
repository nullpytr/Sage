#pragma once
#include <sage>

struct GameData::DongoLocatorList : Tag::Structure {
	struct DongoID : Tag::Member { using type = span<s32>*; };
	struct LocatorID : Tag::Member { using type = span<u64>*; };
	struct PutItemId : Tag::Member { using type = span<s32>*; };
	struct UseFirstItemList : Tag::Member { using type = span<bool>*; };
};/* Tag::Structure GameData::DongoLocatorList close */

template <> struct Data::Structure<GameData::DongoLocatorList> : GameData::DongoLocatorList {
	Member<DongoID> DongoID;
	Member<LocatorID> LocatorID;
	Member<PutItemId> PutItemId;
	Member<UseFirstItemList> UseFirstItemList;
	
	explicit Structure(Sav& s) : 
		DongoID { s.get<struct DongoID>() },
		LocatorID { s.get<struct LocatorID>() },
		PutItemId { s.get<struct PutItemId>() },
		UseFirstItemList { s.get<struct UseFirstItemList>() }
	{ }
};/* Data::Structure GameData::DongoLocatorList close */

template <> hash_t constexpr Data::Hashtable<GameData::DongoLocatorList::DongoID> = murmurhash3::hash("DongoLocatorList.DongoID");
template <> hash_t constexpr Data::Hashtable<GameData::DongoLocatorList::LocatorID> = murmurhash3::hash("DongoLocatorList.LocatorID");
template <> hash_t constexpr Data::Hashtable<GameData::DongoLocatorList::PutItemId> = murmurhash3::hash("DongoLocatorList.PutItemId");
template <> hash_t constexpr Data::Hashtable<GameData::DongoLocatorList::UseFirstItemList> = murmurhash3::hash("DongoLocatorList.UseFirstItemList");