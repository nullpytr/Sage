#pragma once
#include <sage>

struct GameData::RaumiGolemAttachment::Tool : Tag::Structure {
	struct Life : Tag::Member { using type = s32&; };
	struct Name : Tag::Member { using type = string64*; };
	struct RaumiControlLife : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::RaumiGolemAttachment::Tool close */

template <> struct Data::Structure<GameData::RaumiGolemAttachment::Tool> : GameData::RaumiGolemAttachment::Tool {
	Member<Life> Life;
	Member<Name> Name;
	Member<RaumiControlLife> RaumiControlLife;
	
	explicit Structure(Sav& s) : 
		Life { s.get<struct Life>() },
		Name { s.get<struct Name>() },
		RaumiControlLife { s.get<struct RaumiControlLife>() }
	{ }
};/* Data::Structure GameData::RaumiGolemAttachment::Tool close */

template <> hash_value_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::Tool::Life> { "RaumiGolemAttachment.Tool.Life" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::Tool::Name> { "RaumiGolemAttachment.Tool.Name" };
template <> hash_value_t constexpr Data::Hashtable<GameData::RaumiGolemAttachment::Tool::RaumiControlLife> { "RaumiGolemAttachment.Tool.RaumiControlLife" };