#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::KorokCarryProgress : Tag::Structure {
	struct _10035618609325695840 : Tag::Enum { using type = ::Enum::Scalar<_10035618609325695840>; using adapter = ::Enum::Scalar<_10035618609325695840>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _10147912760170894537 : Tag::Enum { using type = ::Enum::Scalar<_10147912760170894537>; using adapter = ::Enum::Scalar<_10147912760170894537>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _1027829103425503827 : Tag::Enum { using type = ::Enum::Scalar<_1027829103425503827>; using adapter = ::Enum::Scalar<_1027829103425503827>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _10530533416107128098 : Tag::Enum { using type = ::Enum::Scalar<_10530533416107128098>; using adapter = ::Enum::Scalar<_10530533416107128098>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _10648733530437086844 : Tag::Enum { using type = ::Enum::Scalar<_10648733530437086844>; using adapter = ::Enum::Scalar<_10648733530437086844>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _10765936993113452918 : Tag::Enum { using type = ::Enum::Scalar<_10765936993113452918>; using adapter = ::Enum::Scalar<_10765936993113452918>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _10884485578138139295 : Tag::Enum { using type = ::Enum::Scalar<_10884485578138139295>; using adapter = ::Enum::Scalar<_10884485578138139295>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _11058875431153592516 : Tag::Enum { using type = ::Enum::Scalar<_11058875431153592516>; using adapter = ::Enum::Scalar<_11058875431153592516>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _11202514477440889488 : Tag::Enum { using type = ::Enum::Scalar<_11202514477440889488>; using adapter = ::Enum::Scalar<_11202514477440889488>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _11271636085079936375 : Tag::Enum { using type = ::Enum::Scalar<_11271636085079936375>; using adapter = ::Enum::Scalar<_11271636085079936375>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _11811958806114551925 : Tag::Enum { using type = ::Enum::Scalar<_11811958806114551925>; using adapter = ::Enum::Scalar<_11811958806114551925>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _11875758624767344318 : Tag::Enum { using type = ::Enum::Scalar<_11875758624767344318>; using adapter = ::Enum::Scalar<_11875758624767344318>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _11896787561078353905 : Tag::Enum { using type = ::Enum::Scalar<_11896787561078353905>; using adapter = ::Enum::Scalar<_11896787561078353905>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _11937967932341810839 : Tag::Enum { using type = ::Enum::Scalar<_11937967932341810839>; using adapter = ::Enum::Scalar<_11937967932341810839>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _1197214492947962803 : Tag::Enum { using type = ::Enum::Scalar<_1197214492947962803>; using adapter = ::Enum::Scalar<_1197214492947962803>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _12130885694327852729 : Tag::Enum { using type = ::Enum::Scalar<_12130885694327852729>; using adapter = ::Enum::Scalar<_12130885694327852729>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _12847198751504072774 : Tag::Enum { using type = ::Enum::Scalar<_12847198751504072774>; using adapter = ::Enum::Scalar<_12847198751504072774>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _12867974234227336785 : Tag::Enum { using type = ::Enum::Scalar<_12867974234227336785>; using adapter = ::Enum::Scalar<_12867974234227336785>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _12925413538446962496 : Tag::Enum { using type = ::Enum::Scalar<_12925413538446962496>; using adapter = ::Enum::Scalar<_12925413538446962496>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _13096531038553645768 : Tag::Enum { using type = ::Enum::Scalar<_13096531038553645768>; using adapter = ::Enum::Scalar<_13096531038553645768>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _13222893714975519401 : Tag::Enum { using type = ::Enum::Scalar<_13222893714975519401>; using adapter = ::Enum::Scalar<_13222893714975519401>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _13247469126542819452 : Tag::Enum { using type = ::Enum::Scalar<_13247469126542819452>; using adapter = ::Enum::Scalar<_13247469126542819452>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _13276398725536494111 : Tag::Enum { using type = ::Enum::Scalar<_13276398725536494111>; using adapter = ::Enum::Scalar<_13276398725536494111>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _13397407553973487668 : Tag::Enum { using type = ::Enum::Scalar<_13397407553973487668>; using adapter = ::Enum::Scalar<_13397407553973487668>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _13406578000478771737 : Tag::Enum { using type = ::Enum::Scalar<_13406578000478771737>; using adapter = ::Enum::Scalar<_13406578000478771737>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _13574721167545880769 : Tag::Enum { using type = ::Enum::Scalar<_13574721167545880769>; using adapter = ::Enum::Scalar<_13574721167545880769>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _13715318254682426167 : Tag::Enum { using type = ::Enum::Scalar<_13715318254682426167>; using adapter = ::Enum::Scalar<_13715318254682426167>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _14086010442264569915 : Tag::Enum { using type = ::Enum::Scalar<_14086010442264569915>; using adapter = ::Enum::Scalar<_14086010442264569915>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _14386365983047131468 : Tag::Enum { using type = ::Enum::Scalar<_14386365983047131468>; using adapter = ::Enum::Scalar<_14386365983047131468>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _14474122671074317609 : Tag::Enum { using type = ::Enum::Scalar<_14474122671074317609>; using adapter = ::Enum::Scalar<_14474122671074317609>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _14620345371264461858 : Tag::Enum { using type = ::Enum::Scalar<_14620345371264461858>; using adapter = ::Enum::Scalar<_14620345371264461858>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _14675420841305621627 : Tag::Enum { using type = ::Enum::Scalar<_14675420841305621627>; using adapter = ::Enum::Scalar<_14675420841305621627>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _1467646013161089597 : Tag::Enum { using type = ::Enum::Scalar<_1467646013161089597>; using adapter = ::Enum::Scalar<_1467646013161089597>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _14743492415969903566 : Tag::Enum { using type = ::Enum::Scalar<_14743492415969903566>; using adapter = ::Enum::Scalar<_14743492415969903566>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _14755292463343432412 : Tag::Enum { using type = ::Enum::Scalar<_14755292463343432412>; using adapter = ::Enum::Scalar<_14755292463343432412>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _14835004004034249742 : Tag::Enum { using type = ::Enum::Scalar<_14835004004034249742>; using adapter = ::Enum::Scalar<_14835004004034249742>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _14913775068882522158 : Tag::Enum { using type = ::Enum::Scalar<_14913775068882522158>; using adapter = ::Enum::Scalar<_14913775068882522158>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _15014578422836026966 : Tag::Enum { using type = ::Enum::Scalar<_15014578422836026966>; using adapter = ::Enum::Scalar<_15014578422836026966>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _15217693042586832359 : Tag::Enum { using type = ::Enum::Scalar<_15217693042586832359>; using adapter = ::Enum::Scalar<_15217693042586832359>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _15261531300099259671 : Tag::Enum { using type = ::Enum::Scalar<_15261531300099259671>; using adapter = ::Enum::Scalar<_15261531300099259671>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _15270416955868479146 : Tag::Enum { using type = ::Enum::Scalar<_15270416955868479146>; using adapter = ::Enum::Scalar<_15270416955868479146>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _1559566833430240376 : Tag::Enum { using type = ::Enum::Scalar<_1559566833430240376>; using adapter = ::Enum::Scalar<_1559566833430240376>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _15764967962530007701 : Tag::Enum { using type = ::Enum::Scalar<_15764967962530007701>; using adapter = ::Enum::Scalar<_15764967962530007701>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _15812195146511308260 : Tag::Enum { using type = ::Enum::Scalar<_15812195146511308260>; using adapter = ::Enum::Scalar<_15812195146511308260>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _15896625821746789069 : Tag::Enum { using type = ::Enum::Scalar<_15896625821746789069>; using adapter = ::Enum::Scalar<_15896625821746789069>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _15951088143512413279 : Tag::Enum { using type = ::Enum::Scalar<_15951088143512413279>; using adapter = ::Enum::Scalar<_15951088143512413279>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _16672092331503822504 : Tag::Enum { using type = ::Enum::Scalar<_16672092331503822504>; using adapter = ::Enum::Scalar<_16672092331503822504>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _1701261354463979089 : Tag::Enum { using type = ::Enum::Scalar<_1701261354463979089>; using adapter = ::Enum::Scalar<_1701261354463979089>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _17015045044967365539 : Tag::Enum { using type = ::Enum::Scalar<_17015045044967365539>; using adapter = ::Enum::Scalar<_17015045044967365539>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _17210919258426000638 : Tag::Enum { using type = ::Enum::Scalar<_17210919258426000638>; using adapter = ::Enum::Scalar<_17210919258426000638>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _17594093809162698318 : Tag::Enum { using type = ::Enum::Scalar<_17594093809162698318>; using adapter = ::Enum::Scalar<_17594093809162698318>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _17670912282596839597 : Tag::Enum { using type = ::Enum::Scalar<_17670912282596839597>; using adapter = ::Enum::Scalar<_17670912282596839597>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _17802606411144917162 : Tag::Enum { using type = ::Enum::Scalar<_17802606411144917162>; using adapter = ::Enum::Scalar<_17802606411144917162>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _18153127729825633248 : Tag::Enum { using type = ::Enum::Scalar<_18153127729825633248>; using adapter = ::Enum::Scalar<_18153127729825633248>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _18235969829881518418 : Tag::Enum { using type = ::Enum::Scalar<_18235969829881518418>; using adapter = ::Enum::Scalar<_18235969829881518418>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _1845078604478085116 : Tag::Enum { using type = ::Enum::Scalar<_1845078604478085116>; using adapter = ::Enum::Scalar<_1845078604478085116>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _1977590426358230894 : Tag::Enum { using type = ::Enum::Scalar<_1977590426358230894>; using adapter = ::Enum::Scalar<_1977590426358230894>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _2065394700677686397 : Tag::Enum { using type = ::Enum::Scalar<_2065394700677686397>; using adapter = ::Enum::Scalar<_2065394700677686397>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _2425953548859621426 : Tag::Enum { using type = ::Enum::Scalar<_2425953548859621426>; using adapter = ::Enum::Scalar<_2425953548859621426>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _2753782435549223662 : Tag::Enum { using type = ::Enum::Scalar<_2753782435549223662>; using adapter = ::Enum::Scalar<_2753782435549223662>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _3033022659337824191 : Tag::Enum { using type = ::Enum::Scalar<_3033022659337824191>; using adapter = ::Enum::Scalar<_3033022659337824191>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _3039055495308853332 : Tag::Enum { using type = ::Enum::Scalar<_3039055495308853332>; using adapter = ::Enum::Scalar<_3039055495308853332>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _3140500857535214931 : Tag::Enum { using type = ::Enum::Scalar<_3140500857535214931>; using adapter = ::Enum::Scalar<_3140500857535214931>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _3643785449856294086 : Tag::Enum { using type = ::Enum::Scalar<_3643785449856294086>; using adapter = ::Enum::Scalar<_3643785449856294086>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _4192588996974612514 : Tag::Enum { using type = ::Enum::Scalar<_4192588996974612514>; using adapter = ::Enum::Scalar<_4192588996974612514>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _4278308988828624825 : Tag::Enum { using type = ::Enum::Scalar<_4278308988828624825>; using adapter = ::Enum::Scalar<_4278308988828624825>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _4386102791994685188 : Tag::Enum { using type = ::Enum::Scalar<_4386102791994685188>; using adapter = ::Enum::Scalar<_4386102791994685188>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _4494468278546116134 : Tag::Enum { using type = ::Enum::Scalar<_4494468278546116134>; using adapter = ::Enum::Scalar<_4494468278546116134>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _5036066410770918472 : Tag::Enum { using type = ::Enum::Scalar<_5036066410770918472>; using adapter = ::Enum::Scalar<_5036066410770918472>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _5145081417529458167 : Tag::Enum { using type = ::Enum::Scalar<_5145081417529458167>; using adapter = ::Enum::Scalar<_5145081417529458167>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _5230411027965047570 : Tag::Enum { using type = ::Enum::Scalar<_5230411027965047570>; using adapter = ::Enum::Scalar<_5230411027965047570>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _5298571532246140711 : Tag::Enum { using type = ::Enum::Scalar<_5298571532246140711>; using adapter = ::Enum::Scalar<_5298571532246140711>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _55136037473008208 : Tag::Enum { using type = ::Enum::Scalar<_55136037473008208>; using adapter = ::Enum::Scalar<_55136037473008208>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _5634362082519974124 : Tag::Enum { using type = ::Enum::Scalar<_5634362082519974124>; using adapter = ::Enum::Scalar<_5634362082519974124>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _5869665143813001026 : Tag::Enum { using type = ::Enum::Scalar<_5869665143813001026>; using adapter = ::Enum::Scalar<_5869665143813001026>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _5937135356624406219 : Tag::Enum { using type = ::Enum::Scalar<_5937135356624406219>; using adapter = ::Enum::Scalar<_5937135356624406219>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _661645095586149546 : Tag::Enum { using type = ::Enum::Scalar<_661645095586149546>; using adapter = ::Enum::Scalar<_661645095586149546>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _6773575892270236835 : Tag::Enum { using type = ::Enum::Scalar<_6773575892270236835>; using adapter = ::Enum::Scalar<_6773575892270236835>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _702982911163221302 : Tag::Enum { using type = ::Enum::Scalar<_702982911163221302>; using adapter = ::Enum::Scalar<_702982911163221302>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _711316197736138568 : Tag::Enum { using type = ::Enum::Scalar<_711316197736138568>; using adapter = ::Enum::Scalar<_711316197736138568>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _7200846769452032765 : Tag::Enum { using type = ::Enum::Scalar<_7200846769452032765>; using adapter = ::Enum::Scalar<_7200846769452032765>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _7205909546088832266 : Tag::Enum { using type = ::Enum::Scalar<_7205909546088832266>; using adapter = ::Enum::Scalar<_7205909546088832266>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _7252382242329520081 : Tag::Enum { using type = ::Enum::Scalar<_7252382242329520081>; using adapter = ::Enum::Scalar<_7252382242329520081>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _7705700044124304347 : Tag::Enum { using type = ::Enum::Scalar<_7705700044124304347>; using adapter = ::Enum::Scalar<_7705700044124304347>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _7786864151230414866 : Tag::Enum { using type = ::Enum::Scalar<_7786864151230414866>; using adapter = ::Enum::Scalar<_7786864151230414866>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _8004497664373186229 : Tag::Enum { using type = ::Enum::Scalar<_8004497664373186229>; using adapter = ::Enum::Scalar<_8004497664373186229>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _8497568152468259638 : Tag::Enum { using type = ::Enum::Scalar<_8497568152468259638>; using adapter = ::Enum::Scalar<_8497568152468259638>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _857511348685999225 : Tag::Enum { using type = ::Enum::Scalar<_857511348685999225>; using adapter = ::Enum::Scalar<_857511348685999225>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _879993071457401920 : Tag::Enum { using type = ::Enum::Scalar<_879993071457401920>; using adapter = ::Enum::Scalar<_879993071457401920>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _882636985276030155 : Tag::Enum { using type = ::Enum::Scalar<_882636985276030155>; using adapter = ::Enum::Scalar<_882636985276030155>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _8971903895020413263 : Tag::Enum { using type = ::Enum::Scalar<_8971903895020413263>; using adapter = ::Enum::Scalar<_8971903895020413263>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _8993451623919032985 : Tag::Enum { using type = ::Enum::Scalar<_8993451623919032985>; using adapter = ::Enum::Scalar<_8993451623919032985>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _9073478381193169871 : Tag::Enum { using type = ::Enum::Scalar<_9073478381193169871>; using adapter = ::Enum::Scalar<_9073478381193169871>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _9329678298925105483 : Tag::Enum { using type = ::Enum::Scalar<_9329678298925105483>; using adapter = ::Enum::Scalar<_9329678298925105483>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _9380338098995773009 : Tag::Enum { using type = ::Enum::Scalar<_9380338098995773009>; using adapter = ::Enum::Scalar<_9380338098995773009>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _9539946314806298996 : Tag::Enum { using type = ::Enum::Scalar<_9539946314806298996>; using adapter = ::Enum::Scalar<_9539946314806298996>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _9545094517092549436 : Tag::Enum { using type = ::Enum::Scalar<_9545094517092549436>; using adapter = ::Enum::Scalar<_9545094517092549436>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _9705479798924140351 : Tag::Enum { using type = ::Enum::Scalar<_9705479798924140351>; using adapter = ::Enum::Scalar<_9705479798924140351>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _9707096629495885452 : Tag::Enum { using type = ::Enum::Scalar<_9707096629495885452>; using adapter = ::Enum::Scalar<_9707096629495885452>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
	struct _9734881248452388660 : Tag::Enum { using type = ::Enum::Scalar<_9734881248452388660>; using adapter = ::Enum::Scalar<_9734881248452388660>; enum enum_type : hash_t { NotClear = murmurhash3::hash("NotClear"), Clear = murmurhash3::hash("Clear"), }; };
};/* Tag::Structure GameData::KorokCarryProgress close */

template <> struct Data::Structure<GameData::KorokCarryProgress> : GameData::KorokCarryProgress {
	_10035618609325695840::type _10035618609325695840;
	_10147912760170894537::type _10147912760170894537;
	_1027829103425503827::type _1027829103425503827;
	_10530533416107128098::type _10530533416107128098;
	_10648733530437086844::type _10648733530437086844;
	_10765936993113452918::type _10765936993113452918;
	_10884485578138139295::type _10884485578138139295;
	_11058875431153592516::type _11058875431153592516;
	_11202514477440889488::type _11202514477440889488;
	_11271636085079936375::type _11271636085079936375;
	_11811958806114551925::type _11811958806114551925;
	_11875758624767344318::type _11875758624767344318;
	_11896787561078353905::type _11896787561078353905;
	_11937967932341810839::type _11937967932341810839;
	_1197214492947962803::type _1197214492947962803;
	_12130885694327852729::type _12130885694327852729;
	_12847198751504072774::type _12847198751504072774;
	_12867974234227336785::type _12867974234227336785;
	_12925413538446962496::type _12925413538446962496;
	_13096531038553645768::type _13096531038553645768;
	_13222893714975519401::type _13222893714975519401;
	_13247469126542819452::type _13247469126542819452;
	_13276398725536494111::type _13276398725536494111;
	_13397407553973487668::type _13397407553973487668;
	_13406578000478771737::type _13406578000478771737;
	_13574721167545880769::type _13574721167545880769;
	_13715318254682426167::type _13715318254682426167;
	_14086010442264569915::type _14086010442264569915;
	_14386365983047131468::type _14386365983047131468;
	_14474122671074317609::type _14474122671074317609;
	_14620345371264461858::type _14620345371264461858;
	_14675420841305621627::type _14675420841305621627;
	_1467646013161089597::type _1467646013161089597;
	_14743492415969903566::type _14743492415969903566;
	_14755292463343432412::type _14755292463343432412;
	_14835004004034249742::type _14835004004034249742;
	_14913775068882522158::type _14913775068882522158;
	_15014578422836026966::type _15014578422836026966;
	_15217693042586832359::type _15217693042586832359;
	_15261531300099259671::type _15261531300099259671;
	_15270416955868479146::type _15270416955868479146;
	_1559566833430240376::type _1559566833430240376;
	_15764967962530007701::type _15764967962530007701;
	_15812195146511308260::type _15812195146511308260;
	_15896625821746789069::type _15896625821746789069;
	_15951088143512413279::type _15951088143512413279;
	_16672092331503822504::type _16672092331503822504;
	_1701261354463979089::type _1701261354463979089;
	_17015045044967365539::type _17015045044967365539;
	_17210919258426000638::type _17210919258426000638;
	_17594093809162698318::type _17594093809162698318;
	_17670912282596839597::type _17670912282596839597;
	_17802606411144917162::type _17802606411144917162;
	_18153127729825633248::type _18153127729825633248;
	_18235969829881518418::type _18235969829881518418;
	_1845078604478085116::type _1845078604478085116;
	_1977590426358230894::type _1977590426358230894;
	_2065394700677686397::type _2065394700677686397;
	_2425953548859621426::type _2425953548859621426;
	_2753782435549223662::type _2753782435549223662;
	_3033022659337824191::type _3033022659337824191;
	_3039055495308853332::type _3039055495308853332;
	_3140500857535214931::type _3140500857535214931;
	_3643785449856294086::type _3643785449856294086;
	_4192588996974612514::type _4192588996974612514;
	_4278308988828624825::type _4278308988828624825;
	_4386102791994685188::type _4386102791994685188;
	_4494468278546116134::type _4494468278546116134;
	_5036066410770918472::type _5036066410770918472;
	_5145081417529458167::type _5145081417529458167;
	_5230411027965047570::type _5230411027965047570;
	_5298571532246140711::type _5298571532246140711;
	_55136037473008208::type _55136037473008208;
	_5634362082519974124::type _5634362082519974124;
	_5869665143813001026::type _5869665143813001026;
	_5937135356624406219::type _5937135356624406219;
	_661645095586149546::type _661645095586149546;
	_6773575892270236835::type _6773575892270236835;
	_702982911163221302::type _702982911163221302;
	_711316197736138568::type _711316197736138568;
	_7200846769452032765::type _7200846769452032765;
	_7205909546088832266::type _7205909546088832266;
	_7252382242329520081::type _7252382242329520081;
	_7705700044124304347::type _7705700044124304347;
	_7786864151230414866::type _7786864151230414866;
	_8004497664373186229::type _8004497664373186229;
	_8497568152468259638::type _8497568152468259638;
	_857511348685999225::type _857511348685999225;
	_879993071457401920::type _879993071457401920;
	_882636985276030155::type _882636985276030155;
	_8971903895020413263::type _8971903895020413263;
	_8993451623919032985::type _8993451623919032985;
	_9073478381193169871::type _9073478381193169871;
	_9329678298925105483::type _9329678298925105483;
	_9380338098995773009::type _9380338098995773009;
	_9539946314806298996::type _9539946314806298996;
	_9545094517092549436::type _9545094517092549436;
	_9705479798924140351::type _9705479798924140351;
	_9707096629495885452::type _9707096629495885452;
	_9734881248452388660::type _9734881248452388660;
	
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