#pragma once
#include <sage>

struct GameData::Pouch::Food::Content::Effect : Tag::Structure {
	struct Level : Tag::Member { using type = span<s32>*; };
	struct Time : Tag::Member { using type = span<s32>*; };
	struct Type : Tag::Enum {
		enum underlying_enum_t : hash_t { None = murmurhash3::hash("None"), ResistHot = murmurhash3::hash("ResistHot"), ResistBurn = murmurhash3::hash("ResistBurn"), ResistCold = murmurhash3::hash("ResistCold"), ResistElectric = murmurhash3::hash("ResistElectric"), ResitLightning = murmurhash3::hash("ResitLightning"), ResistFreeze = murmurhash3::hash("ResistFreeze"), ResistAncient = murmurhash3::hash("ResistAncient"), SwimSpeedUp = murmurhash3::hash("SwimSpeedUp"), DecreaseSwimStamina = murmurhash3::hash("DecreaseSwimStamina"), SpinAttack = murmurhash3::hash("SpinAttack"), ClimbWaterfall = murmurhash3::hash("ClimbWaterfall"), ClimbSpeedUp = murmurhash3::hash("ClimbSpeedUp"), ClimbSpeedUpOnlyHorizontaly = murmurhash3::hash("ClimbSpeedUpOnlyHorizontaly"), AttackUp = murmurhash3::hash("AttackUp"), AttackUpCold = murmurhash3::hash("AttackUpCold"), AttackUpHot = murmurhash3::hash("AttackUpHot"), AttackUpThunderstorm = murmurhash3::hash("AttackUpThunderstorm"), AttackUpDark = murmurhash3::hash("AttackUpDark"), AttackUpBone = murmurhash3::hash("AttackUpBone"), QuietnessUp = murmurhash3::hash("QuietnessUp"), SandMoveUp = murmurhash3::hash("SandMoveUp"), SnowMoveUp = murmurhash3::hash("SnowMoveUp"), WakeWind = murmurhash3::hash("WakeWind"), TwiceJump = murmurhash3::hash("TwiceJump"), EmergencyAvoid = murmurhash3::hash("EmergencyAvoid"), DefenseUp = murmurhash3::hash("DefenseUp"), AllSpeed = murmurhash3::hash("AllSpeed"), MiasmaGuard = murmurhash3::hash("MiasmaGuard"), MaskBokoblin = murmurhash3::hash("MaskBokoblin"), MaskMoriblin = murmurhash3::hash("MaskMoriblin"), MaskLizalfos = murmurhash3::hash("MaskLizalfos"), MaskLynel = murmurhash3::hash("MaskLynel"), YigaDisguise = murmurhash3::hash("YigaDisguise"), StalDisguise = murmurhash3::hash("StalDisguise"), LifeRecover = murmurhash3::hash("LifeRecover"), LifeMaxUp = murmurhash3::hash("LifeMaxUp"), StaminaRecover = murmurhash3::hash("StaminaRecover"), ExStaminaMaxUp = murmurhash3::hash("ExStaminaMaxUp"), LifeRepair = murmurhash3::hash("LifeRepair"), DivingMobilityUp = murmurhash3::hash("DivingMobilityUp"), NotSlippy = murmurhash3::hash("NotSlippy"), Moisturizing = murmurhash3::hash("Moisturizing"), LightEmission = murmurhash3::hash("LightEmission"), RupeeGuard = murmurhash3::hash("RupeeGuard"), FallResist = murmurhash3::hash("FallResist"), SwordBeamUp = murmurhash3::hash("SwordBeamUp"), VisualizeLife = murmurhash3::hash("VisualizeLife"), NightMoveSpeedUp = murmurhash3::hash("NightMoveSpeedUp"), NightGlow = murmurhash3::hash("NightGlow"), DecreaseWallJumpStamina = murmurhash3::hash("DecreaseWallJumpStamina"), DecreaseChargeAttackStamina = murmurhash3::hash("DecreaseChargeAttackStamina"), EmitTerror = murmurhash3::hash("EmitTerror"), NoBurning = murmurhash3::hash("NoBurning"), NoFallDamage = murmurhash3::hash("NoFallDamage"), NoSlip = murmurhash3::hash("NoSlip"), RupeeGuardRate = murmurhash3::hash("RupeeGuardRate"), MaskAll = murmurhash3::hash("MaskAll"), DecreaseZonauEnergy = murmurhash3::hash("DecreaseZonauEnergy"), ZonauEnergyHealUp = murmurhash3::hash("ZonauEnergyHealUp"), MaskHorablin = murmurhash3::hash("MaskHorablin"), MiasmaDefenseUp = murmurhash3::hash("MiasmaDefenseUp"), ChargePowerUpCold = murmurhash3::hash("ChargePowerUpCold"), ChargePowerUpHot = murmurhash3::hash("ChargePowerUpHot"), ChargePowerUpThunderstorm = murmurhash3::hash("ChargePowerUpThunderstorm"), LightFootprint = murmurhash3::hash("LightFootprint"), SoulPowerUpLightning = murmurhash3::hash("SoulPowerUpLightning"), SoulPowerUpWater = murmurhash3::hash("SoulPowerUpWater"), SoulPowerUpWind = murmurhash3::hash("SoulPowerUpWind"), SoulPowerUpFire = murmurhash3::hash("SoulPowerUpFire"), SoulPowerUpSpirit = murmurhash3::hash("SoulPowerUpSpirit"), EnableUseSwordBeam = murmurhash3::hash("EnableUseSwordBeam"), };
		using type = span<enum_t<Type>>*;
	};
};/* Tag::Structure GameData::Pouch::Food::Content::Effect close */

template <> struct Data::Structure<GameData::Pouch::Food::Content::Effect> : GameData::Pouch::Food::Content::Effect {
	Member<Level> Level;
	Member<Time> Time;
	Enum<Type> Type;
	
	explicit Structure(Sav& s) : 
		Level { s.get<struct Level>() },
		Time { s.get<struct Time>() },
		Type { s.get<struct Type>() }
	{ }
};/* Data::Structure GameData::Pouch::Food::Content::Effect close */

template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Food::Content::Effect::Level> = murmurhash3::hash("Pouch.Food.Content.Effect.Level");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Food::Content::Effect::Time> = murmurhash3::hash("Pouch.Food.Content.Effect.Time");
template <> hash_t constexpr Data::Hashtable<GameData::Pouch::Food::Content::Effect::Type> = murmurhash3::hash("Pouch.Food.Content.Effect.Type");