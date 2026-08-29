#pragma once
#include <sage>

struct GameData::Pouch::Weapon::Content::Effect : Tag::Structure {
	struct Value : Tag::Member { using type = span<s32>*; };
	struct Type : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), AttackUp = murmurhash3::hash("AttackUp"), AttackUpPlus = murmurhash3::hash("AttackUpPlus"), DurabilityUp = murmurhash3::hash("DurabilityUp"), DurabilityUpPlus = murmurhash3::hash("DurabilityUpPlus"), FinishBlow = murmurhash3::hash("FinishBlow"), LongThrow = murmurhash3::hash("LongThrow"), RapidFire = murmurhash3::hash("RapidFire"), ThreeWayZoom = murmurhash3::hash("ThreeWayZoom"), FiveWay = murmurhash3::hash("FiveWay"), GuardUp = murmurhash3::hash("GuardUp"), GuardUpPlus = murmurhash3::hash("GuardUpPlus"), };
		using type = span<enum_t<Type>>*;
	};
};/* Tag::Structure GameData::Pouch::Weapon::Content::Effect close */

template <> struct Data::Structure<GameData::Pouch::Weapon::Content::Effect> : GameData::Pouch::Weapon::Content::Effect {
	Member<Value> Value;
	Enum<Type> Type;
	
	explicit Structure(Sav& s) : 
		Value { s.get<struct Value>() },
		Type { s.get<struct Type>() }
	{ }
};/* Data::Structure GameData::Pouch::Weapon::Content::Effect close */

template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Weapon::Content::Effect::Value> { "Pouch.Weapon.Content.Effect.Value" };
template <> hash_value_t constexpr Data::Hashtable<GameData::Pouch::Weapon::Content::Effect::Type> { "Pouch.Weapon.Content.Effect.Type" };