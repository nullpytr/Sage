#pragma once
#include <sage>

struct GameData::RaumiGolemAttachment::SubTool : Tag::Structure {
	struct Life : Tag::Member { using type = s32&; };
	struct RaumiControlLife : Tag::Member { using type = s32&; };
	struct Name : Tag::Member { using type = string64*; };
};/* Tag::Structure GameData::RaumiGolemAttachment::SubTool close */

template <> struct Data::Structure<GameData::RaumiGolemAttachment::SubTool> : GameData::RaumiGolemAttachment::SubTool {
	Data::Member<Life> Life;
	Data::Member<RaumiControlLife> RaumiControlLife;
	Data::Member<Name> Name;
	
	explicit Structure(Sav& s) : 
		Life { s.get<struct Life>() },
		RaumiControlLife { s.get<struct RaumiControlLife>() },
		Name { s.get<struct Name>() }
	{ }
};/* Data::Structure GameData::RaumiGolemAttachment::SubTool close */

template <> hash_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::SubTool::Life> = murmurhash3::hash("RaumiGolemAttachment.SubTool.Life");
template <> hash_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::SubTool::RaumiControlLife> = murmurhash3::hash("RaumiGolemAttachment.SubTool.RaumiControlLife");
template <> hash_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::SubTool::Name> = murmurhash3::hash("RaumiGolemAttachment.SubTool.Name");