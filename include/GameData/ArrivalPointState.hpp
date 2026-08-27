#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::ArrivalPointState : Tag::Structure {
	struct CheckPoint000 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint000>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint001 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint001>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint002 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint002>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint003 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint003>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint004 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint004>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint005 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint005>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint006 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint006>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint007 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint007>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint008 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint008>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint009 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint009>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint010 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint010>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint011 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint011>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint012 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint012>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint013 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint013>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint014 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint014>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint016 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint016>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint017 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint017>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint018 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint018>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint019 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint019>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint020 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint020>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint021 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint021>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint022 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint022>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint023 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint023>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint024 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint024>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint025 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint025>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint026 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint026>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint027 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint027>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint028 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint028>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint029 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint029>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint030 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint030>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint031 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint031>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint032 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint032>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint033 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint033>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint035 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint035>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint036 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint036>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint037 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint037>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint039 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint039>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint040 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint040>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint041 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint041>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint042 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint042>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint044 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint044>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint046 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint046>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint047 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint047>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint048 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint048>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint049 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint049>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint051 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint051>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint053 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint053>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint054 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint054>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint056 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint056>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint057 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint057>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint058 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint058>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint059 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint059>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint064 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint064>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint065 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint065>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint067 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint067>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint068 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint068>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint070 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint070>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint072 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint072>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint073 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint073>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint074 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint074>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint075 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint075>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint076 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint076>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint077 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint077>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint078 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint078>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint079 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint079>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint080 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint080>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint081 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint081>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint084 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint084>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint085 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint085>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint086 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint086>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint087 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint087>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint088 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint088>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint089 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint089>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint090 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint090>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint091 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint091>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint092 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint092>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint094 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint094>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint095 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint095>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint096 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint096>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint097 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint097>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint098 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint098>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint100 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint100>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint101 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint101>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint102 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint102>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint103 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint103>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint104 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint104>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint106 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint106>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint107 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint107>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint108 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint108>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint111 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint111>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint112 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint112>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint113 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint113>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint114 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint114>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint115 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint115>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint116 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint116>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint118 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint118>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint119 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint119>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint120 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint120>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint122 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint122>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint123 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint123>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint124 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint124>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint125 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint125>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint126 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint126>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint129 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint129>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint130 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint130>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint131 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint131>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint132 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint132>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint133 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint133>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint134 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint134>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint135 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint135>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint136 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint136>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint137 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint137>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint138 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint138>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint139 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint139>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint140 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint140>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint141 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint141>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint142 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint142>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint143 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint143>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint144 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint144>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
	struct CheckPoint147 : Tag::Enum { using type = ::Enum::Scalar<CheckPoint147>; enum enum_type : hash_t { Close = murmurhash3::hash("Close"), Open = murmurhash3::hash("Open"), }; };
};/* Tag::Structure GameData::ArrivalPointState close */

