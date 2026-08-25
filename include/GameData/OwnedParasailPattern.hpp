#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::OwnedParasailPattern : Tag::Structure {
	struct Default : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern00 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern01 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern02 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern03 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern04 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern05 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern06 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern07 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern08 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern09 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern10 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern11 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern12 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern13 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern14 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern15 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern16 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern17 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern18 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern19 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern20 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern21 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern22 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern23 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern24 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern25 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern26 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern27 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern28 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern29 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern30 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern31 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern32 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern33 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern34 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern35 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern36 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern37 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern38 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern39 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern40 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern41 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern43 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern45 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern46 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern48 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern49 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern51 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern52 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern53 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern55 : Tag::Member { using type = bool&; using adapter = bool&; };
	struct Pattern56 : Tag::Member { using type = bool&; using adapter = bool&; };
};/* Tag::Structure GameData::OwnedParasailPattern close */

template <> struct Data::Structure<GameData::OwnedParasailPattern> : GameData::OwnedParasailPattern {
	Default::type Default;
	Pattern00::type Pattern00;
	Pattern01::type Pattern01;
	Pattern02::type Pattern02;
	Pattern03::type Pattern03;
	Pattern04::type Pattern04;
	Pattern05::type Pattern05;
	Pattern06::type Pattern06;
	Pattern07::type Pattern07;
	Pattern08::type Pattern08;
	Pattern09::type Pattern09;
	Pattern10::type Pattern10;
	Pattern11::type Pattern11;
	Pattern12::type Pattern12;
	Pattern13::type Pattern13;
	Pattern14::type Pattern14;
	Pattern15::type Pattern15;
	Pattern16::type Pattern16;
	Pattern17::type Pattern17;
	Pattern18::type Pattern18;
	Pattern19::type Pattern19;
	Pattern20::type Pattern20;
	Pattern21::type Pattern21;
	Pattern22::type Pattern22;
	Pattern23::type Pattern23;
	Pattern24::type Pattern24;
	Pattern25::type Pattern25;
	Pattern26::type Pattern26;
	Pattern27::type Pattern27;
	Pattern28::type Pattern28;
	Pattern29::type Pattern29;
	Pattern30::type Pattern30;
	Pattern31::type Pattern31;
	Pattern32::type Pattern32;
	Pattern33::type Pattern33;
	Pattern34::type Pattern34;
	Pattern35::type Pattern35;
	Pattern36::type Pattern36;
	Pattern37::type Pattern37;
	Pattern38::type Pattern38;
	Pattern39::type Pattern39;
	Pattern40::type Pattern40;
	Pattern41::type Pattern41;
	Pattern43::type Pattern43;
	Pattern45::type Pattern45;
	Pattern46::type Pattern46;
	Pattern48::type Pattern48;
	Pattern49::type Pattern49;
	Pattern51::type Pattern51;
	Pattern52::type Pattern52;
	Pattern53::type Pattern53;
	Pattern55::type Pattern55;
	Pattern56::type Pattern56;
	
	explicit Structure(Sav& s) : 
		Default { s.get<struct Default>() },
		Pattern00 { s.get<struct Pattern00>() },
		Pattern01 { s.get<struct Pattern01>() },
		Pattern02 { s.get<struct Pattern02>() },
		Pattern03 { s.get<struct Pattern03>() },
		Pattern04 { s.get<struct Pattern04>() },
		Pattern05 { s.get<struct Pattern05>() },
		Pattern06 { s.get<struct Pattern06>() },
		Pattern07 { s.get<struct Pattern07>() },
		Pattern08 { s.get<struct Pattern08>() },
		Pattern09 { s.get<struct Pattern09>() },
		Pattern10 { s.get<struct Pattern10>() },
		Pattern11 { s.get<struct Pattern11>() },
		Pattern12 { s.get<struct Pattern12>() },
		Pattern13 { s.get<struct Pattern13>() },
		Pattern14 { s.get<struct Pattern14>() },
		Pattern15 { s.get<struct Pattern15>() },
		Pattern16 { s.get<struct Pattern16>() },
		Pattern17 { s.get<struct Pattern17>() },
		Pattern18 { s.get<struct Pattern18>() },
		Pattern19 { s.get<struct Pattern19>() },
		Pattern20 { s.get<struct Pattern20>() },
		Pattern21 { s.get<struct Pattern21>() },
		Pattern22 { s.get<struct Pattern22>() },
		Pattern23 { s.get<struct Pattern23>() },
		Pattern24 { s.get<struct Pattern24>() },
		Pattern25 { s.get<struct Pattern25>() },
		Pattern26 { s.get<struct Pattern26>() },
		Pattern27 { s.get<struct Pattern27>() },
		Pattern28 { s.get<struct Pattern28>() },
		Pattern29 { s.get<struct Pattern29>() },
		Pattern30 { s.get<struct Pattern30>() },
		Pattern31 { s.get<struct Pattern31>() },
		Pattern32 { s.get<struct Pattern32>() },
		Pattern33 { s.get<struct Pattern33>() },
		Pattern34 { s.get<struct Pattern34>() },
		Pattern35 { s.get<struct Pattern35>() },
		Pattern36 { s.get<struct Pattern36>() },
		Pattern37 { s.get<struct Pattern37>() },
		Pattern38 { s.get<struct Pattern38>() },
		Pattern39 { s.get<struct Pattern39>() },
		Pattern40 { s.get<struct Pattern40>() },
		Pattern41 { s.get<struct Pattern41>() },
		Pattern43 { s.get<struct Pattern43>() },
		Pattern45 { s.get<struct Pattern45>() },
		Pattern46 { s.get<struct Pattern46>() },
		Pattern48 { s.get<struct Pattern48>() },
		Pattern49 { s.get<struct Pattern49>() },
		Pattern51 { s.get<struct Pattern51>() },
		Pattern52 { s.get<struct Pattern52>() },
		Pattern53 { s.get<struct Pattern53>() },
		Pattern55 { s.get<struct Pattern55>() },
		Pattern56 { s.get<struct Pattern56>() }
	{ }
};/* Data::Structure GameData::OwnedParasailPattern close */

