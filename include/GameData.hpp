#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"
struct GameData : Tag::Structure {
struct OwnedHorseList;
}; /* Tag::Structure GameData close */

struct GameData::OwnedHorseList : Tag::Structure {
struct Body;
struct Mane : Tag::Enum { using value_type = ::Enum::Array<Mane>; enum enum_type : mmh32 { None = murmurhash3::hash("None"), Horse_Link_Mane = murmurhash3::hash("Horse_Link_Mane"), Horse_Link_Mane_01 = murmurhash3::hash("Horse_Link_Mane_01"), Horse_Link_Mane_02 = murmurhash3::hash("Horse_Link_Mane_02"), Horse_Link_Mane_03 = murmurhash3::hash("Horse_Link_Mane_03"), Horse_Link_Mane_04 = murmurhash3::hash("Horse_Link_Mane_04"), Horse_Link_Mane_05 = murmurhash3::hash("Horse_Link_Mane_05"), Horse_Link_Mane_06 = murmurhash3::hash("Horse_Link_Mane_06"), Horse_Link_Mane_07 = murmurhash3::hash("Horse_Link_Mane_07"), Horse_Link_Mane_08 = murmurhash3::hash("Horse_Link_Mane_08"), Horse_Link_Mane_09 = murmurhash3::hash("Horse_Link_Mane_09"), Horse_Link_Mane_00L = murmurhash3::hash("Horse_Link_Mane_00L"), Horse_Link_Mane_00S = murmurhash3::hash("Horse_Link_Mane_00S"), Horse_Link_Mane_10 = murmurhash3::hash("Horse_Link_Mane_10"), Horse_Link_Mane_11 = murmurhash3::hash("Horse_Link_Mane_11"), Horse_Link_Mane_12 = murmurhash3::hash("Horse_Link_Mane_12"), Horse_Link_Mane_01L = murmurhash3::hash("Horse_Link_Mane_01L"), }; };
struct Rein : Tag::Enum { using value_type = ::Enum::Array<Rein>; enum enum_type : mmh32 { None = murmurhash3::hash("None"), GameRomHorseReins_00 = murmurhash3::hash("GameRomHorseReins_00"), GameRomHorseReins_01 = murmurhash3::hash("GameRomHorseReins_01"), GameRomHorseReins_02 = murmurhash3::hash("GameRomHorseReins_02"), GameRomHorseReins_03 = murmurhash3::hash("GameRomHorseReins_03"), GameRomHorseReins_04 = murmurhash3::hash("GameRomHorseReins_04"), GameRomHorseReins_05 = murmurhash3::hash("GameRomHorseReins_05"), GameRomHorseReins_06 = murmurhash3::hash("GameRomHorseReins_06"), GameRomHorseReins_00L = murmurhash3::hash("GameRomHorseReins_00L"), GameRomHorseReins_00S = murmurhash3::hash("GameRomHorseReins_00S"), }; };
struct Saddle : Tag::Enum { using value_type = ::Enum::Array<Saddle>; enum enum_type : mmh32 { None = murmurhash3::hash("None"), GameRomHorseSaddle_00 = murmurhash3::hash("GameRomHorseSaddle_00"), GameRomHorseSaddle_01 = murmurhash3::hash("GameRomHorseSaddle_01"), GameRomHorseSaddle_02 = murmurhash3::hash("GameRomHorseSaddle_02"), GameRomHorseSaddle_03 = murmurhash3::hash("GameRomHorseSaddle_03"), GameRomHorseSaddle_04 = murmurhash3::hash("GameRomHorseSaddle_04"), GameRomHorseSaddle_05 = murmurhash3::hash("GameRomHorseSaddle_05"), GameRomHorseSaddle_06 = murmurhash3::hash("GameRomHorseSaddle_06"), GameRomHorseSaddle_00L = murmurhash3::hash("GameRomHorseSaddle_00L"), GameRomHorseSaddle_00S = murmurhash3::hash("GameRomHorseSaddle_00S"), GameRomHorseSaddle_07 = murmurhash3::hash("GameRomHorseSaddle_07"), }; };
struct Name : Tag::Member { using value_type = ::array<wstring16>; };
struct UidHash : Tag::Member { using value_type = ::array<u64>; };
struct ActorName : Tag::Member { using value_type = ::array<string64>; };
struct ChargeNum : Tag::Member { using value_type = ::array<s32>; };
struct ColorType : Tag::Member { using value_type = ::array<s32>; };
struct FootType : Tag::Member { using value_type = ::array<s32>; };
struct HorsePower : Tag::Member { using value_type = ::array<s32>; };
struct HorseType : Tag::Member { using value_type = ::array<s32>; };
struct RoomID : Tag::Member { using value_type = ::array<s32>; };
struct Speed : Tag::Member { using value_type = ::array<s32>; };
struct Toughness : Tag::Member { using value_type = ::array<s32>; };
struct Familiarity : Tag::Member { using value_type = ::array<float>; };
struct IsFamiliarityChecked : Tag::Member { using value_type = ::array<bool>; };
struct Hair;
}; /* Tag::Structure GameData::OwnedHorseList close */