template <> struct Data::Structure<GameData::ArrivalPointState> : GameData::ArrivalPointState {
	Data::Member<CheckPoint000> CheckPoint000;
	Data::Member<CheckPoint001> CheckPoint001;
	Data::Member<CheckPoint002> CheckPoint002;
	Data::Member<CheckPoint003> CheckPoint003;
	Data::Member<CheckPoint004> CheckPoint004;
	Data::Member<CheckPoint005> CheckPoint005;
	Data::Member<CheckPoint006> CheckPoint006;
	Data::Member<CheckPoint007> CheckPoint007;
	Data::Member<CheckPoint008> CheckPoint008;
	Data::Member<CheckPoint009> CheckPoint009;
	Data::Member<CheckPoint010> CheckPoint010;
	Data::Member<CheckPoint011> CheckPoint011;
	Data::Member<CheckPoint012> CheckPoint012;
	Data::Member<CheckPoint013> CheckPoint013;
	Data::Member<CheckPoint014> CheckPoint014;
	Data::Member<CheckPoint016> CheckPoint016;
	Data::Member<CheckPoint017> CheckPoint017;
	Data::Member<CheckPoint018> CheckPoint018;
	Data::Member<CheckPoint019> CheckPoint019;
	Data::Member<CheckPoint020> CheckPoint020;
	Data::Member<CheckPoint021> CheckPoint021;
	Data::Member<CheckPoint022> CheckPoint022;
	Data::Member<CheckPoint023> CheckPoint023;
	Data::Member<CheckPoint024> CheckPoint024;
	Data::Member<CheckPoint025> CheckPoint025;
	Data::Member<CheckPoint026> CheckPoint026;
	Data::Member<CheckPoint027> CheckPoint027;
	Data::Member<CheckPoint028> CheckPoint028;
	Data::Member<CheckPoint029> CheckPoint029;
	Data::Member<CheckPoint030> CheckPoint030;
	Data::Member<CheckPoint031> CheckPoint031;
	Data::Member<CheckPoint032> CheckPoint032;
	Data::Member<CheckPoint033> CheckPoint033;
	Data::Member<CheckPoint035> CheckPoint035;
	Data::Member<CheckPoint036> CheckPoint036;
	Data::Member<CheckPoint037> CheckPoint037;
	Data::Member<CheckPoint039> CheckPoint039;
	Data::Member<CheckPoint040> CheckPoint040;
	Data::Member<CheckPoint041> CheckPoint041;
	Data::Member<CheckPoint042> CheckPoint042;
	Data::Member<CheckPoint044> CheckPoint044;
	Data::Member<CheckPoint046> CheckPoint046;
	Data::Member<CheckPoint047> CheckPoint047;
	Data::Member<CheckPoint048> CheckPoint048;
	Data::Member<CheckPoint049> CheckPoint049;
	Data::Member<CheckPoint051> CheckPoint051;
	Data::Member<CheckPoint053> CheckPoint053;
	Data::Member<CheckPoint054> CheckPoint054;
	Data::Member<CheckPoint056> CheckPoint056;
	Data::Member<CheckPoint057> CheckPoint057;
	Data::Member<CheckPoint058> CheckPoint058;
	Data::Member<CheckPoint059> CheckPoint059;
	Data::Member<CheckPoint064> CheckPoint064;
	Data::Member<CheckPoint065> CheckPoint065;
	Data::Member<CheckPoint067> CheckPoint067;
	Data::Member<CheckPoint068> CheckPoint068;
	Data::Member<CheckPoint070> CheckPoint070;
	Data::Member<CheckPoint072> CheckPoint072;
	Data::Member<CheckPoint073> CheckPoint073;
	Data::Member<CheckPoint074> CheckPoint074;
	Data::Member<CheckPoint075> CheckPoint075;
	Data::Member<CheckPoint076> CheckPoint076;
	Data::Member<CheckPoint077> CheckPoint077;
	Data::Member<CheckPoint078> CheckPoint078;
	Data::Member<CheckPoint079> CheckPoint079;
	Data::Member<CheckPoint080> CheckPoint080;
	Data::Member<CheckPoint081> CheckPoint081;
	Data::Member<CheckPoint084> CheckPoint084;
	Data::Member<CheckPoint085> CheckPoint085;
	Data::Member<CheckPoint086> CheckPoint086;
	Data::Member<CheckPoint087> CheckPoint087;
	Data::Member<CheckPoint088> CheckPoint088;
	Data::Member<CheckPoint089> CheckPoint089;
	Data::Member<CheckPoint090> CheckPoint090;
	Data::Member<CheckPoint091> CheckPoint091;
	Data::Member<CheckPoint092> CheckPoint092;
	Data::Member<CheckPoint094> CheckPoint094;
	Data::Member<CheckPoint095> CheckPoint095;
	Data::Member<CheckPoint096> CheckPoint096;
	Data::Member<CheckPoint097> CheckPoint097;
	Data::Member<CheckPoint098> CheckPoint098;
	Data::Member<CheckPoint100> CheckPoint100;
	Data::Member<CheckPoint101> CheckPoint101;
	Data::Member<CheckPoint102> CheckPoint102;
	Data::Member<CheckPoint103> CheckPoint103;
	Data::Member<CheckPoint104> CheckPoint104;
	Data::Member<CheckPoint106> CheckPoint106;
	Data::Member<CheckPoint107> CheckPoint107;
	Data::Member<CheckPoint108> CheckPoint108;
	Data::Member<CheckPoint111> CheckPoint111;
	Data::Member<CheckPoint112> CheckPoint112;
	Data::Member<CheckPoint113> CheckPoint113;
	Data::Member<CheckPoint114> CheckPoint114;
	Data::Member<CheckPoint115> CheckPoint115;
	Data::Member<CheckPoint116> CheckPoint116;
	Data::Member<CheckPoint118> CheckPoint118;
	Data::Member<CheckPoint119> CheckPoint119;
	Data::Member<CheckPoint120> CheckPoint120;
	Data::Member<CheckPoint122> CheckPoint122;
	Data::Member<CheckPoint123> CheckPoint123;
	Data::Member<CheckPoint124> CheckPoint124;
	Data::Member<CheckPoint125> CheckPoint125;
	Data::Member<CheckPoint126> CheckPoint126;
	Data::Member<CheckPoint129> CheckPoint129;
	Data::Member<CheckPoint130> CheckPoint130;
	Data::Member<CheckPoint131> CheckPoint131;
	Data::Member<CheckPoint132> CheckPoint132;
	Data::Member<CheckPoint133> CheckPoint133;
	Data::Member<CheckPoint134> CheckPoint134;
	Data::Member<CheckPoint135> CheckPoint135;
	Data::Member<CheckPoint136> CheckPoint136;
	Data::Member<CheckPoint137> CheckPoint137;
	Data::Member<CheckPoint138> CheckPoint138;
	Data::Member<CheckPoint139> CheckPoint139;
	Data::Member<CheckPoint140> CheckPoint140;
	Data::Member<CheckPoint141> CheckPoint141;
	Data::Member<CheckPoint142> CheckPoint142;
	Data::Member<CheckPoint143> CheckPoint143;
	Data::Member<CheckPoint144> CheckPoint144;
	Data::Member<CheckPoint147> CheckPoint147;
	
	explicit Structure(Sav& s) : 
		CheckPoint000 { s.get<struct CheckPoint000>() },
		CheckPoint001 { s.get<struct CheckPoint001>() },
		CheckPoint002 { s.get<struct CheckPoint002>() },
		CheckPoint003 { s.get<struct CheckPoint003>() },
		CheckPoint004 { s.get<struct CheckPoint004>() },
		CheckPoint005 { s.get<struct CheckPoint005>() },
		CheckPoint006 { s.get<struct CheckPoint006>() },
		CheckPoint007 { s.get<struct CheckPoint007>() },
		CheckPoint008 { s.get<struct CheckPoint008>() },
		CheckPoint009 { s.get<struct CheckPoint009>() },
		CheckPoint010 { s.get<struct CheckPoint010>() },
		CheckPoint011 { s.get<struct CheckPoint011>() },
		CheckPoint012 { s.get<struct CheckPoint012>() },
		CheckPoint013 { s.get<struct CheckPoint013>() },
		CheckPoint014 { s.get<struct CheckPoint014>() },
		CheckPoint016 { s.get<struct CheckPoint016>() },
		CheckPoint017 { s.get<struct CheckPoint017>() },
		CheckPoint018 { s.get<struct CheckPoint018>() },
		CheckPoint019 { s.get<struct CheckPoint019>() },
		CheckPoint020 { s.get<struct CheckPoint020>() },
		CheckPoint021 { s.get<struct CheckPoint021>() },
		CheckPoint022 { s.get<struct CheckPoint022>() },
		CheckPoint023 { s.get<struct CheckPoint023>() },
		CheckPoint024 { s.get<struct CheckPoint024>() },
		CheckPoint025 { s.get<struct CheckPoint025>() },
		CheckPoint026 { s.get<struct CheckPoint026>() },
		CheckPoint027 { s.get<struct CheckPoint027>() },
		CheckPoint028 { s.get<struct CheckPoint028>() },
		CheckPoint029 { s.get<struct CheckPoint029>() },
		CheckPoint030 { s.get<struct CheckPoint030>() },
		CheckPoint031 { s.get<struct CheckPoint031>() },
		CheckPoint032 { s.get<struct CheckPoint032>() },
		CheckPoint033 { s.get<struct CheckPoint033>() },
		CheckPoint035 { s.get<struct CheckPoint035>() },
		CheckPoint036 { s.get<struct CheckPoint036>() },
		CheckPoint037 { s.get<struct CheckPoint037>() },
		CheckPoint039 { s.get<struct CheckPoint039>() },
		CheckPoint040 { s.get<struct CheckPoint040>() },
		CheckPoint041 { s.get<struct CheckPoint041>() },
		CheckPoint042 { s.get<struct CheckPoint042>() },
		CheckPoint044 { s.get<struct CheckPoint044>() },
		CheckPoint046 { s.get<struct CheckPoint046>() },
		CheckPoint047 { s.get<struct CheckPoint047>() },
		CheckPoint048 { s.get<struct CheckPoint048>() },
		CheckPoint049 { s.get<struct CheckPoint049>() },
		CheckPoint051 { s.get<struct CheckPoint051>() },
		CheckPoint053 { s.get<struct CheckPoint053>() },
		CheckPoint054 { s.get<struct CheckPoint054>() },
		CheckPoint056 { s.get<struct CheckPoint056>() },
		CheckPoint057 { s.get<struct CheckPoint057>() },
		CheckPoint058 { s.get<struct CheckPoint058>() },
		CheckPoint059 { s.get<struct CheckPoint059>() },
		CheckPoint064 { s.get<struct CheckPoint064>() },
		CheckPoint065 { s.get<struct CheckPoint065>() },
		CheckPoint067 { s.get<struct CheckPoint067>() },
		CheckPoint068 { s.get<struct CheckPoint068>() },
		CheckPoint070 { s.get<struct CheckPoint070>() },
		CheckPoint072 { s.get<struct CheckPoint072>() },
		CheckPoint073 { s.get<struct CheckPoint073>() },
		CheckPoint074 { s.get<struct CheckPoint074>() },
		CheckPoint075 { s.get<struct CheckPoint075>() },
		CheckPoint076 { s.get<struct CheckPoint076>() },
		CheckPoint077 { s.get<struct CheckPoint077>() },
		CheckPoint078 { s.get<struct CheckPoint078>() },
		CheckPoint079 { s.get<struct CheckPoint079>() },
		CheckPoint080 { s.get<struct CheckPoint080>() },
		CheckPoint081 { s.get<struct CheckPoint081>() },
		CheckPoint084 { s.get<struct CheckPoint084>() },
		CheckPoint085 { s.get<struct CheckPoint085>() },
		CheckPoint086 { s.get<struct CheckPoint086>() },
		CheckPoint087 { s.get<struct CheckPoint087>() },
		CheckPoint088 { s.get<struct CheckPoint088>() },
		CheckPoint089 { s.get<struct CheckPoint089>() },
		CheckPoint090 { s.get<struct CheckPoint090>() },
		CheckPoint091 { s.get<struct CheckPoint091>() },
		CheckPoint092 { s.get<struct CheckPoint092>() },
		CheckPoint094 { s.get<struct CheckPoint094>() },
		CheckPoint095 { s.get<struct CheckPoint095>() },
		CheckPoint096 { s.get<struct CheckPoint096>() },
		CheckPoint097 { s.get<struct CheckPoint097>() },
		CheckPoint098 { s.get<struct CheckPoint098>() },
		CheckPoint100 { s.get<struct CheckPoint100>() },
		CheckPoint101 { s.get<struct CheckPoint101>() },
		CheckPoint102 { s.get<struct CheckPoint102>() },
		CheckPoint103 { s.get<struct CheckPoint103>() },
		CheckPoint104 { s.get<struct CheckPoint104>() },
		CheckPoint106 { s.get<struct CheckPoint106>() },
		CheckPoint107 { s.get<struct CheckPoint107>() },
		CheckPoint108 { s.get<struct CheckPoint108>() },
		CheckPoint111 { s.get<struct CheckPoint111>() },
		CheckPoint112 { s.get<struct CheckPoint112>() },
		CheckPoint113 { s.get<struct CheckPoint113>() },
		CheckPoint114 { s.get<struct CheckPoint114>() },
		CheckPoint115 { s.get<struct CheckPoint115>() },
		CheckPoint116 { s.get<struct CheckPoint116>() },
		CheckPoint118 { s.get<struct CheckPoint118>() },
		CheckPoint119 { s.get<struct CheckPoint119>() },
		CheckPoint120 { s.get<struct CheckPoint120>() },
		CheckPoint122 { s.get<struct CheckPoint122>() },
		CheckPoint123 { s.get<struct CheckPoint123>() },
		CheckPoint124 { s.get<struct CheckPoint124>() },
		CheckPoint125 { s.get<struct CheckPoint125>() },
		CheckPoint126 { s.get<struct CheckPoint126>() },
		CheckPoint129 { s.get<struct CheckPoint129>() },
		CheckPoint130 { s.get<struct CheckPoint130>() },
		CheckPoint131 { s.get<struct CheckPoint131>() },
		CheckPoint132 { s.get<struct CheckPoint132>() },
		CheckPoint133 { s.get<struct CheckPoint133>() },
		CheckPoint134 { s.get<struct CheckPoint134>() },
		CheckPoint135 { s.get<struct CheckPoint135>() },
		CheckPoint136 { s.get<struct CheckPoint136>() },
		CheckPoint137 { s.get<struct CheckPoint137>() },
		CheckPoint138 { s.get<struct CheckPoint138>() },
		CheckPoint139 { s.get<struct CheckPoint139>() },
		CheckPoint140 { s.get<struct CheckPoint140>() },
		CheckPoint141 { s.get<struct CheckPoint141>() },
		CheckPoint142 { s.get<struct CheckPoint142>() },
		CheckPoint143 { s.get<struct CheckPoint143>() },
		CheckPoint144 { s.get<struct CheckPoint144>() },
		CheckPoint147 { s.get<struct CheckPoint147>() }
	{ }
};/* Data::Structure GameData::ArrivalPointState close */

