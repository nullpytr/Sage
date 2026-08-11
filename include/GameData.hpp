struct GameData{
struct OwnedHorseList{
struct Body{
struct EyeColor {
enum value_type : mmh32 {
Black = murmurhash3::hash("Black"),
Blue = murmurhash3::hash("Blue"),
};
};
using EyeColor_t = Enum::Array<EyeColor>;
EyeColor_t EyeColor;
struct Pattern {
enum value_type : mmh32 {
_00 = murmurhash3::hash("_00"),
_01 = murmurhash3::hash("_01"),
_02 = murmurhash3::hash("_02"),
_03 = murmurhash3::hash("_03"),
_04 = murmurhash3::hash("_04"),
_05 = murmurhash3::hash("_05"),
_06 = murmurhash3::hash("_06"),
};
};
using Pattern_t = Enum::Array<Pattern>;
Pattern_t Pattern;
struct NoseColor{
array<u32> Blue;
array<u32> Green;
array<u32> Red;
template <typename Sav>
explicit NoseColor(Sav& s) : 
Blue { s.get(Promise::Blue) },
Green { s.get(Promise::Green) },
Red { s.get(Promise::Red) }
{ }
struct Promise {
static constexpr ::Promise<typeof(Blue)> Blue { murmurhash3::hash("OwnedHorseList.Body.NoseColor.Blue") };
static constexpr ::Promise<typeof(Green)> Green { murmurhash3::hash("OwnedHorseList.Body.NoseColor.Green") };
static constexpr ::Promise<typeof(Red)> Red { murmurhash3::hash("OwnedHorseList.Body.NoseColor.Red") };
};
};
using NoseColor_t = NoseColor;
NoseColor_t NoseColor;
struct PrimaryColor{
array<u32> Blue;
array<u32> Green;
array<u32> Red;
template <typename Sav>
explicit PrimaryColor(Sav& s) : 
Blue { s.get(Promise::Blue) },
Green { s.get(Promise::Green) },
Red { s.get(Promise::Red) }
{ }
struct Promise {
static constexpr ::Promise<typeof(Blue)> Blue { murmurhash3::hash("OwnedHorseList.Body.PrimaryColor.Blue") };
static constexpr ::Promise<typeof(Green)> Green { murmurhash3::hash("OwnedHorseList.Body.PrimaryColor.Green") };
static constexpr ::Promise<typeof(Red)> Red { murmurhash3::hash("OwnedHorseList.Body.PrimaryColor.Red") };
};
};
using PrimaryColor_t = PrimaryColor;
PrimaryColor_t PrimaryColor;
struct SecondaryColor{
array<u32> Blue;
array<u32> Green;
array<u32> Red;
template <typename Sav>
explicit SecondaryColor(Sav& s) : 
Blue { s.get(Promise::Blue) },
Green { s.get(Promise::Green) },
Red { s.get(Promise::Red) }
{ }
struct Promise {
static constexpr ::Promise<typeof(Blue)> Blue { murmurhash3::hash("OwnedHorseList.Body.SecondaryColor.Blue") };
static constexpr ::Promise<typeof(Green)> Green { murmurhash3::hash("OwnedHorseList.Body.SecondaryColor.Green") };
static constexpr ::Promise<typeof(Red)> Red { murmurhash3::hash("OwnedHorseList.Body.SecondaryColor.Red") };
};
};
using SecondaryColor_t = SecondaryColor;
SecondaryColor_t SecondaryColor;
template <typename Sav>
explicit Body(Sav& s) : 
EyeColor { s.get(Promise::EyeColor) },
Pattern { s.get(Promise::Pattern) },
NoseColor { s },
PrimaryColor { s },
SecondaryColor { s }
{ }
struct Promise {
static constexpr ::Promise<typeof(EyeColor)> EyeColor { murmurhash3::hash("OwnedHorseList.Body.EyeColor") };
static constexpr ::Promise<typeof(Pattern)> Pattern { murmurhash3::hash("OwnedHorseList.Body.Pattern") };
};
};
using Body_t = Body;
Body_t Body;
struct Mane {
enum value_type : mmh32 {
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
};
using Mane_t = Enum::Array<Mane>;
Mane_t Mane;
struct Rein {
enum value_type : mmh32 {
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
};
using Rein_t = Enum::Array<Rein>;
Rein_t Rein;
struct Saddle {
enum value_type : mmh32 {
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
};
using Saddle_t = Enum::Array<Saddle>;
Saddle_t Saddle;
array<wstring16> Name;
array<u64> UidHash;
array<string64> ActorName;
array<s32> ChargeNum;
array<s32> ColorType;
array<s32> FootType;
array<s32> HorsePower;
array<s32> HorseType;
array<s32> RoomID;
array<s32> Speed;
array<s32> Toughness;
array<float> Familiarity;
array<bool> IsFamiliarityChecked;
struct Hair{
struct PrimaryColor{
array<u32> Blue;
array<u32> Green;
array<u32> Red;
template <typename Sav>
explicit PrimaryColor(Sav& s) : 
Blue { s.get(Promise::Blue) },
Green { s.get(Promise::Green) },
Red { s.get(Promise::Red) }
{ }
struct Promise {
static constexpr ::Promise<typeof(Blue)> Blue { murmurhash3::hash("OwnedHorseList.Hair.PrimaryColor.Blue") };
static constexpr ::Promise<typeof(Green)> Green { murmurhash3::hash("OwnedHorseList.Hair.PrimaryColor.Green") };
static constexpr ::Promise<typeof(Red)> Red { murmurhash3::hash("OwnedHorseList.Hair.PrimaryColor.Red") };
};
};
using PrimaryColor_t = PrimaryColor;
PrimaryColor_t PrimaryColor;
struct SecondaryColor{
array<u32> Blue;
array<u32> Green;
array<u32> Red;
template <typename Sav>
explicit SecondaryColor(Sav& s) : 
Blue { s.get(Promise::Blue) },
Green { s.get(Promise::Green) },
Red { s.get(Promise::Red) }
{ }
struct Promise {
static constexpr ::Promise<typeof(Blue)> Blue { murmurhash3::hash("OwnedHorseList.Hair.SecondaryColor.Blue") };
static constexpr ::Promise<typeof(Green)> Green { murmurhash3::hash("OwnedHorseList.Hair.SecondaryColor.Green") };
static constexpr ::Promise<typeof(Red)> Red { murmurhash3::hash("OwnedHorseList.Hair.SecondaryColor.Red") };
};
};
using SecondaryColor_t = SecondaryColor;
SecondaryColor_t SecondaryColor;
template <typename Sav>
explicit Hair(Sav& s) : 
PrimaryColor { s },
SecondaryColor { s }
{ }
struct Promise {
};
};
using Hair_t = Hair;
Hair_t Hair;
template <typename Sav>
explicit OwnedHorseList(Sav& s) : 
Body { s },
Mane { s.get(Promise::Mane) },
Rein { s.get(Promise::Rein) },
Saddle { s.get(Promise::Saddle) },
Name { s.get(Promise::Name) },
UidHash { s.get(Promise::UidHash) },
ActorName { s.get(Promise::ActorName) },
ChargeNum { s.get(Promise::ChargeNum) },
ColorType { s.get(Promise::ColorType) },
FootType { s.get(Promise::FootType) },
HorsePower { s.get(Promise::HorsePower) },
HorseType { s.get(Promise::HorseType) },
RoomID { s.get(Promise::RoomID) },
Speed { s.get(Promise::Speed) },
Toughness { s.get(Promise::Toughness) },
Familiarity { s.get(Promise::Familiarity) },
IsFamiliarityChecked { s.get(Promise::IsFamiliarityChecked) },
Hair { s }
{ }
struct Promise {
static constexpr ::Promise<typeof(Mane)> Mane { murmurhash3::hash("OwnedHorseList.Mane") };
static constexpr ::Promise<typeof(Rein)> Rein { murmurhash3::hash("OwnedHorseList.Rein") };
static constexpr ::Promise<typeof(Saddle)> Saddle { murmurhash3::hash("OwnedHorseList.Saddle") };
static constexpr ::Promise<typeof(Name)> Name { murmurhash3::hash("OwnedHorseList.Name") };
static constexpr ::Promise<typeof(UidHash)> UidHash { murmurhash3::hash("OwnedHorseList.UidHash") };
static constexpr ::Promise<typeof(ActorName)> ActorName { murmurhash3::hash("OwnedHorseList.ActorName") };
static constexpr ::Promise<typeof(ChargeNum)> ChargeNum { murmurhash3::hash("OwnedHorseList.ChargeNum") };
static constexpr ::Promise<typeof(ColorType)> ColorType { murmurhash3::hash("OwnedHorseList.ColorType") };
static constexpr ::Promise<typeof(FootType)> FootType { murmurhash3::hash("OwnedHorseList.FootType") };
static constexpr ::Promise<typeof(HorsePower)> HorsePower { murmurhash3::hash("OwnedHorseList.HorsePower") };
static constexpr ::Promise<typeof(HorseType)> HorseType { murmurhash3::hash("OwnedHorseList.HorseType") };
static constexpr ::Promise<typeof(RoomID)> RoomID { murmurhash3::hash("OwnedHorseList.RoomID") };
static constexpr ::Promise<typeof(Speed)> Speed { murmurhash3::hash("OwnedHorseList.Speed") };
static constexpr ::Promise<typeof(Toughness)> Toughness { murmurhash3::hash("OwnedHorseList.Toughness") };
static constexpr ::Promise<typeof(Familiarity)> Familiarity { murmurhash3::hash("OwnedHorseList.Familiarity") };
static constexpr ::Promise<typeof(IsFamiliarityChecked)> IsFamiliarityChecked { murmurhash3::hash("OwnedHorseList.IsFamiliarityChecked") };
};
};
using OwnedHorseList_t = OwnedHorseList;
OwnedHorseList_t OwnedHorseList;
template <typename Sav>
explicit GameData(Sav& s) : 
OwnedHorseList { s }
{ }
struct Promise {
};
};
using GameData_t = GameData;