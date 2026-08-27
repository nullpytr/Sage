#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::KorokCarryProgress : Tag::Structure {
	struct _10035618609325695840 : Tag::Enum { using type = ::Enum::Scalar<_10035618609325695840>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _10147912760170894537 : Tag::Enum { using type = ::Enum::Scalar<_10147912760170894537>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _1027829103425503827 : Tag::Enum { using type = ::Enum::Scalar<_1027829103425503827>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _10530533416107128098 : Tag::Enum { using type = ::Enum::Scalar<_10530533416107128098>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _10648733530437086844 : Tag::Enum { using type = ::Enum::Scalar<_10648733530437086844>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _10765936993113452918 : Tag::Enum { using type = ::Enum::Scalar<_10765936993113452918>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _10884485578138139295 : Tag::Enum { using type = ::Enum::Scalar<_10884485578138139295>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _11058875431153592516 : Tag::Enum { using type = ::Enum::Scalar<_11058875431153592516>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _11202514477440889488 : Tag::Enum { using type = ::Enum::Scalar<_11202514477440889488>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _11271636085079936375 : Tag::Enum { using type = ::Enum::Scalar<_11271636085079936375>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _11811958806114551925 : Tag::Enum { using type = ::Enum::Scalar<_11811958806114551925>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _11875758624767344318 : Tag::Enum { using type = ::Enum::Scalar<_11875758624767344318>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _11896787561078353905 : Tag::Enum { using type = ::Enum::Scalar<_11896787561078353905>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _11937967932341810839 : Tag::Enum { using type = ::Enum::Scalar<_11937967932341810839>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _1197214492947962803 : Tag::Enum { using type = ::Enum::Scalar<_1197214492947962803>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _12130885694327852729 : Tag::Enum { using type = ::Enum::Scalar<_12130885694327852729>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _12847198751504072774 : Tag::Enum { using type = ::Enum::Scalar<_12847198751504072774>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _12867974234227336785 : Tag::Enum { using type = ::Enum::Scalar<_12867974234227336785>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _12925413538446962496 : Tag::Enum { using type = ::Enum::Scalar<_12925413538446962496>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _13096531038553645768 : Tag::Enum { using type = ::Enum::Scalar<_13096531038553645768>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _13222893714975519401 : Tag::Enum { using type = ::Enum::Scalar<_13222893714975519401>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _13247469126542819452 : Tag::Enum { using type = ::Enum::Scalar<_13247469126542819452>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _13276398725536494111 : Tag::Enum { using type = ::Enum::Scalar<_13276398725536494111>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _13397407553973487668 : Tag::Enum { using type = ::Enum::Scalar<_13397407553973487668>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _13406578000478771737 : Tag::Enum { using type = ::Enum::Scalar<_13406578000478771737>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _13574721167545880769 : Tag::Enum { using type = ::Enum::Scalar<_13574721167545880769>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _13715318254682426167 : Tag::Enum { using type = ::Enum::Scalar<_13715318254682426167>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _14086010442264569915 : Tag::Enum { using type = ::Enum::Scalar<_14086010442264569915>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _14386365983047131468 : Tag::Enum { using type = ::Enum::Scalar<_14386365983047131468>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _14474122671074317609 : Tag::Enum { using type = ::Enum::Scalar<_14474122671074317609>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _14620345371264461858 : Tag::Enum { using type = ::Enum::Scalar<_14620345371264461858>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _14675420841305621627 : Tag::Enum { using type = ::Enum::Scalar<_14675420841305621627>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _1467646013161089597 : Tag::Enum { using type = ::Enum::Scalar<_1467646013161089597>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _14743492415969903566 : Tag::Enum { using type = ::Enum::Scalar<_14743492415969903566>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _14755292463343432412 : Tag::Enum { using type = ::Enum::Scalar<_14755292463343432412>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _14835004004034249742 : Tag::Enum { using type = ::Enum::Scalar<_14835004004034249742>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _14913775068882522158 : Tag::Enum { using type = ::Enum::Scalar<_14913775068882522158>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _15014578422836026966 : Tag::Enum { using type = ::Enum::Scalar<_15014578422836026966>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _15217693042586832359 : Tag::Enum { using type = ::Enum::Scalar<_15217693042586832359>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _15261531300099259671 : Tag::Enum { using type = ::Enum::Scalar<_15261531300099259671>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _15270416955868479146 : Tag::Enum { using type = ::Enum::Scalar<_15270416955868479146>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _1559566833430240376 : Tag::Enum { using type = ::Enum::Scalar<_1559566833430240376>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _15764967962530007701 : Tag::Enum { using type = ::Enum::Scalar<_15764967962530007701>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _15812195146511308260 : Tag::Enum { using type = ::Enum::Scalar<_15812195146511308260>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _15896625821746789069 : Tag::Enum { using type = ::Enum::Scalar<_15896625821746789069>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _15951088143512413279 : Tag::Enum { using type = ::Enum::Scalar<_15951088143512413279>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _16672092331503822504 : Tag::Enum { using type = ::Enum::Scalar<_16672092331503822504>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _1701261354463979089 : Tag::Enum { using type = ::Enum::Scalar<_1701261354463979089>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _17015045044967365539 : Tag::Enum { using type = ::Enum::Scalar<_17015045044967365539>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _17210919258426000638 : Tag::Enum { using type = ::Enum::Scalar<_17210919258426000638>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _17594093809162698318 : Tag::Enum { using type = ::Enum::Scalar<_17594093809162698318>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _17670912282596839597 : Tag::Enum { using type = ::Enum::Scalar<_17670912282596839597>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _17802606411144917162 : Tag::Enum { using type = ::Enum::Scalar<_17802606411144917162>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _18153127729825633248 : Tag::Enum { using type = ::Enum::Scalar<_18153127729825633248>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _18235969829881518418 : Tag::Enum { using type = ::Enum::Scalar<_18235969829881518418>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _1845078604478085116 : Tag::Enum { using type = ::Enum::Scalar<_1845078604478085116>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _1977590426358230894 : Tag::Enum { using type = ::Enum::Scalar<_1977590426358230894>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _2065394700677686397 : Tag::Enum { using type = ::Enum::Scalar<_2065394700677686397>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _2425953548859621426 : Tag::Enum { using type = ::Enum::Scalar<_2425953548859621426>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _2753782435549223662 : Tag::Enum { using type = ::Enum::Scalar<_2753782435549223662>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _3033022659337824191 : Tag::Enum { using type = ::Enum::Scalar<_3033022659337824191>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _3039055495308853332 : Tag::Enum { using type = ::Enum::Scalar<_3039055495308853332>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _3140500857535214931 : Tag::Enum { using type = ::Enum::Scalar<_3140500857535214931>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _3643785449856294086 : Tag::Enum { using type = ::Enum::Scalar<_3643785449856294086>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _4192588996974612514 : Tag::Enum { using type = ::Enum::Scalar<_4192588996974612514>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _4278308988828624825 : Tag::Enum { using type = ::Enum::Scalar<_4278308988828624825>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _4386102791994685188 : Tag::Enum { using type = ::Enum::Scalar<_4386102791994685188>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _4494468278546116134 : Tag::Enum { using type = ::Enum::Scalar<_4494468278546116134>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _5036066410770918472 : Tag::Enum { using type = ::Enum::Scalar<_5036066410770918472>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _5145081417529458167 : Tag::Enum { using type = ::Enum::Scalar<_5145081417529458167>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _5230411027965047570 : Tag::Enum { using type = ::Enum::Scalar<_5230411027965047570>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _5298571532246140711 : Tag::Enum { using type = ::Enum::Scalar<_5298571532246140711>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _55136037473008208 : Tag::Enum { using type = ::Enum::Scalar<_55136037473008208>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _5634362082519974124 : Tag::Enum { using type = ::Enum::Scalar<_5634362082519974124>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _5869665143813001026 : Tag::Enum { using type = ::Enum::Scalar<_5869665143813001026>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _5937135356624406219 : Tag::Enum { using type = ::Enum::Scalar<_5937135356624406219>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _661645095586149546 : Tag::Enum { using type = ::Enum::Scalar<_661645095586149546>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _6773575892270236835 : Tag::Enum { using type = ::Enum::Scalar<_6773575892270236835>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _702982911163221302 : Tag::Enum { using type = ::Enum::Scalar<_702982911163221302>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _711316197736138568 : Tag::Enum { using type = ::Enum::Scalar<_711316197736138568>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _7200846769452032765 : Tag::Enum { using type = ::Enum::Scalar<_7200846769452032765>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _7205909546088832266 : Tag::Enum { using type = ::Enum::Scalar<_7205909546088832266>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _7252382242329520081 : Tag::Enum { using type = ::Enum::Scalar<_7252382242329520081>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _7705700044124304347 : Tag::Enum { using type = ::Enum::Scalar<_7705700044124304347>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _7786864151230414866 : Tag::Enum { using type = ::Enum::Scalar<_7786864151230414866>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _8004497664373186229 : Tag::Enum { using type = ::Enum::Scalar<_8004497664373186229>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _8497568152468259638 : Tag::Enum { using type = ::Enum::Scalar<_8497568152468259638>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _857511348685999225 : Tag::Enum { using type = ::Enum::Scalar<_857511348685999225>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _879993071457401920 : Tag::Enum { using type = ::Enum::Scalar<_879993071457401920>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _882636985276030155 : Tag::Enum { using type = ::Enum::Scalar<_882636985276030155>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _8971903895020413263 : Tag::Enum { using type = ::Enum::Scalar<_8971903895020413263>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _8993451623919032985 : Tag::Enum { using type = ::Enum::Scalar<_8993451623919032985>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _9073478381193169871 : Tag::Enum { using type = ::Enum::Scalar<_9073478381193169871>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _9329678298925105483 : Tag::Enum { using type = ::Enum::Scalar<_9329678298925105483>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _9380338098995773009 : Tag::Enum { using type = ::Enum::Scalar<_9380338098995773009>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _9539946314806298996 : Tag::Enum { using type = ::Enum::Scalar<_9539946314806298996>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _9545094517092549436 : Tag::Enum { using type = ::Enum::Scalar<_9545094517092549436>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _9705479798924140351 : Tag::Enum { using type = ::Enum::Scalar<_9705479798924140351>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _9707096629495885452 : Tag::Enum { using type = ::Enum::Scalar<_9707096629495885452>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _9734881248452388660 : Tag::Enum { using type = ::Enum::Scalar<_9734881248452388660>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
};/* Tag::Structure GameData::KorokCarryProgress close */

template <> struct Data::Structure<GameData::KorokCarryProgress> : GameData::KorokCarryProgress {
	Data::Member<_10035618609325695840> _10035618609325695840;
	Data::Member<_10147912760170894537> _10147912760170894537;
	Data::Member<_1027829103425503827> _1027829103425503827;
	Data::Member<_10530533416107128098> _10530533416107128098;
	Data::Member<_10648733530437086844> _10648733530437086844;
	Data::Member<_10765936993113452918> _10765936993113452918;
	Data::Member<_10884485578138139295> _10884485578138139295;
	Data::Member<_11058875431153592516> _11058875431153592516;
	Data::Member<_11202514477440889488> _11202514477440889488;
	Data::Member<_11271636085079936375> _11271636085079936375;
	Data::Member<_11811958806114551925> _11811958806114551925;
	Data::Member<_11875758624767344318> _11875758624767344318;
	Data::Member<_11896787561078353905> _11896787561078353905;
	Data::Member<_11937967932341810839> _11937967932341810839;
	Data::Member<_1197214492947962803> _1197214492947962803;
	Data::Member<_12130885694327852729> _12130885694327852729;
	Data::Member<_12847198751504072774> _12847198751504072774;
	Data::Member<_12867974234227336785> _12867974234227336785;
	Data::Member<_12925413538446962496> _12925413538446962496;
	Data::Member<_13096531038553645768> _13096531038553645768;
	Data::Member<_13222893714975519401> _13222893714975519401;
	Data::Member<_13247469126542819452> _13247469126542819452;
	Data::Member<_13276398725536494111> _13276398725536494111;
	Data::Member<_13397407553973487668> _13397407553973487668;
	Data::Member<_13406578000478771737> _13406578000478771737;
	Data::Member<_13574721167545880769> _13574721167545880769;
	Data::Member<_13715318254682426167> _13715318254682426167;
	Data::Member<_14086010442264569915> _14086010442264569915;
	Data::Member<_14386365983047131468> _14386365983047131468;
	Data::Member<_14474122671074317609> _14474122671074317609;
	Data::Member<_14620345371264461858> _14620345371264461858;
	Data::Member<_14675420841305621627> _14675420841305621627;
	Data::Member<_1467646013161089597> _1467646013161089597;
	Data::Member<_14743492415969903566> _14743492415969903566;
	Data::Member<_14755292463343432412> _14755292463343432412;
	Data::Member<_14835004004034249742> _14835004004034249742;
	Data::Member<_14913775068882522158> _14913775068882522158;
	Data::Member<_15014578422836026966> _15014578422836026966;
	Data::Member<_15217693042586832359> _15217693042586832359;
	Data::Member<_15261531300099259671> _15261531300099259671;
	Data::Member<_15270416955868479146> _15270416955868479146;
	Data::Member<_1559566833430240376> _1559566833430240376;
	Data::Member<_15764967962530007701> _15764967962530007701;
	Data::Member<_15812195146511308260> _15812195146511308260;
	Data::Member<_15896625821746789069> _15896625821746789069;
	Data::Member<_15951088143512413279> _15951088143512413279;
	Data::Member<_16672092331503822504> _16672092331503822504;
	Data::Member<_1701261354463979089> _1701261354463979089;
	Data::Member<_17015045044967365539> _17015045044967365539;
	Data::Member<_17210919258426000638> _17210919258426000638;
	Data::Member<_17594093809162698318> _17594093809162698318;
	Data::Member<_17670912282596839597> _17670912282596839597;
	Data::Member<_17802606411144917162> _17802606411144917162;
	Data::Member<_18153127729825633248> _18153127729825633248;
	Data::Member<_18235969829881518418> _18235969829881518418;
	Data::Member<_1845078604478085116> _1845078604478085116;
	Data::Member<_1977590426358230894> _1977590426358230894;
	Data::Member<_2065394700677686397> _2065394700677686397;
	Data::Member<_2425953548859621426> _2425953548859621426;
	Data::Member<_2753782435549223662> _2753782435549223662;
	Data::Member<_3033022659337824191> _3033022659337824191;
	Data::Member<_3039055495308853332> _3039055495308853332;
	Data::Member<_3140500857535214931> _3140500857535214931;
	Data::Member<_3643785449856294086> _3643785449856294086;
	Data::Member<_4192588996974612514> _4192588996974612514;
	Data::Member<_4278308988828624825> _4278308988828624825;
	Data::Member<_4386102791994685188> _4386102791994685188;
	Data::Member<_4494468278546116134> _4494468278546116134;
	Data::Member<_5036066410770918472> _5036066410770918472;
	Data::Member<_5145081417529458167> _5145081417529458167;
	Data::Member<_5230411027965047570> _5230411027965047570;
	Data::Member<_5298571532246140711> _5298571532246140711;
	Data::Member<_55136037473008208> _55136037473008208;
	Data::Member<_5634362082519974124> _5634362082519974124;
	Data::Member<_5869665143813001026> _5869665143813001026;
	Data::Member<_5937135356624406219> _5937135356624406219;
	Data::Member<_661645095586149546> _661645095586149546;
	Data::Member<_6773575892270236835> _6773575892270236835;
	Data::Member<_702982911163221302> _702982911163221302;
	Data::Member<_711316197736138568> _711316197736138568;
	Data::Member<_7200846769452032765> _7200846769452032765;
	Data::Member<_7205909546088832266> _7205909546088832266;
	Data::Member<_7252382242329520081> _7252382242329520081;
	Data::Member<_7705700044124304347> _7705700044124304347;
	Data::Member<_7786864151230414866> _7786864151230414866;
	Data::Member<_8004497664373186229> _8004497664373186229;
	Data::Member<_8497568152468259638> _8497568152468259638;
	Data::Member<_857511348685999225> _857511348685999225;
	Data::Member<_879993071457401920> _879993071457401920;
	Data::Member<_882636985276030155> _882636985276030155;
	Data::Member<_8971903895020413263> _8971903895020413263;
	Data::Member<_8993451623919032985> _8993451623919032985;
	Data::Member<_9073478381193169871> _9073478381193169871;
	Data::Member<_9329678298925105483> _9329678298925105483;
	Data::Member<_9380338098995773009> _9380338098995773009;
	Data::Member<_9539946314806298996> _9539946314806298996;
	Data::Member<_9545094517092549436> _9545094517092549436;
	Data::Member<_9705479798924140351> _9705479798924140351;
	Data::Member<_9707096629495885452> _9707096629495885452;
	Data::Member<_9734881248452388660> _9734881248452388660;
	
	explicit Structure(Sav& s) : 
		_10035618609325695840 { s.get<struct _10035618609325695840>() },
		_10147912760170894537 { s.get<struct _10147912760170894537>() },
		_1027829103425503827 { s.get<struct _1027829103425503827>() },
		_10530533416107128098 { s.get<struct _10530533416107128098>() },
		_10648733530437086844 { s.get<struct _10648733530437086844>() },
		_10765936993113452918 { s.get<struct _10765936993113452918>() },
		_10884485578138139295 { s.get<struct _10884485578138139295>() },
		_11058875431153592516 { s.get<struct _11058875431153592516>() },
		_11202514477440889488 { s.get<struct _11202514477440889488>() },
		_11271636085079936375 { s.get<struct _11271636085079936375>() },
		_11811958806114551925 { s.get<struct _11811958806114551925>() },
		_11875758624767344318 { s.get<struct _11875758624767344318>() },
		_11896787561078353905 { s.get<struct _11896787561078353905>() },
		_11937967932341810839 { s.get<struct _11937967932341810839>() },
		_1197214492947962803 { s.get<struct _1197214492947962803>() },
		_12130885694327852729 { s.get<struct _12130885694327852729>() },
		_12847198751504072774 { s.get<struct _12847198751504072774>() },
		_12867974234227336785 { s.get<struct _12867974234227336785>() },
		_12925413538446962496 { s.get<struct _12925413538446962496>() },
		_13096531038553645768 { s.get<struct _13096531038553645768>() },
		_13222893714975519401 { s.get<struct _13222893714975519401>() },
		_13247469126542819452 { s.get<struct _13247469126542819452>() },
		_13276398725536494111 { s.get<struct _13276398725536494111>() },
		_13397407553973487668 { s.get<struct _13397407553973487668>() },
		_13406578000478771737 { s.get<struct _13406578000478771737>() },
		_13574721167545880769 { s.get<struct _13574721167545880769>() },
		_13715318254682426167 { s.get<struct _13715318254682426167>() },
		_14086010442264569915 { s.get<struct _14086010442264569915>() },
		_14386365983047131468 { s.get<struct _14386365983047131468>() },
		_14474122671074317609 { s.get<struct _14474122671074317609>() },
		_14620345371264461858 { s.get<struct _14620345371264461858>() },
		_14675420841305621627 { s.get<struct _14675420841305621627>() },
		_1467646013161089597 { s.get<struct _1467646013161089597>() },
		_14743492415969903566 { s.get<struct _14743492415969903566>() },
		_14755292463343432412 { s.get<struct _14755292463343432412>() },
		_14835004004034249742 { s.get<struct _14835004004034249742>() },
		_14913775068882522158 { s.get<struct _14913775068882522158>() },
		_15014578422836026966 { s.get<struct _15014578422836026966>() },
		_15217693042586832359 { s.get<struct _15217693042586832359>() },
		_15261531300099259671 { s.get<struct _15261531300099259671>() },
		_15270416955868479146 { s.get<struct _15270416955868479146>() },
		_1559566833430240376 { s.get<struct _1559566833430240376>() },
		_15764967962530007701 { s.get<struct _15764967962530007701>() },
		_15812195146511308260 { s.get<struct _15812195146511308260>() },
		_15896625821746789069 { s.get<struct _15896625821746789069>() },
		_15951088143512413279 { s.get<struct _15951088143512413279>() },
		_16672092331503822504 { s.get<struct _16672092331503822504>() },
		_1701261354463979089 { s.get<struct _1701261354463979089>() },
		_17015045044967365539 { s.get<struct _17015045044967365539>() },
		_17210919258426000638 { s.get<struct _17210919258426000638>() },
		_17594093809162698318 { s.get<struct _17594093809162698318>() },
		_17670912282596839597 { s.get<struct _17670912282596839597>() },
		_17802606411144917162 { s.get<struct _17802606411144917162>() },
		_18153127729825633248 { s.get<struct _18153127729825633248>() },
		_18235969829881518418 { s.get<struct _18235969829881518418>() },
		_1845078604478085116 { s.get<struct _1845078604478085116>() },
		_1977590426358230894 { s.get<struct _1977590426358230894>() },
		_2065394700677686397 { s.get<struct _2065394700677686397>() },
		_2425953548859621426 { s.get<struct _2425953548859621426>() },
		_2753782435549223662 { s.get<struct _2753782435549223662>() },
		_3033022659337824191 { s.get<struct _3033022659337824191>() },
		_3039055495308853332 { s.get<struct _3039055495308853332>() },
		_3140500857535214931 { s.get<struct _3140500857535214931>() },
		_3643785449856294086 { s.get<struct _3643785449856294086>() },
		_4192588996974612514 { s.get<struct _4192588996974612514>() },
		_4278308988828624825 { s.get<struct _4278308988828624825>() },
		_4386102791994685188 { s.get<struct _4386102791994685188>() },
		_4494468278546116134 { s.get<struct _4494468278546116134>() },
		_5036066410770918472 { s.get<struct _5036066410770918472>() },
		_5145081417529458167 { s.get<struct _5145081417529458167>() },
		_5230411027965047570 { s.get<struct _5230411027965047570>() },
		_5298571532246140711 { s.get<struct _5298571532246140711>() },
		_55136037473008208 { s.get<struct _55136037473008208>() },
		_5634362082519974124 { s.get<struct _5634362082519974124>() },
		_5869665143813001026 { s.get<struct _5869665143813001026>() },
		_5937135356624406219 { s.get<struct _5937135356624406219>() },
		_661645095586149546 { s.get<struct _661645095586149546>() },
		_6773575892270236835 { s.get<struct _6773575892270236835>() },
		_702982911163221302 { s.get<struct _702982911163221302>() },
		_711316197736138568 { s.get<struct _711316197736138568>() },
		_7200846769452032765 { s.get<struct _7200846769452032765>() },
		_7205909546088832266 { s.get<struct _7205909546088832266>() },
		_7252382242329520081 { s.get<struct _7252382242329520081>() },
		_7705700044124304347 { s.get<struct _7705700044124304347>() },
		_7786864151230414866 { s.get<struct _7786864151230414866>() },
		_8004497664373186229 { s.get<struct _8004497664373186229>() },
		_8497568152468259638 { s.get<struct _8497568152468259638>() },
		_857511348685999225 { s.get<struct _857511348685999225>() },
		_879993071457401920 { s.get<struct _879993071457401920>() },
		_882636985276030155 { s.get<struct _882636985276030155>() },
		_8971903895020413263 { s.get<struct _8971903895020413263>() },
		_8993451623919032985 { s.get<struct _8993451623919032985>() },
		_9073478381193169871 { s.get<struct _9073478381193169871>() },
		_9329678298925105483 { s.get<struct _9329678298925105483>() },
		_9380338098995773009 { s.get<struct _9380338098995773009>() },
		_9539946314806298996 { s.get<struct _9539946314806298996>() },
		_9545094517092549436 { s.get<struct _9545094517092549436>() },
		_9705479798924140351 { s.get<struct _9705479798924140351>() },
		_9707096629495885452 { s.get<struct _9707096629495885452>() },
		_9734881248452388660 { s.get<struct _9734881248452388660>() }
	{ }
};/* Data::Structure GameData::KorokCarryProgress close */

template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_10035618609325695840> = murmurhash3::hash("KorokCarryProgress.10035618609325695840");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_10147912760170894537> = murmurhash3::hash("KorokCarryProgress.10147912760170894537");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_1027829103425503827> = murmurhash3::hash("KorokCarryProgress.1027829103425503827");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_10530533416107128098> = murmurhash3::hash("KorokCarryProgress.10530533416107128098");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_10648733530437086844> = murmurhash3::hash("KorokCarryProgress.10648733530437086844");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_10765936993113452918> = murmurhash3::hash("KorokCarryProgress.10765936993113452918");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_10884485578138139295> = murmurhash3::hash("KorokCarryProgress.10884485578138139295");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_11058875431153592516> = murmurhash3::hash("KorokCarryProgress.11058875431153592516");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_11202514477440889488> = murmurhash3::hash("KorokCarryProgress.11202514477440889488");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_11271636085079936375> = murmurhash3::hash("KorokCarryProgress.11271636085079936375");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_11811958806114551925> = murmurhash3::hash("KorokCarryProgress.11811958806114551925");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_11875758624767344318> = murmurhash3::hash("KorokCarryProgress.11875758624767344318");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_11896787561078353905> = murmurhash3::hash("KorokCarryProgress.11896787561078353905");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_11937967932341810839> = murmurhash3::hash("KorokCarryProgress.11937967932341810839");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_1197214492947962803> = murmurhash3::hash("KorokCarryProgress.1197214492947962803");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_12130885694327852729> = murmurhash3::hash("KorokCarryProgress.12130885694327852729");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_12847198751504072774> = murmurhash3::hash("KorokCarryProgress.12847198751504072774");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_12867974234227336785> = murmurhash3::hash("KorokCarryProgress.12867974234227336785");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_12925413538446962496> = murmurhash3::hash("KorokCarryProgress.12925413538446962496");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_13096531038553645768> = murmurhash3::hash("KorokCarryProgress.13096531038553645768");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_13222893714975519401> = murmurhash3::hash("KorokCarryProgress.13222893714975519401");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_13247469126542819452> = murmurhash3::hash("KorokCarryProgress.13247469126542819452");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_13276398725536494111> = murmurhash3::hash("KorokCarryProgress.13276398725536494111");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_13397407553973487668> = murmurhash3::hash("KorokCarryProgress.13397407553973487668");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_13406578000478771737> = murmurhash3::hash("KorokCarryProgress.13406578000478771737");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_13574721167545880769> = murmurhash3::hash("KorokCarryProgress.13574721167545880769");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_13715318254682426167> = murmurhash3::hash("KorokCarryProgress.13715318254682426167");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_14086010442264569915> = murmurhash3::hash("KorokCarryProgress.14086010442264569915");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_14386365983047131468> = murmurhash3::hash("KorokCarryProgress.14386365983047131468");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_14474122671074317609> = murmurhash3::hash("KorokCarryProgress.14474122671074317609");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_14620345371264461858> = murmurhash3::hash("KorokCarryProgress.14620345371264461858");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_14675420841305621627> = murmurhash3::hash("KorokCarryProgress.14675420841305621627");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_1467646013161089597> = murmurhash3::hash("KorokCarryProgress.1467646013161089597");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_14743492415969903566> = murmurhash3::hash("KorokCarryProgress.14743492415969903566");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_14755292463343432412> = murmurhash3::hash("KorokCarryProgress.14755292463343432412");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_14835004004034249742> = murmurhash3::hash("KorokCarryProgress.14835004004034249742");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_14913775068882522158> = murmurhash3::hash("KorokCarryProgress.14913775068882522158");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_15014578422836026966> = murmurhash3::hash("KorokCarryProgress.15014578422836026966");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_15217693042586832359> = murmurhash3::hash("KorokCarryProgress.15217693042586832359");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_15261531300099259671> = murmurhash3::hash("KorokCarryProgress.15261531300099259671");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_15270416955868479146> = murmurhash3::hash("KorokCarryProgress.15270416955868479146");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_1559566833430240376> = murmurhash3::hash("KorokCarryProgress.1559566833430240376");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_15764967962530007701> = murmurhash3::hash("KorokCarryProgress.15764967962530007701");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_15812195146511308260> = murmurhash3::hash("KorokCarryProgress.15812195146511308260");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_15896625821746789069> = murmurhash3::hash("KorokCarryProgress.15896625821746789069");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_15951088143512413279> = murmurhash3::hash("KorokCarryProgress.15951088143512413279");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_16672092331503822504> = murmurhash3::hash("KorokCarryProgress.16672092331503822504");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_1701261354463979089> = murmurhash3::hash("KorokCarryProgress.1701261354463979089");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_17015045044967365539> = murmurhash3::hash("KorokCarryProgress.17015045044967365539");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_17210919258426000638> = murmurhash3::hash("KorokCarryProgress.17210919258426000638");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_17594093809162698318> = murmurhash3::hash("KorokCarryProgress.17594093809162698318");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_17670912282596839597> = murmurhash3::hash("KorokCarryProgress.17670912282596839597");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_17802606411144917162> = murmurhash3::hash("KorokCarryProgress.17802606411144917162");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_18153127729825633248> = murmurhash3::hash("KorokCarryProgress.18153127729825633248");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_18235969829881518418> = murmurhash3::hash("KorokCarryProgress.18235969829881518418");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_1845078604478085116> = murmurhash3::hash("KorokCarryProgress.1845078604478085116");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_1977590426358230894> = murmurhash3::hash("KorokCarryProgress.1977590426358230894");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_2065394700677686397> = murmurhash3::hash("KorokCarryProgress.2065394700677686397");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_2425953548859621426> = murmurhash3::hash("KorokCarryProgress.2425953548859621426");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_2753782435549223662> = murmurhash3::hash("KorokCarryProgress.2753782435549223662");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_3033022659337824191> = murmurhash3::hash("KorokCarryProgress.3033022659337824191");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_3039055495308853332> = murmurhash3::hash("KorokCarryProgress.3039055495308853332");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_3140500857535214931> = murmurhash3::hash("KorokCarryProgress.3140500857535214931");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_3643785449856294086> = murmurhash3::hash("KorokCarryProgress.3643785449856294086");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_4192588996974612514> = murmurhash3::hash("KorokCarryProgress.4192588996974612514");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_4278308988828624825> = murmurhash3::hash("KorokCarryProgress.4278308988828624825");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_4386102791994685188> = murmurhash3::hash("KorokCarryProgress.4386102791994685188");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_4494468278546116134> = murmurhash3::hash("KorokCarryProgress.4494468278546116134");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_5036066410770918472> = murmurhash3::hash("KorokCarryProgress.5036066410770918472");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_5145081417529458167> = murmurhash3::hash("KorokCarryProgress.5145081417529458167");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_5230411027965047570> = murmurhash3::hash("KorokCarryProgress.5230411027965047570");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_5298571532246140711> = murmurhash3::hash("KorokCarryProgress.5298571532246140711");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_55136037473008208> = murmurhash3::hash("KorokCarryProgress.55136037473008208");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_5634362082519974124> = murmurhash3::hash("KorokCarryProgress.5634362082519974124");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_5869665143813001026> = murmurhash3::hash("KorokCarryProgress.5869665143813001026");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_5937135356624406219> = murmurhash3::hash("KorokCarryProgress.5937135356624406219");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_661645095586149546> = murmurhash3::hash("KorokCarryProgress.661645095586149546");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_6773575892270236835> = murmurhash3::hash("KorokCarryProgress.6773575892270236835");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_702982911163221302> = murmurhash3::hash("KorokCarryProgress.702982911163221302");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_711316197736138568> = murmurhash3::hash("KorokCarryProgress.711316197736138568");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_7200846769452032765> = murmurhash3::hash("KorokCarryProgress.7200846769452032765");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_7205909546088832266> = murmurhash3::hash("KorokCarryProgress.7205909546088832266");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_7252382242329520081> = murmurhash3::hash("KorokCarryProgress.7252382242329520081");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_7705700044124304347> = murmurhash3::hash("KorokCarryProgress.7705700044124304347");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_7786864151230414866> = murmurhash3::hash("KorokCarryProgress.7786864151230414866");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_8004497664373186229> = murmurhash3::hash("KorokCarryProgress.8004497664373186229");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_8497568152468259638> = murmurhash3::hash("KorokCarryProgress.8497568152468259638");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_857511348685999225> = murmurhash3::hash("KorokCarryProgress.857511348685999225");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_879993071457401920> = murmurhash3::hash("KorokCarryProgress.879993071457401920");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_882636985276030155> = murmurhash3::hash("KorokCarryProgress.882636985276030155");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_8971903895020413263> = murmurhash3::hash("KorokCarryProgress.8971903895020413263");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_8993451623919032985> = murmurhash3::hash("KorokCarryProgress.8993451623919032985");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_9073478381193169871> = murmurhash3::hash("KorokCarryProgress.9073478381193169871");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_9329678298925105483> = murmurhash3::hash("KorokCarryProgress.9329678298925105483");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_9380338098995773009> = murmurhash3::hash("KorokCarryProgress.9380338098995773009");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_9539946314806298996> = murmurhash3::hash("KorokCarryProgress.9539946314806298996");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_9545094517092549436> = murmurhash3::hash("KorokCarryProgress.9545094517092549436");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_9705479798924140351> = murmurhash3::hash("KorokCarryProgress.9705479798924140351");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_9707096629495885452> = murmurhash3::hash("KorokCarryProgress.9707096629495885452");
template <> hash_t constexpr Data::Hashtable<GameData::KorokCarryProgress::_9734881248452388660> = murmurhash3::hash("KorokCarryProgress.9734881248452388660");