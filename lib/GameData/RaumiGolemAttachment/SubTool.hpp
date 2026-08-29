#pragma once
#include <sage>

struct GameData::RaumiGolemAttachment::SubTool : Tag::Structure {
	struct Life : Tag::Member { using type = s32&; };
	struct Name : Tag::Member { using type = string64*; };
	struct RaumiControlLife : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RaumiGolemAttachment::SubTool close */

template <> struct Data::Structure<GameData::RaumiGolemAttachment::SubTool> : GameData::RaumiGolemAttachment::SubTool {
	Member<Life> Life;
	Member<Name> Name;
	Member<RaumiControlLife> RaumiControlLife;
	
	explicit Structure(Sav& s) : 
		Life { s.get<struct Life>() },
		Name { s.get<struct Name>() },
		RaumiControlLife { s.get<struct RaumiControlLife>() }
	{ }
};/* Data::Structure GameData::RaumiGolemAttachment::SubTool close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::SubTool::Life> { "RaumiGolemAttachment.SubTool.Life" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::SubTool::Name> { "RaumiGolemAttachment.SubTool.Name" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::SubTool::RaumiControlLife> { "RaumiGolemAttachment.SubTool.RaumiControlLife" };