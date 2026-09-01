#pragma once
#include <sage>

struct GameData::RaumiGolemAttachment : Tag::Structure {
	struct SubTool;
	struct SubWeapon;
	struct Tool;
	struct Weapon;
};/* Tag::Structure GameData::RaumiGolemAttachment close */

#include "RaumiGolemAttachment/SubTool.hpp"
#include "RaumiGolemAttachment/SubWeapon.hpp"
#include "RaumiGolemAttachment/Tool.hpp"
#include "RaumiGolemAttachment/Weapon.hpp"

template <> struct Data::Structure<GameData::RaumiGolemAttachment> : GameData::RaumiGolemAttachment {
	Structure<SubTool> SubTool;
	Structure<SubWeapon> SubWeapon;
	Structure<Tool> Tool;
	Structure<Weapon> Weapon;
	
	explicit Structure(Sav& s) : 
		SubTool { s.get<struct SubTool>() },
		SubWeapon { s.get<struct SubWeapon>() },
		Tool { s.get<struct Tool>() },
		Weapon { s.get<struct Weapon>() }
	{ }
};/* Structure Data::Structure GameData::RaumiGolemAttachment close */
