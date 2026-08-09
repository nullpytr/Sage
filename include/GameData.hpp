struct GameData : Data::Structure {
struct OwnedHorseList : Data::Structure {
struct Body : Data::Structure {
struct EyeColor : Data::Member {
using value_type = Enum::Array<EyeColor>;
enum enum_type : mmh32 {
Black = murmurhash3::hash("Black"),
Blue = murmurhash3::hash("Blue"),
};
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Body.EyeColor") }; }
}; /* Data::Member GameData::OwnedHorseList::Body::EyeColor close */
struct Pattern : Data::Member {
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
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Body.Pattern") }; }
}; /* Data::Member GameData::OwnedHorseList::Body::Pattern close */
struct NoseColor : Data::Structure {
struct Blue : Data::Member {
using value_type = array<u32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Body.NoseColor.Blue") }; }
}; /* Data::Member GameData::OwnedHorseList::Body::NoseColor::Blue close */
struct Green : Data::Member {
using value_type = array<u32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Body.NoseColor.Green") }; }
}; /* Data::Member GameData::OwnedHorseList::Body::NoseColor::Green close */
struct Red : Data::Member {
using value_type = array<u32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Body.NoseColor.Red") }; }
}; /* Data::Member GameData::OwnedHorseList::Body::NoseColor::Red close */
}; /* Data::Structure GameData::OwnedHorseList::Body::NoseColor close */
struct PrimaryColor : Data::Structure {
struct Blue : Data::Member {
using value_type = array<u32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Body.PrimaryColor.Blue") }; }
}; /* Data::Member GameData::OwnedHorseList::Body::PrimaryColor::Blue close */
struct Green : Data::Member {
using value_type = array<u32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Body.PrimaryColor.Green") }; }
}; /* Data::Member GameData::OwnedHorseList::Body::PrimaryColor::Green close */
struct Red : Data::Member {
using value_type = array<u32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Body.PrimaryColor.Red") }; }
}; /* Data::Member GameData::OwnedHorseList::Body::PrimaryColor::Red close */
}; /* Data::Structure GameData::OwnedHorseList::Body::PrimaryColor close */
struct SecondaryColor : Data::Structure {
struct Blue : Data::Member {
using value_type = array<u32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Body.SecondaryColor.Blue") }; }
}; /* Data::Member GameData::OwnedHorseList::Body::SecondaryColor::Blue close */
struct Green : Data::Member {
using value_type = array<u32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Body.SecondaryColor.Green") }; }
}; /* Data::Member GameData::OwnedHorseList::Body::SecondaryColor::Green close */
struct Red : Data::Member {
using value_type = array<u32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Body.SecondaryColor.Red") }; }
}; /* Data::Member GameData::OwnedHorseList::Body::SecondaryColor::Red close */
}; /* Data::Structure GameData::OwnedHorseList::Body::SecondaryColor close */
}; /* Data::Structure GameData::OwnedHorseList::Body close */
struct Mane : Data::Member {
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
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Mane") }; }
}; /* Data::Member GameData::OwnedHorseList::Mane close */
struct Rein : Data::Member {
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
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Rein") }; }
}; /* Data::Member GameData::OwnedHorseList::Rein close */
struct Saddle : Data::Member {
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
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Saddle") }; }
}; /* Data::Member GameData::OwnedHorseList::Saddle close */
struct Name : Data::Member {
using value_type = array<wstring16>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Name") }; }
}; /* Data::Member GameData::OwnedHorseList::Name close */
struct UidHash : Data::Member {
using value_type = array<u64>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.UidHash") }; }
}; /* Data::Member GameData::OwnedHorseList::UidHash close */
struct ActorName : Data::Member {
using value_type = array<string64>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.ActorName") }; }
}; /* Data::Member GameData::OwnedHorseList::ActorName close */
struct ChargeNum : Data::Member {
using value_type = array<s32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.ChargeNum") }; }
}; /* Data::Member GameData::OwnedHorseList::ChargeNum close */
struct ColorType : Data::Member {
using value_type = array<s32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.ColorType") }; }
}; /* Data::Member GameData::OwnedHorseList::ColorType close */
struct FootType : Data::Member {
using value_type = array<s32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.FootType") }; }
}; /* Data::Member GameData::OwnedHorseList::FootType close */
struct HorsePower : Data::Member {
using value_type = array<s32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.HorsePower") }; }
}; /* Data::Member GameData::OwnedHorseList::HorsePower close */
struct HorseType : Data::Member {
using value_type = array<s32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.HorseType") }; }
}; /* Data::Member GameData::OwnedHorseList::HorseType close */
struct RoomID : Data::Member {
using value_type = array<s32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.RoomID") }; }
}; /* Data::Member GameData::OwnedHorseList::RoomID close */
struct Speed : Data::Member {
using value_type = array<s32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Speed") }; }
}; /* Data::Member GameData::OwnedHorseList::Speed close */
struct Toughness : Data::Member {
using value_type = array<s32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Toughness") }; }
}; /* Data::Member GameData::OwnedHorseList::Toughness close */
struct Familiarity : Data::Member {
using value_type = array<float>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Familiarity") }; }
}; /* Data::Member GameData::OwnedHorseList::Familiarity close */
struct IsFamiliarityChecked : Data::Member {
using value_type = array<bool>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.IsFamiliarityChecked") }; }
}; /* Data::Member GameData::OwnedHorseList::IsFamiliarityChecked close */
struct Hair : Data::Structure {
struct PrimaryColor : Data::Structure {
struct Blue : Data::Member {
using value_type = array<u32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Hair.PrimaryColor.Blue") }; }
}; /* Data::Member GameData::OwnedHorseList::Hair::PrimaryColor::Blue close */
struct Green : Data::Member {
using value_type = array<u32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Hair.PrimaryColor.Green") }; }
}; /* Data::Member GameData::OwnedHorseList::Hair::PrimaryColor::Green close */
struct Red : Data::Member {
using value_type = array<u32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Hair.PrimaryColor.Red") }; }
}; /* Data::Member GameData::OwnedHorseList::Hair::PrimaryColor::Red close */
}; /* Data::Structure GameData::OwnedHorseList::Hair::PrimaryColor close */
struct SecondaryColor : Data::Structure {
struct Blue : Data::Member {
using value_type = array<u32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Hair.SecondaryColor.Blue") }; }
}; /* Data::Member GameData::OwnedHorseList::Hair::SecondaryColor::Blue close */
struct Green : Data::Member {
using value_type = array<u32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Hair.SecondaryColor.Green") }; }
}; /* Data::Member GameData::OwnedHorseList::Hair::SecondaryColor::Green close */
struct Red : Data::Member {
using value_type = array<u32>;
constexpr operator Promise<value_type>() const noexcept { return { murmurhash3::hash("OwnedHorseList.Hair.SecondaryColor.Red") }; }
}; /* Data::Member GameData::OwnedHorseList::Hair::SecondaryColor::Red close */
}; /* Data::Structure GameData::OwnedHorseList::Hair::SecondaryColor close */
}; /* Data::Structure GameData::OwnedHorseList::Hair close */
}; /* Data::Structure GameData::OwnedHorseList close */
}; /* Data::Structure GameData close */
namespace Data {
template <>
struct View<GameData::OwnedHorseList::Body::NoseColor> {
using S = GameData::OwnedHorseList::Body::NoseColor;
S::Blue::value_type Blue;
S::Green::value_type Green;
S::Red::value_type Red;
View(Sav& s) : 
Blue { s.get<S::Blue>() },
Green { s.get<S::Green>() },
Red { s.get<S::Red>() }
{ }
}; /* Data::View GameData::OwnedHorseList::Body::NoseColor close */
template <>
struct View<GameData::OwnedHorseList::Body::PrimaryColor> {
using S = GameData::OwnedHorseList::Body::PrimaryColor;
S::Blue::value_type Blue;
S::Green::value_type Green;
S::Red::value_type Red;
View(Sav& s) : 
Blue { s.get<S::Blue>() },
Green { s.get<S::Green>() },
Red { s.get<S::Red>() }
{ }
}; /* Data::View GameData::OwnedHorseList::Body::PrimaryColor close */
template <>
struct View<GameData::OwnedHorseList::Body::SecondaryColor> {
using S = GameData::OwnedHorseList::Body::SecondaryColor;
S::Blue::value_type Blue;
S::Green::value_type Green;
S::Red::value_type Red;
View(Sav& s) : 
Blue { s.get<S::Blue>() },
Green { s.get<S::Green>() },
Red { s.get<S::Red>() }
{ }
}; /* Data::View GameData::OwnedHorseList::Body::SecondaryColor close */
template <>
struct View<GameData::OwnedHorseList::Body> {
using S = GameData::OwnedHorseList::Body;
S::EyeColor::value_type EyeColor;
S::Pattern::value_type Pattern;
View<GameData::OwnedHorseList::Body::NoseColor> NoseColor;
View<GameData::OwnedHorseList::Body::PrimaryColor> PrimaryColor;
View<GameData::OwnedHorseList::Body::SecondaryColor> SecondaryColor;
View(Sav& s) : 
EyeColor { s.get<S::EyeColor>() },
Pattern { s.get<S::Pattern>() },
NoseColor { s },
PrimaryColor { s },
SecondaryColor { s }
{ }
}; /* Data::View GameData::OwnedHorseList::Body close */
template <>
struct View<GameData::OwnedHorseList::Hair::PrimaryColor> {
using S = GameData::OwnedHorseList::Hair::PrimaryColor;
S::Blue::value_type Blue;
S::Green::value_type Green;
S::Red::value_type Red;
View(Sav& s) : 
Blue { s.get<S::Blue>() },
Green { s.get<S::Green>() },
Red { s.get<S::Red>() }
{ }
}; /* Data::View GameData::OwnedHorseList::Hair::PrimaryColor close */
template <>
struct View<GameData::OwnedHorseList::Hair::SecondaryColor> {
using S = GameData::OwnedHorseList::Hair::SecondaryColor;
S::Blue::value_type Blue;
S::Green::value_type Green;
S::Red::value_type Red;
View(Sav& s) : 
Blue { s.get<S::Blue>() },
Green { s.get<S::Green>() },
Red { s.get<S::Red>() }
{ }
}; /* Data::View GameData::OwnedHorseList::Hair::SecondaryColor close */
template <>
struct View<GameData::OwnedHorseList::Hair> {
using S = GameData::OwnedHorseList::Hair;
View<GameData::OwnedHorseList::Hair::PrimaryColor> PrimaryColor;
View<GameData::OwnedHorseList::Hair::SecondaryColor> SecondaryColor;
View(Sav& s) : 
PrimaryColor { s },
SecondaryColor { s }
{ }
}; /* Data::View GameData::OwnedHorseList::Hair close */
template <>
struct View<GameData::OwnedHorseList> {
using S = GameData::OwnedHorseList;
View<GameData::OwnedHorseList::Body> Body;
S::Mane::value_type Mane;
S::Rein::value_type Rein;
S::Saddle::value_type Saddle;
S::Name::value_type Name;
S::UidHash::value_type UidHash;
S::ActorName::value_type ActorName;
S::ChargeNum::value_type ChargeNum;
S::ColorType::value_type ColorType;
S::FootType::value_type FootType;
S::HorsePower::value_type HorsePower;
S::HorseType::value_type HorseType;
S::RoomID::value_type RoomID;
S::Speed::value_type Speed;
S::Toughness::value_type Toughness;
S::Familiarity::value_type Familiarity;
S::IsFamiliarityChecked::value_type IsFamiliarityChecked;
View<GameData::OwnedHorseList::Hair> Hair;
View(Sav& s) : 
Body { s },
Mane { s.get<S::Mane>() },
Rein { s.get<S::Rein>() },
Saddle { s.get<S::Saddle>() },
Name { s.get<S::Name>() },
UidHash { s.get<S::UidHash>() },
ActorName { s.get<S::ActorName>() },
ChargeNum { s.get<S::ChargeNum>() },
ColorType { s.get<S::ColorType>() },
FootType { s.get<S::FootType>() },
HorsePower { s.get<S::HorsePower>() },
HorseType { s.get<S::HorseType>() },
RoomID { s.get<S::RoomID>() },
Speed { s.get<S::Speed>() },
Toughness { s.get<S::Toughness>() },
Familiarity { s.get<S::Familiarity>() },
IsFamiliarityChecked { s.get<S::IsFamiliarityChecked>() },
Hair { s }
{ }
}; /* Data::View GameData::OwnedHorseList close */
template <>
struct View<GameData> {
using S = GameData;
View<GameData::OwnedHorseList> OwnedHorseList;
View(Sav& s) : 
OwnedHorseList { s }
{ }
}; /* Data::View GameData close */
}