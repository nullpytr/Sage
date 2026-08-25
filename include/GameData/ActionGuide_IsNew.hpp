#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::ActionGuide_IsNew : Tag::Structure {
	struct Backflip : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ChargrAttack : Tag::Member { using type = bool&; using adapter = bool&; };
	struct JumpSlash : Tag::Member { using type = bool&; using adapter = bool&; };
	struct JustGuard : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ShieldSurfing : Tag::Member { using type = bool&; using adapter = bool&; };
	struct SideJump : Tag::Member { using type = bool&; using adapter = bool&; };
	struct ThrowMaterial : Tag::Member { using type = bool&; using adapter = bool&; };
	struct UseAmiibo : Tag::Member { using type = bool&; using adapter = bool&; };
	struct UseCameraPointer : Tag::Member { using type = bool&; using adapter = bool&; };
};/* Tag::Structure GameData::ActionGuide_IsNew close */

template <> struct Data::Structure<GameData::ActionGuide_IsNew> : GameData::ActionGuide_IsNew {
	Backflip::type Backflip;
	ChargrAttack::type ChargrAttack;
	JumpSlash::type JumpSlash;
	JustGuard::type JustGuard;
	ShieldSurfing::type ShieldSurfing;
	SideJump::type SideJump;
	ThrowMaterial::type ThrowMaterial;
	UseAmiibo::type UseAmiibo;
	UseCameraPointer::type UseCameraPointer;
	
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