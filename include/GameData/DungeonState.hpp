#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::DungeonState : Tag::Structure {
	struct Dungeon000 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon001 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon002 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon003 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon004 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon005 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon006 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon007 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon008 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon009 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon010 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon011 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon012 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon013 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon014 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon015 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon016 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon017 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon018 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon019 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon020 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon021 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon022 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon023 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon024 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon025 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon026 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon027 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon028 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon029 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon030 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon031 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon032 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon033 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon034 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon035 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon036 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon037 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon038 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon039 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon040 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon041 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon042 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon043 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon044 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon045 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon046 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon047 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon048 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon049 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon050 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon051 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon052 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon053 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon054 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon055 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon056 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon057 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon058 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon059 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon060 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon061 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon062 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon063 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon064 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon065 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon066 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon067 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon068 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon069 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon070 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon071 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon072 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon073 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon074 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon075 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon076 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon077 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon078 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon079 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon080 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon081 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon082 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon083 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon084 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon085 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon086 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon087 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon088 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon089 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon090 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon091 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon092 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon093 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon094 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon095 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon096 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon097 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon098 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon099 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon100 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon101 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon102 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon103 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon104 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon105 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon106 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon107 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon108 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon109 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon110 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon111 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon112 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon113 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon114 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon115 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon116 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon117 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon118 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon119 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon120 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon121 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon122 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon123 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon124 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon125 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon126 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon127 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon128 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon129 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon130 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon131 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon132 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon133 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon134 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon135 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon136 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon137 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon138 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon139 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon140 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon141 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon142 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon143 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon144 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon145 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon146 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon147 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon148 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon149 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon150 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
	struct Dungeon151 : Tag::Enum {
		using values_t = struct { enum underlying_enum_t : hash_t { Hidden = murmurhash3::hash("Hidden"), Appear = murmurhash3::hash("Appear"), Open = murmurhash3::hash("Open"), Enter = murmurhash3::hash("Enter"), Clear = murmurhash3::hash("Clear"), }; };
		using type = enum_t<values_t>;
	};
};/* Tag::Structure GameData::DungeonState close */

