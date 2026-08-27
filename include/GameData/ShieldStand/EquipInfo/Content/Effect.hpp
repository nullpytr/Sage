#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::ShieldStand::EquipInfo::Content::Effect : Tag::Structure {
	struct Type : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), AttackUp = murmurhash3::hash("AttackUp"), AttackUpPlus = murmurhash3::hash("AttackUpPlus"), DurabilityUp = murmurhash3::hash("DurabilityUp"), DurabilityUpPlus = murmurhash3::hash("DurabilityUpPlus"), FinishBlow = murmurhash3::hash("FinishBlow"), LongThrow = murmurhash3::hash("LongThrow"), RapidFire = murmurhash3::hash("RapidFire"), ThreeWayZoom = murmurhash3::hash("ThreeWayZoom"), FiveWay = murmurhash3::hash("FiveWay"), GuardUp = murmurhash3::hash("GuardUp"), GuardUpPlus = murmurhash3::hash("GuardUpPlus"), }; };
		using type = range<enum_t<values_t>>*;
	};
	struct Value : Tag::Member { using type = span<s32>*; };
};/* Tag::Structure GameData::ShieldStand::EquipInfo::Content::Effect close */

template <> struct Data::Structure<GameData::ShieldStand::EquipInfo::Content::Effect> : GameData::ShieldStand::EquipInfo::Content::Effect {
	Data::Enum<Type> Type;
	Data::Member<Value> Value;
	
	explicit Structure(Sav& s) : 
		Type { s.get<struct Type>() },
		Value { s.get<struct Value>() }
	{ }
};/* Data::Structure GameData::ShieldStand::EquipInfo::Content::Effect close */

template <> hash_t constexpr Data::Hashtable<GameData::ShieldStand::EquipInfo::Content::Effect::Type> = murmurhash3::hash("ShieldStand.EquipInfo.Content.Effect.Type");
template <> hash_t constexpr Data::Hashtable<GameData::ShieldStand::EquipInfo::Content::Effect::Value> = murmurhash3::hash("ShieldStand.EquipInfo.Content.Effect.Value");