#pragma once
#include <sage>

struct GameData::RaumiGolemAttachment::Tool : Tag::Structure {
	struct Life : Tag::Member { using type = s32&; };
	struct RaumiControlLife : Tag::Member { using type = s32&; };
	struct Name : Tag::Member { using type = string64*; };
};/* Tag::Structure GameData::RaumiGolemAttachment::Tool close */

template <> struct Data::Structure<GameData::RaumiGolemAttachment::Tool> : GameData::RaumiGolemAttachment::Tool {
	Data::Member<Life> Life;
	Data::Member<RaumiControlLife> RaumiControlLife;
	Data::Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		Life { s.get<struct Life>() },
		RaumiControlLife { s.get<struct RaumiControlLife>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::RaumiGolemAttachment::Tool close */

template <> hash_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::Tool::Life> = murmurhash3::hash("RaumiGolemAttachment.Tool.Life");
template <> hash_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::Tool::RaumiControlLife> = murmurhash3::hash("RaumiGolemAttachment.Tool.RaumiControlLife");
template <> hash_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::Tool::Name> = murmurhash3::hash("RaumiGolemAttachment.Tool.Name");