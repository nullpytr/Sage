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

template <> hash_value_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeA> { "CustomHouseTakeOutNum.TypeA" };
template <> hash_value_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeB> { "CustomHouseTakeOutNum.TypeB" };
template <> hash_value_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeC> { "CustomHouseTakeOutNum.TypeC" };
template <> hash_value_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeD> { "CustomHouseTakeOutNum.TypeD" };
template <> hash_value_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeE> { "CustomHouseTakeOutNum.TypeE" };
template <> hash_value_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeF> { "CustomHouseTakeOutNum.TypeF" };
template <> hash_value_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeG> { "CustomHouseTakeOutNum.TypeG" };
template <> hash_value_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeH> { "CustomHouseTakeOutNum.TypeH" };
template <> hash_value_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeI> { "CustomHouseTakeOutNum.TypeI" };
template <> hash_value_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeJ> { "CustomHouseTakeOutNum.TypeJ" };
template <> hash_value_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeK> { "CustomHouseTakeOutNum.TypeK" };
template <> hash_value_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeL> { "CustomHouseTakeOutNum.TypeL" };
template <> hash_value_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeM> { "CustomHouseTakeOutNum.TypeM" };
template <> hash_value_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeN> { "CustomHouseTakeOutNum.TypeN" };
template <> hash_value_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeO> { "CustomHouseTakeOutNum.TypeO" };
template <> hash_value_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeP> { "CustomHouseTakeOutNum.TypeP" };
template <> hash_value_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeQ> { "CustomHouseTakeOutNum.TypeQ" };
template <> hash_value_t constexpr Data::Hashtable<GameData::CustomHouseTakeOutNum::TypeR> { "CustomHouseTakeOutNum.TypeR" };