template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint000> = murmurhash3::hash("ArrivalPointState.CheckPoint000");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint001> = murmurhash3::hash("ArrivalPointState.CheckPoint001");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint002> = murmurhash3::hash("ArrivalPointState.CheckPoint002");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint003> = murmurhash3::hash("ArrivalPointState.CheckPoint003");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint004> = murmurhash3::hash("ArrivalPointState.CheckPoint004");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint005> = murmurhash3::hash("ArrivalPointState.CheckPoint005");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint006> = murmurhash3::hash("ArrivalPointState.CheckPoint006");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint007> = murmurhash3::hash("ArrivalPointState.CheckPoint007");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint008> = murmurhash3::hash("ArrivalPointState.CheckPoint008");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint009> = murmurhash3::hash("ArrivalPointState.CheckPoint009");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint010> = murmurhash3::hash("ArrivalPointState.CheckPoint010");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint011> = murmurhash3::hash("ArrivalPointState.CheckPoint011");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint012> = murmurhash3::hash("ArrivalPointState.CheckPoint012");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint013> = murmurhash3::hash("ArrivalPointState.CheckPoint013");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint014> = murmurhash3::hash("ArrivalPointState.CheckPoint014");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint016> = murmurhash3::hash("ArrivalPointState.CheckPoint016");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint017> = murmurhash3::hash("ArrivalPointState.CheckPoint017");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint018> = murmurhash3::hash("ArrivalPointState.CheckPoint018");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint019> = murmurhash3::hash("ArrivalPointState.CheckPoint019");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint020> = murmurhash3::hash("ArrivalPointState.CheckPoint020");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint021> = murmurhash3::hash("ArrivalPointState.CheckPoint021");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint022> = murmurhash3::hash("ArrivalPointState.CheckPoint022");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint023> = murmurhash3::hash("ArrivalPointState.CheckPoint023");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint024> = murmurhash3::hash("ArrivalPointState.CheckPoint024");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint025> = murmurhash3::hash("ArrivalPointState.CheckPoint025");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint026> = murmurhash3::hash("ArrivalPointState.CheckPoint026");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint027> = murmurhash3::hash("ArrivalPointState.CheckPoint027");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint028> = murmurhash3::hash("ArrivalPointState.CheckPoint028");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint029> = murmurhash3::hash("ArrivalPointState.CheckPoint029");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint030> = murmurhash3::hash("ArrivalPointState.CheckPoint030");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint031> = murmurhash3::hash("ArrivalPointState.CheckPoint031");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint032> = murmurhash3::hash("ArrivalPointState.CheckPoint032");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint033> = murmurhash3::hash("ArrivalPointState.CheckPoint033");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint035> = murmurhash3::hash("ArrivalPointState.CheckPoint035");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint036> = murmurhash3::hash("ArrivalPointState.CheckPoint036");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint037> = murmurhash3::hash("ArrivalPointState.CheckPoint037");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint039> = murmurhash3::hash("ArrivalPointState.CheckPoint039");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint040> = murmurhash3::hash("ArrivalPointState.CheckPoint040");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint041> = murmurhash3::hash("ArrivalPointState.CheckPoint041");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint042> = murmurhash3::hash("ArrivalPointState.CheckPoint042");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint044> = murmurhash3::hash("ArrivalPointState.CheckPoint044");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint046> = murmurhash3::hash("ArrivalPointState.CheckPoint046");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint047> = murmurhash3::hash("ArrivalPointState.CheckPoint047");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint048> = murmurhash3::hash("ArrivalPointState.CheckPoint048");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint049> = murmurhash3::hash("ArrivalPointState.CheckPoint049");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint051> = murmurhash3::hash("ArrivalPointState.CheckPoint051");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint053> = murmurhash3::hash("ArrivalPointState.CheckPoint053");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint054> = murmurhash3::hash("ArrivalPointState.CheckPoint054");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint056> = murmurhash3::hash("ArrivalPointState.CheckPoint056");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint057> = murmurhash3::hash("ArrivalPointState.CheckPoint057");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint058> = murmurhash3::hash("ArrivalPointState.CheckPoint058");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint059> = murmurhash3::hash("ArrivalPointState.CheckPoint059");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint064> = murmurhash3::hash("ArrivalPointState.CheckPoint064");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint065> = murmurhash3::hash("ArrivalPointState.CheckPoint065");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint067> = murmurhash3::hash("ArrivalPointState.CheckPoint067");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint068> = murmurhash3::hash("ArrivalPointState.CheckPoint068");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint070> = murmurhash3::hash("ArrivalPointState.CheckPoint070");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint072> = murmurhash3::hash("ArrivalPointState.CheckPoint072");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint073> = murmurhash3::hash("ArrivalPointState.CheckPoint073");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint074> = murmurhash3::hash("ArrivalPointState.CheckPoint074");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint075> = murmurhash3::hash("ArrivalPointState.CheckPoint075");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint076> = murmurhash3::hash("ArrivalPointState.CheckPoint076");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint077> = murmurhash3::hash("ArrivalPointState.CheckPoint077");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint078> = murmurhash3::hash("ArrivalPointState.CheckPoint078");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint079> = murmurhash3::hash("ArrivalPointState.CheckPoint079");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint080> = murmurhash3::hash("ArrivalPointState.CheckPoint080");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint081> = murmurhash3::hash("ArrivalPointState.CheckPoint081");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint084> = murmurhash3::hash("ArrivalPointState.CheckPoint084");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint085> = murmurhash3::hash("ArrivalPointState.CheckPoint085");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint086> = murmurhash3::hash("ArrivalPointState.CheckPoint086");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint087> = murmurhash3::hash("ArrivalPointState.CheckPoint087");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint088> = murmurhash3::hash("ArrivalPointState.CheckPoint088");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint089> = murmurhash3::hash("ArrivalPointState.CheckPoint089");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint090> = murmurhash3::hash("ArrivalPointState.CheckPoint090");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint091> = murmurhash3::hash("ArrivalPointState.CheckPoint091");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint092> = murmurhash3::hash("ArrivalPointState.CheckPoint092");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint094> = murmurhash3::hash("ArrivalPointState.CheckPoint094");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint095> = murmurhash3::hash("ArrivalPointState.CheckPoint095");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint096> = murmurhash3::hash("ArrivalPointState.CheckPoint096");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint097> = murmurhash3::hash("ArrivalPointState.CheckPoint097");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint098> = murmurhash3::hash("ArrivalPointState.CheckPoint098");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint100> = murmurhash3::hash("ArrivalPointState.CheckPoint100");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint101> = murmurhash3::hash("ArrivalPointState.CheckPoint101");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint102> = murmurhash3::hash("ArrivalPointState.CheckPoint102");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint103> = murmurhash3::hash("ArrivalPointState.CheckPoint103");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint104> = murmurhash3::hash("ArrivalPointState.CheckPoint104");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint106> = murmurhash3::hash("ArrivalPointState.CheckPoint106");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint107> = murmurhash3::hash("ArrivalPointState.CheckPoint107");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint108> = murmurhash3::hash("ArrivalPointState.CheckPoint108");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint111> = murmurhash3::hash("ArrivalPointState.CheckPoint111");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint112> = murmurhash3::hash("ArrivalPointState.CheckPoint112");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint113> = murmurhash3::hash("ArrivalPointState.CheckPoint113");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint114> = murmurhash3::hash("ArrivalPointState.CheckPoint114");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint115> = murmurhash3::hash("ArrivalPointState.CheckPoint115");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint116> = murmurhash3::hash("ArrivalPointState.CheckPoint116");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint118> = murmurhash3::hash("ArrivalPointState.CheckPoint118");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint119> = murmurhash3::hash("ArrivalPointState.CheckPoint119");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint120> = murmurhash3::hash("ArrivalPointState.CheckPoint120");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint122> = murmurhash3::hash("ArrivalPointState.CheckPoint122");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint123> = murmurhash3::hash("ArrivalPointState.CheckPoint123");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint124> = murmurhash3::hash("ArrivalPointState.CheckPoint124");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint125> = murmurhash3::hash("ArrivalPointState.CheckPoint125");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint126> = murmurhash3::hash("ArrivalPointState.CheckPoint126");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint129> = murmurhash3::hash("ArrivalPointState.CheckPoint129");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint130> = murmurhash3::hash("ArrivalPointState.CheckPoint130");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint131> = murmurhash3::hash("ArrivalPointState.CheckPoint131");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint132> = murmurhash3::hash("ArrivalPointState.CheckPoint132");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint133> = murmurhash3::hash("ArrivalPointState.CheckPoint133");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint134> = murmurhash3::hash("ArrivalPointState.CheckPoint134");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint135> = murmurhash3::hash("ArrivalPointState.CheckPoint135");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint136> = murmurhash3::hash("ArrivalPointState.CheckPoint136");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint137> = murmurhash3::hash("ArrivalPointState.CheckPoint137");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint138> = murmurhash3::hash("ArrivalPointState.CheckPoint138");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint139> = murmurhash3::hash("ArrivalPointState.CheckPoint139");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint140> = murmurhash3::hash("ArrivalPointState.CheckPoint140");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint141> = murmurhash3::hash("ArrivalPointState.CheckPoint141");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint142> = murmurhash3::hash("ArrivalPointState.CheckPoint142");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint143> = murmurhash3::hash("ArrivalPointState.CheckPoint143");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint144> = murmurhash3::hash("ArrivalPointState.CheckPoint144");
template <> hash_t constexpr Data::Hashtable<GameData::ArrivalPointState::CheckPoint147> = murmurhash3::hash("ArrivalPointState.CheckPoint147");