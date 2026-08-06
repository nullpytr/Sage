struct GameData{
struct OwnedHorseList{
struct Body{
struct EyeColor {
enum value_type : mmh32 {
Black = murmurhash3::hash("Black"),
Blue = murmurhash3::hash("Blue"),
};
};
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
struct NoseColor{
struct Data {
array<u32> Blue;
array<u32> Green;
array<u32> Red;
template <typename Sav>
explicit Data(Sav& s) : 
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
};
struct PrimaryColor{
struct Data {
array<u32> Blue;
array<u32> Green;
array<u32> Red;
template <typename Sav>
explicit Data(Sav& s) : 
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
};
struct SecondaryColor{
struct Data {
array<u32> Blue;
array<u32> Green;
array<u32> Red;
template <typename Sav>
explicit Data(Sav& s) : 
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
};
struct Data {
EyeColor EyeColor;
Pattern Pattern;
NoseColor::Data NoseColor;
PrimaryColor::Data PrimaryColor;
SecondaryColor::Data SecondaryColor;
template <typename Sav>
explicit Data(Sav& s) : 
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
};
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
struct Hair{
struct PrimaryColor{
struct Data {
array<u32> Blue;
array<u32> Green;
array<u32> Red;
template <typename Sav>
explicit Data(Sav& s) : 
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
};
struct SecondaryColor{
struct Data {
array<u32> Blue;
array<u32> Green;
array<u32> Red;
template <typename Sav>
explicit Data(Sav& s) : 
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
};
struct Data {
PrimaryColor::Data PrimaryColor;
SecondaryColor::Data SecondaryColor;
template <typename Sav>
explicit Data(Sav& s) : 
PrimaryColor { s },
SecondaryColor { s }
{ }
struct Promise {
};
};
};
struct Data {
Body::Data Body;
Mane Mane;
Rein Rein;
Saddle Saddle;
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
Hair::Data Hair;
template <typename Sav>
explicit Data(Sav& s) : 
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
};
struct Data {
OwnedHorseList::Data OwnedHorseList;
template <typename Sav>
explicit Data(Sav& s) : 
OwnedHorseList { s }
{ }
struct Promise {
};
};
};