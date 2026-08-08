struct GameData : GameDataStructure {
struct OwnedHorseList : GameDataStructure {
struct Body : GameDataStructure {
struct EyeColor : GameDataMember {
using value_type = Enum::Array<EyeColor>;
enum enum_type : mmh32 {
Black = murmurhash3::hash("Black"),
Blue = murmurhash3::hash("Blue"),
};
constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Body.EyeColor") }; }
};
struct Pattern : GameDataMember {
using value_type = Enum::Array<Pattern>;
enum enum_type : mmh32 {
_00 = murmurhash3::hash("_00"),
_01 = murmurhash3::hash("_01"),
_02 = murmurhash3::hash("_02"),
_03 = murmurhash3::hash("_03"),
_04 = murmurhash3::hash("_04"),
_05 = murmurhash3::hash("_05"),
_06 = murmurhash3::hash("_06"),
};
constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Body.Pattern") }; }
};
struct NoseColor : GameDataStructure {
struct Blue : GameDataMember {
using value_type = array<u32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Body.NoseColor.Blue") }; }
};
struct Green : GameDataMember {
using value_type = array<u32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Body.NoseColor.Green") }; }
};
struct Red : GameDataMember {
using value_type = array<u32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Body.NoseColor.Red") }; }
};
struct value_type {
Blue::value_type Blue;
Green::value_type Green;
Red::value_type Red;
template <typename Sav>
value_type(Sav& s) : 
Blue { s.get((Promise<Blue::value_type>)(struct Blue){ }) },
Green { s.get((Promise<Green::value_type>)(struct Green){ }) },
Red { s.get((Promise<Red::value_type>)(struct Red){ }) }
{ }
};
};
struct PrimaryColor : GameDataStructure {
struct Blue : GameDataMember {
using value_type = array<u32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Body.PrimaryColor.Blue") }; }
};
struct Green : GameDataMember {
using value_type = array<u32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Body.PrimaryColor.Green") }; }
};
struct Red : GameDataMember {
using value_type = array<u32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Body.PrimaryColor.Red") }; }
};
struct value_type {
Blue::value_type Blue;
Green::value_type Green;
Red::value_type Red;
template <typename Sav>
value_type(Sav& s) : 
Blue { s.get((Promise<Blue::value_type>)(struct Blue){ }) },
Green { s.get((Promise<Green::value_type>)(struct Green){ }) },
Red { s.get((Promise<Red::value_type>)(struct Red){ }) }
{ }
};
};
struct SecondaryColor : GameDataStructure {
struct Blue : GameDataMember {
using value_type = array<u32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Body.SecondaryColor.Blue") }; }
};
struct Green : GameDataMember {
using value_type = array<u32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Body.SecondaryColor.Green") }; }
};
struct Red : GameDataMember {
using value_type = array<u32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Body.SecondaryColor.Red") }; }
};
struct value_type {
Blue::value_type Blue;
Green::value_type Green;
Red::value_type Red;
template <typename Sav>
value_type(Sav& s) : 
Blue { s.get((Promise<Blue::value_type>)(struct Blue){ }) },
Green { s.get((Promise<Green::value_type>)(struct Green){ }) },
Red { s.get((Promise<Red::value_type>)(struct Red){ }) }
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
value_type(Sav& s) : 
EyeColor { s.get((Promise<EyeColor::value_type>)(struct EyeColor){ }) },
Pattern { s.get((Promise<Pattern::value_type>)(struct Pattern){ }) },
NoseColor { s },
PrimaryColor { s },
SecondaryColor { s }
{ }
};
};
struct Mane : GameDataMember {
using value_type = Enum::Array<Mane>;
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
constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Mane") }; }
};
struct Rein : GameDataMember {
using value_type = Enum::Array<Rein>;
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
constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Rein") }; }
};
struct Saddle : GameDataMember {
using value_type = Enum::Array<Saddle>;
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
constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Saddle") }; }
};
struct Name : GameDataMember {
using value_type = array<wstring16>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Name") }; }
};
struct UidHash : GameDataMember {
using value_type = array<u64>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.UidHash") }; }
};
struct ActorName : GameDataMember {
using value_type = array<string64>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.ActorName") }; }
};
struct ChargeNum : GameDataMember {
using value_type = array<s32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.ChargeNum") }; }
};
struct ColorType : GameDataMember {
using value_type = array<s32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.ColorType") }; }
};
struct FootType : GameDataMember {
using value_type = array<s32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.FootType") }; }
};
struct HorsePower : GameDataMember {
using value_type = array<s32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.HorsePower") }; }
};
struct HorseType : GameDataMember {
using value_type = array<s32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.HorseType") }; }
};
struct RoomID : GameDataMember {
using value_type = array<s32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.RoomID") }; }
};
struct Speed : GameDataMember {
using value_type = array<s32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Speed") }; }
};
struct Toughness : GameDataMember {
using value_type = array<s32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Toughness") }; }
};
struct Familiarity : GameDataMember {
using value_type = array<float>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Familiarity") }; }
};
struct IsFamiliarityChecked : GameDataMember {
using value_type = array<bool>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.IsFamiliarityChecked") }; }
};
struct Hair : GameDataStructure {
struct PrimaryColor : GameDataStructure {
struct Blue : GameDataMember {
using value_type = array<u32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Hair.PrimaryColor.Blue") }; }
};
struct Green : GameDataMember {
using value_type = array<u32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Hair.PrimaryColor.Green") }; }
};
struct Red : GameDataMember {
using value_type = array<u32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Hair.PrimaryColor.Red") }; }
};
struct value_type {
Blue::value_type Blue;
Green::value_type Green;
Red::value_type Red;
template <typename Sav>
value_type(Sav& s) : 
Blue { s.get((Promise<Blue::value_type>)(struct Blue){ }) },
Green { s.get((Promise<Green::value_type>)(struct Green){ }) },
Red { s.get((Promise<Red::value_type>)(struct Red){ }) }
{ }
};
};
struct SecondaryColor : GameDataStructure {
struct Blue : GameDataMember {
using value_type = array<u32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Hair.SecondaryColor.Blue") }; }
};
struct Green : GameDataMember {
using value_type = array<u32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Hair.SecondaryColor.Green") }; }
};
struct Red : GameDataMember {
using value_type = array<u32>;

constexpr operator Promise<value_type>() noexcept { return { murmurhash3::hash("OwnedHorseList.Hair.SecondaryColor.Red") }; }
};
struct value_type {
Blue::value_type Blue;
Green::value_type Green;
Red::value_type Red;
template <typename Sav>
value_type(Sav& s) : 
Blue { s.get((Promise<Blue::value_type>)(struct Blue){ }) },
Green { s.get((Promise<Green::value_type>)(struct Green){ }) },
Red { s.get((Promise<Red::value_type>)(struct Red){ }) }
{ }
};
};
struct value_type {
PrimaryColor::value_type PrimaryColor;
SecondaryColor::value_type SecondaryColor;
template <typename Sav>
value_type(Sav& s) : 
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
value_type(Sav& s) : 
Body { s },
Mane { s.get((Promise<Mane::value_type>)(struct Mane){ }) },
Rein { s.get((Promise<Rein::value_type>)(struct Rein){ }) },
Saddle { s.get((Promise<Saddle::value_type>)(struct Saddle){ }) },
Name { s.get((Promise<Name::value_type>)(struct Name){ }) },
UidHash { s.get((Promise<UidHash::value_type>)(struct UidHash){ }) },
ActorName { s.get((Promise<ActorName::value_type>)(struct ActorName){ }) },
ChargeNum { s.get((Promise<ChargeNum::value_type>)(struct ChargeNum){ }) },
ColorType { s.get((Promise<ColorType::value_type>)(struct ColorType){ }) },
FootType { s.get((Promise<FootType::value_type>)(struct FootType){ }) },
HorsePower { s.get((Promise<HorsePower::value_type>)(struct HorsePower){ }) },
HorseType { s.get((Promise<HorseType::value_type>)(struct HorseType){ }) },
RoomID { s.get((Promise<RoomID::value_type>)(struct RoomID){ }) },
Speed { s.get((Promise<Speed::value_type>)(struct Speed){ }) },
Toughness { s.get((Promise<Toughness::value_type>)(struct Toughness){ }) },
Familiarity { s.get((Promise<Familiarity::value_type>)(struct Familiarity){ }) },
IsFamiliarityChecked { s.get((Promise<IsFamiliarityChecked::value_type>)(struct IsFamiliarityChecked){ }) },
Hair { s }
{ }
};
};
struct value_type {
OwnedHorseList::value_type OwnedHorseList;
template <typename Sav>
value_type(Sav& s) : 
OwnedHorseList { s }
{ }
};
};