#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::KeyCrystalDungeonState : Tag::Structure {
	struct Dungeon000 : Tag::Enum { using type = ::Enum::Scalar<Dungeon000>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon001 : Tag::Enum { using type = ::Enum::Scalar<Dungeon001>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon002 : Tag::Enum { using type = ::Enum::Scalar<Dungeon002>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon003 : Tag::Enum { using type = ::Enum::Scalar<Dungeon003>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon004 : Tag::Enum { using type = ::Enum::Scalar<Dungeon004>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon005 : Tag::Enum { using type = ::Enum::Scalar<Dungeon005>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon006 : Tag::Enum { using type = ::Enum::Scalar<Dungeon006>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon007 : Tag::Enum { using type = ::Enum::Scalar<Dungeon007>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon008 : Tag::Enum { using type = ::Enum::Scalar<Dungeon008>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon009 : Tag::Enum { using type = ::Enum::Scalar<Dungeon009>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon010 : Tag::Enum { using type = ::Enum::Scalar<Dungeon010>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon011 : Tag::Enum { using type = ::Enum::Scalar<Dungeon011>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon012 : Tag::Enum { using type = ::Enum::Scalar<Dungeon012>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon013 : Tag::Enum { using type = ::Enum::Scalar<Dungeon013>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon014 : Tag::Enum { using type = ::Enum::Scalar<Dungeon014>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon015 : Tag::Enum { using type = ::Enum::Scalar<Dungeon015>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon016 : Tag::Enum { using type = ::Enum::Scalar<Dungeon016>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon017 : Tag::Enum { using type = ::Enum::Scalar<Dungeon017>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon018 : Tag::Enum { using type = ::Enum::Scalar<Dungeon018>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon019 : Tag::Enum { using type = ::Enum::Scalar<Dungeon019>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon020 : Tag::Enum { using type = ::Enum::Scalar<Dungeon020>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon021 : Tag::Enum { using type = ::Enum::Scalar<Dungeon021>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon022 : Tag::Enum { using type = ::Enum::Scalar<Dungeon022>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon023 : Tag::Enum { using type = ::Enum::Scalar<Dungeon023>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon024 : Tag::Enum { using type = ::Enum::Scalar<Dungeon024>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon025 : Tag::Enum { using type = ::Enum::Scalar<Dungeon025>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon026 : Tag::Enum { using type = ::Enum::Scalar<Dungeon026>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon027 : Tag::Enum { using type = ::Enum::Scalar<Dungeon027>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon028 : Tag::Enum { using type = ::Enum::Scalar<Dungeon028>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon029 : Tag::Enum { using type = ::Enum::Scalar<Dungeon029>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon030 : Tag::Enum { using type = ::Enum::Scalar<Dungeon030>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon031 : Tag::Enum { using type = ::Enum::Scalar<Dungeon031>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon032 : Tag::Enum { using type = ::Enum::Scalar<Dungeon032>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon033 : Tag::Enum { using type = ::Enum::Scalar<Dungeon033>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon034 : Tag::Enum { using type = ::Enum::Scalar<Dungeon034>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon035 : Tag::Enum { using type = ::Enum::Scalar<Dungeon035>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon036 : Tag::Enum { using type = ::Enum::Scalar<Dungeon036>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon037 : Tag::Enum { using type = ::Enum::Scalar<Dungeon037>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon038 : Tag::Enum { using type = ::Enum::Scalar<Dungeon038>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon039 : Tag::Enum { using type = ::Enum::Scalar<Dungeon039>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon040 : Tag::Enum { using type = ::Enum::Scalar<Dungeon040>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon041 : Tag::Enum { using type = ::Enum::Scalar<Dungeon041>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon042 : Tag::Enum { using type = ::Enum::Scalar<Dungeon042>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon043 : Tag::Enum { using type = ::Enum::Scalar<Dungeon043>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon044 : Tag::Enum { using type = ::Enum::Scalar<Dungeon044>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon045 : Tag::Enum { using type = ::Enum::Scalar<Dungeon045>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon046 : Tag::Enum { using type = ::Enum::Scalar<Dungeon046>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon047 : Tag::Enum { using type = ::Enum::Scalar<Dungeon047>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon048 : Tag::Enum { using type = ::Enum::Scalar<Dungeon048>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon049 : Tag::Enum { using type = ::Enum::Scalar<Dungeon049>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon050 : Tag::Enum { using type = ::Enum::Scalar<Dungeon050>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon051 : Tag::Enum { using type = ::Enum::Scalar<Dungeon051>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon052 : Tag::Enum { using type = ::Enum::Scalar<Dungeon052>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon053 : Tag::Enum { using type = ::Enum::Scalar<Dungeon053>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon054 : Tag::Enum { using type = ::Enum::Scalar<Dungeon054>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon055 : Tag::Enum { using type = ::Enum::Scalar<Dungeon055>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon056 : Tag::Enum { using type = ::Enum::Scalar<Dungeon056>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon057 : Tag::Enum { using type = ::Enum::Scalar<Dungeon057>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon058 : Tag::Enum { using type = ::Enum::Scalar<Dungeon058>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon059 : Tag::Enum { using type = ::Enum::Scalar<Dungeon059>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon060 : Tag::Enum { using type = ::Enum::Scalar<Dungeon060>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon061 : Tag::Enum { using type = ::Enum::Scalar<Dungeon061>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon062 : Tag::Enum { using type = ::Enum::Scalar<Dungeon062>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon063 : Tag::Enum { using type = ::Enum::Scalar<Dungeon063>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon064 : Tag::Enum { using type = ::Enum::Scalar<Dungeon064>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon065 : Tag::Enum { using type = ::Enum::Scalar<Dungeon065>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon066 : Tag::Enum { using type = ::Enum::Scalar<Dungeon066>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon067 : Tag::Enum { using type = ::Enum::Scalar<Dungeon067>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon068 : Tag::Enum { using type = ::Enum::Scalar<Dungeon068>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon069 : Tag::Enum { using type = ::Enum::Scalar<Dungeon069>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon070 : Tag::Enum { using type = ::Enum::Scalar<Dungeon070>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon071 : Tag::Enum { using type = ::Enum::Scalar<Dungeon071>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon072 : Tag::Enum { using type = ::Enum::Scalar<Dungeon072>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon073 : Tag::Enum { using type = ::Enum::Scalar<Dungeon073>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon074 : Tag::Enum { using type = ::Enum::Scalar<Dungeon074>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon075 : Tag::Enum { using type = ::Enum::Scalar<Dungeon075>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon076 : Tag::Enum { using type = ::Enum::Scalar<Dungeon076>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon077 : Tag::Enum { using type = ::Enum::Scalar<Dungeon077>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon078 : Tag::Enum { using type = ::Enum::Scalar<Dungeon078>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon079 : Tag::Enum { using type = ::Enum::Scalar<Dungeon079>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon080 : Tag::Enum { using type = ::Enum::Scalar<Dungeon080>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon081 : Tag::Enum { using type = ::Enum::Scalar<Dungeon081>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon082 : Tag::Enum { using type = ::Enum::Scalar<Dungeon082>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon083 : Tag::Enum { using type = ::Enum::Scalar<Dungeon083>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon084 : Tag::Enum { using type = ::Enum::Scalar<Dungeon084>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon085 : Tag::Enum { using type = ::Enum::Scalar<Dungeon085>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon086 : Tag::Enum { using type = ::Enum::Scalar<Dungeon086>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon087 : Tag::Enum { using type = ::Enum::Scalar<Dungeon087>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon088 : Tag::Enum { using type = ::Enum::Scalar<Dungeon088>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon089 : Tag::Enum { using type = ::Enum::Scalar<Dungeon089>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon090 : Tag::Enum { using type = ::Enum::Scalar<Dungeon090>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon091 : Tag::Enum { using type = ::Enum::Scalar<Dungeon091>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon092 : Tag::Enum { using type = ::Enum::Scalar<Dungeon092>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon093 : Tag::Enum { using type = ::Enum::Scalar<Dungeon093>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon094 : Tag::Enum { using type = ::Enum::Scalar<Dungeon094>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon095 : Tag::Enum { using type = ::Enum::Scalar<Dungeon095>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon096 : Tag::Enum { using type = ::Enum::Scalar<Dungeon096>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon097 : Tag::Enum { using type = ::Enum::Scalar<Dungeon097>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon098 : Tag::Enum { using type = ::Enum::Scalar<Dungeon098>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon099 : Tag::Enum { using type = ::Enum::Scalar<Dungeon099>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon100 : Tag::Enum { using type = ::Enum::Scalar<Dungeon100>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon101 : Tag::Enum { using type = ::Enum::Scalar<Dungeon101>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon102 : Tag::Enum { using type = ::Enum::Scalar<Dungeon102>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon103 : Tag::Enum { using type = ::Enum::Scalar<Dungeon103>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon104 : Tag::Enum { using type = ::Enum::Scalar<Dungeon104>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon105 : Tag::Enum { using type = ::Enum::Scalar<Dungeon105>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon106 : Tag::Enum { using type = ::Enum::Scalar<Dungeon106>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon107 : Tag::Enum { using type = ::Enum::Scalar<Dungeon107>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon108 : Tag::Enum { using type = ::Enum::Scalar<Dungeon108>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon109 : Tag::Enum { using type = ::Enum::Scalar<Dungeon109>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon110 : Tag::Enum { using type = ::Enum::Scalar<Dungeon110>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon111 : Tag::Enum { using type = ::Enum::Scalar<Dungeon111>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon112 : Tag::Enum { using type = ::Enum::Scalar<Dungeon112>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon113 : Tag::Enum { using type = ::Enum::Scalar<Dungeon113>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon114 : Tag::Enum { using type = ::Enum::Scalar<Dungeon114>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon115 : Tag::Enum { using type = ::Enum::Scalar<Dungeon115>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon116 : Tag::Enum { using type = ::Enum::Scalar<Dungeon116>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon117 : Tag::Enum { using type = ::Enum::Scalar<Dungeon117>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon118 : Tag::Enum { using type = ::Enum::Scalar<Dungeon118>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon119 : Tag::Enum { using type = ::Enum::Scalar<Dungeon119>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon120 : Tag::Enum { using type = ::Enum::Scalar<Dungeon120>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon121 : Tag::Enum { using type = ::Enum::Scalar<Dungeon121>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon122 : Tag::Enum { using type = ::Enum::Scalar<Dungeon122>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon123 : Tag::Enum { using type = ::Enum::Scalar<Dungeon123>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon124 : Tag::Enum { using type = ::Enum::Scalar<Dungeon124>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon125 : Tag::Enum { using type = ::Enum::Scalar<Dungeon125>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon126 : Tag::Enum { using type = ::Enum::Scalar<Dungeon126>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon127 : Tag::Enum { using type = ::Enum::Scalar<Dungeon127>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon128 : Tag::Enum { using type = ::Enum::Scalar<Dungeon128>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon129 : Tag::Enum { using type = ::Enum::Scalar<Dungeon129>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon130 : Tag::Enum { using type = ::Enum::Scalar<Dungeon130>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon131 : Tag::Enum { using type = ::Enum::Scalar<Dungeon131>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon132 : Tag::Enum { using type = ::Enum::Scalar<Dungeon132>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon133 : Tag::Enum { using type = ::Enum::Scalar<Dungeon133>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon134 : Tag::Enum { using type = ::Enum::Scalar<Dungeon134>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon135 : Tag::Enum { using type = ::Enum::Scalar<Dungeon135>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon136 : Tag::Enum { using type = ::Enum::Scalar<Dungeon136>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon137 : Tag::Enum { using type = ::Enum::Scalar<Dungeon137>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon138 : Tag::Enum { using type = ::Enum::Scalar<Dungeon138>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon139 : Tag::Enum { using type = ::Enum::Scalar<Dungeon139>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon140 : Tag::Enum { using type = ::Enum::Scalar<Dungeon140>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon141 : Tag::Enum { using type = ::Enum::Scalar<Dungeon141>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon142 : Tag::Enum { using type = ::Enum::Scalar<Dungeon142>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon143 : Tag::Enum { using type = ::Enum::Scalar<Dungeon143>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon144 : Tag::Enum { using type = ::Enum::Scalar<Dungeon144>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon145 : Tag::Enum { using type = ::Enum::Scalar<Dungeon145>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon146 : Tag::Enum { using type = ::Enum::Scalar<Dungeon146>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon147 : Tag::Enum { using type = ::Enum::Scalar<Dungeon147>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon148 : Tag::Enum { using type = ::Enum::Scalar<Dungeon148>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon149 : Tag::Enum { using type = ::Enum::Scalar<Dungeon149>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon150 : Tag::Enum { using type = ::Enum::Scalar<Dungeon150>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
	struct Dungeon151 : Tag::Enum { using type = ::Enum::Scalar<Dungeon151>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Point = murmurhash3::hash("Point"), Unlock = murmurhash3::hash("Unlock"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), UnlockToOpen = murmurhash3::hash("UnlockToOpen"), PointAndActiveWarp = murmurhash3::hash("PointAndActiveWarp"), ChangeToKeyStone = murmurhash3::hash("ChangeToKeyStone"), PresentedKeyCrystal = murmurhash3::hash("PresentedKeyCrystal"), }; };
};/* Tag::Structure GameData::KeyCrystalDungeonState close */

template <> struct Data::Structure<GameData::KeyCrystalDungeonState> : GameData::KeyCrystalDungeonState {
	Data::Member<Dungeon000> Dungeon000;
	Data::Member<Dungeon001> Dungeon001;
	Data::Member<Dungeon002> Dungeon002;
	Data::Member<Dungeon003> Dungeon003;
	Data::Member<Dungeon004> Dungeon004;
	Data::Member<Dungeon005> Dungeon005;
	Data::Member<Dungeon006> Dungeon006;
	Data::Member<Dungeon007> Dungeon007;
	Data::Member<Dungeon008> Dungeon008;
	Data::Member<Dungeon009> Dungeon009;
	Data::Member<Dungeon010> Dungeon010;
	Data::Member<Dungeon011> Dungeon011;
	Data::Member<Dungeon012> Dungeon012;
	Data::Member<Dungeon013> Dungeon013;
	Data::Member<Dungeon014> Dungeon014;
	Data::Member<Dungeon015> Dungeon015;
	Data::Member<Dungeon016> Dungeon016;
	Data::Member<Dungeon017> Dungeon017;
	Data::Member<Dungeon018> Dungeon018;
	Data::Member<Dungeon019> Dungeon019;
	Data::Member<Dungeon020> Dungeon020;
	Data::Member<Dungeon021> Dungeon021;
	Data::Member<Dungeon022> Dungeon022;
	Data::Member<Dungeon023> Dungeon023;
	Data::Member<Dungeon024> Dungeon024;
	Data::Member<Dungeon025> Dungeon025;
	Data::Member<Dungeon026> Dungeon026;
	Data::Member<Dungeon027> Dungeon027;
	Data::Member<Dungeon028> Dungeon028;
	Data::Member<Dungeon029> Dungeon029;
	Data::Member<Dungeon030> Dungeon030;
	Data::Member<Dungeon031> Dungeon031;
	Data::Member<Dungeon032> Dungeon032;
	Data::Member<Dungeon033> Dungeon033;
	Data::Member<Dungeon034> Dungeon034;
	Data::Member<Dungeon035> Dungeon035;
	Data::Member<Dungeon036> Dungeon036;
	Data::Member<Dungeon037> Dungeon037;
	Data::Member<Dungeon038> Dungeon038;
	Data::Member<Dungeon039> Dungeon039;
	Data::Member<Dungeon040> Dungeon040;
	Data::Member<Dungeon041> Dungeon041;
	Data::Member<Dungeon042> Dungeon042;
	Data::Member<Dungeon043> Dungeon043;
	Data::Member<Dungeon044> Dungeon044;
	Data::Member<Dungeon045> Dungeon045;
	Data::Member<Dungeon046> Dungeon046;
	Data::Member<Dungeon047> Dungeon047;
	Data::Member<Dungeon048> Dungeon048;
	Data::Member<Dungeon049> Dungeon049;
	Data::Member<Dungeon050> Dungeon050;
	Data::Member<Dungeon051> Dungeon051;
	Data::Member<Dungeon052> Dungeon052;
	Data::Member<Dungeon053> Dungeon053;
	Data::Member<Dungeon054> Dungeon054;
	Data::Member<Dungeon055> Dungeon055;
	Data::Member<Dungeon056> Dungeon056;
	Data::Member<Dungeon057> Dungeon057;
	Data::Member<Dungeon058> Dungeon058;
	Data::Member<Dungeon059> Dungeon059;
	Data::Member<Dungeon060> Dungeon060;
	Data::Member<Dungeon061> Dungeon061;
	Data::Member<Dungeon062> Dungeon062;
	Data::Member<Dungeon063> Dungeon063;
	Data::Member<Dungeon064> Dungeon064;
	Data::Member<Dungeon065> Dungeon065;
	Data::Member<Dungeon066> Dungeon066;
	Data::Member<Dungeon067> Dungeon067;
	Data::Member<Dungeon068> Dungeon068;
	Data::Member<Dungeon069> Dungeon069;
	Data::Member<Dungeon070> Dungeon070;
	Data::Member<Dungeon071> Dungeon071;
	Data::Member<Dungeon072> Dungeon072;
	Data::Member<Dungeon073> Dungeon073;
	Data::Member<Dungeon074> Dungeon074;
	Data::Member<Dungeon075> Dungeon075;
	Data::Member<Dungeon076> Dungeon076;
	Data::Member<Dungeon077> Dungeon077;
	Data::Member<Dungeon078> Dungeon078;
	Data::Member<Dungeon079> Dungeon079;
	Data::Member<Dungeon080> Dungeon080;
	Data::Member<Dungeon081> Dungeon081;
	Data::Member<Dungeon082> Dungeon082;
	Data::Member<Dungeon083> Dungeon083;
	Data::Member<Dungeon084> Dungeon084;
	Data::Member<Dungeon085> Dungeon085;
	Data::Member<Dungeon086> Dungeon086;
	Data::Member<Dungeon087> Dungeon087;
	Data::Member<Dungeon088> Dungeon088;
	Data::Member<Dungeon089> Dungeon089;
	Data::Member<Dungeon090> Dungeon090;
	Data::Member<Dungeon091> Dungeon091;
	Data::Member<Dungeon092> Dungeon092;
	Data::Member<Dungeon093> Dungeon093;
	Data::Member<Dungeon094> Dungeon094;
	Data::Member<Dungeon095> Dungeon095;
	Data::Member<Dungeon096> Dungeon096;
	Data::Member<Dungeon097> Dungeon097;
	Data::Member<Dungeon098> Dungeon098;
	Data::Member<Dungeon099> Dungeon099;
	Data::Member<Dungeon100> Dungeon100;
	Data::Member<Dungeon101> Dungeon101;
	Data::Member<Dungeon102> Dungeon102;
	Data::Member<Dungeon103> Dungeon103;
	Data::Member<Dungeon104> Dungeon104;
	Data::Member<Dungeon105> Dungeon105;
	Data::Member<Dungeon106> Dungeon106;
	Data::Member<Dungeon107> Dungeon107;
	Data::Member<Dungeon108> Dungeon108;
	Data::Member<Dungeon109> Dungeon109;
	Data::Member<Dungeon110> Dungeon110;
	Data::Member<Dungeon111> Dungeon111;
	Data::Member<Dungeon112> Dungeon112;
	Data::Member<Dungeon113> Dungeon113;
	Data::Member<Dungeon114> Dungeon114;
	Data::Member<Dungeon115> Dungeon115;
	Data::Member<Dungeon116> Dungeon116;
	Data::Member<Dungeon117> Dungeon117;
	Data::Member<Dungeon118> Dungeon118;
	Data::Member<Dungeon119> Dungeon119;
	Data::Member<Dungeon120> Dungeon120;
	Data::Member<Dungeon121> Dungeon121;
	Data::Member<Dungeon122> Dungeon122;
	Data::Member<Dungeon123> Dungeon123;
	Data::Member<Dungeon124> Dungeon124;
	Data::Member<Dungeon125> Dungeon125;
	Data::Member<Dungeon126> Dungeon126;
	Data::Member<Dungeon127> Dungeon127;
	Data::Member<Dungeon128> Dungeon128;
	Data::Member<Dungeon129> Dungeon129;
	Data::Member<Dungeon130> Dungeon130;
	Data::Member<Dungeon131> Dungeon131;
	Data::Member<Dungeon132> Dungeon132;
	Data::Member<Dungeon133> Dungeon133;
	Data::Member<Dungeon134> Dungeon134;
	Data::Member<Dungeon135> Dungeon135;
	Data::Member<Dungeon136> Dungeon136;
	Data::Member<Dungeon137> Dungeon137;
	Data::Member<Dungeon138> Dungeon138;
	Data::Member<Dungeon139> Dungeon139;
	Data::Member<Dungeon140> Dungeon140;
	Data::Member<Dungeon141> Dungeon141;
	Data::Member<Dungeon142> Dungeon142;
	Data::Member<Dungeon143> Dungeon143;
	Data::Member<Dungeon144> Dungeon144;
	Data::Member<Dungeon145> Dungeon145;
	Data::Member<Dungeon146> Dungeon146;
	Data::Member<Dungeon147> Dungeon147;
	Data::Member<Dungeon148> Dungeon148;
	Data::Member<Dungeon149> Dungeon149;
	Data::Member<Dungeon150> Dungeon150;
	Data::Member<Dungeon151> Dungeon151;
	
	explicit Structure(Sav& s) : 
		Dungeon000 { s.get<struct Dungeon000>() },
		Dungeon001 { s.get<struct Dungeon001>() },
		Dungeon002 { s.get<struct Dungeon002>() },
		Dungeon003 { s.get<struct Dungeon003>() },
		Dungeon004 { s.get<struct Dungeon004>() },
		Dungeon005 { s.get<struct Dungeon005>() },
		Dungeon006 { s.get<struct Dungeon006>() },
		Dungeon007 { s.get<struct Dungeon007>() },
		Dungeon008 { s.get<struct Dungeon008>() },
		Dungeon009 { s.get<struct Dungeon009>() },
		Dungeon010 { s.get<struct Dungeon010>() },
		Dungeon011 { s.get<struct Dungeon011>() },
		Dungeon012 { s.get<struct Dungeon012>() },
		Dungeon013 { s.get<struct Dungeon013>() },
		Dungeon014 { s.get<struct Dungeon014>() },
		Dungeon015 { s.get<struct Dungeon015>() },
		Dungeon016 { s.get<struct Dungeon016>() },
		Dungeon017 { s.get<struct Dungeon017>() },
		Dungeon018 { s.get<struct Dungeon018>() },
		Dungeon019 { s.get<struct Dungeon019>() },
		Dungeon020 { s.get<struct Dungeon020>() },
		Dungeon021 { s.get<struct Dungeon021>() },
		Dungeon022 { s.get<struct Dungeon022>() },
		Dungeon023 { s.get<struct Dungeon023>() },
		Dungeon024 { s.get<struct Dungeon024>() },
		Dungeon025 { s.get<struct Dungeon025>() },
		Dungeon026 { s.get<struct Dungeon026>() },
		Dungeon027 { s.get<struct Dungeon027>() },
		Dungeon028 { s.get<struct Dungeon028>() },
		Dungeon029 { s.get<struct Dungeon029>() },
		Dungeon030 { s.get<struct Dungeon030>() },
		Dungeon031 { s.get<struct Dungeon031>() },
		Dungeon032 { s.get<struct Dungeon032>() },
		Dungeon033 { s.get<struct Dungeon033>() },
		Dungeon034 { s.get<struct Dungeon034>() },
		Dungeon035 { s.get<struct Dungeon035>() },
		Dungeon036 { s.get<struct Dungeon036>() },
		Dungeon037 { s.get<struct Dungeon037>() },
		Dungeon038 { s.get<struct Dungeon038>() },
		Dungeon039 { s.get<struct Dungeon039>() },
		Dungeon040 { s.get<struct Dungeon040>() },
		Dungeon041 { s.get<struct Dungeon041>() },
		Dungeon042 { s.get<struct Dungeon042>() },
		Dungeon043 { s.get<struct Dungeon043>() },
		Dungeon044 { s.get<struct Dungeon044>() },
		Dungeon045 { s.get<struct Dungeon045>() },
		Dungeon046 { s.get<struct Dungeon046>() },
		Dungeon047 { s.get<struct Dungeon047>() },
		Dungeon048 { s.get<struct Dungeon048>() },
		Dungeon049 { s.get<struct Dungeon049>() },
		Dungeon050 { s.get<struct Dungeon050>() },
		Dungeon051 { s.get<struct Dungeon051>() },
		Dungeon052 { s.get<struct Dungeon052>() },
		Dungeon053 { s.get<struct Dungeon053>() },
		Dungeon054 { s.get<struct Dungeon054>() },
		Dungeon055 { s.get<struct Dungeon055>() },
		Dungeon056 { s.get<struct Dungeon056>() },
		Dungeon057 { s.get<struct Dungeon057>() },
		Dungeon058 { s.get<struct Dungeon058>() },
		Dungeon059 { s.get<struct Dungeon059>() },
		Dungeon060 { s.get<struct Dungeon060>() },
		Dungeon061 { s.get<struct Dungeon061>() },
		Dungeon062 { s.get<struct Dungeon062>() },
		Dungeon063 { s.get<struct Dungeon063>() },
		Dungeon064 { s.get<struct Dungeon064>() },
		Dungeon065 { s.get<struct Dungeon065>() },
		Dungeon066 { s.get<struct Dungeon066>() },
		Dungeon067 { s.get<struct Dungeon067>() },
		Dungeon068 { s.get<struct Dungeon068>() },
		Dungeon069 { s.get<struct Dungeon069>() },
		Dungeon070 { s.get<struct Dungeon070>() },
		Dungeon071 { s.get<struct Dungeon071>() },
		Dungeon072 { s.get<struct Dungeon072>() },
		Dungeon073 { s.get<struct Dungeon073>() },
		Dungeon074 { s.get<struct Dungeon074>() },
		Dungeon075 { s.get<struct Dungeon075>() },
		Dungeon076 { s.get<struct Dungeon076>() },
		Dungeon077 { s.get<struct Dungeon077>() },
		Dungeon078 { s.get<struct Dungeon078>() },
		Dungeon079 { s.get<struct Dungeon079>() },
		Dungeon080 { s.get<struct Dungeon080>() },
		Dungeon081 { s.get<struct Dungeon081>() },
		Dungeon082 { s.get<struct Dungeon082>() },
		Dungeon083 { s.get<struct Dungeon083>() },
		Dungeon084 { s.get<struct Dungeon084>() },
		Dungeon085 { s.get<struct Dungeon085>() },
		Dungeon086 { s.get<struct Dungeon086>() },
		Dungeon087 { s.get<struct Dungeon087>() },
		Dungeon088 { s.get<struct Dungeon088>() },
		Dungeon089 { s.get<struct Dungeon089>() },
		Dungeon090 { s.get<struct Dungeon090>() },
		Dungeon091 { s.get<struct Dungeon091>() },
		Dungeon092 { s.get<struct Dungeon092>() },
		Dungeon093 { s.get<struct Dungeon093>() },
		Dungeon094 { s.get<struct Dungeon094>() },
		Dungeon095 { s.get<struct Dungeon095>() },
		Dungeon096 { s.get<struct Dungeon096>() },
		Dungeon097 { s.get<struct Dungeon097>() },
		Dungeon098 { s.get<struct Dungeon098>() },
		Dungeon099 { s.get<struct Dungeon099>() },
		Dungeon100 { s.get<struct Dungeon100>() },
		Dungeon101 { s.get<struct Dungeon101>() },
		Dungeon102 { s.get<struct Dungeon102>() },
		Dungeon103 { s.get<struct Dungeon103>() },
		Dungeon104 { s.get<struct Dungeon104>() },
		Dungeon105 { s.get<struct Dungeon105>() },
		Dungeon106 { s.get<struct Dungeon106>() },
		Dungeon107 { s.get<struct Dungeon107>() },
		Dungeon108 { s.get<struct Dungeon108>() },
		Dungeon109 { s.get<struct Dungeon109>() },
		Dungeon110 { s.get<struct Dungeon110>() },
		Dungeon111 { s.get<struct Dungeon111>() },
		Dungeon112 { s.get<struct Dungeon112>() },
		Dungeon113 { s.get<struct Dungeon113>() },
		Dungeon114 { s.get<struct Dungeon114>() },
		Dungeon115 { s.get<struct Dungeon115>() },
		Dungeon116 { s.get<struct Dungeon116>() },
		Dungeon117 { s.get<struct Dungeon117>() },
		Dungeon118 { s.get<struct Dungeon118>() },
		Dungeon119 { s.get<struct Dungeon119>() },
		Dungeon120 { s.get<struct Dungeon120>() },
		Dungeon121 { s.get<struct Dungeon121>() },
		Dungeon122 { s.get<struct Dungeon122>() },
		Dungeon123 { s.get<struct Dungeon123>() },
		Dungeon124 { s.get<struct Dungeon124>() },
		Dungeon125 { s.get<struct Dungeon125>() },
		Dungeon126 { s.get<struct Dungeon126>() },
		Dungeon127 { s.get<struct Dungeon127>() },
		Dungeon128 { s.get<struct Dungeon128>() },
		Dungeon129 { s.get<struct Dungeon129>() },
		Dungeon130 { s.get<struct Dungeon130>() },
		Dungeon131 { s.get<struct Dungeon131>() },
		Dungeon132 { s.get<struct Dungeon132>() },
		Dungeon133 { s.get<struct Dungeon133>() },
		Dungeon134 { s.get<struct Dungeon134>() },
		Dungeon135 { s.get<struct Dungeon135>() },
		Dungeon136 { s.get<struct Dungeon136>() },
		Dungeon137 { s.get<struct Dungeon137>() },
		Dungeon138 { s.get<struct Dungeon138>() },
		Dungeon139 { s.get<struct Dungeon139>() },
		Dungeon140 { s.get<struct Dungeon140>() },
		Dungeon141 { s.get<struct Dungeon141>() },
		Dungeon142 { s.get<struct Dungeon142>() },
		Dungeon143 { s.get<struct Dungeon143>() },
		Dungeon144 { s.get<struct Dungeon144>() },
		Dungeon145 { s.get<struct Dungeon145>() },
		Dungeon146 { s.get<struct Dungeon146>() },
		Dungeon147 { s.get<struct Dungeon147>() },
		Dungeon148 { s.get<struct Dungeon148>() },
		Dungeon149 { s.get<struct Dungeon149>() },
		Dungeon150 { s.get<struct Dungeon150>() },
		Dungeon151 { s.get<struct Dungeon151>() }
	{ }
};/* Data::Structure GameData::KeyCrystalDungeonState close */

template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon000> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon000");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon001> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon001");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon002> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon002");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon003> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon003");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon004> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon004");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon005> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon005");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon006> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon006");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon007> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon007");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon008> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon008");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon009> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon009");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon010> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon010");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon011> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon011");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon012> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon012");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon013> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon013");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon014> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon014");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon015> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon015");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon016> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon016");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon017> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon017");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon018> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon018");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon019> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon019");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon020> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon020");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon021> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon021");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon022> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon022");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon023> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon023");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon024> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon024");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon025> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon025");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon026> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon026");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon027> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon027");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon028> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon028");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon029> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon029");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon030> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon030");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon031> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon031");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon032> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon032");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon033> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon033");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon034> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon034");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon035> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon035");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon036> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon036");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon037> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon037");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon038> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon038");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon039> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon039");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon040> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon040");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon041> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon041");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon042> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon042");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon043> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon043");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon044> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon044");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon045> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon045");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon046> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon046");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon047> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon047");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon048> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon048");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon049> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon049");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon050> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon050");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon051> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon051");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon052> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon052");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon053> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon053");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon054> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon054");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon055> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon055");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon056> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon056");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon057> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon057");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon058> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon058");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon059> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon059");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon060> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon060");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon061> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon061");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon062> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon062");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon063> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon063");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon064> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon064");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon065> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon065");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon066> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon066");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon067> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon067");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon068> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon068");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon069> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon069");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon070> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon070");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon071> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon071");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon072> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon072");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon073> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon073");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon074> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon074");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon075> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon075");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon076> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon076");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon077> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon077");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon078> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon078");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon079> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon079");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon080> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon080");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon081> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon081");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon082> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon082");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon083> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon083");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon084> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon084");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon085> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon085");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon086> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon086");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon087> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon087");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon088> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon088");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon089> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon089");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon090> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon090");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon091> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon091");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon092> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon092");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon093> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon093");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon094> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon094");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon095> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon095");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon096> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon096");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon097> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon097");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon098> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon098");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon099> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon099");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon100> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon100");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon101> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon101");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon102> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon102");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon103> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon103");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon104> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon104");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon105> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon105");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon106> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon106");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon107> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon107");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon108> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon108");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon109> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon109");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon110> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon110");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon111> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon111");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon112> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon112");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon113> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon113");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon114> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon114");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon115> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon115");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon116> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon116");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon117> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon117");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon118> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon118");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon119> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon119");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon120> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon120");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon121> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon121");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon122> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon122");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon123> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon123");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon124> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon124");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon125> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon125");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon126> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon126");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon127> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon127");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon128> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon128");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon129> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon129");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon130> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon130");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon131> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon131");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon132> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon132");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon133> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon133");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon134> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon134");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon135> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon135");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon136> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon136");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon137> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon137");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon138> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon138");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon139> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon139");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon140> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon140");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon141> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon141");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon142> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon142");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon143> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon143");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon144> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon144");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon145> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon145");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon146> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon146");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon147> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon147");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon148> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon148");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon149> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon149");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon150> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon150");
template <> hash_t constexpr Data::Hashtable<GameData::KeyCrystalDungeonState::Dungeon151> = murmurhash3::hash("KeyCrystalDungeonState.Dungeon151");