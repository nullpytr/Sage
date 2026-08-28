#pragma once
#include <sage>

struct GameData::OwnedParasailPattern : Tag::Structure {
	struct Default : Tag::Member { using type = bool&; };
	struct Pattern00 : Tag::Member { using type = bool&; };
	struct Pattern01 : Tag::Member { using type = bool&; };
	struct Pattern02 : Tag::Member { using type = bool&; };
	struct Pattern03 : Tag::Member { using type = bool&; };
	struct Pattern04 : Tag::Member { using type = bool&; };
	struct Pattern05 : Tag::Member { using type = bool&; };
	struct Pattern06 : Tag::Member { using type = bool&; };
	struct Pattern07 : Tag::Member { using type = bool&; };
	struct Pattern08 : Tag::Member { using type = bool&; };
	struct Pattern09 : Tag::Member { using type = bool&; };
	struct Pattern10 : Tag::Member { using type = bool&; };
	struct Pattern11 : Tag::Member { using type = bool&; };
	struct Pattern12 : Tag::Member { using type = bool&; };
	struct Pattern13 : Tag::Member { using type = bool&; };
	struct Pattern14 : Tag::Member { using type = bool&; };
	struct Pattern15 : Tag::Member { using type = bool&; };
	struct Pattern16 : Tag::Member { using type = bool&; };
	struct Pattern17 : Tag::Member { using type = bool&; };
	struct Pattern18 : Tag::Member { using type = bool&; };
	struct Pattern19 : Tag::Member { using type = bool&; };
	struct Pattern20 : Tag::Member { using type = bool&; };
	struct Pattern21 : Tag::Member { using type = bool&; };
	struct Pattern22 : Tag::Member { using type = bool&; };
	struct Pattern23 : Tag::Member { using type = bool&; };
	struct Pattern24 : Tag::Member { using type = bool&; };
	struct Pattern25 : Tag::Member { using type = bool&; };
	struct Pattern26 : Tag::Member { using type = bool&; };
	struct Pattern27 : Tag::Member { using type = bool&; };
	struct Pattern28 : Tag::Member { using type = bool&; };
	struct Pattern29 : Tag::Member { using type = bool&; };
	struct Pattern30 : Tag::Member { using type = bool&; };
	struct Pattern31 : Tag::Member { using type = bool&; };
	struct Pattern32 : Tag::Member { using type = bool&; };
	struct Pattern33 : Tag::Member { using type = bool&; };
	struct Pattern34 : Tag::Member { using type = bool&; };
	struct Pattern35 : Tag::Member { using type = bool&; };
	struct Pattern36 : Tag::Member { using type = bool&; };
	struct Pattern37 : Tag::Member { using type = bool&; };
	struct Pattern38 : Tag::Member { using type = bool&; };
	struct Pattern39 : Tag::Member { using type = bool&; };
	struct Pattern40 : Tag::Member { using type = bool&; };
	struct Pattern41 : Tag::Member { using type = bool&; };
	struct Pattern43 : Tag::Member { using type = bool&; };
	struct Pattern45 : Tag::Member { using type = bool&; };
	struct Pattern46 : Tag::Member { using type = bool&; };
	struct Pattern48 : Tag::Member { using type = bool&; };
	struct Pattern49 : Tag::Member { using type = bool&; };
	struct Pattern51 : Tag::Member { using type = bool&; };
	struct Pattern52 : Tag::Member { using type = bool&; };
	struct Pattern53 : Tag::Member { using type = bool&; };
	struct Pattern55 : Tag::Member { using type = bool&; };
	struct Pattern56 : Tag::Member { using type = bool&; };
};/* Tag::Structure GameData::OwnedParasailPattern close */

template <> struct Data::Structure<GameData::OwnedParasailPattern> : GameData::OwnedParasailPattern {
	Data::Member<Default> Default;
	Data::Member<Pattern00> Pattern00;
	Data::Member<Pattern01> Pattern01;
	Data::Member<Pattern02> Pattern02;
	Data::Member<Pattern03> Pattern03;
	Data::Member<Pattern04> Pattern04;
	Data::Member<Pattern05> Pattern05;
	Data::Member<Pattern06> Pattern06;
	Data::Member<Pattern07> Pattern07;
	Data::Member<Pattern08> Pattern08;
	Data::Member<Pattern09> Pattern09;
	Data::Member<Pattern10> Pattern10;
	Data::Member<Pattern11> Pattern11;
	Data::Member<Pattern12> Pattern12;
	Data::Member<Pattern13> Pattern13;
	Data::Member<Pattern14> Pattern14;
	Data::Member<Pattern15> Pattern15;
	Data::Member<Pattern16> Pattern16;
	Data::Member<Pattern17> Pattern17;
	Data::Member<Pattern18> Pattern18;
	Data::Member<Pattern19> Pattern19;
	Data::Member<Pattern20> Pattern20;
	Data::Member<Pattern21> Pattern21;
	Data::Member<Pattern22> Pattern22;
	Data::Member<Pattern23> Pattern23;
	Data::Member<Pattern24> Pattern24;
	Data::Member<Pattern25> Pattern25;
	Data::Member<Pattern26> Pattern26;
	Data::Member<Pattern27> Pattern27;
	Data::Member<Pattern28> Pattern28;
	Data::Member<Pattern29> Pattern29;
	Data::Member<Pattern30> Pattern30;
	Data::Member<Pattern31> Pattern31;
	Data::Member<Pattern32> Pattern32;
	Data::Member<Pattern33> Pattern33;
	Data::Member<Pattern34> Pattern34;
	Data::Member<Pattern35> Pattern35;
	Data::Member<Pattern36> Pattern36;
	Data::Member<Pattern37> Pattern37;
	Data::Member<Pattern38> Pattern38;
	Data::Member<Pattern39> Pattern39;
	Data::Member<Pattern40> Pattern40;
	Data::Member<Pattern41> Pattern41;
	Data::Member<Pattern43> Pattern43;
	Data::Member<Pattern45> Pattern45;
	Data::Member<Pattern46> Pattern46;
	Data::Member<Pattern48> Pattern48;
	Data::Member<Pattern49> Pattern49;
	Data::Member<Pattern51> Pattern51;
	Data::Member<Pattern52> Pattern52;
	Data::Member<Pattern53> Pattern53;
	Data::Member<Pattern55> Pattern55;
	Data::Member<Pattern56> Pattern56;
	
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