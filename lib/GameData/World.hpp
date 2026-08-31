#pragma once
#include <sage>

struct GameData::World : Tag::Structure {
	struct BloodyMoonTimer : Tag::Member { using type = u64&; };
	struct CurrentDateTime : Tag::Member { using type = u64&; };
	struct CurrentDays : Tag::Member { using type = s32&; };
	struct CurrentHour : Tag::Member { using type = s32&; };
	struct CurrentMinute : Tag::Member { using type = s32&; };
	struct IsBloodyMoonDay : Tag::Member { using type = bool&; };
	struct IsZonauRespawnDay : Tag::Member { using type = bool&; };
	struct PlayerPos : Tag::Member { using type = vec3f*; };
	struct ShootingStarPosition : Tag::Member { using type = vec3f*; };
	struct WeatherForecast : Tag::Member { using type = span<s32>*; };
	struct ZonauRespawnTimer : Tag::Member { using type = u64&; };
};/* Tag::Structure GameData::World close */

template <> struct Data::Structure<GameData::World> : GameData::World {
	Member<BloodyMoonTimer> BloodyMoonTimer;
	Member<CurrentDateTime> CurrentDateTime;
	Member<CurrentDays> CurrentDays;
	Member<CurrentHour> CurrentHour;
	Member<CurrentMinute> CurrentMinute;
	Member<IsBloodyMoonDay> IsBloodyMoonDay;
	Member<IsZonauRespawnDay> IsZonauRespawnDay;
	Member<PlayerPos> PlayerPos;
	Member<ShootingStarPosition> ShootingStarPosition;
	Member<WeatherForecast> WeatherForecast;
	Member<ZonauRespawnTimer> ZonauRespawnTimer;
	
	explicit Structure(Sav& s) : 
		BloodyMoonTimer { s.get<struct BloodyMoonTimer>() },
		CurrentDateTime { s.get<struct CurrentDateTime>() },
		CurrentDays { s.get<struct CurrentDays>() },
		CurrentHour { s.get<struct CurrentHour>() },
		CurrentMinute { s.get<struct CurrentMinute>() },
		IsBloodyMoonDay { s.get<struct IsBloodyMoonDay>() },
		IsZonauRespawnDay { s.get<struct IsZonauRespawnDay>() },
		PlayerPos { s.get<struct PlayerPos>() },
		ShootingStarPosition { s.get<struct ShootingStarPosition>() },
		WeatherForecast { s.get<struct WeatherForecast>() },
		ZonauRespawnTimer { s.get<struct ZonauRespawnTimer>() }
	{ }
};/* Data::Structure GameData::World close */

template <> hash_value_t constexpr Data::Hashtable<GameData::World::BloodyMoonTimer> { "World_BloodyMoonTimer" };
template <> hash_value_t constexpr Data::Hashtable<GameData::World::CurrentDateTime> { "World_CurrentDateTime" };
template <> hash_value_t constexpr Data::Hashtable<GameData::World::CurrentDays> { "World_CurrentDays" };
template <> hash_value_t constexpr Data::Hashtable<GameData::World::CurrentHour> { "World_CurrentHour" };
template <> hash_value_t constexpr Data::Hashtable<GameData::World::CurrentMinute> { "World_CurrentMinute" };
template <> hash_value_t constexpr Data::Hashtable<GameData::World::IsBloodyMoonDay> { "World_IsBloodyMoonDay" };
template <> hash_value_t constexpr Data::Hashtable<GameData::World::IsZonauRespawnDay> { "World_IsZonauRespawnDay" };
template <> hash_value_t constexpr Data::Hashtable<GameData::World::PlayerPos> { "World_PlayerPos" };
template <> hash_value_t constexpr Data::Hashtable<GameData::World::ShootingStarPosition> { "World_ShootingStarPosition" };
template <> hash_value_t constexpr Data::Hashtable<GameData::World::WeatherForecast> { "World_WeatherForecast" };
template <> hash_value_t constexpr Data::Hashtable<GameData::World::ZonauRespawnTimer> { "World_ZonauRespawnTimer" };