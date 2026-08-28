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
	Data::Member<Backflip> Backflip;
	Data::Member<ChargrAttack> ChargrAttack;
	Data::Member<JumpSlash> JumpSlash;
	Data::Member<JustGuard> JustGuard;
	Data::Member<ShieldSurfing> ShieldSurfing;
	Data::Member<SideJump> SideJump;
	Data::Member<ThrowMaterial> ThrowMaterial;
	Data::Member<UseAmiibo> UseAmiibo;
	Data::Member<UseCameraPointer> UseCameraPointer;
	
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

template <> hash_t constexpr Data::Hashtable<GameData::ActionGuide_IsNew::Backflip> = murmurhash3::hash("ActionGuide_IsNew.Backflip");
template <> hash_t constexpr Data::Hashtable<GameData::ActionGuide_IsNew::ChargrAttack> = murmurhash3::hash("ActionGuide_IsNew.ChargrAttack");
template <> hash_t constexpr Data::Hashtable<GameData::ActionGuide_IsNew::JumpSlash> = murmurhash3::hash("ActionGuide_IsNew.JumpSlash");
template <> hash_t constexpr Data::Hashtable<GameData::ActionGuide_IsNew::JustGuard> = murmurhash3::hash("ActionGuide_IsNew.JustGuard");
template <> hash_t constexpr Data::Hashtable<GameData::ActionGuide_IsNew::ShieldSurfing> = murmurhash3::hash("ActionGuide_IsNew.ShieldSurfing");
template <> hash_t constexpr Data::Hashtable<GameData::ActionGuide_IsNew::SideJump> = murmurhash3::hash("ActionGuide_IsNew.SideJump");
template <> hash_t constexpr Data::Hashtable<GameData::ActionGuide_IsNew::ThrowMaterial> = murmurhash3::hash("ActionGuide_IsNew.ThrowMaterial");
template <> hash_t constexpr Data::Hashtable<GameData::ActionGuide_IsNew::UseAmiibo> = murmurhash3::hash("ActionGuide_IsNew.UseAmiibo");
template <> hash_t constexpr Data::Hashtable<GameData::ActionGuide_IsNew::UseCameraPointer> = murmurhash3::hash("ActionGuide_IsNew.UseCameraPointer");