template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Default> = murmurhash3::hash("OwnedParasailPattern.Default");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern00> = murmurhash3::hash("OwnedParasailPattern.Pattern00");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern01> = murmurhash3::hash("OwnedParasailPattern.Pattern01");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern02> = murmurhash3::hash("OwnedParasailPattern.Pattern02");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern03> = murmurhash3::hash("OwnedParasailPattern.Pattern03");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern04> = murmurhash3::hash("OwnedParasailPattern.Pattern04");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern05> = murmurhash3::hash("OwnedParasailPattern.Pattern05");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern06> = murmurhash3::hash("OwnedParasailPattern.Pattern06");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern07> = murmurhash3::hash("OwnedParasailPattern.Pattern07");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern08> = murmurhash3::hash("OwnedParasailPattern.Pattern08");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern09> = murmurhash3::hash("OwnedParasailPattern.Pattern09");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern10> = murmurhash3::hash("OwnedParasailPattern.Pattern10");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern11> = murmurhash3::hash("OwnedParasailPattern.Pattern11");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern12> = murmurhash3::hash("OwnedParasailPattern.Pattern12");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern13> = murmurhash3::hash("OwnedParasailPattern.Pattern13");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern14> = murmurhash3::hash("OwnedParasailPattern.Pattern14");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern15> = murmurhash3::hash("OwnedParasailPattern.Pattern15");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern16> = murmurhash3::hash("OwnedParasailPattern.Pattern16");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern17> = murmurhash3::hash("OwnedParasailPattern.Pattern17");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern18> = murmurhash3::hash("OwnedParasailPattern.Pattern18");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern19> = murmurhash3::hash("OwnedParasailPattern.Pattern19");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern20> = murmurhash3::hash("OwnedParasailPattern.Pattern20");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern21> = murmurhash3::hash("OwnedParasailPattern.Pattern21");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern22> = murmurhash3::hash("OwnedParasailPattern.Pattern22");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern23> = murmurhash3::hash("OwnedParasailPattern.Pattern23");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern24> = murmurhash3::hash("OwnedParasailPattern.Pattern24");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern25> = murmurhash3::hash("OwnedParasailPattern.Pattern25");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern26> = murmurhash3::hash("OwnedParasailPattern.Pattern26");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern27> = murmurhash3::hash("OwnedParasailPattern.Pattern27");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern28> = murmurhash3::hash("OwnedParasailPattern.Pattern28");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern29> = murmurhash3::hash("OwnedParasailPattern.Pattern29");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern30> = murmurhash3::hash("OwnedParasailPattern.Pattern30");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern31> = murmurhash3::hash("OwnedParasailPattern.Pattern31");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern32> = murmurhash3::hash("OwnedParasailPattern.Pattern32");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern33> = murmurhash3::hash("OwnedParasailPattern.Pattern33");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern34> = murmurhash3::hash("OwnedParasailPattern.Pattern34");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern35> = murmurhash3::hash("OwnedParasailPattern.Pattern35");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern36> = murmurhash3::hash("OwnedParasailPattern.Pattern36");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern37> = murmurhash3::hash("OwnedParasailPattern.Pattern37");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern38> = murmurhash3::hash("OwnedParasailPattern.Pattern38");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern39> = murmurhash3::hash("OwnedParasailPattern.Pattern39");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern40> = murmurhash3::hash("OwnedParasailPattern.Pattern40");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern41> = murmurhash3::hash("OwnedParasailPattern.Pattern41");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern43> = murmurhash3::hash("OwnedParasailPattern.Pattern43");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern45> = murmurhash3::hash("OwnedParasailPattern.Pattern45");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern46> = murmurhash3::hash("OwnedParasailPattern.Pattern46");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern48> = murmurhash3::hash("OwnedParasailPattern.Pattern48");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern49> = murmurhash3::hash("OwnedParasailPattern.Pattern49");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern51> = murmurhash3::hash("OwnedParasailPattern.Pattern51");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern52> = murmurhash3::hash("OwnedParasailPattern.Pattern52");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern53> = murmurhash3::hash("OwnedParasailPattern.Pattern53");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern55> = murmurhash3::hash("OwnedParasailPattern.Pattern55");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedParasailPattern::Pattern56> = murmurhash3::hash("OwnedParasailPattern.Pattern56");