template <> struct Data::Structure<GameData::DungeonState> : GameData::DungeonState {
	Data::Enum<Dungeon000> Dungeon000;
	Data::Enum<Dungeon001> Dungeon001;
	Data::Enum<Dungeon002> Dungeon002;
	Data::Enum<Dungeon003> Dungeon003;
	Data::Enum<Dungeon004> Dungeon004;
	Data::Enum<Dungeon005> Dungeon005;
	Data::Enum<Dungeon006> Dungeon006;
	Data::Enum<Dungeon007> Dungeon007;
	Data::Enum<Dungeon008> Dungeon008;
	Data::Enum<Dungeon009> Dungeon009;
	Data::Enum<Dungeon010> Dungeon010;
	Data::Enum<Dungeon011> Dungeon011;
	Data::Enum<Dungeon012> Dungeon012;
	Data::Enum<Dungeon013> Dungeon013;
	Data::Enum<Dungeon014> Dungeon014;
	Data::Enum<Dungeon015> Dungeon015;
	Data::Enum<Dungeon016> Dungeon016;
	Data::Enum<Dungeon017> Dungeon017;
	Data::Enum<Dungeon018> Dungeon018;
	Data::Enum<Dungeon019> Dungeon019;
	Data::Enum<Dungeon020> Dungeon020;
	Data::Enum<Dungeon021> Dungeon021;
	Data::Enum<Dungeon022> Dungeon022;
	Data::Enum<Dungeon023> Dungeon023;
	Data::Enum<Dungeon024> Dungeon024;
	Data::Enum<Dungeon025> Dungeon025;
	Data::Enum<Dungeon026> Dungeon026;
	Data::Enum<Dungeon027> Dungeon027;
	Data::Enum<Dungeon028> Dungeon028;
	Data::Enum<Dungeon029> Dungeon029;
	Data::Enum<Dungeon030> Dungeon030;
	Data::Enum<Dungeon031> Dungeon031;
	Data::Enum<Dungeon032> Dungeon032;
	Data::Enum<Dungeon033> Dungeon033;
	Data::Enum<Dungeon034> Dungeon034;
	Data::Enum<Dungeon035> Dungeon035;
	Data::Enum<Dungeon036> Dungeon036;
	Data::Enum<Dungeon037> Dungeon037;
	Data::Enum<Dungeon038> Dungeon038;
	Data::Enum<Dungeon039> Dungeon039;
	Data::Enum<Dungeon040> Dungeon040;
	Data::Enum<Dungeon041> Dungeon041;
	Data::Enum<Dungeon042> Dungeon042;
	Data::Enum<Dungeon043> Dungeon043;
	Data::Enum<Dungeon044> Dungeon044;
	Data::Enum<Dungeon045> Dungeon045;
	Data::Enum<Dungeon046> Dungeon046;
	Data::Enum<Dungeon047> Dungeon047;
	Data::Enum<Dungeon048> Dungeon048;
	Data::Enum<Dungeon049> Dungeon049;
	Data::Enum<Dungeon050> Dungeon050;
	Data::Enum<Dungeon051> Dungeon051;
	Data::Enum<Dungeon052> Dungeon052;
	Data::Enum<Dungeon053> Dungeon053;
	Data::Enum<Dungeon054> Dungeon054;
	Data::Enum<Dungeon055> Dungeon055;
	Data::Enum<Dungeon056> Dungeon056;
	Data::Enum<Dungeon057> Dungeon057;
	Data::Enum<Dungeon058> Dungeon058;
	Data::Enum<Dungeon059> Dungeon059;
	Data::Enum<Dungeon060> Dungeon060;
	Data::Enum<Dungeon061> Dungeon061;
	Data::Enum<Dungeon062> Dungeon062;
	Data::Enum<Dungeon063> Dungeon063;
	Data::Enum<Dungeon064> Dungeon064;
	Data::Enum<Dungeon065> Dungeon065;
	Data::Enum<Dungeon066> Dungeon066;
	Data::Enum<Dungeon067> Dungeon067;
	Data::Enum<Dungeon068> Dungeon068;
	Data::Enum<Dungeon069> Dungeon069;
	Data::Enum<Dungeon070> Dungeon070;
	Data::Enum<Dungeon071> Dungeon071;
	Data::Enum<Dungeon072> Dungeon072;
	Data::Enum<Dungeon073> Dungeon073;
	Data::Enum<Dungeon074> Dungeon074;
	Data::Enum<Dungeon075> Dungeon075;
	Data::Enum<Dungeon076> Dungeon076;
	Data::Enum<Dungeon077> Dungeon077;
	Data::Enum<Dungeon078> Dungeon078;
	Data::Enum<Dungeon079> Dungeon079;
	Data::Enum<Dungeon080> Dungeon080;
	Data::Enum<Dungeon081> Dungeon081;
	Data::Enum<Dungeon082> Dungeon082;
	Data::Enum<Dungeon083> Dungeon083;
	Data::Enum<Dungeon084> Dungeon084;
	Data::Enum<Dungeon085> Dungeon085;
	Data::Enum<Dungeon086> Dungeon086;
	Data::Enum<Dungeon087> Dungeon087;
	Data::Enum<Dungeon088> Dungeon088;
	Data::Enum<Dungeon089> Dungeon089;
	Data::Enum<Dungeon090> Dungeon090;
	Data::Enum<Dungeon091> Dungeon091;
	Data::Enum<Dungeon092> Dungeon092;
	Data::Enum<Dungeon093> Dungeon093;
	Data::Enum<Dungeon094> Dungeon094;
	Data::Enum<Dungeon095> Dungeon095;
	Data::Enum<Dungeon096> Dungeon096;
	Data::Enum<Dungeon097> Dungeon097;
	Data::Enum<Dungeon098> Dungeon098;
	Data::Enum<Dungeon099> Dungeon099;
	Data::Enum<Dungeon100> Dungeon100;
	Data::Enum<Dungeon101> Dungeon101;
	Data::Enum<Dungeon102> Dungeon102;
	Data::Enum<Dungeon103> Dungeon103;
	Data::Enum<Dungeon104> Dungeon104;
	Data::Enum<Dungeon105> Dungeon105;
	Data::Enum<Dungeon106> Dungeon106;
	Data::Enum<Dungeon107> Dungeon107;
	Data::Enum<Dungeon108> Dungeon108;
	Data::Enum<Dungeon109> Dungeon109;
	Data::Enum<Dungeon110> Dungeon110;
	Data::Enum<Dungeon111> Dungeon111;
	Data::Enum<Dungeon112> Dungeon112;
	Data::Enum<Dungeon113> Dungeon113;
	Data::Enum<Dungeon114> Dungeon114;
	Data::Enum<Dungeon115> Dungeon115;
	Data::Enum<Dungeon116> Dungeon116;
	Data::Enum<Dungeon117> Dungeon117;
	Data::Enum<Dungeon118> Dungeon118;
	Data::Enum<Dungeon119> Dungeon119;
	Data::Enum<Dungeon120> Dungeon120;
	Data::Enum<Dungeon121> Dungeon121;
	Data::Enum<Dungeon122> Dungeon122;
	Data::Enum<Dungeon123> Dungeon123;
	Data::Enum<Dungeon124> Dungeon124;
	Data::Enum<Dungeon125> Dungeon125;
	Data::Enum<Dungeon126> Dungeon126;
	Data::Enum<Dungeon127> Dungeon127;
	Data::Enum<Dungeon128> Dungeon128;
	Data::Enum<Dungeon129> Dungeon129;
	Data::Enum<Dungeon130> Dungeon130;
	Data::Enum<Dungeon131> Dungeon131;
	Data::Enum<Dungeon132> Dungeon132;
	Data::Enum<Dungeon133> Dungeon133;
	Data::Enum<Dungeon134> Dungeon134;
	Data::Enum<Dungeon135> Dungeon135;
	Data::Enum<Dungeon136> Dungeon136;
	Data::Enum<Dungeon137> Dungeon137;
	Data::Enum<Dungeon138> Dungeon138;
	Data::Enum<Dungeon139> Dungeon139;
	Data::Enum<Dungeon140> Dungeon140;
	Data::Enum<Dungeon141> Dungeon141;
	Data::Enum<Dungeon142> Dungeon142;
	Data::Enum<Dungeon143> Dungeon143;
	Data::Enum<Dungeon144> Dungeon144;
	Data::Enum<Dungeon145> Dungeon145;
	Data::Enum<Dungeon146> Dungeon146;
	Data::Enum<Dungeon147> Dungeon147;
	Data::Enum<Dungeon148> Dungeon148;
	Data::Enum<Dungeon149> Dungeon149;
	Data::Enum<Dungeon150> Dungeon150;
	Data::Enum<Dungeon151> Dungeon151;
	
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