struct GameData::OwnedHorseList::Body : Tag::Structure {
struct EyeColor : Tag::Enum { using value_type = ::Enum::Array<EyeColor>; enum enum_type : mmh32 { Black = murmurhash3::hash("Black"), Blue = murmurhash3::hash("Blue"), }; };
struct Pattern : Tag::Enum { using value_type = ::Enum::Array<Pattern>; enum enum_type : mmh32 { _00 = murmurhash3::hash("_00"), _01 = murmurhash3::hash("_01"), _02 = murmurhash3::hash("_02"), _03 = murmurhash3::hash("_03"), _04 = murmurhash3::hash("_04"), _05 = murmurhash3::hash("_05"), _06 = murmurhash3::hash("_06"), }; };
struct NoseColor;
struct PrimaryColor;
struct SecondaryColor;
}; /* Tag::Structure GameData::OwnedHorseList::Body close */

struct GameData::OwnedHorseList::Body::NoseColor : Tag::Structure {
struct Blue : Tag::Member { using value_type = ::array<u32>; };
struct Green : Tag::Member { using value_type = ::array<u32>; };
struct Red : Tag::Member { using value_type = ::array<u32>; };
}; /* Tag::Structure GameData::OwnedHorseList::Body::NoseColor close */

template <> struct Data::Structure<GameData::OwnedHorseList::Body::NoseColor> : GameData::OwnedHorseList::Body::NoseColor {
Blue::value_type Blue;
Green::value_type Green;
Red::value_type Red;
Structure(Sav& s) : 
Blue { s.get<struct Blue>() },
Green { s.get<struct Green>() },
Red { s.get<struct Red>() }
{ }
}; /* Data::Structure GameData::OwnedHorseList::Body::NoseColor close */

