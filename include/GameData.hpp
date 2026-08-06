struct GameData : GameDataStructure {
struct OwnedHorseList : GameDataStructure {
struct Body : GameDataStructure {
struct EyeColor : GameDataEnum {
enum enum_type : mmh32 {
Black = murmurhash3::hash("Black"),
Blue = murmurhash3::hash("Blue"),
};
using value_type = Enum::Array<EyeColor>;
static constexpr ::Promise<value_type> metadata{ murmurhash3::hash("OwnedHorseList.Body.EyeColor") };
};
struct Pattern : GameDataEnum {
enum enum_type : mmh32 {
_00 = murmurhash3::hash("_00"),
_01 = murmurhash3::hash("_01"),
_02 = murmurhash3::hash("_02"),
_03 = murmurhash3::hash("_03"),
_04 = murmurhash3::hash("_04"),
_05 = murmurhash3::hash("_05"),
_06 = murmurhash3::hash("_06"),
};
using value_type = Enum::Array<Pattern>;
static constexpr ::Promise<value_type> metadata{ murmurhash3::hash("OwnedHorseList.Body.Pattern") };
};
struct NoseColor : GameDataStructure {
struct Blue : GameDataMember {
using value_type = array<u32>;
value_type value;
template <typename Sav>
explicit Blue(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.Body.NoseColor.Blue") };
};
struct Green : GameDataMember {
using value_type = array<u32>;
value_type value;
template <typename Sav>
explicit Green(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.Body.NoseColor.Green") };
};
struct Red : GameDataMember {
using value_type = array<u32>;
value_type value;
template <typename Sav>
explicit Red(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.Body.NoseColor.Red") };
};
struct value_type {
Blue::value_type Blue;
Green::value_type Green;
Red::value_type Red;
template <typename Sav>
explicit value_type(Sav& s) : 
Blue { s.get(Blue::metadata) },
Green { s.get(Green::metadata) },
Red { s.get(Red::metadata) }
{ }
};
};
struct PrimaryColor : GameDataStructure {
struct Blue : GameDataMember {
using value_type = array<u32>;
value_type value;
template <typename Sav>
explicit Blue(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.Body.PrimaryColor.Blue") };
};
struct Green : GameDataMember {
using value_type = array<u32>;
value_type value;
template <typename Sav>
explicit Green(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.Body.PrimaryColor.Green") };
};
struct Red : GameDataMember {
using value_type = array<u32>;
value_type value;
template <typename Sav>
explicit Red(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.Body.PrimaryColor.Red") };
};
struct value_type {
Blue::value_type Blue;
Green::value_type Green;
Red::value_type Red;
template <typename Sav>
explicit value_type(Sav& s) : 
Blue { s.get(Blue::metadata) },
Green { s.get(Green::metadata) },
Red { s.get(Red::metadata) }
{ }
};
};
struct SecondaryColor : GameDataStructure {
struct Blue : GameDataMember {
using value_type = array<u32>;
value_type value;
template <typename Sav>
explicit Blue(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.Body.SecondaryColor.Blue") };
};
struct Green : GameDataMember {
using value_type = array<u32>;
value_type value;
template <typename Sav>
explicit Green(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.Body.SecondaryColor.Green") };
};
struct Red : GameDataMember {
using value_type = array<u32>;
value_type value;
template <typename Sav>
explicit Red(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.Body.SecondaryColor.Red") };
};
struct value_type {
Blue::value_type Blue;
Green::value_type Green;
Red::value_type Red;
template <typename Sav>
explicit value_type(Sav& s) : 
Blue { s.get(Blue::metadata) },
Green { s.get(Green::metadata) },
Red { s.get(Red::metadata) }
{ }
};
};
struct value_type {
EyeColor::value_type EyeColor;
Pattern::value_type Pattern;
NoseColor::value_type NoseColor;
PrimaryColor::value_type PrimaryColor;
SecondaryColor::value_type SecondaryColor;
template <typename Sav>
explicit value_type(Sav& s) : 
EyeColor { s.get(EyeColor::metadata) },
Pattern { s.get(Pattern::metadata) },
NoseColor { s },
PrimaryColor { s },
SecondaryColor { s }
{ }
};
};
struct Mane : GameDataEnum {
enum enum_type : mmh32 {
None = murmurhash3::hash("None"),
Horse_Link_Mane = murmurhash3::hash("Horse_Link_Mane"),
Horse_Link_Mane_01 = murmurhash3::hash("Horse_Link_Mane_01"),
Horse_Link_Mane_02 = murmurhash3::hash("Horse_Link_Mane_02"),
Horse_Link_Mane_03 = murmurhash3::hash("Horse_Link_Mane_03"),
Horse_Link_Mane_04 = murmurhash3::hash("Horse_Link_Mane_04"),
Horse_Link_Mane_05 = murmurhash3::hash("Horse_Link_Mane_05"),
Horse_Link_Mane_06 = murmurhash3::hash("Horse_Link_Mane_06"),
Horse_Link_Mane_07 = murmurhash3::hash("Horse_Link_Mane_07"),
Horse_Link_Mane_08 = murmurhash3::hash("Horse_Link_Mane_08"),
Horse_Link_Mane_09 = murmurhash3::hash("Horse_Link_Mane_09"),
Horse_Link_Mane_00L = murmurhash3::hash("Horse_Link_Mane_00L"),
Horse_Link_Mane_00S = murmurhash3::hash("Horse_Link_Mane_00S"),
Horse_Link_Mane_10 = murmurhash3::hash("Horse_Link_Mane_10"),
Horse_Link_Mane_11 = murmurhash3::hash("Horse_Link_Mane_11"),
Horse_Link_Mane_12 = murmurhash3::hash("Horse_Link_Mane_12"),
Horse_Link_Mane_01L = murmurhash3::hash("Horse_Link_Mane_01L"),
};
using value_type = Enum::Array<Mane>;
static constexpr ::Promise<value_type> metadata{ murmurhash3::hash("OwnedHorseList.Mane") };
};
struct Rein : GameDataEnum {
enum enum_type : mmh32 {
None = murmurhash3::hash("None"),
GameRomHorseReins_00 = murmurhash3::hash("GameRomHorseReins_00"),
GameRomHorseReins_01 = murmurhash3::hash("GameRomHorseReins_01"),
GameRomHorseReins_02 = murmurhash3::hash("GameRomHorseReins_02"),
GameRomHorseReins_03 = murmurhash3::hash("GameRomHorseReins_03"),
GameRomHorseReins_04 = murmurhash3::hash("GameRomHorseReins_04"),
GameRomHorseReins_05 = murmurhash3::hash("GameRomHorseReins_05"),
GameRomHorseReins_06 = murmurhash3::hash("GameRomHorseReins_06"),
GameRomHorseReins_00L = murmurhash3::hash("GameRomHorseReins_00L"),
GameRomHorseReins_00S = murmurhash3::hash("GameRomHorseReins_00S"),
};
using value_type = Enum::Array<Rein>;
static constexpr ::Promise<value_type> metadata{ murmurhash3::hash("OwnedHorseList.Rein") };
};
struct Saddle : GameDataEnum {
enum enum_type : mmh32 {
None = murmurhash3::hash("None"),
GameRomHorseSaddle_00 = murmurhash3::hash("GameRomHorseSaddle_00"),
GameRomHorseSaddle_01 = murmurhash3::hash("GameRomHorseSaddle_01"),
GameRomHorseSaddle_02 = murmurhash3::hash("GameRomHorseSaddle_02"),
GameRomHorseSaddle_03 = murmurhash3::hash("GameRomHorseSaddle_03"),
GameRomHorseSaddle_04 = murmurhash3::hash("GameRomHorseSaddle_04"),
GameRomHorseSaddle_05 = murmurhash3::hash("GameRomHorseSaddle_05"),
GameRomHorseSaddle_06 = murmurhash3::hash("GameRomHorseSaddle_06"),
GameRomHorseSaddle_00L = murmurhash3::hash("GameRomHorseSaddle_00L"),
GameRomHorseSaddle_00S = murmurhash3::hash("GameRomHorseSaddle_00S"),
GameRomHorseSaddle_07 = murmurhash3::hash("GameRomHorseSaddle_07"),
};
using value_type = Enum::Array<Saddle>;
static constexpr ::Promise<value_type> metadata{ murmurhash3::hash("OwnedHorseList.Saddle") };
};
struct Name : GameDataMember {
using value_type = array<wstring16>;
value_type value;
template <typename Sav>
explicit Name(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.Name") };
};
struct UidHash : GameDataMember {
using value_type = array<u64>;
value_type value;
template <typename Sav>
explicit UidHash(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.UidHash") };
};
struct ActorName : GameDataMember {
using value_type = array<string64>;
value_type value;
template <typename Sav>
explicit ActorName(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.ActorName") };
};
struct ChargeNum : GameDataMember {
using value_type = array<s32>;
value_type value;
template <typename Sav>
explicit ChargeNum(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.ChargeNum") };
};
struct ColorType : GameDataMember {
using value_type = array<s32>;
value_type value;
template <typename Sav>
explicit ColorType(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.ColorType") };
};
struct FootType : GameDataMember {
using value_type = array<s32>;
value_type value;
template <typename Sav>
explicit FootType(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.FootType") };
};
struct HorsePower : GameDataMember {
using value_type = array<s32>;
value_type value;
template <typename Sav>
explicit HorsePower(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.HorsePower") };
};
struct HorseType : GameDataMember {
using value_type = array<s32>;
value_type value;
template <typename Sav>
explicit HorseType(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.HorseType") };
};
struct RoomID : GameDataMember {
using value_type = array<s32>;
value_type value;
template <typename Sav>
explicit RoomID(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.RoomID") };
};
struct Speed : GameDataMember {
using value_type = array<s32>;
value_type value;
template <typename Sav>
explicit Speed(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.Speed") };
};
struct Toughness : GameDataMember {
using value_type = array<s32>;
value_type value;
template <typename Sav>
explicit Toughness(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.Toughness") };
};
struct Familiarity : GameDataMember {
using value_type = array<float>;
value_type value;
template <typename Sav>
explicit Familiarity(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.Familiarity") };
};
struct IsFamiliarityChecked : GameDataMember {
using value_type = array<bool>;
value_type value;
template <typename Sav>
explicit IsFamiliarityChecked(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.IsFamiliarityChecked") };
};
struct Hair : GameDataStructure {
struct PrimaryColor : GameDataStructure {
struct Blue : GameDataMember {
using value_type = array<u32>;
value_type value;
template <typename Sav>
explicit Blue(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.Hair.PrimaryColor.Blue") };
};
struct Green : GameDataMember {
using value_type = array<u32>;
value_type value;
template <typename Sav>
explicit Green(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.Hair.PrimaryColor.Green") };
};
struct Red : GameDataMember {
using value_type = array<u32>;
value_type value;
template <typename Sav>
explicit Red(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.Hair.PrimaryColor.Red") };
};
struct value_type {
Blue::value_type Blue;
Green::value_type Green;
Red::value_type Red;
template <typename Sav>
explicit value_type(Sav& s) : 
Blue { s.get(Blue::metadata) },
Green { s.get(Green::metadata) },
Red { s.get(Red::metadata) }
{ }
};
};
struct SecondaryColor : GameDataStructure {
struct Blue : GameDataMember {
using value_type = array<u32>;
value_type value;
template <typename Sav>
explicit Blue(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.Hair.SecondaryColor.Blue") };
};
struct Green : GameDataMember {
using value_type = array<u32>;
value_type value;
template <typename Sav>
explicit Green(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.Hair.SecondaryColor.Green") };
};
struct Red : GameDataMember {
using value_type = array<u32>;
value_type value;
template <typename Sav>
explicit Red(Sav& s) : 
value { s.get(metadata) }
{ }
static constexpr ::Promise<value_type> metadata { murmurhash3::hash("OwnedHorseList.Hair.SecondaryColor.Red") };
};
struct value_type {
Blue::value_type Blue;
Green::value_type Green;
Red::value_type Red;
template <typename Sav>
explicit value_type(Sav& s) : 
Blue { s.get(Blue::metadata) },
Green { s.get(Green::metadata) },
Red { s.get(Red::metadata) }
{ }
};
};
struct value_type {
PrimaryColor::value_type PrimaryColor;
SecondaryColor::value_type SecondaryColor;
template <typename Sav>
explicit value_type(Sav& s) : 
PrimaryColor { s },
SecondaryColor { s }
{ }
};
};
struct value_type {
Body::value_type Body;
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
Hair::value_type Hair;
template <typename Sav>
explicit value_type(Sav& s) : 
Body { s },
Mane { s.get(Mane::metadata) },
Rein { s.get(Rein::metadata) },
Saddle { s.get(Saddle::metadata) },
Name { s.get(Name::metadata) },
UidHash { s.get(UidHash::metadata) },
ActorName { s.get(ActorName::metadata) },
ChargeNum { s.get(ChargeNum::metadata) },
ColorType { s.get(ColorType::metadata) },
FootType { s.get(FootType::metadata) },
HorsePower { s.get(HorsePower::metadata) },
HorseType { s.get(HorseType::metadata) },
RoomID { s.get(RoomID::metadata) },
Speed { s.get(Speed::metadata) },
Toughness { s.get(Toughness::metadata) },
Familiarity { s.get(Familiarity::metadata) },
IsFamiliarityChecked { s.get(IsFamiliarityChecked::metadata) },
Hair { s }
{ }
};
};
struct value_type {
OwnedHorseList::value_type OwnedHorseList;
template <typename Sav>
explicit value_type(Sav& s) : 
OwnedHorseList { s }
{ }
};
};