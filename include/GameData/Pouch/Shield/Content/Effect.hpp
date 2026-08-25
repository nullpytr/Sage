#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::Pouch::Shield::Content::Effect : Tag::Structure {
	struct Type : Tag::Enum { using type = ::Enum::Array<Type>; using adapter = ::Enum::Array<Type>; enum enum_type : hash_t { None = murmurhash3::hash("None"), AttackUp = murmurhash3::hash("AttackUp"), AttackUpPlus = murmurhash3::hash("AttackUpPlus"), DurabilityUp = murmurhash3::hash("DurabilityUp"), DurabilityUpPlus = murmurhash3::hash("DurabilityUpPlus"), FinishBlow = murmurhash3::hash("FinishBlow"), LongThrow = murmurhash3::hash("LongThrow"), RapidFire = murmurhash3::hash("RapidFire"), ThreeWayZoom = murmurhash3::hash("ThreeWayZoom"), FiveWay = murmurhash3::hash("FiveWay"), GuardUp = murmurhash3::hash("GuardUp"), GuardUpPlus = murmurhash3::hash("GuardUpPlus"), }; };
	struct Value : Tag::Member { using type = span<s32>; using adapter = adapter<type>*; };
};/* Tag::Structure GameData::Pouch::Shield::Content::Effect close */

template <> struct Data::Structure<GameData::Pouch::Shield::Content::Effect> : GameData::Pouch::Shield::Content::Effect {
	Type::type Type;
	Value::type Value;
	
	explicit Structure(Sav& s) : 
		Type { s.get<struct Type>() },
		Value { s.get<struct Value>() }
	{ }
};/* Data::Structure GameData::Pouch::Shield::Content::Effect close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Shield::Content::Effect::Type> = murmurhash3::hash("Pouch.Shield.Content.Effect.Type");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Shield::Content::Effect::Value> = murmurhash3::hash("Pouch.Shield.Content.Effect.Value");