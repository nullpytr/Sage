#pragma once
#include <sage>

struct GameData::CustomHouseTakeOutNum : Tag::Structure {
	struct TypeA : Tag::Member { using type = s32&; };
	struct TypeB : Tag::Member { using type = s32&; };
	struct TypeC : Tag::Member { using type = s32&; };
	struct TypeD : Tag::Member { using type = s32&; };
	struct TypeE : Tag::Member { using type = s32&; };
	struct TypeF : Tag::Member { using type = s32&; };
	struct TypeG : Tag::Member { using type = s32&; };
	struct TypeH : Tag::Member { using type = s32&; };
	struct TypeI : Tag::Member { using type = s32&; };
	struct TypeJ : Tag::Member { using type = s32&; };
	struct TypeK : Tag::Member { using type = s32&; };
	struct TypeL : Tag::Member { using type = s32&; };
	struct TypeM : Tag::Member { using type = s32&; };
	struct TypeN : Tag::Member { using type = s32&; };
	struct TypeO : Tag::Member { using type = s32&; };
	struct TypeP : Tag::Member { using type = s32&; };
	struct TypeQ : Tag::Member { using type = s32&; };
	struct TypeR : Tag::Member { using type = s32&; };
};/* Tag::Structure GameData::CustomHouseTakeOutNum close */

template <> struct Data::Structure<GameData::CustomHouseTakeOutNum> : GameData::CustomHouseTakeOutNum {
	Member<TypeA> TypeA;
	Member<TypeB> TypeB;
	Member<TypeC> TypeC;
	Member<TypeD> TypeD;
	Member<TypeE> TypeE;
	Member<TypeF> TypeF;
	Member<TypeG> TypeG;
	Member<TypeH> TypeH;
	Member<TypeI> TypeI;
	Member<TypeJ> TypeJ;
	Member<TypeK> TypeK;
	Member<TypeL> TypeL;
	Member<TypeM> TypeM;
	Member<TypeN> TypeN;
	Member<TypeO> TypeO;
	Member<TypeP> TypeP;
	Member<TypeQ> TypeQ;
	Member<TypeR> TypeR;
	
	explicit Structure(Sav& s) : 
		TypeA { s.get<struct TypeA>() },
		TypeB { s.get<struct TypeB>() },
		TypeC { s.get<struct TypeC>() },
		TypeD { s.get<struct TypeD>() },
		TypeE { s.get<struct TypeE>() },
		TypeF { s.get<struct TypeF>() },
		TypeG { s.get<struct TypeG>() },
		TypeH { s.get<struct TypeH>() },
		TypeI { s.get<struct TypeI>() },
		TypeJ { s.get<struct TypeJ>() },
		TypeK { s.get<struct TypeK>() },
		TypeL { s.get<struct TypeL>() },
		TypeM { s.get<struct TypeM>() },
		TypeN { s.get<struct TypeN>() },
		TypeO { s.get<struct TypeO>() },
		TypeP { s.get<struct TypeP>() },
		TypeQ { s.get<struct TypeQ>() },
		TypeR { s.get<struct TypeR>() }
	{ }
};/* Data::Structure GameData::CustomHouseTakeOutNum close */

template <> hash_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeA> = murmurhash3::hash("CustomHouseTakeOutNum.TypeA");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeB> = murmurhash3::hash("CustomHouseTakeOutNum.TypeB");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeC> = murmurhash3::hash("CustomHouseTakeOutNum.TypeC");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeD> = murmurhash3::hash("CustomHouseTakeOutNum.TypeD");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeE> = murmurhash3::hash("CustomHouseTakeOutNum.TypeE");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeF> = murmurhash3::hash("CustomHouseTakeOutNum.TypeF");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeG> = murmurhash3::hash("CustomHouseTakeOutNum.TypeG");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeH> = murmurhash3::hash("CustomHouseTakeOutNum.TypeH");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeI> = murmurhash3::hash("CustomHouseTakeOutNum.TypeI");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeJ> = murmurhash3::hash("CustomHouseTakeOutNum.TypeJ");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeK> = murmurhash3::hash("CustomHouseTakeOutNum.TypeK");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeL> = murmurhash3::hash("CustomHouseTakeOutNum.TypeL");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeM> = murmurhash3::hash("CustomHouseTakeOutNum.TypeM");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeN> = murmurhash3::hash("CustomHouseTakeOutNum.TypeN");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeO> = murmurhash3::hash("CustomHouseTakeOutNum.TypeO");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeP> = murmurhash3::hash("CustomHouseTakeOutNum.TypeP");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeQ> = murmurhash3::hash("CustomHouseTakeOutNum.TypeQ");
template <> hash_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeR> = murmurhash3::hash("CustomHouseTakeOutNum.TypeR");