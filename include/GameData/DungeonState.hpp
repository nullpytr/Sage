#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::DungeonState : Tag::Structure {
	struct Dungeon000 : Tag::Enum { using type = ::Enum::Scalar<Dungeon000>; using adapter = ::Enum::Scalar<Dungeon000>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon001 : Tag::Enum { using type = ::Enum::Scalar<Dungeon001>; using adapter = ::Enum::Scalar<Dungeon001>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon002 : Tag::Enum { using type = ::Enum::Scalar<Dungeon002>; using adapter = ::Enum::Scalar<Dungeon002>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon003 : Tag::Enum { using type = ::Enum::Scalar<Dungeon003>; using adapter = ::Enum::Scalar<Dungeon003>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon004 : Tag::Enum { using type = ::Enum::Scalar<Dungeon004>; using adapter = ::Enum::Scalar<Dungeon004>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon005 : Tag::Enum { using type = ::Enum::Scalar<Dungeon005>; using adapter = ::Enum::Scalar<Dungeon005>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon006 : Tag::Enum { using type = ::Enum::Scalar<Dungeon006>; using adapter = ::Enum::Scalar<Dungeon006>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon007 : Tag::Enum { using type = ::Enum::Scalar<Dungeon007>; using adapter = ::Enum::Scalar<Dungeon007>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon008 : Tag::Enum { using type = ::Enum::Scalar<Dungeon008>; using adapter = ::Enum::Scalar<Dungeon008>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon009 : Tag::Enum { using type = ::Enum::Scalar<Dungeon009>; using adapter = ::Enum::Scalar<Dungeon009>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon010 : Tag::Enum { using type = ::Enum::Scalar<Dungeon010>; using adapter = ::Enum::Scalar<Dungeon010>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon011 : Tag::Enum { using type = ::Enum::Scalar<Dungeon011>; using adapter = ::Enum::Scalar<Dungeon011>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon012 : Tag::Enum { using type = ::Enum::Scalar<Dungeon012>; using adapter = ::Enum::Scalar<Dungeon012>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon013 : Tag::Enum { using type = ::Enum::Scalar<Dungeon013>; using adapter = ::Enum::Scalar<Dungeon013>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon014 : Tag::Enum { using type = ::Enum::Scalar<Dungeon014>; using adapter = ::Enum::Scalar<Dungeon014>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon015 : Tag::Enum { using type = ::Enum::Scalar<Dungeon015>; using adapter = ::Enum::Scalar<Dungeon015>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon016 : Tag::Enum { using type = ::Enum::Scalar<Dungeon016>; using adapter = ::Enum::Scalar<Dungeon016>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon017 : Tag::Enum { using type = ::Enum::Scalar<Dungeon017>; using adapter = ::Enum::Scalar<Dungeon017>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon018 : Tag::Enum { using type = ::Enum::Scalar<Dungeon018>; using adapter = ::Enum::Scalar<Dungeon018>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon019 : Tag::Enum { using type = ::Enum::Scalar<Dungeon019>; using adapter = ::Enum::Scalar<Dungeon019>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon020 : Tag::Enum { using type = ::Enum::Scalar<Dungeon020>; using adapter = ::Enum::Scalar<Dungeon020>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon021 : Tag::Enum { using type = ::Enum::Scalar<Dungeon021>; using adapter = ::Enum::Scalar<Dungeon021>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon022 : Tag::Enum { using type = ::Enum::Scalar<Dungeon022>; using adapter = ::Enum::Scalar<Dungeon022>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon023 : Tag::Enum { using type = ::Enum::Scalar<Dungeon023>; using adapter = ::Enum::Scalar<Dungeon023>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon024 : Tag::Enum { using type = ::Enum::Scalar<Dungeon024>; using adapter = ::Enum::Scalar<Dungeon024>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon025 : Tag::Enum { using type = ::Enum::Scalar<Dungeon025>; using adapter = ::Enum::Scalar<Dungeon025>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon026 : Tag::Enum { using type = ::Enum::Scalar<Dungeon026>; using adapter = ::Enum::Scalar<Dungeon026>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon027 : Tag::Enum { using type = ::Enum::Scalar<Dungeon027>; using adapter = ::Enum::Scalar<Dungeon027>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon028 : Tag::Enum { using type = ::Enum::Scalar<Dungeon028>; using adapter = ::Enum::Scalar<Dungeon028>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon029 : Tag::Enum { using type = ::Enum::Scalar<Dungeon029>; using adapter = ::Enum::Scalar<Dungeon029>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon030 : Tag::Enum { using type = ::Enum::Scalar<Dungeon030>; using adapter = ::Enum::Scalar<Dungeon030>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon031 : Tag::Enum { using type = ::Enum::Scalar<Dungeon031>; using adapter = ::Enum::Scalar<Dungeon031>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon032 : Tag::Enum { using type = ::Enum::Scalar<Dungeon032>; using adapter = ::Enum::Scalar<Dungeon032>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon033 : Tag::Enum { using type = ::Enum::Scalar<Dungeon033>; using adapter = ::Enum::Scalar<Dungeon033>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon034 : Tag::Enum { using type = ::Enum::Scalar<Dungeon034>; using adapter = ::Enum::Scalar<Dungeon034>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon035 : Tag::Enum { using type = ::Enum::Scalar<Dungeon035>; using adapter = ::Enum::Scalar<Dungeon035>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon036 : Tag::Enum { using type = ::Enum::Scalar<Dungeon036>; using adapter = ::Enum::Scalar<Dungeon036>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon037 : Tag::Enum { using type = ::Enum::Scalar<Dungeon037>; using adapter = ::Enum::Scalar<Dungeon037>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon038 : Tag::Enum { using type = ::Enum::Scalar<Dungeon038>; using adapter = ::Enum::Scalar<Dungeon038>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon039 : Tag::Enum { using type = ::Enum::Scalar<Dungeon039>; using adapter = ::Enum::Scalar<Dungeon039>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon040 : Tag::Enum { using type = ::Enum::Scalar<Dungeon040>; using adapter = ::Enum::Scalar<Dungeon040>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon041 : Tag::Enum { using type = ::Enum::Scalar<Dungeon041>; using adapter = ::Enum::Scalar<Dungeon041>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon042 : Tag::Enum { using type = ::Enum::Scalar<Dungeon042>; using adapter = ::Enum::Scalar<Dungeon042>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon043 : Tag::Enum { using type = ::Enum::Scalar<Dungeon043>; using adapter = ::Enum::Scalar<Dungeon043>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon044 : Tag::Enum { using type = ::Enum::Scalar<Dungeon044>; using adapter = ::Enum::Scalar<Dungeon044>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon045 : Tag::Enum { using type = ::Enum::Scalar<Dungeon045>; using adapter = ::Enum::Scalar<Dungeon045>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon046 : Tag::Enum { using type = ::Enum::Scalar<Dungeon046>; using adapter = ::Enum::Scalar<Dungeon046>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon047 : Tag::Enum { using type = ::Enum::Scalar<Dungeon047>; using adapter = ::Enum::Scalar<Dungeon047>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon048 : Tag::Enum { using type = ::Enum::Scalar<Dungeon048>; using adapter = ::Enum::Scalar<Dungeon048>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon049 : Tag::Enum { using type = ::Enum::Scalar<Dungeon049>; using adapter = ::Enum::Scalar<Dungeon049>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon050 : Tag::Enum { using type = ::Enum::Scalar<Dungeon050>; using adapter = ::Enum::Scalar<Dungeon050>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon051 : Tag::Enum { using type = ::Enum::Scalar<Dungeon051>; using adapter = ::Enum::Scalar<Dungeon051>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon052 : Tag::Enum { using type = ::Enum::Scalar<Dungeon052>; using adapter = ::Enum::Scalar<Dungeon052>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon053 : Tag::Enum { using type = ::Enum::Scalar<Dungeon053>; using adapter = ::Enum::Scalar<Dungeon053>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon054 : Tag::Enum { using type = ::Enum::Scalar<Dungeon054>; using adapter = ::Enum::Scalar<Dungeon054>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon055 : Tag::Enum { using type = ::Enum::Scalar<Dungeon055>; using adapter = ::Enum::Scalar<Dungeon055>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon056 : Tag::Enum { using type = ::Enum::Scalar<Dungeon056>; using adapter = ::Enum::Scalar<Dungeon056>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon057 : Tag::Enum { using type = ::Enum::Scalar<Dungeon057>; using adapter = ::Enum::Scalar<Dungeon057>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon058 : Tag::Enum { using type = ::Enum::Scalar<Dungeon058>; using adapter = ::Enum::Scalar<Dungeon058>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon059 : Tag::Enum { using type = ::Enum::Scalar<Dungeon059>; using adapter = ::Enum::Scalar<Dungeon059>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon060 : Tag::Enum { using type = ::Enum::Scalar<Dungeon060>; using adapter = ::Enum::Scalar<Dungeon060>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon061 : Tag::Enum { using type = ::Enum::Scalar<Dungeon061>; using adapter = ::Enum::Scalar<Dungeon061>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon062 : Tag::Enum { using type = ::Enum::Scalar<Dungeon062>; using adapter = ::Enum::Scalar<Dungeon062>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon063 : Tag::Enum { using type = ::Enum::Scalar<Dungeon063>; using adapter = ::Enum::Scalar<Dungeon063>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon064 : Tag::Enum { using type = ::Enum::Scalar<Dungeon064>; using adapter = ::Enum::Scalar<Dungeon064>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon065 : Tag::Enum { using type = ::Enum::Scalar<Dungeon065>; using adapter = ::Enum::Scalar<Dungeon065>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon066 : Tag::Enum { using type = ::Enum::Scalar<Dungeon066>; using adapter = ::Enum::Scalar<Dungeon066>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon067 : Tag::Enum { using type = ::Enum::Scalar<Dungeon067>; using adapter = ::Enum::Scalar<Dungeon067>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon068 : Tag::Enum { using type = ::Enum::Scalar<Dungeon068>; using adapter = ::Enum::Scalar<Dungeon068>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon069 : Tag::Enum { using type = ::Enum::Scalar<Dungeon069>; using adapter = ::Enum::Scalar<Dungeon069>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon070 : Tag::Enum { using type = ::Enum::Scalar<Dungeon070>; using adapter = ::Enum::Scalar<Dungeon070>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon071 : Tag::Enum { using type = ::Enum::Scalar<Dungeon071>; using adapter = ::Enum::Scalar<Dungeon071>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon072 : Tag::Enum { using type = ::Enum::Scalar<Dungeon072>; using adapter = ::Enum::Scalar<Dungeon072>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon073 : Tag::Enum { using type = ::Enum::Scalar<Dungeon073>; using adapter = ::Enum::Scalar<Dungeon073>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon074 : Tag::Enum { using type = ::Enum::Scalar<Dungeon074>; using adapter = ::Enum::Scalar<Dungeon074>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon075 : Tag::Enum { using type = ::Enum::Scalar<Dungeon075>; using adapter = ::Enum::Scalar<Dungeon075>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon076 : Tag::Enum { using type = ::Enum::Scalar<Dungeon076>; using adapter = ::Enum::Scalar<Dungeon076>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon077 : Tag::Enum { using type = ::Enum::Scalar<Dungeon077>; using adapter = ::Enum::Scalar<Dungeon077>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon078 : Tag::Enum { using type = ::Enum::Scalar<Dungeon078>; using adapter = ::Enum::Scalar<Dungeon078>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon079 : Tag::Enum { using type = ::Enum::Scalar<Dungeon079>; using adapter = ::Enum::Scalar<Dungeon079>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon080 : Tag::Enum { using type = ::Enum::Scalar<Dungeon080>; using adapter = ::Enum::Scalar<Dungeon080>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon081 : Tag::Enum { using type = ::Enum::Scalar<Dungeon081>; using adapter = ::Enum::Scalar<Dungeon081>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon082 : Tag::Enum { using type = ::Enum::Scalar<Dungeon082>; using adapter = ::Enum::Scalar<Dungeon082>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon083 : Tag::Enum { using type = ::Enum::Scalar<Dungeon083>; using adapter = ::Enum::Scalar<Dungeon083>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon084 : Tag::Enum { using type = ::Enum::Scalar<Dungeon084>; using adapter = ::Enum::Scalar<Dungeon084>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon085 : Tag::Enum { using type = ::Enum::Scalar<Dungeon085>; using adapter = ::Enum::Scalar<Dungeon085>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon086 : Tag::Enum { using type = ::Enum::Scalar<Dungeon086>; using adapter = ::Enum::Scalar<Dungeon086>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon087 : Tag::Enum { using type = ::Enum::Scalar<Dungeon087>; using adapter = ::Enum::Scalar<Dungeon087>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon088 : Tag::Enum { using type = ::Enum::Scalar<Dungeon088>; using adapter = ::Enum::Scalar<Dungeon088>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon089 : Tag::Enum { using type = ::Enum::Scalar<Dungeon089>; using adapter = ::Enum::Scalar<Dungeon089>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon090 : Tag::Enum { using type = ::Enum::Scalar<Dungeon090>; using adapter = ::Enum::Scalar<Dungeon090>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon091 : Tag::Enum { using type = ::Enum::Scalar<Dungeon091>; using adapter = ::Enum::Scalar<Dungeon091>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon092 : Tag::Enum { using type = ::Enum::Scalar<Dungeon092>; using adapter = ::Enum::Scalar<Dungeon092>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon093 : Tag::Enum { using type = ::Enum::Scalar<Dungeon093>; using adapter = ::Enum::Scalar<Dungeon093>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon094 : Tag::Enum { using type = ::Enum::Scalar<Dungeon094>; using adapter = ::Enum::Scalar<Dungeon094>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon095 : Tag::Enum { using type = ::Enum::Scalar<Dungeon095>; using adapter = ::Enum::Scalar<Dungeon095>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon096 : Tag::Enum { using type = ::Enum::Scalar<Dungeon096>; using adapter = ::Enum::Scalar<Dungeon096>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon097 : Tag::Enum { using type = ::Enum::Scalar<Dungeon097>; using adapter = ::Enum::Scalar<Dungeon097>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon098 : Tag::Enum { using type = ::Enum::Scalar<Dungeon098>; using adapter = ::Enum::Scalar<Dungeon098>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon099 : Tag::Enum { using type = ::Enum::Scalar<Dungeon099>; using adapter = ::Enum::Scalar<Dungeon099>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon100 : Tag::Enum { using type = ::Enum::Scalar<Dungeon100>; using adapter = ::Enum::Scalar<Dungeon100>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon101 : Tag::Enum { using type = ::Enum::Scalar<Dungeon101>; using adapter = ::Enum::Scalar<Dungeon101>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon102 : Tag::Enum { using type = ::Enum::Scalar<Dungeon102>; using adapter = ::Enum::Scalar<Dungeon102>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon103 : Tag::Enum { using type = ::Enum::Scalar<Dungeon103>; using adapter = ::Enum::Scalar<Dungeon103>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon104 : Tag::Enum { using type = ::Enum::Scalar<Dungeon104>; using adapter = ::Enum::Scalar<Dungeon104>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon105 : Tag::Enum { using type = ::Enum::Scalar<Dungeon105>; using adapter = ::Enum::Scalar<Dungeon105>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon106 : Tag::Enum { using type = ::Enum::Scalar<Dungeon106>; using adapter = ::Enum::Scalar<Dungeon106>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon107 : Tag::Enum { using type = ::Enum::Scalar<Dungeon107>; using adapter = ::Enum::Scalar<Dungeon107>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon108 : Tag::Enum { using type = ::Enum::Scalar<Dungeon108>; using adapter = ::Enum::Scalar<Dungeon108>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon109 : Tag::Enum { using type = ::Enum::Scalar<Dungeon109>; using adapter = ::Enum::Scalar<Dungeon109>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon110 : Tag::Enum { using type = ::Enum::Scalar<Dungeon110>; using adapter = ::Enum::Scalar<Dungeon110>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon111 : Tag::Enum { using type = ::Enum::Scalar<Dungeon111>; using adapter = ::Enum::Scalar<Dungeon111>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon112 : Tag::Enum { using type = ::Enum::Scalar<Dungeon112>; using adapter = ::Enum::Scalar<Dungeon112>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon113 : Tag::Enum { using type = ::Enum::Scalar<Dungeon113>; using adapter = ::Enum::Scalar<Dungeon113>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon114 : Tag::Enum { using type = ::Enum::Scalar<Dungeon114>; using adapter = ::Enum::Scalar<Dungeon114>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon115 : Tag::Enum { using type = ::Enum::Scalar<Dungeon115>; using adapter = ::Enum::Scalar<Dungeon115>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon116 : Tag::Enum { using type = ::Enum::Scalar<Dungeon116>; using adapter = ::Enum::Scalar<Dungeon116>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon117 : Tag::Enum { using type = ::Enum::Scalar<Dungeon117>; using adapter = ::Enum::Scalar<Dungeon117>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon118 : Tag::Enum { using type = ::Enum::Scalar<Dungeon118>; using adapter = ::Enum::Scalar<Dungeon118>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon119 : Tag::Enum { using type = ::Enum::Scalar<Dungeon119>; using adapter = ::Enum::Scalar<Dungeon119>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon120 : Tag::Enum { using type = ::Enum::Scalar<Dungeon120>; using adapter = ::Enum::Scalar<Dungeon120>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon121 : Tag::Enum { using type = ::Enum::Scalar<Dungeon121>; using adapter = ::Enum::Scalar<Dungeon121>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon122 : Tag::Enum { using type = ::Enum::Scalar<Dungeon122>; using adapter = ::Enum::Scalar<Dungeon122>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon123 : Tag::Enum { using type = ::Enum::Scalar<Dungeon123>; using adapter = ::Enum::Scalar<Dungeon123>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon124 : Tag::Enum { using type = ::Enum::Scalar<Dungeon124>; using adapter = ::Enum::Scalar<Dungeon124>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon125 : Tag::Enum { using type = ::Enum::Scalar<Dungeon125>; using adapter = ::Enum::Scalar<Dungeon125>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon126 : Tag::Enum { using type = ::Enum::Scalar<Dungeon126>; using adapter = ::Enum::Scalar<Dungeon126>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon127 : Tag::Enum { using type = ::Enum::Scalar<Dungeon127>; using adapter = ::Enum::Scalar<Dungeon127>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon128 : Tag::Enum { using type = ::Enum::Scalar<Dungeon128>; using adapter = ::Enum::Scalar<Dungeon128>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon129 : Tag::Enum { using type = ::Enum::Scalar<Dungeon129>; using adapter = ::Enum::Scalar<Dungeon129>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon130 : Tag::Enum { using type = ::Enum::Scalar<Dungeon130>; using adapter = ::Enum::Scalar<Dungeon130>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon131 : Tag::Enum { using type = ::Enum::Scalar<Dungeon131>; using adapter = ::Enum::Scalar<Dungeon131>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon132 : Tag::Enum { using type = ::Enum::Scalar<Dungeon132>; using adapter = ::Enum::Scalar<Dungeon132>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon133 : Tag::Enum { using type = ::Enum::Scalar<Dungeon133>; using adapter = ::Enum::Scalar<Dungeon133>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon134 : Tag::Enum { using type = ::Enum::Scalar<Dungeon134>; using adapter = ::Enum::Scalar<Dungeon134>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon135 : Tag::Enum { using type = ::Enum::Scalar<Dungeon135>; using adapter = ::Enum::Scalar<Dungeon135>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon136 : Tag::Enum { using type = ::Enum::Scalar<Dungeon136>; using adapter = ::Enum::Scalar<Dungeon136>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon137 : Tag::Enum { using type = ::Enum::Scalar<Dungeon137>; using adapter = ::Enum::Scalar<Dungeon137>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon138 : Tag::Enum { using type = ::Enum::Scalar<Dungeon138>; using adapter = ::Enum::Scalar<Dungeon138>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon139 : Tag::Enum { using type = ::Enum::Scalar<Dungeon139>; using adapter = ::Enum::Scalar<Dungeon139>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon140 : Tag::Enum { using type = ::Enum::Scalar<Dungeon140>; using adapter = ::Enum::Scalar<Dungeon140>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon141 : Tag::Enum { using type = ::Enum::Scalar<Dungeon141>; using adapter = ::Enum::Scalar<Dungeon141>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon142 : Tag::Enum { using type = ::Enum::Scalar<Dungeon142>; using adapter = ::Enum::Scalar<Dungeon142>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon143 : Tag::Enum { using type = ::Enum::Scalar<Dungeon143>; using adapter = ::Enum::Scalar<Dungeon143>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon144 : Tag::Enum { using type = ::Enum::Scalar<Dungeon144>; using adapter = ::Enum::Scalar<Dungeon144>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon145 : Tag::Enum { using type = ::Enum::Scalar<Dungeon145>; using adapter = ::Enum::Scalar<Dungeon145>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon146 : Tag::Enum { using type = ::Enum::Scalar<Dungeon146>; using adapter = ::Enum::Scalar<Dungeon146>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon147 : Tag::Enum { using type = ::Enum::Scalar<Dungeon147>; using adapter = ::Enum::Scalar<Dungeon147>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon148 : Tag::Enum { using type = ::Enum::Scalar<Dungeon148>; using adapter = ::Enum::Scalar<Dungeon148>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon149 : Tag::Enum { using type = ::Enum::Scalar<Dungeon149>; using adapter = ::Enum::Scalar<Dungeon149>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon150 : Tag::Enum { using type = ::Enum::Scalar<Dungeon150>; using adapter = ::Enum::Scalar<Dungeon150>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
	struct Dungeon151 : Tag::Enum { using type = ::Enum::Scalar<Dungeon151>; using adapter = ::Enum::Scalar<Dungeon151>; enum enum_type : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
};/* Tag::Structure GameData::DungeonState close */

template <> struct Data::Structure<GameData::DungeonState> : GameData::DungeonState {
	Dungeon000::type Dungeon000;
	Dungeon001::type Dungeon001;
	Dungeon002::type Dungeon002;
	Dungeon003::type Dungeon003;
	Dungeon004::type Dungeon004;
	Dungeon005::type Dungeon005;
	Dungeon006::type Dungeon006;
	Dungeon007::type Dungeon007;
	Dungeon008::type Dungeon008;
	Dungeon009::type Dungeon009;
	Dungeon010::type Dungeon010;
	Dungeon011::type Dungeon011;
	Dungeon012::type Dungeon012;
	Dungeon013::type Dungeon013;
	Dungeon014::type Dungeon014;
	Dungeon015::type Dungeon015;
	Dungeon016::type Dungeon016;
	Dungeon017::type Dungeon017;
	Dungeon018::type Dungeon018;
	Dungeon019::type Dungeon019;
	Dungeon020::type Dungeon020;
	Dungeon021::type Dungeon021;
	Dungeon022::type Dungeon022;
	Dungeon023::type Dungeon023;
	Dungeon024::type Dungeon024;
	Dungeon025::type Dungeon025;
	Dungeon026::type Dungeon026;
	Dungeon027::type Dungeon027;
	Dungeon028::type Dungeon028;
	Dungeon029::type Dungeon029;
	Dungeon030::type Dungeon030;
	Dungeon031::type Dungeon031;
	Dungeon032::type Dungeon032;
	Dungeon033::type Dungeon033;
	Dungeon034::type Dungeon034;
	Dungeon035::type Dungeon035;
	Dungeon036::type Dungeon036;
	Dungeon037::type Dungeon037;
	Dungeon038::type Dungeon038;
	Dungeon039::type Dungeon039;
	Dungeon040::type Dungeon040;
	Dungeon041::type Dungeon041;
	Dungeon042::type Dungeon042;
	Dungeon043::type Dungeon043;
	Dungeon044::type Dungeon044;
	Dungeon045::type Dungeon045;
	Dungeon046::type Dungeon046;
	Dungeon047::type Dungeon047;
	Dungeon048::type Dungeon048;
	Dungeon049::type Dungeon049;
	Dungeon050::type Dungeon050;
	Dungeon051::type Dungeon051;
	Dungeon052::type Dungeon052;
	Dungeon053::type Dungeon053;
	Dungeon054::type Dungeon054;
	Dungeon055::type Dungeon055;
	Dungeon056::type Dungeon056;
	Dungeon057::type Dungeon057;
	Dungeon058::type Dungeon058;
	Dungeon059::type Dungeon059;
	Dungeon060::type Dungeon060;
	Dungeon061::type Dungeon061;
	Dungeon062::type Dungeon062;
	Dungeon063::type Dungeon063;
	Dungeon064::type Dungeon064;
	Dungeon065::type Dungeon065;
	Dungeon066::type Dungeon066;
	Dungeon067::type Dungeon067;
	Dungeon068::type Dungeon068;
	Dungeon069::type Dungeon069;
	Dungeon070::type Dungeon070;
	Dungeon071::type Dungeon071;
	Dungeon072::type Dungeon072;
	Dungeon073::type Dungeon073;
	Dungeon074::type Dungeon074;
	Dungeon075::type Dungeon075;
	Dungeon076::type Dungeon076;
	Dungeon077::type Dungeon077;
	Dungeon078::type Dungeon078;
	Dungeon079::type Dungeon079;
	Dungeon080::type Dungeon080;
	Dungeon081::type Dungeon081;
	Dungeon082::type Dungeon082;
	Dungeon083::type Dungeon083;
	Dungeon084::type Dungeon084;
	Dungeon085::type Dungeon085;
	Dungeon086::type Dungeon086;
	Dungeon087::type Dungeon087;
	Dungeon088::type Dungeon088;
	Dungeon089::type Dungeon089;
	Dungeon090::type Dungeon090;
	Dungeon091::type Dungeon091;
	Dungeon092::type Dungeon092;
	Dungeon093::type Dungeon093;
	Dungeon094::type Dungeon094;
	Dungeon095::type Dungeon095;
	Dungeon096::type Dungeon096;
	Dungeon097::type Dungeon097;
	Dungeon098::type Dungeon098;
	Dungeon099::type Dungeon099;
	Dungeon100::type Dungeon100;
	Dungeon101::type Dungeon101;
	Dungeon102::type Dungeon102;
	Dungeon103::type Dungeon103;
	Dungeon104::type Dungeon104;
	Dungeon105::type Dungeon105;
	Dungeon106::type Dungeon106;
	Dungeon107::type Dungeon107;
	Dungeon108::type Dungeon108;
	Dungeon109::type Dungeon109;
	Dungeon110::type Dungeon110;
	Dungeon111::type Dungeon111;
	Dungeon112::type Dungeon112;
	Dungeon113::type Dungeon113;
	Dungeon114::type Dungeon114;
	Dungeon115::type Dungeon115;
	Dungeon116::type Dungeon116;
	Dungeon117::type Dungeon117;
	Dungeon118::type Dungeon118;
	Dungeon119::type Dungeon119;
	Dungeon120::type Dungeon120;
	Dungeon121::type Dungeon121;
	Dungeon122::type Dungeon122;
	Dungeon123::type Dungeon123;
	Dungeon124::type Dungeon124;
	Dungeon125::type Dungeon125;
	Dungeon126::type Dungeon126;
	Dungeon127::type Dungeon127;
	Dungeon128::type Dungeon128;
	Dungeon129::type Dungeon129;
	Dungeon130::type Dungeon130;
	Dungeon131::type Dungeon131;
	Dungeon132::type Dungeon132;
	Dungeon133::type Dungeon133;
	Dungeon134::type Dungeon134;
	Dungeon135::type Dungeon135;
	Dungeon136::type Dungeon136;
	Dungeon137::type Dungeon137;
	Dungeon138::type Dungeon138;
	Dungeon139::type Dungeon139;
	Dungeon140::type Dungeon140;
	Dungeon141::type Dungeon141;
	Dungeon142::type Dungeon142;
	Dungeon143::type Dungeon143;
	Dungeon144::type Dungeon144;
	Dungeon145::type Dungeon145;
	Dungeon146::type Dungeon146;
	Dungeon147::type Dungeon147;
	Dungeon148::type Dungeon148;
	Dungeon149::type Dungeon149;
	Dungeon150::type Dungeon150;
	Dungeon151::type Dungeon151;
	
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
};/* Data::Structure GameData::DungeonState close */

template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon000> = murmurhash3::hash("DungeonState.Dungeon000");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon001> = murmurhash3::hash("DungeonState.Dungeon001");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon002> = murmurhash3::hash("DungeonState.Dungeon002");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon003> = murmurhash3::hash("DungeonState.Dungeon003");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon004> = murmurhash3::hash("DungeonState.Dungeon004");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon005> = murmurhash3::hash("DungeonState.Dungeon005");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon006> = murmurhash3::hash("DungeonState.Dungeon006");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon007> = murmurhash3::hash("DungeonState.Dungeon007");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon008> = murmurhash3::hash("DungeonState.Dungeon008");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon009> = murmurhash3::hash("DungeonState.Dungeon009");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon010> = murmurhash3::hash("DungeonState.Dungeon010");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon011> = murmurhash3::hash("DungeonState.Dungeon011");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon012> = murmurhash3::hash("DungeonState.Dungeon012");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon013> = murmurhash3::hash("DungeonState.Dungeon013");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon014> = murmurhash3::hash("DungeonState.Dungeon014");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon015> = murmurhash3::hash("DungeonState.Dungeon015");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon016> = murmurhash3::hash("DungeonState.Dungeon016");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon017> = murmurhash3::hash("DungeonState.Dungeon017");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon018> = murmurhash3::hash("DungeonState.Dungeon018");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon019> = murmurhash3::hash("DungeonState.Dungeon019");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon020> = murmurhash3::hash("DungeonState.Dungeon020");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon021> = murmurhash3::hash("DungeonState.Dungeon021");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon022> = murmurhash3::hash("DungeonState.Dungeon022");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon023> = murmurhash3::hash("DungeonState.Dungeon023");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon024> = murmurhash3::hash("DungeonState.Dungeon024");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon025> = murmurhash3::hash("DungeonState.Dungeon025");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon026> = murmurhash3::hash("DungeonState.Dungeon026");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon027> = murmurhash3::hash("DungeonState.Dungeon027");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon028> = murmurhash3::hash("DungeonState.Dungeon028");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon029> = murmurhash3::hash("DungeonState.Dungeon029");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon030> = murmurhash3::hash("DungeonState.Dungeon030");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon031> = murmurhash3::hash("DungeonState.Dungeon031");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon032> = murmurhash3::hash("DungeonState.Dungeon032");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon033> = murmurhash3::hash("DungeonState.Dungeon033");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon034> = murmurhash3::hash("DungeonState.Dungeon034");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon035> = murmurhash3::hash("DungeonState.Dungeon035");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon036> = murmurhash3::hash("DungeonState.Dungeon036");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon037> = murmurhash3::hash("DungeonState.Dungeon037");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon038> = murmurhash3::hash("DungeonState.Dungeon038");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon039> = murmurhash3::hash("DungeonState.Dungeon039");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon040> = murmurhash3::hash("DungeonState.Dungeon040");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon041> = murmurhash3::hash("DungeonState.Dungeon041");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon042> = murmurhash3::hash("DungeonState.Dungeon042");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon043> = murmurhash3::hash("DungeonState.Dungeon043");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon044> = murmurhash3::hash("DungeonState.Dungeon044");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon045> = murmurhash3::hash("DungeonState.Dungeon045");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon046> = murmurhash3::hash("DungeonState.Dungeon046");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon047> = murmurhash3::hash("DungeonState.Dungeon047");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon048> = murmurhash3::hash("DungeonState.Dungeon048");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon049> = murmurhash3::hash("DungeonState.Dungeon049");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon050> = murmurhash3::hash("DungeonState.Dungeon050");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon051> = murmurhash3::hash("DungeonState.Dungeon051");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon052> = murmurhash3::hash("DungeonState.Dungeon052");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon053> = murmurhash3::hash("DungeonState.Dungeon053");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon054> = murmurhash3::hash("DungeonState.Dungeon054");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon055> = murmurhash3::hash("DungeonState.Dungeon055");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon056> = murmurhash3::hash("DungeonState.Dungeon056");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon057> = murmurhash3::hash("DungeonState.Dungeon057");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon058> = murmurhash3::hash("DungeonState.Dungeon058");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon059> = murmurhash3::hash("DungeonState.Dungeon059");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon060> = murmurhash3::hash("DungeonState.Dungeon060");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon061> = murmurhash3::hash("DungeonState.Dungeon061");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon062> = murmurhash3::hash("DungeonState.Dungeon062");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon063> = murmurhash3::hash("DungeonState.Dungeon063");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon064> = murmurhash3::hash("DungeonState.Dungeon064");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon065> = murmurhash3::hash("DungeonState.Dungeon065");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon066> = murmurhash3::hash("DungeonState.Dungeon066");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon067> = murmurhash3::hash("DungeonState.Dungeon067");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon068> = murmurhash3::hash("DungeonState.Dungeon068");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon069> = murmurhash3::hash("DungeonState.Dungeon069");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon070> = murmurhash3::hash("DungeonState.Dungeon070");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon071> = murmurhash3::hash("DungeonState.Dungeon071");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon072> = murmurhash3::hash("DungeonState.Dungeon072");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon073> = murmurhash3::hash("DungeonState.Dungeon073");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon074> = murmurhash3::hash("DungeonState.Dungeon074");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon075> = murmurhash3::hash("DungeonState.Dungeon075");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon076> = murmurhash3::hash("DungeonState.Dungeon076");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon077> = murmurhash3::hash("DungeonState.Dungeon077");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon078> = murmurhash3::hash("DungeonState.Dungeon078");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon079> = murmurhash3::hash("DungeonState.Dungeon079");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon080> = murmurhash3::hash("DungeonState.Dungeon080");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon081> = murmurhash3::hash("DungeonState.Dungeon081");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon082> = murmurhash3::hash("DungeonState.Dungeon082");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon083> = murmurhash3::hash("DungeonState.Dungeon083");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon084> = murmurhash3::hash("DungeonState.Dungeon084");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon085> = murmurhash3::hash("DungeonState.Dungeon085");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon086> = murmurhash3::hash("DungeonState.Dungeon086");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon087> = murmurhash3::hash("DungeonState.Dungeon087");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon088> = murmurhash3::hash("DungeonState.Dungeon088");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon089> = murmurhash3::hash("DungeonState.Dungeon089");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon090> = murmurhash3::hash("DungeonState.Dungeon090");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon091> = murmurhash3::hash("DungeonState.Dungeon091");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon092> = murmurhash3::hash("DungeonState.Dungeon092");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon093> = murmurhash3::hash("DungeonState.Dungeon093");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon094> = murmurhash3::hash("DungeonState.Dungeon094");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon095> = murmurhash3::hash("DungeonState.Dungeon095");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon096> = murmurhash3::hash("DungeonState.Dungeon096");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon097> = murmurhash3::hash("DungeonState.Dungeon097");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon098> = murmurhash3::hash("DungeonState.Dungeon098");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon099> = murmurhash3::hash("DungeonState.Dungeon099");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon100> = murmurhash3::hash("DungeonState.Dungeon100");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon101> = murmurhash3::hash("DungeonState.Dungeon101");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon102> = murmurhash3::hash("DungeonState.Dungeon102");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon103> = murmurhash3::hash("DungeonState.Dungeon103");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon104> = murmurhash3::hash("DungeonState.Dungeon104");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon105> = murmurhash3::hash("DungeonState.Dungeon105");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon106> = murmurhash3::hash("DungeonState.Dungeon106");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon107> = murmurhash3::hash("DungeonState.Dungeon107");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon108> = murmurhash3::hash("DungeonState.Dungeon108");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon109> = murmurhash3::hash("DungeonState.Dungeon109");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon110> = murmurhash3::hash("DungeonState.Dungeon110");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon111> = murmurhash3::hash("DungeonState.Dungeon111");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon112> = murmurhash3::hash("DungeonState.Dungeon112");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon113> = murmurhash3::hash("DungeonState.Dungeon113");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon114> = murmurhash3::hash("DungeonState.Dungeon114");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon115> = murmurhash3::hash("DungeonState.Dungeon115");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon116> = murmurhash3::hash("DungeonState.Dungeon116");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon117> = murmurhash3::hash("DungeonState.Dungeon117");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon118> = murmurhash3::hash("DungeonState.Dungeon118");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon119> = murmurhash3::hash("DungeonState.Dungeon119");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon120> = murmurhash3::hash("DungeonState.Dungeon120");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon121> = murmurhash3::hash("DungeonState.Dungeon121");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon122> = murmurhash3::hash("DungeonState.Dungeon122");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon123> = murmurhash3::hash("DungeonState.Dungeon123");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon124> = murmurhash3::hash("DungeonState.Dungeon124");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon125> = murmurhash3::hash("DungeonState.Dungeon125");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon126> = murmurhash3::hash("DungeonState.Dungeon126");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon127> = murmurhash3::hash("DungeonState.Dungeon127");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon128> = murmurhash3::hash("DungeonState.Dungeon128");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon129> = murmurhash3::hash("DungeonState.Dungeon129");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon130> = murmurhash3::hash("DungeonState.Dungeon130");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon131> = murmurhash3::hash("DungeonState.Dungeon131");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon132> = murmurhash3::hash("DungeonState.Dungeon132");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon133> = murmurhash3::hash("DungeonState.Dungeon133");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon134> = murmurhash3::hash("DungeonState.Dungeon134");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon135> = murmurhash3::hash("DungeonState.Dungeon135");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon136> = murmurhash3::hash("DungeonState.Dungeon136");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon137> = murmurhash3::hash("DungeonState.Dungeon137");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon138> = murmurhash3::hash("DungeonState.Dungeon138");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon139> = murmurhash3::hash("DungeonState.Dungeon139");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon140> = murmurhash3::hash("DungeonState.Dungeon140");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon141> = murmurhash3::hash("DungeonState.Dungeon141");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon142> = murmurhash3::hash("DungeonState.Dungeon142");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon143> = murmurhash3::hash("DungeonState.Dungeon143");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon144> = murmurhash3::hash("DungeonState.Dungeon144");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon145> = murmurhash3::hash("DungeonState.Dungeon145");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon146> = murmurhash3::hash("DungeonState.Dungeon146");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon147> = murmurhash3::hash("DungeonState.Dungeon147");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon148> = murmurhash3::hash("DungeonState.Dungeon148");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon149> = murmurhash3::hash("DungeonState.Dungeon149");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon150> = murmurhash3::hash("DungeonState.Dungeon150");
template <> hash_t constexpr Data::Hashtable<GameData::DungeonState::Dungeon151> = murmurhash3::hash("DungeonState.Dungeon151");