template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::NoseColor::Blue> = murmurhash3::hash("OwnedHorseList.Body.NoseColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::NoseColor::Green> = murmurhash3::hash("OwnedHorseList.Body.NoseColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::NoseColor::Red> = murmurhash3::hash("OwnedHorseList.Body.NoseColor.Red");
struct GameData::OwnedHorseList::Body::PrimaryColor : Tag::Structure {
struct Blue : Tag::Member { using value_type = ::array<u32>; };
struct Green : Tag::Member { using value_type = ::array<u32>; };
struct Red : Tag::Member { using value_type = ::array<u32>; };
}; /* Tag::Structure GameData::OwnedHorseList::Body::PrimaryColor close */

template <> struct Data::Structure<GameData::OwnedHorseList::Body::PrimaryColor> : GameData::OwnedHorseList::Body::PrimaryColor {
Blue::value_type Blue;
Green::value_type Green;
Red::value_type Red;
Structure(Sav& s) : 
Blue { s.get<struct Blue>() },
Green { s.get<struct Green>() },
Red { s.get<struct Red>() }
{ }
}; /* Data::Structure GameData::OwnedHorseList::Body::PrimaryColor close */

template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::PrimaryColor::Blue> = murmurhash3::hash("OwnedHorseList.Body.PrimaryColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::PrimaryColor::Green> = murmurhash3::hash("OwnedHorseList.Body.PrimaryColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::PrimaryColor::Red> = murmurhash3::hash("OwnedHorseList.Body.PrimaryColor.Red");
struct GameData::OwnedHorseList::Body::SecondaryColor : Tag::Structure {
struct Blue : Tag::Member { using value_type = ::array<u32>; };
struct Green : Tag::Member { using value_type = ::array<u32>; };
struct Red : Tag::Member { using value_type = ::array<u32>; };
}; /* Tag::Structure GameData::OwnedHorseList::Body::SecondaryColor close */

template <> struct Data::Structure<GameData::OwnedHorseList::Body::SecondaryColor> : GameData::OwnedHorseList::Body::SecondaryColor {
Blue::value_type Blue;
Green::value_type Green;
Red::value_type Red;
Structure(Sav& s) : 
Blue { s.get<struct Blue>() },
Green { s.get<struct Green>() },
Red { s.get<struct Red>() }
{ }
}; /* Data::Structure GameData::OwnedHorseList::Body::SecondaryColor close */

template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::SecondaryColor::Blue> = murmurhash3::hash("OwnedHorseList.Body.SecondaryColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::SecondaryColor::Green> = murmurhash3::hash("OwnedHorseList.Body.SecondaryColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::SecondaryColor::Red> = murmurhash3::hash("OwnedHorseList.Body.SecondaryColor.Red");
template <> struct Data::Structure<GameData::OwnedHorseList::Body> : GameData::OwnedHorseList::Body {
EyeColor::value_type EyeColor;
Pattern::value_type Pattern;
Structure<NoseColor> NoseColor;
Structure<PrimaryColor> PrimaryColor;
Structure<SecondaryColor> SecondaryColor;
Structure(Sav& s) : 
EyeColor { s.get<struct EyeColor>() },
Pattern { s.get<struct Pattern>() },
NoseColor { s },
PrimaryColor { s },
SecondaryColor { s }
{ }
}; /* Data::Structure GameData::OwnedHorseList::Body close */

template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::EyeColor> = murmurhash3::hash("OwnedHorseList.Body.EyeColor");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Body::Pattern> = murmurhash3::hash("OwnedHorseList.Body.Pattern");
struct GameData::OwnedHorseList::Hair : Tag::Structure {
struct PrimaryColor;
struct SecondaryColor;
}; /* Tag::Structure GameData::OwnedHorseList::Hair close */

struct GameData::OwnedHorseList::Hair::PrimaryColor : Tag::Structure {
struct Blue : Tag::Member { using value_type = ::array<u32>; };
struct Green : Tag::Member { using value_type = ::array<u32>; };
struct Red : Tag::Member { using value_type = ::array<u32>; };
}; /* Tag::Structure GameData::OwnedHorseList::Hair::PrimaryColor close */

template <> struct Data::Structure<GameData::OwnedHorseList::Hair::PrimaryColor> : GameData::OwnedHorseList::Hair::PrimaryColor {
Blue::value_type Blue;
Green::value_type Green;
Red::value_type Red;
Structure(Sav& s) : 
Blue { s.get<struct Blue>() },
Green { s.get<struct Green>() },
Red { s.get<struct Red>() }
{ }
}; /* Data::Structure GameData::OwnedHorseList::Hair::PrimaryColor close */

template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Hair::PrimaryColor::Blue> = murmurhash3::hash("OwnedHorseList.Hair.PrimaryColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Hair::PrimaryColor::Green> = murmurhash3::hash("OwnedHorseList.Hair.PrimaryColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Hair::PrimaryColor::Red> = murmurhash3::hash("OwnedHorseList.Hair.PrimaryColor.Red");
struct GameData::OwnedHorseList::Hair::SecondaryColor : Tag::Structure {
struct Blue : Tag::Member { using value_type = ::array<u32>; };
struct Green : Tag::Member { using value_type = ::array<u32>; };
struct Red : Tag::Member { using value_type = ::array<u32>; };
}; /* Tag::Structure GameData::OwnedHorseList::Hair::SecondaryColor close */

template <> struct Data::Structure<GameData::OwnedHorseList::Hair::SecondaryColor> : GameData::OwnedHorseList::Hair::SecondaryColor {
Blue::value_type Blue;
Green::value_type Green;
Red::value_type Red;
Structure(Sav& s) : 
Blue { s.get<struct Blue>() },
Green { s.get<struct Green>() },
Red { s.get<struct Red>() }
{ }
}; /* Data::Structure GameData::OwnedHorseList::Hair::SecondaryColor close */

template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Hair::SecondaryColor::Blue> = murmurhash3::hash("OwnedHorseList.Hair.SecondaryColor.Blue");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Hair::SecondaryColor::Green> = murmurhash3::hash("OwnedHorseList.Hair.SecondaryColor.Green");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Hair::SecondaryColor::Red> = murmurhash3::hash("OwnedHorseList.Hair.SecondaryColor.Red");
template <> struct Data::Structure<GameData::OwnedHorseList::Hair> : GameData::OwnedHorseList::Hair {
Structure<PrimaryColor> PrimaryColor;
Structure<SecondaryColor> SecondaryColor;
Structure(Sav& s) : 
PrimaryColor { s },
SecondaryColor { s }
{ }
}; /* Data::Structure GameData::OwnedHorseList::Hair close */

template <> struct Data::Structure<GameData::OwnedHorseList> : GameData::OwnedHorseList {
Structure<Body> Body;
Mane::value_type Mane;
Rein::value_type Rein;
Saddle::value_type Saddle;
Name::value_type Name;
UidHash::value_type UidHash;
ActorName::value_type ActorName;
ChargeNum::value_type ChargeNum;
ColorType::value_type ColorType;
FootType::value_type FootType;
HorsePower::value_type HorsePower;
HorseType::value_type HorseType;
RoomID::value_type RoomID;
Speed::value_type Speed;
Toughness::value_type Toughness;
Familiarity::value_type Familiarity;
IsFamiliarityChecked::value_type IsFamiliarityChecked;
Structure<Hair> Hair;
Structure(Sav& s) : 
Body { s },
Mane { s.get<struct Mane>() },
Rein { s.get<struct Rein>() },
Saddle { s.get<struct Saddle>() },
Name { s.get<struct Name>() },
UidHash { s.get<struct UidHash>() },
ActorName { s.get<struct ActorName>() },
ChargeNum { s.get<struct ChargeNum>() },
ColorType { s.get<struct ColorType>() },
FootType { s.get<struct FootType>() },
HorsePower { s.get<struct HorsePower>() },
HorseType { s.get<struct HorseType>() },
RoomID { s.get<struct RoomID>() },
Speed { s.get<struct Speed>() },
Toughness { s.get<struct Toughness>() },
Familiarity { s.get<struct Familiarity>() },
IsFamiliarityChecked { s.get<struct IsFamiliarityChecked>() },
Hair { s }
{ }
}; /* Data::Structure GameData::OwnedHorseList close */

template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Mane> = murmurhash3::hash("OwnedHorseList.Mane");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Rein> = murmurhash3::hash("OwnedHorseList.Rein");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Saddle> = murmurhash3::hash("OwnedHorseList.Saddle");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Name> = murmurhash3::hash("OwnedHorseList.Name");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::UidHash> = murmurhash3::hash("OwnedHorseList.UidHash");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::ActorName> = murmurhash3::hash("OwnedHorseList.ActorName");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::ChargeNum> = murmurhash3::hash("OwnedHorseList.ChargeNum");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::ColorType> = murmurhash3::hash("OwnedHorseList.ColorType");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::FootType> = murmurhash3::hash("OwnedHorseList.FootType");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::HorsePower> = murmurhash3::hash("OwnedHorseList.HorsePower");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::HorseType> = murmurhash3::hash("OwnedHorseList.HorseType");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::RoomID> = murmurhash3::hash("OwnedHorseList.RoomID");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Speed> = murmurhash3::hash("OwnedHorseList.Speed");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Toughness> = murmurhash3::hash("OwnedHorseList.Toughness");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::Familiarity> = murmurhash3::hash("OwnedHorseList.Familiarity");
template <> hash_t constexpr Data::Hashtable<GameData::OwnedHorseList::IsFamiliarityChecked> = murmurhash3::hash("OwnedHorseList.IsFamiliarityChecked");
template <> struct Data::Structure<GameData> : GameData {
Structure<OwnedHorseList> OwnedHorseList;
Structure(Sav& s) : 
OwnedHorseList { s }
{ }
}; /* Data::Structure GameData close */
