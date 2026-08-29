#pragma once
#include <sage>

struct GameData::ActionGuide_IsNew : Tag::Structure {
	struct Backflip : Tag::Member { using type = bool&; };
	struct ChargrAttack : Tag::Member { using type = bool&; };
	struct JumpSlash : Tag::Member { using type = bool&; };
	struct JustGuard : Tag::Member { using type = bool&; };
	struct ShieldSurfing : Tag::Member { using type = bool&; };
	struct SideJump : Tag::Member { using type = bool&; };
	struct ThrowMaterial : Tag::Member { using type = bool&; };
	struct UseAmiibo : Tag::Member { using type = bool&; };
	struct UseCameraPointer : Tag::Member { using type = bool&; };
};/* Tag::Structure GameData::ActionGuide_IsNew close */

template <> struct Data::Structure<GameData::ActionGuide_IsNew> : GameData::ActionGuide_IsNew {
	Member<Backflip> Backflip;
	Member<ChargrAttack> ChargrAttack;
	Member<JumpSlash> JumpSlash;
	Member<JustGuard> JustGuard;
	Member<ShieldSurfing> ShieldSurfing;
	Member<SideJump> SideJump;
	Member<ThrowMaterial> ThrowMaterial;
	Member<UseAmiibo> UseAmiibo;
	Member<UseCameraPointer> UseCameraPointer;
	
	explicit Structure(Sav& s) : 
		Backflip { s.get<struct Backflip>() },
		ChargrAttack { s.get<struct ChargrAttack>() },
		JumpSlash { s.get<struct JumpSlash>() },
		JustGuard { s.get<struct JustGuard>() },
		ShieldSurfing { s.get<struct ShieldSurfing>() },
		SideJump { s.get<struct SideJump>() },
		ThrowMaterial { s.get<struct ThrowMaterial>() },
		UseAmiibo { s.get<struct UseAmiibo>() },
		UseCameraPointer { s.get<struct UseCameraPointer>() }
	{ }
};/* Data::Structure GameData::ActionGuide_IsNew close */

template <> hash_value_t constexpr Data::Hashtable<GameData::ActionGuide_IsNew::Backflip> { "ActionGuide_IsNew.Backflip" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ActionGuide_IsNew::ChargrAttack> { "ActionGuide_IsNew.ChargrAttack" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ActionGuide_IsNew::JumpSlash> { "ActionGuide_IsNew.JumpSlash" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ActionGuide_IsNew::JustGuard> { "ActionGuide_IsNew.JustGuard" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ActionGuide_IsNew::ShieldSurfing> { "ActionGuide_IsNew.ShieldSurfing" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ActionGuide_IsNew::SideJump> { "ActionGuide_IsNew.SideJump" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ActionGuide_IsNew::ThrowMaterial> { "ActionGuide_IsNew.ThrowMaterial" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ActionGuide_IsNew::UseAmiibo> { "ActionGuide_IsNew.UseAmiibo" };
template <> hash_value_t constexpr Data::Hashtable<GameData::ActionGuide_IsNew::UseCameraPointer> { "ActionGuide_IsNew.UseCameraPointer" };