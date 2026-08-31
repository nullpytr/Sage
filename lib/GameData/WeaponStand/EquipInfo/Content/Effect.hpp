#pragma once
#include <sage>

struct GameData::WeaponStand::EquipInfo::Content::Effect : Tag::Structure {
	struct Value : Tag::Member { using type = span<s32>*; };
	struct Type : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), AttackUp = murmurhash3::hash("AttackUp"), AttackUpPlus = murmurhash3::hash("AttackUpPlus"), DurabilityUp = murmurhash3::hash("DurabilityUp"), DurabilityUpPlus = murmurhash3::hash("DurabilityUpPlus"), FinishBlow = murmurhash3::hash("FinishBlow"), LongThrow = murmurhash3::hash("LongThrow"), RapidFire = murmurhash3::hash("RapidFire"), ThreeWayZoom = murmurhash3::hash("ThreeWayZoom"), FiveWay = murmurhash3::hash("FiveWay"), GuardUp = murmurhash3::hash("GuardUp"), GuardUpPlus = murmurhash3::hash("GuardUpPlus"), }; };
		using type = span<enum_t<Type>>*;
	};
};/* Tag::Structure GameData::WeaponStand::EquipInfo::Content::Effect close */

template <> struct Data::Structure<GameData::WeaponStand::EquipInfo::Content::Effect> : GameData::WeaponStand::EquipInfo::Content::Effect {
	Member<Value> Value;
	Enum<Type> Type;
	
	explicit Structure(Sav& s) : 
		Value { s.get<struct Value>() },
		Type { s.get<struct Type>() }
	{ }
};/* Data::Structure GameData::WeaponStand::EquipInfo::Content::Effect close */

template <> hash_value_t constexpr Data::Hashtable<GameData::WeaponStand::EquipInfo::Content::Effect::Value> { "WeaponStand.EquipInfo.Content.Effect.Value" };
template <> hash_value_t constexpr Data::Hashtable<GameData::WeaponStand::EquipInfo::Content::Effect::Type> { "WeaponStand.EquipInfo.Content.Effect.Type" };