#pragma once
#include "Core/Types.hpp"
#include "Core/Enum.hpp"
#include "Core/Sav.hpp"

struct GameData::PictureBookData : Tag::Structure {
	struct Animal_Bear_A;
	struct Animal_Bear_B;
	struct Animal_Boar_A;
	struct Animal_Boar_B;
	struct Animal_Bull_A;
	struct Animal_Cassowary_A;
	struct Animal_Cow_A;
	struct Animal_Crow_A;
	struct Animal_Deer_A;
	struct Animal_Doe_A;
	struct Animal_Dog_A;
	struct Animal_Elk_A;
	struct Animal_Fox_A;
	struct Animal_Fox_B;
	struct Animal_Goat_A;
	struct Animal_Gull_A;
	struct Animal_Hawk_A;
	struct Animal_Heron_A;
	struct Animal_Heron_B;
	struct Animal_Insect_A;
	struct Animal_Insect_AA;
	struct Animal_Insect_AB;
	struct Animal_Insect_AG;
	struct Animal_Insect_AH;
	struct Animal_Insect_AI;
	struct Animal_Insect_B;
	struct Animal_Insect_C;
	struct Animal_Insect_E;
	struct Animal_Insect_F;
	struct Animal_Insect_G;
	struct Animal_Insect_H;
	struct Animal_Insect_I;
	struct Animal_Insect_M;
	struct Animal_Insect_N;
	struct Animal_Insect_P;
	struct Animal_Insect_Q;
	struct Animal_Insect_R;
	struct Animal_Insect_S;
	struct Animal_Insect_T;
	struct Animal_Insect_X;
	struct Animal_Kokko_A;
	struct Animal_LittleBird_A;
	struct Animal_LittleBird_B;
	struct Animal_LittleBird_C;
	struct Animal_LittleBird_D;
	struct Animal_LittleBird_E;
	struct Animal_LittleBird_F;
	struct Animal_Pao_A;
	struct Animal_Pigeon_A;
	struct Animal_Pigeon_B;
	struct Animal_Ptarmigan_A;
	struct Animal_Ptarmigan_B;
	struct Animal_RupeeRabbit_A;
	struct Animal_Sheep_A;
	struct Animal_SkyCassowary_A;
	struct Animal_SkyGull_A;
	struct Animal_SkyPigeon_A;
	struct Animal_Squirrel_A;
	struct Animal_Sunazarashi_A;
	struct Animal_SunazarashiSP_C;
	struct Animal_WildDuck_A;
	struct Animal_WildGoat_A;
	struct Animal_Wolf_A;
	struct Animal_Wolf_B;
	struct Animal_Wolf_C;
	struct BeeHome;
	struct BombFruit;
	struct ConfusionFruit;
	struct ElectricalFruit;
	struct Enemy_Assassin_Junior;
	struct Enemy_Assassin_Middle;
	struct Enemy_Assassin_Senior;
	struct Enemy_Bokoblin_Bone_Junior;
	struct Enemy_Bokoblin_Boss_Dark;
	struct Enemy_Bokoblin_Boss_Junior;
	struct Enemy_Bokoblin_Boss_Middle;
	struct Enemy_Bokoblin_Boss_Senior;
	struct Enemy_Bokoblin_Dark;
	struct Enemy_Bokoblin_Junior;
	struct Enemy_Bokoblin_Middle;
	struct Enemy_Bokoblin_Senior;
	struct Enemy_CaveMaster_000;
	struct Enemy_CDungeon_Practice;
	struct Enemy_Chuchu_Electric_Junior;
	struct Enemy_Chuchu_Fire_Junior;
	struct Enemy_Chuchu_Ice_Junior;
	struct Enemy_Chuchu_Junior;
	struct Enemy_Dragon_Darkness;
	struct Enemy_Dragon_Electric;
	struct Enemy_Dragon_Fire;
	struct Enemy_Dragon_Ice;
	struct Enemy_Dragon_Light_001;
	struct Enemy_Drake_Electric;
	struct Enemy_Drake_Fire;
	struct Enemy_Drake_Ice;
	struct Enemy_Drake_Mix;
	struct Enemy_DungeonBoss_Gerudo;
	struct Enemy_DungeonBoss_Goron;
	struct Enemy_DungeonBoss_Rito;
	struct Enemy_DungeonBoss_Zonau;
	struct Enemy_DungeonBoss_Zora;
	struct Enemy_Ganondorf;
	struct Enemy_Ganondorf_Miasma;
	struct Enemy_Giant_Bone;
	struct Enemy_Giant_Junior;
	struct Enemy_Giant_Middle;
	struct Enemy_Giant_Senior;
	struct Enemy_Golem_Fire;
	struct Enemy_Golem_Fort_A;
	struct Enemy_Golem_Ice;
	struct Enemy_Golem_Junior;
	struct Enemy_Golem_Little;
	struct Enemy_Golem_Little_Fire;
	struct Enemy_Golem_Little_Ice;
	struct Enemy_Golem_Middle;
	struct Enemy_Golem_Senior;
	struct Enemy_Horablin_Dark;
	struct Enemy_Horablin_Junior;
	struct Enemy_Horablin_Middle;
	struct Enemy_Horablin_Senior;
	struct Enemy_Keese;
	struct Enemy_Keese_Electric;
	struct Enemy_Keese_Fire;
	struct Enemy_Keese_Ice;
	struct Enemy_LikeLike_Crack;
	struct Enemy_LikeLike_Electric;
	struct Enemy_LikeLike_Fire;
	struct Enemy_LikeLike_Ice;
	struct Enemy_LikeLike_Plane;
	struct Enemy_LikeLike_Tar;
	struct Enemy_Lizalfos_Bone_Junior;
	struct Enemy_Lizalfos_Dark;
	struct Enemy_Lizalfos_Electric;
	struct Enemy_Lizalfos_Fire;
	struct Enemy_Lizalfos_Ice;
	struct Enemy_Lizalfos_Junior;
	struct Enemy_Lizalfos_Middle;
	struct Enemy_Lizalfos_Senior;
	struct Enemy_Lynel_Dark;
	struct Enemy_Lynel_Junior;
	struct Enemy_Lynel_Middle;
	struct Enemy_Lynel_Senior;
	struct Enemy_MiddleBoss_Goron;
	struct Enemy_Mogurudo_Baby_Junior;
	struct Enemy_Mogurudo_Junior;
	struct Enemy_Mogurudo_Middle;
	struct Enemy_Mogurudo_Senior;
	struct Enemy_Moriblin_Bone_Junior;
	struct Enemy_Moriblin_Dark;
	struct Enemy_Moriblin_Junior;
	struct Enemy_Moriblin_Middle;
	struct Enemy_Moriblin_Senior;
	struct Enemy_Octarock;
	struct Enemy_Octarock_Desert;
	struct Enemy_Octarock_Forest;
	struct Enemy_Octarock_Snow;
	struct Enemy_Octarock_Stone;
	struct Enemy_PhantomGanon;
	struct Enemy_Sandworm;
	struct Enemy_Toby_Junior;
	struct Enemy_Treant_Broadleaf;
	struct Enemy_Wizzrobe_Electric;
	struct Enemy_Wizzrobe_Electric_Senior;
	struct Enemy_Wizzrobe_Fire;
	struct Enemy_Wizzrobe_Fire_Senior;
	struct Enemy_Wizzrobe_Ice;
	struct Enemy_Wizzrobe_Ice_Senior;
	struct Enemy_Zombie_Boss_Junior;
	struct Enemy_Zombie_Junior;
	struct Enemy_Zonau_BlockMaster_Junior;
	struct Enemy_Zonau_BlockMaster_Middle;
	struct Enemy_Zonau_BlockMaster_Senior;
	struct Enemy_Zonau_Golem_Dark;
	struct Enemy_Zonau_Golem_Junior;
	struct Enemy_Zonau_Golem_Middle;
	struct Enemy_Zonau_Golem_Senior;
	struct Enemy_Zonau_Robot_Dark;
	struct Enemy_Zonau_Robot_Junior;
	struct Enemy_Zonau_Robot_Middle;
	struct Enemy_Zonau_Robot_Senior;
	struct FireFruit;
	struct FldObj_HyliaWoodWell_A_02;
	struct FldObj_Pinecone_A_01;
	struct GameRomHorse;
	struct GameRomHorse00L;
	struct GameRomHorse00S;
	struct GameRomHorse01L;
	struct GameRomHorseBone;
	struct GameRomHorseGold;
	struct GameRomHorseZelda;
	struct IceFruit;
	struct Item_Enemy_100;
	struct Item_Enemy_101;
	struct Item_Enemy_102;
	struct Item_Enemy_103;
	struct Item_Enemy_106;
	struct Item_Enemy_107;
	struct Item_Enemy_108;
	struct Item_Enemy_109;
	struct Item_Enemy_117;
	struct Item_Enemy_118;
	struct Item_Enemy_119;
	struct Item_Enemy_132;
	struct Item_Enemy_133;
	struct Item_Enemy_134;
	struct Item_Enemy_142;
	struct Item_Enemy_143;
	struct Item_Enemy_144;
	struct Item_Enemy_148;
	struct Item_Enemy_149;
	struct Item_Enemy_15;
	struct Item_Enemy_150;
	struct Item_Enemy_151;
	struct Item_Enemy_153;
	struct Item_Enemy_154;
	struct Item_Enemy_155;
	struct Item_Enemy_16;
	struct Item_Enemy_166;
	struct Item_Enemy_167;
	struct Item_Enemy_168;
	struct Item_Enemy_169;
	struct Item_Enemy_17;
	struct Item_Enemy_181;
	struct Item_Enemy_182;
	struct Item_Enemy_183;
	struct Item_Enemy_184;
	struct Item_Enemy_186;
	struct Item_Enemy_187;
	struct Item_Enemy_188;
	struct Item_Enemy_19;
	struct Item_Enemy_191;
	struct Item_Enemy_192;
	struct Item_Enemy_193;
	struct Item_Enemy_208;
	struct Item_Enemy_210;
	struct Item_Enemy_211;
	struct Item_Enemy_212;
	struct Item_Enemy_213;
	struct Item_Enemy_214;
	struct Item_Enemy_215;
	struct Item_Enemy_216;
	struct Item_Enemy_217;
	struct Item_Enemy_218;
	struct Item_Enemy_228;
	struct Item_Enemy_229;
	struct Item_Enemy_230;
	struct Item_Enemy_231;
	struct Item_Enemy_40;
	struct Item_Enemy_58;
	struct Item_Enemy_59;
	struct Item_Enemy_60;
	struct Item_Enemy_64;
	struct Item_Enemy_66;
	struct Item_Enemy_67;
	struct Item_Enemy_69;
	struct Item_Enemy_77;
	struct Item_Enemy_78;
	struct Item_Enemy_79;
	struct Item_Enemy_80;
	struct Item_Enemy_89;
	struct Item_Enemy_90;
	struct Item_Enemy_91;
	struct Item_Enemy_92;
	struct Item_FishGet_A;
	struct Item_FishGet_AA;
	struct Item_FishGet_AC;
	struct Item_FishGet_B;
	struct Item_FishGet_C;
	struct Item_FishGet_D;
	struct Item_FishGet_E;
	struct Item_FishGet_F;
	struct Item_FishGet_G;
	struct Item_FishGet_H;
	struct Item_FishGet_I;
	struct Item_FishGet_J;
	struct Item_FishGet_L;
	struct Item_FishGet_M;
	struct Item_FishGet_X;
	struct Item_FishGet_Z;
	struct Item_Fruit_A;
	struct Item_Fruit_B;
	struct Item_Fruit_C;
	struct Item_Fruit_E;
	struct Item_Fruit_F;
	struct Item_Fruit_G;
	struct Item_Fruit_H;
	struct Item_Fruit_I;
	struct Item_Fruit_J;
	struct Item_Fruit_M;
	struct Item_Fruit_N;
	struct Item_Fruit_P;
	struct Item_InsectGet_K;
	struct Item_InsectGet_O;
	struct Item_InsectGet_Z;
	struct Item_Mushroom_A;
	struct Item_Mushroom_B;
	struct Item_Mushroom_C;
	struct Item_Mushroom_E;
	struct Item_Mushroom_F;
	struct Item_Mushroom_H;
	struct Item_Mushroom_J;
	struct Item_Mushroom_L;
	struct Item_Mushroom_M;
	struct Item_Mushroom_N;
	struct Item_Mushroom_O;
	struct Item_Mushroom_P;
	struct Item_MushroomGet_D;
	struct Item_MushroomGet_K;
	struct Item_PlantGet_A;
	struct Item_PlantGet_B;
	struct Item_PlantGet_C;
	struct Item_PlantGet_E;
	struct Item_PlantGet_F;
	struct Item_PlantGet_G;
	struct Item_PlantGet_H;
	struct Item_PlantGet_I;
	struct Item_PlantGet_J;
	struct Item_PlantGet_L;
	struct Item_PlantGet_M;
	struct Item_PlantGet_O;
	struct Item_PlantGet_Q;
	struct Item_PlantGet_R;
	struct Item_PlantGet_S;
	struct Item_PlantGet_U;
	struct LightBall_Large;
	struct LightBall_Small;
	struct LightFruit;
	struct NormalArrow;
	struct Obj_Mineral_A_01;
	struct Obj_Mineral_B_01;
	struct Obj_Mineral_C_01;
	struct Obj_Mineral_D_01;
	struct SmokeFruit;
	struct TBox_Field_Iron;
	struct WaterFruit;
	struct Weapon_Bow_001;
	struct Weapon_Bow_002;
	struct Weapon_Bow_003;
	struct Weapon_Bow_004;
	struct Weapon_Bow_006;
	struct Weapon_Bow_009;
	struct Weapon_Bow_011;
	struct Weapon_Bow_013;
	struct Weapon_Bow_014;
	struct Weapon_Bow_015;
	struct Weapon_Bow_016;
	struct Weapon_Bow_017;
	struct Weapon_Bow_026;
	struct Weapon_Bow_027;
	struct Weapon_Bow_028;
	struct Weapon_Bow_029;
	struct Weapon_Bow_030;
	struct Weapon_Bow_032;
	struct Weapon_Bow_033;
	struct Weapon_Bow_035;
	struct Weapon_Bow_036;
	struct Weapon_Bow_038;
	struct Weapon_Bow_040;
	struct Weapon_Bow_072;
	struct Weapon_Bow_101;
	struct Weapon_Bow_104;
	struct Weapon_Bow_105;
	struct Weapon_Bow_106;
	struct Weapon_Bow_107;
	struct Weapon_Bow_166;
	struct Weapon_Lsword_001;
	struct Weapon_Lsword_002;
	struct Weapon_Lsword_003;
	struct Weapon_Lsword_019;
	struct Weapon_Lsword_020;
	struct Weapon_Lsword_024;
	struct Weapon_Lsword_027;
	struct Weapon_Lsword_029;
	struct Weapon_Lsword_036;
	struct Weapon_Lsword_038;
	struct Weapon_Lsword_041;
	struct Weapon_Lsword_045;
	struct Weapon_Lsword_047;
	struct Weapon_Lsword_051;
	struct Weapon_Lsword_054;
	struct Weapon_Lsword_057;
	struct Weapon_Lsword_059;
	struct Weapon_Lsword_060;
	struct Weapon_Lsword_101;
	struct Weapon_Lsword_103;
	struct Weapon_Lsword_106;
	struct Weapon_Lsword_108;
	struct Weapon_Lsword_109;
	struct Weapon_Lsword_112;
	struct Weapon_Lsword_113;
	struct Weapon_Lsword_114;
	struct Weapon_Lsword_124;
	struct Weapon_Lsword_127;
	struct Weapon_Lsword_129;
	struct Weapon_Lsword_136;
	struct Weapon_Lsword_147;
	struct Weapon_Lsword_161;
	struct Weapon_Lsword_163;
	struct Weapon_Lsword_164;
	struct Weapon_Lsword_166;
	struct Weapon_Lsword_174;
	struct Weapon_Shield_001;
	struct Weapon_Shield_002;
	struct Weapon_Shield_003;
	struct Weapon_Shield_004;
	struct Weapon_Shield_005;
	struct Weapon_Shield_006;
	struct Weapon_Shield_007;
	struct Weapon_Shield_008;
	struct Weapon_Shield_009;
	struct Weapon_Shield_016;
	struct Weapon_Shield_017;
	struct Weapon_Shield_018;
	struct Weapon_Shield_021;
	struct Weapon_Shield_022;
	struct Weapon_Shield_023;
	struct Weapon_Shield_025;
	struct Weapon_Shield_026;
	struct Weapon_Shield_030;
	struct Weapon_Shield_031;
	struct Weapon_Shield_032;
	struct Weapon_Shield_033;
	struct Weapon_Shield_034;
	struct Weapon_Shield_035;
	struct Weapon_Shield_036;
	struct Weapon_Shield_037;
	struct Weapon_Shield_040;
	struct Weapon_Shield_041;
	struct Weapon_Shield_042;
	struct Weapon_Shield_057;
	struct Weapon_Shield_101;
	struct Weapon_Shield_102;
	struct Weapon_Shield_103;
	struct Weapon_Shield_107;
	struct Weapon_Spear_001;
	struct Weapon_Spear_002;
	struct Weapon_Spear_003;
	struct Weapon_Spear_021;
	struct Weapon_Spear_022;
	struct Weapon_Spear_024;
	struct Weapon_Spear_025;
	struct Weapon_Spear_027;
	struct Weapon_Spear_029;
	struct Weapon_Spear_030;
	struct Weapon_Spear_032;
	struct Weapon_Spear_036;
	struct Weapon_Spear_038;
	struct Weapon_Spear_047;
	struct Weapon_Spear_050;
	struct Weapon_Spear_101;
	struct Weapon_Spear_103;
	struct Weapon_Spear_106;
	struct Weapon_Spear_108;
	struct Weapon_Spear_109;
	struct Weapon_Spear_112;
	struct Weapon_Spear_113;
	struct Weapon_Spear_124;
	struct Weapon_Spear_125;
	struct Weapon_Spear_127;
	struct Weapon_Spear_129;
	struct Weapon_Spear_132;
	struct Weapon_Spear_147;
	struct Weapon_Spear_161;
	struct Weapon_Spear_163;
	struct Weapon_Spear_164;
	struct Weapon_Spear_166;
	struct Weapon_Spear_173;
	struct Weapon_Sword_001;
	struct Weapon_Sword_002;
	struct Weapon_Sword_003;
	struct Weapon_Sword_019;
	struct Weapon_Sword_020;
	struct Weapon_Sword_021;
	struct Weapon_Sword_022;
	struct Weapon_Sword_024;
	struct Weapon_Sword_025;
	struct Weapon_Sword_027;
	struct Weapon_Sword_029;
	struct Weapon_Sword_031;
	struct Weapon_Sword_041;
	struct Weapon_Sword_043;
	struct Weapon_Sword_044;
	struct Weapon_Sword_047;
	struct Weapon_Sword_051;
	struct Weapon_Sword_052;
	struct Weapon_Sword_057;
	struct Weapon_Sword_058;
	struct Weapon_Sword_059;
	struct Weapon_Sword_070;
	struct Weapon_Sword_101;
	struct Weapon_Sword_103;
	struct Weapon_Sword_105;
	struct Weapon_Sword_106;
	struct Weapon_Sword_107;
	struct Weapon_Sword_108;
	struct Weapon_Sword_109;
	struct Weapon_Sword_112;
	struct Weapon_Sword_113;
	struct Weapon_Sword_114;
	struct Weapon_Sword_124;
	struct Weapon_Sword_125;
	struct Weapon_Sword_127;
	struct Weapon_Sword_129;
	struct Weapon_Sword_131;
	struct Weapon_Sword_147;
	struct Weapon_Sword_161;
	struct Weapon_Sword_163;
	struct Weapon_Sword_164;
	struct Weapon_Sword_166;
};/* Tag::Structure GameData::PictureBookData close */

#include "PictureBookData/Animal_Bear_A.hpp"
#include "PictureBookData/Animal_Bear_B.hpp"
#include "PictureBookData/Animal_Boar_A.hpp"
#include "PictureBookData/Animal_Boar_B.hpp"
#include "PictureBookData/Animal_Bull_A.hpp"
#include "PictureBookData/Animal_Cassowary_A.hpp"
#include "PictureBookData/Animal_Cow_A.hpp"
#include "PictureBookData/Animal_Crow_A.hpp"
#include "PictureBookData/Animal_Deer_A.hpp"
#include "PictureBookData/Animal_Doe_A.hpp"
#include "PictureBookData/Animal_Dog_A.hpp"
#include "PictureBookData/Animal_Elk_A.hpp"
#include "PictureBookData/Animal_Fox_A.hpp"
#include "PictureBookData/Animal_Fox_B.hpp"
#include "PictureBookData/Animal_Goat_A.hpp"
#include "PictureBookData/Animal_Gull_A.hpp"
#include "PictureBookData/Animal_Hawk_A.hpp"
#include "PictureBookData/Animal_Heron_A.hpp"
#include "PictureBookData/Animal_Heron_B.hpp"
#include "PictureBookData/Animal_Insect_A.hpp"
#include "PictureBookData/Animal_Insect_AA.hpp"
#include "PictureBookData/Animal_Insect_AB.hpp"
#include "PictureBookData/Animal_Insect_AG.hpp"
#include "PictureBookData/Animal_Insect_AH.hpp"
#include "PictureBookData/Animal_Insect_AI.hpp"
#include "PictureBookData/Animal_Insect_B.hpp"
#include "PictureBookData/Animal_Insect_C.hpp"
#include "PictureBookData/Animal_Insect_E.hpp"
#include "PictureBookData/Animal_Insect_F.hpp"
#include "PictureBookData/Animal_Insect_G.hpp"
#include "PictureBookData/Animal_Insect_H.hpp"
#include "PictureBookData/Animal_Insect_I.hpp"
#include "PictureBookData/Animal_Insect_M.hpp"
#include "PictureBookData/Animal_Insect_N.hpp"
#include "PictureBookData/Animal_Insect_P.hpp"
#include "PictureBookData/Animal_Insect_Q.hpp"
#include "PictureBookData/Animal_Insect_R.hpp"
#include "PictureBookData/Animal_Insect_S.hpp"
#include "PictureBookData/Animal_Insect_T.hpp"
#include "PictureBookData/Animal_Insect_X.hpp"
#include "PictureBookData/Animal_Kokko_A.hpp"
#include "PictureBookData/Animal_LittleBird_A.hpp"
#include "PictureBookData/Animal_LittleBird_B.hpp"
#include "PictureBookData/Animal_LittleBird_C.hpp"
#include "PictureBookData/Animal_LittleBird_D.hpp"
#include "PictureBookData/Animal_LittleBird_E.hpp"
#include "PictureBookData/Animal_LittleBird_F.hpp"
#include "PictureBookData/Animal_Pao_A.hpp"
#include "PictureBookData/Animal_Pigeon_A.hpp"
#include "PictureBookData/Animal_Pigeon_B.hpp"
#include "PictureBookData/Animal_Ptarmigan_A.hpp"
#include "PictureBookData/Animal_Ptarmigan_B.hpp"
#include "PictureBookData/Animal_RupeeRabbit_A.hpp"
#include "PictureBookData/Animal_Sheep_A.hpp"
#include "PictureBookData/Animal_SkyCassowary_A.hpp"
#include "PictureBookData/Animal_SkyGull_A.hpp"
#include "PictureBookData/Animal_SkyPigeon_A.hpp"
#include "PictureBookData/Animal_Squirrel_A.hpp"
#include "PictureBookData/Animal_Sunazarashi_A.hpp"
#include "PictureBookData/Animal_SunazarashiSP_C.hpp"
#include "PictureBookData/Animal_WildDuck_A.hpp"
#include "PictureBookData/Animal_WildGoat_A.hpp"
#include "PictureBookData/Animal_Wolf_A.hpp"
#include "PictureBookData/Animal_Wolf_B.hpp"
#include "PictureBookData/Animal_Wolf_C.hpp"
#include "PictureBookData/BeeHome.hpp"
#include "PictureBookData/BombFruit.hpp"
#include "PictureBookData/ConfusionFruit.hpp"
#include "PictureBookData/ElectricalFruit.hpp"
#include "PictureBookData/Enemy_Assassin_Junior.hpp"
#include "PictureBookData/Enemy_Assassin_Middle.hpp"
#include "PictureBookData/Enemy_Assassin_Senior.hpp"
#include "PictureBookData/Enemy_Bokoblin_Bone_Junior.hpp"
#include "PictureBookData/Enemy_Bokoblin_Boss_Dark.hpp"
#include "PictureBookData/Enemy_Bokoblin_Boss_Junior.hpp"
#include "PictureBookData/Enemy_Bokoblin_Boss_Middle.hpp"
#include "PictureBookData/Enemy_Bokoblin_Boss_Senior.hpp"
#include "PictureBookData/Enemy_Bokoblin_Dark.hpp"
#include "PictureBookData/Enemy_Bokoblin_Junior.hpp"
#include "PictureBookData/Enemy_Bokoblin_Middle.hpp"
#include "PictureBookData/Enemy_Bokoblin_Senior.hpp"
#include "PictureBookData/Enemy_CaveMaster_000.hpp"
#include "PictureBookData/Enemy_CDungeon_Practice.hpp"
#include "PictureBookData/Enemy_Chuchu_Electric_Junior.hpp"
#include "PictureBookData/Enemy_Chuchu_Fire_Junior.hpp"
#include "PictureBookData/Enemy_Chuchu_Ice_Junior.hpp"
#include "PictureBookData/Enemy_Chuchu_Junior.hpp"
#include "PictureBookData/Enemy_Dragon_Darkness.hpp"
#include "PictureBookData/Enemy_Dragon_Electric.hpp"
#include "PictureBookData/Enemy_Dragon_Fire.hpp"
#include "PictureBookData/Enemy_Dragon_Ice.hpp"
#include "PictureBookData/Enemy_Dragon_Light_001.hpp"
#include "PictureBookData/Enemy_Drake_Electric.hpp"
#include "PictureBookData/Enemy_Drake_Fire.hpp"
#include "PictureBookData/Enemy_Drake_Ice.hpp"
#include "PictureBookData/Enemy_Drake_Mix.hpp"
#include "PictureBookData/Enemy_DungeonBoss_Gerudo.hpp"
#include "PictureBookData/Enemy_DungeonBoss_Goron.hpp"
#include "PictureBookData/Enemy_DungeonBoss_Rito.hpp"
#include "PictureBookData/Enemy_DungeonBoss_Zonau.hpp"
#include "PictureBookData/Enemy_DungeonBoss_Zora.hpp"
#include "PictureBookData/Enemy_Ganondorf.hpp"
#include "PictureBookData/Enemy_Ganondorf_Miasma.hpp"
#include "PictureBookData/Enemy_Giant_Bone.hpp"
#include "PictureBookData/Enemy_Giant_Junior.hpp"
#include "PictureBookData/Enemy_Giant_Middle.hpp"
#include "PictureBookData/Enemy_Giant_Senior.hpp"
#include "PictureBookData/Enemy_Golem_Fire.hpp"
#include "PictureBookData/Enemy_Golem_Fort_A.hpp"
#include "PictureBookData/Enemy_Golem_Ice.hpp"
#include "PictureBookData/Enemy_Golem_Junior.hpp"
#include "PictureBookData/Enemy_Golem_Little.hpp"
#include "PictureBookData/Enemy_Golem_Little_Fire.hpp"
#include "PictureBookData/Enemy_Golem_Little_Ice.hpp"
#include "PictureBookData/Enemy_Golem_Middle.hpp"
#include "PictureBookData/Enemy_Golem_Senior.hpp"
#include "PictureBookData/Enemy_Horablin_Dark.hpp"
#include "PictureBookData/Enemy_Horablin_Junior.hpp"
#include "PictureBookData/Enemy_Horablin_Middle.hpp"
#include "PictureBookData/Enemy_Horablin_Senior.hpp"
#include "PictureBookData/Enemy_Keese.hpp"
#include "PictureBookData/Enemy_Keese_Electric.hpp"
#include "PictureBookData/Enemy_Keese_Fire.hpp"
#include "PictureBookData/Enemy_Keese_Ice.hpp"
#include "PictureBookData/Enemy_LikeLike_Crack.hpp"
#include "PictureBookData/Enemy_LikeLike_Electric.hpp"
#include "PictureBookData/Enemy_LikeLike_Fire.hpp"
#include "PictureBookData/Enemy_LikeLike_Ice.hpp"
#include "PictureBookData/Enemy_LikeLike_Plane.hpp"
#include "PictureBookData/Enemy_LikeLike_Tar.hpp"
#include "PictureBookData/Enemy_Lizalfos_Bone_Junior.hpp"
#include "PictureBookData/Enemy_Lizalfos_Dark.hpp"
#include "PictureBookData/Enemy_Lizalfos_Electric.hpp"
#include "PictureBookData/Enemy_Lizalfos_Fire.hpp"
#include "PictureBookData/Enemy_Lizalfos_Ice.hpp"
#include "PictureBookData/Enemy_Lizalfos_Junior.hpp"
#include "PictureBookData/Enemy_Lizalfos_Middle.hpp"
#include "PictureBookData/Enemy_Lizalfos_Senior.hpp"
#include "PictureBookData/Enemy_Lynel_Dark.hpp"
#include "PictureBookData/Enemy_Lynel_Junior.hpp"
#include "PictureBookData/Enemy_Lynel_Middle.hpp"
#include "PictureBookData/Enemy_Lynel_Senior.hpp"
#include "PictureBookData/Enemy_MiddleBoss_Goron.hpp"
#include "PictureBookData/Enemy_Mogurudo_Baby_Junior.hpp"
#include "PictureBookData/Enemy_Mogurudo_Junior.hpp"
#include "PictureBookData/Enemy_Mogurudo_Middle.hpp"
#include "PictureBookData/Enemy_Mogurudo_Senior.hpp"
#include "PictureBookData/Enemy_Moriblin_Bone_Junior.hpp"
#include "PictureBookData/Enemy_Moriblin_Dark.hpp"
#include "PictureBookData/Enemy_Moriblin_Junior.hpp"
#include "PictureBookData/Enemy_Moriblin_Middle.hpp"
#include "PictureBookData/Enemy_Moriblin_Senior.hpp"
#include "PictureBookData/Enemy_Octarock.hpp"
#include "PictureBookData/Enemy_Octarock_Desert.hpp"
#include "PictureBookData/Enemy_Octarock_Forest.hpp"
#include "PictureBookData/Enemy_Octarock_Snow.hpp"
#include "PictureBookData/Enemy_Octarock_Stone.hpp"
#include "PictureBookData/Enemy_PhantomGanon.hpp"
#include "PictureBookData/Enemy_Sandworm.hpp"
#include "PictureBookData/Enemy_Toby_Junior.hpp"
#include "PictureBookData/Enemy_Treant_Broadleaf.hpp"
#include "PictureBookData/Enemy_Wizzrobe_Electric.hpp"
#include "PictureBookData/Enemy_Wizzrobe_Electric_Senior.hpp"
#include "PictureBookData/Enemy_Wizzrobe_Fire.hpp"
#include "PictureBookData/Enemy_Wizzrobe_Fire_Senior.hpp"
#include "PictureBookData/Enemy_Wizzrobe_Ice.hpp"
#include "PictureBookData/Enemy_Wizzrobe_Ice_Senior.hpp"
#include "PictureBookData/Enemy_Zombie_Boss_Junior.hpp"
#include "PictureBookData/Enemy_Zombie_Junior.hpp"
#include "PictureBookData/Enemy_Zonau_BlockMaster_Junior.hpp"
#include "PictureBookData/Enemy_Zonau_BlockMaster_Middle.hpp"
#include "PictureBookData/Enemy_Zonau_BlockMaster_Senior.hpp"
#include "PictureBookData/Enemy_Zonau_Golem_Dark.hpp"
#include "PictureBookData/Enemy_Zonau_Golem_Junior.hpp"
#include "PictureBookData/Enemy_Zonau_Golem_Middle.hpp"
#include "PictureBookData/Enemy_Zonau_Golem_Senior.hpp"
#include "PictureBookData/Enemy_Zonau_Robot_Dark.hpp"
#include "PictureBookData/Enemy_Zonau_Robot_Junior.hpp"
#include "PictureBookData/Enemy_Zonau_Robot_Middle.hpp"
#include "PictureBookData/Enemy_Zonau_Robot_Senior.hpp"
#include "PictureBookData/FireFruit.hpp"
#include "PictureBookData/FldObj_HyliaWoodWell_A_02.hpp"
#include "PictureBookData/FldObj_Pinecone_A_01.hpp"
#include "PictureBookData/GameRomHorse.hpp"
#include "PictureBookData/GameRomHorse00L.hpp"
#include "PictureBookData/GameRomHorse00S.hpp"
#include "PictureBookData/GameRomHorse01L.hpp"
#include "PictureBookData/GameRomHorseBone.hpp"
#include "PictureBookData/GameRomHorseGold.hpp"
#include "PictureBookData/GameRomHorseZelda.hpp"
#include "PictureBookData/IceFruit.hpp"
#include "PictureBookData/Item_Enemy_100.hpp"
#include "PictureBookData/Item_Enemy_101.hpp"
#include "PictureBookData/Item_Enemy_102.hpp"
#include "PictureBookData/Item_Enemy_103.hpp"
#include "PictureBookData/Item_Enemy_106.hpp"
#include "PictureBookData/Item_Enemy_107.hpp"
#include "PictureBookData/Item_Enemy_108.hpp"
#include "PictureBookData/Item_Enemy_109.hpp"
#include "PictureBookData/Item_Enemy_117.hpp"
#include "PictureBookData/Item_Enemy_118.hpp"
#include "PictureBookData/Item_Enemy_119.hpp"
#include "PictureBookData/Item_Enemy_132.hpp"
#include "PictureBookData/Item_Enemy_133.hpp"
#include "PictureBookData/Item_Enemy_134.hpp"
#include "PictureBookData/Item_Enemy_142.hpp"
#include "PictureBookData/Item_Enemy_143.hpp"
#include "PictureBookData/Item_Enemy_144.hpp"
#include "PictureBookData/Item_Enemy_148.hpp"
#include "PictureBookData/Item_Enemy_149.hpp"
#include "PictureBookData/Item_Enemy_15.hpp"
#include "PictureBookData/Item_Enemy_150.hpp"
#include "PictureBookData/Item_Enemy_151.hpp"
#include "PictureBookData/Item_Enemy_153.hpp"
#include "PictureBookData/Item_Enemy_154.hpp"
#include "PictureBookData/Item_Enemy_155.hpp"
#include "PictureBookData/Item_Enemy_16.hpp"
#include "PictureBookData/Item_Enemy_166.hpp"
#include "PictureBookData/Item_Enemy_167.hpp"
#include "PictureBookData/Item_Enemy_168.hpp"
#include "PictureBookData/Item_Enemy_169.hpp"
#include "PictureBookData/Item_Enemy_17.hpp"
#include "PictureBookData/Item_Enemy_181.hpp"
#include "PictureBookData/Item_Enemy_182.hpp"
#include "PictureBookData/Item_Enemy_183.hpp"
#include "PictureBookData/Item_Enemy_184.hpp"
#include "PictureBookData/Item_Enemy_186.hpp"
#include "PictureBookData/Item_Enemy_187.hpp"
#include "PictureBookData/Item_Enemy_188.hpp"
#include "PictureBookData/Item_Enemy_19.hpp"
#include "PictureBookData/Item_Enemy_191.hpp"
#include "PictureBookData/Item_Enemy_192.hpp"
#include "PictureBookData/Item_Enemy_193.hpp"
#include "PictureBookData/Item_Enemy_208.hpp"
#include "PictureBookData/Item_Enemy_210.hpp"
#include "PictureBookData/Item_Enemy_211.hpp"
#include "PictureBookData/Item_Enemy_212.hpp"
#include "PictureBookData/Item_Enemy_213.hpp"
#include "PictureBookData/Item_Enemy_214.hpp"
#include "PictureBookData/Item_Enemy_215.hpp"
#include "PictureBookData/Item_Enemy_216.hpp"
#include "PictureBookData/Item_Enemy_217.hpp"
#include "PictureBookData/Item_Enemy_218.hpp"
#include "PictureBookData/Item_Enemy_228.hpp"
#include "PictureBookData/Item_Enemy_229.hpp"
#include "PictureBookData/Item_Enemy_230.hpp"
#include "PictureBookData/Item_Enemy_231.hpp"
#include "PictureBookData/Item_Enemy_40.hpp"
#include "PictureBookData/Item_Enemy_58.hpp"
#include "PictureBookData/Item_Enemy_59.hpp"
#include "PictureBookData/Item_Enemy_60.hpp"
#include "PictureBookData/Item_Enemy_64.hpp"
#include "PictureBookData/Item_Enemy_66.hpp"
#include "PictureBookData/Item_Enemy_67.hpp"
#include "PictureBookData/Item_Enemy_69.hpp"
#include "PictureBookData/Item_Enemy_77.hpp"
#include "PictureBookData/Item_Enemy_78.hpp"
#include "PictureBookData/Item_Enemy_79.hpp"
#include "PictureBookData/Item_Enemy_80.hpp"
#include "PictureBookData/Item_Enemy_89.hpp"
#include "PictureBookData/Item_Enemy_90.hpp"
#include "PictureBookData/Item_Enemy_91.hpp"
#include "PictureBookData/Item_Enemy_92.hpp"
#include "PictureBookData/Item_FishGet_A.hpp"
#include "PictureBookData/Item_FishGet_AA.hpp"
#include "PictureBookData/Item_FishGet_AC.hpp"
#include "PictureBookData/Item_FishGet_B.hpp"
#include "PictureBookData/Item_FishGet_C.hpp"
#include "PictureBookData/Item_FishGet_D.hpp"
#include "PictureBookData/Item_FishGet_E.hpp"
#include "PictureBookData/Item_FishGet_F.hpp"
#include "PictureBookData/Item_FishGet_G.hpp"
#include "PictureBookData/Item_FishGet_H.hpp"
#include "PictureBookData/Item_FishGet_I.hpp"
#include "PictureBookData/Item_FishGet_J.hpp"
#include "PictureBookData/Item_FishGet_L.hpp"
#include "PictureBookData/Item_FishGet_M.hpp"
#include "PictureBookData/Item_FishGet_X.hpp"
#include "PictureBookData/Item_FishGet_Z.hpp"
#include "PictureBookData/Item_Fruit_A.hpp"
#include "PictureBookData/Item_Fruit_B.hpp"
#include "PictureBookData/Item_Fruit_C.hpp"
#include "PictureBookData/Item_Fruit_E.hpp"
#include "PictureBookData/Item_Fruit_F.hpp"
#include "PictureBookData/Item_Fruit_G.hpp"
#include "PictureBookData/Item_Fruit_H.hpp"
#include "PictureBookData/Item_Fruit_I.hpp"
#include "PictureBookData/Item_Fruit_J.hpp"
#include "PictureBookData/Item_Fruit_M.hpp"
#include "PictureBookData/Item_Fruit_N.hpp"
#include "PictureBookData/Item_Fruit_P.hpp"
#include "PictureBookData/Item_InsectGet_K.hpp"
#include "PictureBookData/Item_InsectGet_O.hpp"
#include "PictureBookData/Item_InsectGet_Z.hpp"
#include "PictureBookData/Item_Mushroom_A.hpp"
#include "PictureBookData/Item_Mushroom_B.hpp"
#include "PictureBookData/Item_Mushroom_C.hpp"
#include "PictureBookData/Item_Mushroom_E.hpp"
#include "PictureBookData/Item_Mushroom_F.hpp"
#include "PictureBookData/Item_Mushroom_H.hpp"
#include "PictureBookData/Item_Mushroom_J.hpp"
#include "PictureBookData/Item_Mushroom_L.hpp"
#include "PictureBookData/Item_Mushroom_M.hpp"
#include "PictureBookData/Item_Mushroom_N.hpp"
#include "PictureBookData/Item_Mushroom_O.hpp"
#include "PictureBookData/Item_Mushroom_P.hpp"
#include "PictureBookData/Item_MushroomGet_D.hpp"
#include "PictureBookData/Item_MushroomGet_K.hpp"
#include "PictureBookData/Item_PlantGet_A.hpp"
#include "PictureBookData/Item_PlantGet_B.hpp"
#include "PictureBookData/Item_PlantGet_C.hpp"
#include "PictureBookData/Item_PlantGet_E.hpp"
#include "PictureBookData/Item_PlantGet_F.hpp"
#include "PictureBookData/Item_PlantGet_G.hpp"
#include "PictureBookData/Item_PlantGet_H.hpp"
#include "PictureBookData/Item_PlantGet_I.hpp"
#include "PictureBookData/Item_PlantGet_J.hpp"
#include "PictureBookData/Item_PlantGet_L.hpp"
#include "PictureBookData/Item_PlantGet_M.hpp"
#include "PictureBookData/Item_PlantGet_O.hpp"
#include "PictureBookData/Item_PlantGet_Q.hpp"
#include "PictureBookData/Item_PlantGet_R.hpp"
#include "PictureBookData/Item_PlantGet_S.hpp"
#include "PictureBookData/Item_PlantGet_U.hpp"
#include "PictureBookData/LightBall_Large.hpp"
#include "PictureBookData/LightBall_Small.hpp"
#include "PictureBookData/LightFruit.hpp"
#include "PictureBookData/NormalArrow.hpp"
#include "PictureBookData/Obj_Mineral_A_01.hpp"
#include "PictureBookData/Obj_Mineral_B_01.hpp"
#include "PictureBookData/Obj_Mineral_C_01.hpp"
#include "PictureBookData/Obj_Mineral_D_01.hpp"
#include "PictureBookData/SmokeFruit.hpp"
#include "PictureBookData/TBox_Field_Iron.hpp"
#include "PictureBookData/WaterFruit.hpp"
#include "PictureBookData/Weapon_Bow_001.hpp"
#include "PictureBookData/Weapon_Bow_002.hpp"
#include "PictureBookData/Weapon_Bow_003.hpp"
#include "PictureBookData/Weapon_Bow_004.hpp"
#include "PictureBookData/Weapon_Bow_006.hpp"
#include "PictureBookData/Weapon_Bow_009.hpp"
#include "PictureBookData/Weapon_Bow_011.hpp"
#include "PictureBookData/Weapon_Bow_013.hpp"
#include "PictureBookData/Weapon_Bow_014.hpp"
#include "PictureBookData/Weapon_Bow_015.hpp"
#include "PictureBookData/Weapon_Bow_016.hpp"
#include "PictureBookData/Weapon_Bow_017.hpp"
#include "PictureBookData/Weapon_Bow_026.hpp"
#include "PictureBookData/Weapon_Bow_027.hpp"
#include "PictureBookData/Weapon_Bow_028.hpp"
#include "PictureBookData/Weapon_Bow_029.hpp"
#include "PictureBookData/Weapon_Bow_030.hpp"
#include "PictureBookData/Weapon_Bow_032.hpp"
#include "PictureBookData/Weapon_Bow_033.hpp"
#include "PictureBookData/Weapon_Bow_035.hpp"
#include "PictureBookData/Weapon_Bow_036.hpp"
#include "PictureBookData/Weapon_Bow_038.hpp"
#include "PictureBookData/Weapon_Bow_040.hpp"
#include "PictureBookData/Weapon_Bow_072.hpp"
#include "PictureBookData/Weapon_Bow_101.hpp"
#include "PictureBookData/Weapon_Bow_104.hpp"
#include "PictureBookData/Weapon_Bow_105.hpp"
#include "PictureBookData/Weapon_Bow_106.hpp"
#include "PictureBookData/Weapon_Bow_107.hpp"
#include "PictureBookData/Weapon_Bow_166.hpp"
#include "PictureBookData/Weapon_Lsword_001.hpp"
#include "PictureBookData/Weapon_Lsword_002.hpp"
#include "PictureBookData/Weapon_Lsword_003.hpp"
#include "PictureBookData/Weapon_Lsword_019.hpp"
#include "PictureBookData/Weapon_Lsword_020.hpp"
#include "PictureBookData/Weapon_Lsword_024.hpp"
#include "PictureBookData/Weapon_Lsword_027.hpp"
#include "PictureBookData/Weapon_Lsword_029.hpp"
#include "PictureBookData/Weapon_Lsword_036.hpp"
#include "PictureBookData/Weapon_Lsword_038.hpp"
#include "PictureBookData/Weapon_Lsword_041.hpp"
#include "PictureBookData/Weapon_Lsword_045.hpp"
#include "PictureBookData/Weapon_Lsword_047.hpp"
#include "PictureBookData/Weapon_Lsword_051.hpp"
#include "PictureBookData/Weapon_Lsword_054.hpp"
#include "PictureBookData/Weapon_Lsword_057.hpp"
#include "PictureBookData/Weapon_Lsword_059.hpp"
#include "PictureBookData/Weapon_Lsword_060.hpp"
#include "PictureBookData/Weapon_Lsword_101.hpp"
#include "PictureBookData/Weapon_Lsword_103.hpp"
#include "PictureBookData/Weapon_Lsword_106.hpp"
#include "PictureBookData/Weapon_Lsword_108.hpp"
#include "PictureBookData/Weapon_Lsword_109.hpp"
#include "PictureBookData/Weapon_Lsword_112.hpp"
#include "PictureBookData/Weapon_Lsword_113.hpp"
#include "PictureBookData/Weapon_Lsword_114.hpp"
#include "PictureBookData/Weapon_Lsword_124.hpp"
#include "PictureBookData/Weapon_Lsword_127.hpp"
#include "PictureBookData/Weapon_Lsword_129.hpp"
#include "PictureBookData/Weapon_Lsword_136.hpp"
#include "PictureBookData/Weapon_Lsword_147.hpp"
#include "PictureBookData/Weapon_Lsword_161.hpp"
#include "PictureBookData/Weapon_Lsword_163.hpp"
#include "PictureBookData/Weapon_Lsword_164.hpp"
#include "PictureBookData/Weapon_Lsword_166.hpp"
#include "PictureBookData/Weapon_Lsword_174.hpp"
#include "PictureBookData/Weapon_Shield_001.hpp"
#include "PictureBookData/Weapon_Shield_002.hpp"
#include "PictureBookData/Weapon_Shield_003.hpp"
#include "PictureBookData/Weapon_Shield_004.hpp"
#include "PictureBookData/Weapon_Shield_005.hpp"
#include "PictureBookData/Weapon_Shield_006.hpp"
#include "PictureBookData/Weapon_Shield_007.hpp"
#include "PictureBookData/Weapon_Shield_008.hpp"
#include "PictureBookData/Weapon_Shield_009.hpp"
#include "PictureBookData/Weapon_Shield_016.hpp"
#include "PictureBookData/Weapon_Shield_017.hpp"
#include "PictureBookData/Weapon_Shield_018.hpp"
#include "PictureBookData/Weapon_Shield_021.hpp"
#include "PictureBookData/Weapon_Shield_022.hpp"
#include "PictureBookData/Weapon_Shield_023.hpp"
#include "PictureBookData/Weapon_Shield_025.hpp"
#include "PictureBookData/Weapon_Shield_026.hpp"
#include "PictureBookData/Weapon_Shield_030.hpp"
#include "PictureBookData/Weapon_Shield_031.hpp"
#include "PictureBookData/Weapon_Shield_032.hpp"
#include "PictureBookData/Weapon_Shield_033.hpp"
#include "PictureBookData/Weapon_Shield_034.hpp"
#include "PictureBookData/Weapon_Shield_035.hpp"
#include "PictureBookData/Weapon_Shield_036.hpp"
#include "PictureBookData/Weapon_Shield_037.hpp"
#include "PictureBookData/Weapon_Shield_040.hpp"
#include "PictureBookData/Weapon_Shield_041.hpp"
#include "PictureBookData/Weapon_Shield_042.hpp"
#include "PictureBookData/Weapon_Shield_057.hpp"
#include "PictureBookData/Weapon_Shield_101.hpp"
#include "PictureBookData/Weapon_Shield_102.hpp"
#include "PictureBookData/Weapon_Shield_103.hpp"
#include "PictureBookData/Weapon_Shield_107.hpp"
#include "PictureBookData/Weapon_Spear_001.hpp"
#include "PictureBookData/Weapon_Spear_002.hpp"
#include "PictureBookData/Weapon_Spear_003.hpp"
#include "PictureBookData/Weapon_Spear_021.hpp"
#include "PictureBookData/Weapon_Spear_022.hpp"
#include "PictureBookData/Weapon_Spear_024.hpp"
#include "PictureBookData/Weapon_Spear_025.hpp"
#include "PictureBookData/Weapon_Spear_027.hpp"
#include "PictureBookData/Weapon_Spear_029.hpp"
#include "PictureBookData/Weapon_Spear_030.hpp"
#include "PictureBookData/Weapon_Spear_032.hpp"
#include "PictureBookData/Weapon_Spear_036.hpp"
#include "PictureBookData/Weapon_Spear_038.hpp"
#include "PictureBookData/Weapon_Spear_047.hpp"
#include "PictureBookData/Weapon_Spear_050.hpp"
#include "PictureBookData/Weapon_Spear_101.hpp"
#include "PictureBookData/Weapon_Spear_103.hpp"
#include "PictureBookData/Weapon_Spear_106.hpp"
#include "PictureBookData/Weapon_Spear_108.hpp"
#include "PictureBookData/Weapon_Spear_109.hpp"
#include "PictureBookData/Weapon_Spear_112.hpp"
#include "PictureBookData/Weapon_Spear_113.hpp"
#include "PictureBookData/Weapon_Spear_124.hpp"
#include "PictureBookData/Weapon_Spear_125.hpp"
#include "PictureBookData/Weapon_Spear_127.hpp"
#include "PictureBookData/Weapon_Spear_129.hpp"
#include "PictureBookData/Weapon_Spear_132.hpp"
#include "PictureBookData/Weapon_Spear_147.hpp"
#include "PictureBookData/Weapon_Spear_161.hpp"
#include "PictureBookData/Weapon_Spear_163.hpp"
#include "PictureBookData/Weapon_Spear_164.hpp"
#include "PictureBookData/Weapon_Spear_166.hpp"
#include "PictureBookData/Weapon_Spear_173.hpp"
#include "PictureBookData/Weapon_Sword_001.hpp"
#include "PictureBookData/Weapon_Sword_002.hpp"
#include "PictureBookData/Weapon_Sword_003.hpp"
#include "PictureBookData/Weapon_Sword_019.hpp"
#include "PictureBookData/Weapon_Sword_020.hpp"
#include "PictureBookData/Weapon_Sword_021.hpp"
#include "PictureBookData/Weapon_Sword_022.hpp"
#include "PictureBookData/Weapon_Sword_024.hpp"
#include "PictureBookData/Weapon_Sword_025.hpp"
#include "PictureBookData/Weapon_Sword_027.hpp"
#include "PictureBookData/Weapon_Sword_029.hpp"
#include "PictureBookData/Weapon_Sword_031.hpp"
#include "PictureBookData/Weapon_Sword_041.hpp"
#include "PictureBookData/Weapon_Sword_043.hpp"
#include "PictureBookData/Weapon_Sword_044.hpp"
#include "PictureBookData/Weapon_Sword_047.hpp"
#include "PictureBookData/Weapon_Sword_051.hpp"
#include "PictureBookData/Weapon_Sword_052.hpp"
#include "PictureBookData/Weapon_Sword_057.hpp"
#include "PictureBookData/Weapon_Sword_058.hpp"
#include "PictureBookData/Weapon_Sword_059.hpp"
#include "PictureBookData/Weapon_Sword_070.hpp"
#include "PictureBookData/Weapon_Sword_101.hpp"
#include "PictureBookData/Weapon_Sword_103.hpp"
#include "PictureBookData/Weapon_Sword_105.hpp"
#include "PictureBookData/Weapon_Sword_106.hpp"
#include "PictureBookData/Weapon_Sword_107.hpp"
#include "PictureBookData/Weapon_Sword_108.hpp"
#include "PictureBookData/Weapon_Sword_109.hpp"
#include "PictureBookData/Weapon_Sword_112.hpp"
#include "PictureBookData/Weapon_Sword_113.hpp"
#include "PictureBookData/Weapon_Sword_114.hpp"
#include "PictureBookData/Weapon_Sword_124.hpp"
#include "PictureBookData/Weapon_Sword_125.hpp"
#include "PictureBookData/Weapon_Sword_127.hpp"
#include "PictureBookData/Weapon_Sword_129.hpp"
#include "PictureBookData/Weapon_Sword_131.hpp"
#include "PictureBookData/Weapon_Sword_147.hpp"
#include "PictureBookData/Weapon_Sword_161.hpp"
#include "PictureBookData/Weapon_Sword_163.hpp"
#include "PictureBookData/Weapon_Sword_164.hpp"
#include "PictureBookData/Weapon_Sword_166.hpp"

template <> struct Data::Structure<GameData::PictureBookData> : GameData::PictureBookData {
	Structure<Animal_Bear_A> Animal_Bear_A;
	Structure<Animal_Bear_B> Animal_Bear_B;
	Structure<Animal_Boar_A> Animal_Boar_A;
	Structure<Animal_Boar_B> Animal_Boar_B;
	Structure<Animal_Bull_A> Animal_Bull_A;
	Structure<Animal_Cassowary_A> Animal_Cassowary_A;
	Structure<Animal_Cow_A> Animal_Cow_A;
	Structure<Animal_Crow_A> Animal_Crow_A;
	Structure<Animal_Deer_A> Animal_Deer_A;
	Structure<Animal_Doe_A> Animal_Doe_A;
	Structure<Animal_Dog_A> Animal_Dog_A;
	Structure<Animal_Elk_A> Animal_Elk_A;
	Structure<Animal_Fox_A> Animal_Fox_A;
	Structure<Animal_Fox_B> Animal_Fox_B;
	Structure<Animal_Goat_A> Animal_Goat_A;
	Structure<Animal_Gull_A> Animal_Gull_A;
	Structure<Animal_Hawk_A> Animal_Hawk_A;
	Structure<Animal_Heron_A> Animal_Heron_A;
	Structure<Animal_Heron_B> Animal_Heron_B;
	Structure<Animal_Insect_A> Animal_Insect_A;
	Structure<Animal_Insect_AA> Animal_Insect_AA;
	Structure<Animal_Insect_AB> Animal_Insect_AB;
	Structure<Animal_Insect_AG> Animal_Insect_AG;
	Structure<Animal_Insect_AH> Animal_Insect_AH;
	Structure<Animal_Insect_AI> Animal_Insect_AI;
	Structure<Animal_Insect_B> Animal_Insect_B;
	Structure<Animal_Insect_C> Animal_Insect_C;
	Structure<Animal_Insect_E> Animal_Insect_E;
	Structure<Animal_Insect_F> Animal_Insect_F;
	Structure<Animal_Insect_G> Animal_Insect_G;
	Structure<Animal_Insect_H> Animal_Insect_H;
	Structure<Animal_Insect_I> Animal_Insect_I;
	Structure<Animal_Insect_M> Animal_Insect_M;
	Structure<Animal_Insect_N> Animal_Insect_N;
	Structure<Animal_Insect_P> Animal_Insect_P;
	Structure<Animal_Insect_Q> Animal_Insect_Q;
	Structure<Animal_Insect_R> Animal_Insect_R;
	Structure<Animal_Insect_S> Animal_Insect_S;
	Structure<Animal_Insect_T> Animal_Insect_T;
	Structure<Animal_Insect_X> Animal_Insect_X;
	Structure<Animal_Kokko_A> Animal_Kokko_A;
	Structure<Animal_LittleBird_A> Animal_LittleBird_A;
	Structure<Animal_LittleBird_B> Animal_LittleBird_B;
	Structure<Animal_LittleBird_C> Animal_LittleBird_C;
	Structure<Animal_LittleBird_D> Animal_LittleBird_D;
	Structure<Animal_LittleBird_E> Animal_LittleBird_E;
	Structure<Animal_LittleBird_F> Animal_LittleBird_F;
	Structure<Animal_Pao_A> Animal_Pao_A;
	Structure<Animal_Pigeon_A> Animal_Pigeon_A;
	Structure<Animal_Pigeon_B> Animal_Pigeon_B;
	Structure<Animal_Ptarmigan_A> Animal_Ptarmigan_A;
	Structure<Animal_Ptarmigan_B> Animal_Ptarmigan_B;
	Structure<Animal_RupeeRabbit_A> Animal_RupeeRabbit_A;
	Structure<Animal_Sheep_A> Animal_Sheep_A;
	Structure<Animal_SkyCassowary_A> Animal_SkyCassowary_A;
	Structure<Animal_SkyGull_A> Animal_SkyGull_A;
	Structure<Animal_SkyPigeon_A> Animal_SkyPigeon_A;
	Structure<Animal_Squirrel_A> Animal_Squirrel_A;
	Structure<Animal_Sunazarashi_A> Animal_Sunazarashi_A;
	Structure<Animal_SunazarashiSP_C> Animal_SunazarashiSP_C;
	Structure<Animal_WildDuck_A> Animal_WildDuck_A;
	Structure<Animal_WildGoat_A> Animal_WildGoat_A;
	Structure<Animal_Wolf_A> Animal_Wolf_A;
	Structure<Animal_Wolf_B> Animal_Wolf_B;
	Structure<Animal_Wolf_C> Animal_Wolf_C;
	Structure<BeeHome> BeeHome;
	Structure<BombFruit> BombFruit;
	Structure<ConfusionFruit> ConfusionFruit;
	Structure<ElectricalFruit> ElectricalFruit;
	Structure<Enemy_Assassin_Junior> Enemy_Assassin_Junior;
	Structure<Enemy_Assassin_Middle> Enemy_Assassin_Middle;
	Structure<Enemy_Assassin_Senior> Enemy_Assassin_Senior;
	Structure<Enemy_Bokoblin_Bone_Junior> Enemy_Bokoblin_Bone_Junior;
	Structure<Enemy_Bokoblin_Boss_Dark> Enemy_Bokoblin_Boss_Dark;
	Structure<Enemy_Bokoblin_Boss_Junior> Enemy_Bokoblin_Boss_Junior;
	Structure<Enemy_Bokoblin_Boss_Middle> Enemy_Bokoblin_Boss_Middle;
	Structure<Enemy_Bokoblin_Boss_Senior> Enemy_Bokoblin_Boss_Senior;
	Structure<Enemy_Bokoblin_Dark> Enemy_Bokoblin_Dark;
	Structure<Enemy_Bokoblin_Junior> Enemy_Bokoblin_Junior;
	Structure<Enemy_Bokoblin_Middle> Enemy_Bokoblin_Middle;
	Structure<Enemy_Bokoblin_Senior> Enemy_Bokoblin_Senior;
	Structure<Enemy_CaveMaster_000> Enemy_CaveMaster_000;
	Structure<Enemy_CDungeon_Practice> Enemy_CDungeon_Practice;
	Structure<Enemy_Chuchu_Electric_Junior> Enemy_Chuchu_Electric_Junior;
	Structure<Enemy_Chuchu_Fire_Junior> Enemy_Chuchu_Fire_Junior;
	Structure<Enemy_Chuchu_Ice_Junior> Enemy_Chuchu_Ice_Junior;
	Structure<Enemy_Chuchu_Junior> Enemy_Chuchu_Junior;
	Structure<Enemy_Dragon_Darkness> Enemy_Dragon_Darkness;
	Structure<Enemy_Dragon_Electric> Enemy_Dragon_Electric;
	Structure<Enemy_Dragon_Fire> Enemy_Dragon_Fire;
	Structure<Enemy_Dragon_Ice> Enemy_Dragon_Ice;
	Structure<Enemy_Dragon_Light_001> Enemy_Dragon_Light_001;
	Structure<Enemy_Drake_Electric> Enemy_Drake_Electric;
	Structure<Enemy_Drake_Fire> Enemy_Drake_Fire;
	Structure<Enemy_Drake_Ice> Enemy_Drake_Ice;
	Structure<Enemy_Drake_Mix> Enemy_Drake_Mix;
	Structure<Enemy_DungeonBoss_Gerudo> Enemy_DungeonBoss_Gerudo;
	Structure<Enemy_DungeonBoss_Goron> Enemy_DungeonBoss_Goron;
	Structure<Enemy_DungeonBoss_Rito> Enemy_DungeonBoss_Rito;
	Structure<Enemy_DungeonBoss_Zonau> Enemy_DungeonBoss_Zonau;
	Structure<Enemy_DungeonBoss_Zora> Enemy_DungeonBoss_Zora;
	Structure<Enemy_Ganondorf> Enemy_Ganondorf;
	Structure<Enemy_Ganondorf_Miasma> Enemy_Ganondorf_Miasma;
	Structure<Enemy_Giant_Bone> Enemy_Giant_Bone;
	Structure<Enemy_Giant_Junior> Enemy_Giant_Junior;
	Structure<Enemy_Giant_Middle> Enemy_Giant_Middle;
	Structure<Enemy_Giant_Senior> Enemy_Giant_Senior;
	Structure<Enemy_Golem_Fire> Enemy_Golem_Fire;
	Structure<Enemy_Golem_Fort_A> Enemy_Golem_Fort_A;
	Structure<Enemy_Golem_Ice> Enemy_Golem_Ice;
	Structure<Enemy_Golem_Junior> Enemy_Golem_Junior;
	Structure<Enemy_Golem_Little> Enemy_Golem_Little;
	Structure<Enemy_Golem_Little_Fire> Enemy_Golem_Little_Fire;
	Structure<Enemy_Golem_Little_Ice> Enemy_Golem_Little_Ice;
	Structure<Enemy_Golem_Middle> Enemy_Golem_Middle;
	Structure<Enemy_Golem_Senior> Enemy_Golem_Senior;
	Structure<Enemy_Horablin_Dark> Enemy_Horablin_Dark;
	Structure<Enemy_Horablin_Junior> Enemy_Horablin_Junior;
	Structure<Enemy_Horablin_Middle> Enemy_Horablin_Middle;
	Structure<Enemy_Horablin_Senior> Enemy_Horablin_Senior;
	Structure<Enemy_Keese> Enemy_Keese;
	Structure<Enemy_Keese_Electric> Enemy_Keese_Electric;
	Structure<Enemy_Keese_Fire> Enemy_Keese_Fire;
	Structure<Enemy_Keese_Ice> Enemy_Keese_Ice;
	Structure<Enemy_LikeLike_Crack> Enemy_LikeLike_Crack;
	Structure<Enemy_LikeLike_Electric> Enemy_LikeLike_Electric;
	Structure<Enemy_LikeLike_Fire> Enemy_LikeLike_Fire;
	Structure<Enemy_LikeLike_Ice> Enemy_LikeLike_Ice;
	Structure<Enemy_LikeLike_Plane> Enemy_LikeLike_Plane;
	Structure<Enemy_LikeLike_Tar> Enemy_LikeLike_Tar;
	Structure<Enemy_Lizalfos_Bone_Junior> Enemy_Lizalfos_Bone_Junior;
	Structure<Enemy_Lizalfos_Dark> Enemy_Lizalfos_Dark;
	Structure<Enemy_Lizalfos_Electric> Enemy_Lizalfos_Electric;
	Structure<Enemy_Lizalfos_Fire> Enemy_Lizalfos_Fire;
	Structure<Enemy_Lizalfos_Ice> Enemy_Lizalfos_Ice;
	Structure<Enemy_Lizalfos_Junior> Enemy_Lizalfos_Junior;
	Structure<Enemy_Lizalfos_Middle> Enemy_Lizalfos_Middle;
	Structure<Enemy_Lizalfos_Senior> Enemy_Lizalfos_Senior;
	Structure<Enemy_Lynel_Dark> Enemy_Lynel_Dark;
	Structure<Enemy_Lynel_Junior> Enemy_Lynel_Junior;
	Structure<Enemy_Lynel_Middle> Enemy_Lynel_Middle;
	Structure<Enemy_Lynel_Senior> Enemy_Lynel_Senior;
	Structure<Enemy_MiddleBoss_Goron> Enemy_MiddleBoss_Goron;
	Structure<Enemy_Mogurudo_Baby_Junior> Enemy_Mogurudo_Baby_Junior;
	Structure<Enemy_Mogurudo_Junior> Enemy_Mogurudo_Junior;
	Structure<Enemy_Mogurudo_Middle> Enemy_Mogurudo_Middle;
	Structure<Enemy_Mogurudo_Senior> Enemy_Mogurudo_Senior;
	Structure<Enemy_Moriblin_Bone_Junior> Enemy_Moriblin_Bone_Junior;
	Structure<Enemy_Moriblin_Dark> Enemy_Moriblin_Dark;
	Structure<Enemy_Moriblin_Junior> Enemy_Moriblin_Junior;
	Structure<Enemy_Moriblin_Middle> Enemy_Moriblin_Middle;
	Structure<Enemy_Moriblin_Senior> Enemy_Moriblin_Senior;
	Structure<Enemy_Octarock> Enemy_Octarock;
	Structure<Enemy_Octarock_Desert> Enemy_Octarock_Desert;
	Structure<Enemy_Octarock_Forest> Enemy_Octarock_Forest;
	Structure<Enemy_Octarock_Snow> Enemy_Octarock_Snow;
	Structure<Enemy_Octarock_Stone> Enemy_Octarock_Stone;
	Structure<Enemy_PhantomGanon> Enemy_PhantomGanon;
	Structure<Enemy_Sandworm> Enemy_Sandworm;
	Structure<Enemy_Toby_Junior> Enemy_Toby_Junior;
	Structure<Enemy_Treant_Broadleaf> Enemy_Treant_Broadleaf;
	Structure<Enemy_Wizzrobe_Electric> Enemy_Wizzrobe_Electric;
	Structure<Enemy_Wizzrobe_Electric_Senior> Enemy_Wizzrobe_Electric_Senior;
	Structure<Enemy_Wizzrobe_Fire> Enemy_Wizzrobe_Fire;
	Structure<Enemy_Wizzrobe_Fire_Senior> Enemy_Wizzrobe_Fire_Senior;
	Structure<Enemy_Wizzrobe_Ice> Enemy_Wizzrobe_Ice;
	Structure<Enemy_Wizzrobe_Ice_Senior> Enemy_Wizzrobe_Ice_Senior;
	Structure<Enemy_Zombie_Boss_Junior> Enemy_Zombie_Boss_Junior;
	Structure<Enemy_Zombie_Junior> Enemy_Zombie_Junior;
	Structure<Enemy_Zonau_BlockMaster_Junior> Enemy_Zonau_BlockMaster_Junior;
	Structure<Enemy_Zonau_BlockMaster_Middle> Enemy_Zonau_BlockMaster_Middle;
	Structure<Enemy_Zonau_BlockMaster_Senior> Enemy_Zonau_BlockMaster_Senior;
	Structure<Enemy_Zonau_Golem_Dark> Enemy_Zonau_Golem_Dark;
	Structure<Enemy_Zonau_Golem_Junior> Enemy_Zonau_Golem_Junior;
	Structure<Enemy_Zonau_Golem_Middle> Enemy_Zonau_Golem_Middle;
	Structure<Enemy_Zonau_Golem_Senior> Enemy_Zonau_Golem_Senior;
	Structure<Enemy_Zonau_Robot_Dark> Enemy_Zonau_Robot_Dark;
	Structure<Enemy_Zonau_Robot_Junior> Enemy_Zonau_Robot_Junior;
	Structure<Enemy_Zonau_Robot_Middle> Enemy_Zonau_Robot_Middle;
	Structure<Enemy_Zonau_Robot_Senior> Enemy_Zonau_Robot_Senior;
	Structure<FireFruit> FireFruit;
	Structure<FldObj_HyliaWoodWell_A_02> FldObj_HyliaWoodWell_A_02;
	Structure<FldObj_Pinecone_A_01> FldObj_Pinecone_A_01;
	Structure<GameRomHorse> GameRomHorse;
	Structure<GameRomHorse00L> GameRomHorse00L;
	Structure<GameRomHorse00S> GameRomHorse00S;
	Structure<GameRomHorse01L> GameRomHorse01L;
	Structure<GameRomHorseBone> GameRomHorseBone;
	Structure<GameRomHorseGold> GameRomHorseGold;
	Structure<GameRomHorseZelda> GameRomHorseZelda;
	Structure<IceFruit> IceFruit;
	Structure<Item_Enemy_100> Item_Enemy_100;
	Structure<Item_Enemy_101> Item_Enemy_101;
	Structure<Item_Enemy_102> Item_Enemy_102;
	Structure<Item_Enemy_103> Item_Enemy_103;
	Structure<Item_Enemy_106> Item_Enemy_106;
	Structure<Item_Enemy_107> Item_Enemy_107;
	Structure<Item_Enemy_108> Item_Enemy_108;
	Structure<Item_Enemy_109> Item_Enemy_109;
	Structure<Item_Enemy_117> Item_Enemy_117;
	Structure<Item_Enemy_118> Item_Enemy_118;
	Structure<Item_Enemy_119> Item_Enemy_119;
	Structure<Item_Enemy_132> Item_Enemy_132;
	Structure<Item_Enemy_133> Item_Enemy_133;
	Structure<Item_Enemy_134> Item_Enemy_134;
	Structure<Item_Enemy_142> Item_Enemy_142;
	Structure<Item_Enemy_143> Item_Enemy_143;
	Structure<Item_Enemy_144> Item_Enemy_144;
	Structure<Item_Enemy_148> Item_Enemy_148;
	Structure<Item_Enemy_149> Item_Enemy_149;
	Structure<Item_Enemy_15> Item_Enemy_15;
	Structure<Item_Enemy_150> Item_Enemy_150;
	Structure<Item_Enemy_151> Item_Enemy_151;
	Structure<Item_Enemy_153> Item_Enemy_153;
	Structure<Item_Enemy_154> Item_Enemy_154;
	Structure<Item_Enemy_155> Item_Enemy_155;
	Structure<Item_Enemy_16> Item_Enemy_16;
	Structure<Item_Enemy_166> Item_Enemy_166;
	Structure<Item_Enemy_167> Item_Enemy_167;
	Structure<Item_Enemy_168> Item_Enemy_168;
	Structure<Item_Enemy_169> Item_Enemy_169;
	Structure<Item_Enemy_17> Item_Enemy_17;
	Structure<Item_Enemy_181> Item_Enemy_181;
	Structure<Item_Enemy_182> Item_Enemy_182;
	Structure<Item_Enemy_183> Item_Enemy_183;
	Structure<Item_Enemy_184> Item_Enemy_184;
	Structure<Item_Enemy_186> Item_Enemy_186;
	Structure<Item_Enemy_187> Item_Enemy_187;
	Structure<Item_Enemy_188> Item_Enemy_188;
	Structure<Item_Enemy_19> Item_Enemy_19;
	Structure<Item_Enemy_191> Item_Enemy_191;
	Structure<Item_Enemy_192> Item_Enemy_192;
	Structure<Item_Enemy_193> Item_Enemy_193;
	Structure<Item_Enemy_208> Item_Enemy_208;
	Structure<Item_Enemy_210> Item_Enemy_210;
	Structure<Item_Enemy_211> Item_Enemy_211;
	Structure<Item_Enemy_212> Item_Enemy_212;
	Structure<Item_Enemy_213> Item_Enemy_213;
	Structure<Item_Enemy_214> Item_Enemy_214;
	Structure<Item_Enemy_215> Item_Enemy_215;
	Structure<Item_Enemy_216> Item_Enemy_216;
	Structure<Item_Enemy_217> Item_Enemy_217;
	Structure<Item_Enemy_218> Item_Enemy_218;
	Structure<Item_Enemy_228> Item_Enemy_228;
	Structure<Item_Enemy_229> Item_Enemy_229;
	Structure<Item_Enemy_230> Item_Enemy_230;
	Structure<Item_Enemy_231> Item_Enemy_231;
	Structure<Item_Enemy_40> Item_Enemy_40;
	Structure<Item_Enemy_58> Item_Enemy_58;
	Structure<Item_Enemy_59> Item_Enemy_59;
	Structure<Item_Enemy_60> Item_Enemy_60;
	Structure<Item_Enemy_64> Item_Enemy_64;
	Structure<Item_Enemy_66> Item_Enemy_66;
	Structure<Item_Enemy_67> Item_Enemy_67;
	Structure<Item_Enemy_69> Item_Enemy_69;
	Structure<Item_Enemy_77> Item_Enemy_77;
	Structure<Item_Enemy_78> Item_Enemy_78;
	Structure<Item_Enemy_79> Item_Enemy_79;
	Structure<Item_Enemy_80> Item_Enemy_80;
	Structure<Item_Enemy_89> Item_Enemy_89;
	Structure<Item_Enemy_90> Item_Enemy_90;
	Structure<Item_Enemy_91> Item_Enemy_91;
	Structure<Item_Enemy_92> Item_Enemy_92;
	Structure<Item_FishGet_A> Item_FishGet_A;
	Structure<Item_FishGet_AA> Item_FishGet_AA;
	Structure<Item_FishGet_AC> Item_FishGet_AC;
	Structure<Item_FishGet_B> Item_FishGet_B;
	Structure<Item_FishGet_C> Item_FishGet_C;
	Structure<Item_FishGet_D> Item_FishGet_D;
	Structure<Item_FishGet_E> Item_FishGet_E;
	Structure<Item_FishGet_F> Item_FishGet_F;
	Structure<Item_FishGet_G> Item_FishGet_G;
	Structure<Item_FishGet_H> Item_FishGet_H;
	Structure<Item_FishGet_I> Item_FishGet_I;
	Structure<Item_FishGet_J> Item_FishGet_J;
	Structure<Item_FishGet_L> Item_FishGet_L;
	Structure<Item_FishGet_M> Item_FishGet_M;
	Structure<Item_FishGet_X> Item_FishGet_X;
	Structure<Item_FishGet_Z> Item_FishGet_Z;
	Structure<Item_Fruit_A> Item_Fruit_A;
	Structure<Item_Fruit_B> Item_Fruit_B;
	Structure<Item_Fruit_C> Item_Fruit_C;
	Structure<Item_Fruit_E> Item_Fruit_E;
	Structure<Item_Fruit_F> Item_Fruit_F;
	Structure<Item_Fruit_G> Item_Fruit_G;
	Structure<Item_Fruit_H> Item_Fruit_H;
	Structure<Item_Fruit_I> Item_Fruit_I;
	Structure<Item_Fruit_J> Item_Fruit_J;
	Structure<Item_Fruit_M> Item_Fruit_M;
	Structure<Item_Fruit_N> Item_Fruit_N;
	Structure<Item_Fruit_P> Item_Fruit_P;
	Structure<Item_InsectGet_K> Item_InsectGet_K;
	Structure<Item_InsectGet_O> Item_InsectGet_O;
	Structure<Item_InsectGet_Z> Item_InsectGet_Z;
	Structure<Item_Mushroom_A> Item_Mushroom_A;
	Structure<Item_Mushroom_B> Item_Mushroom_B;
	Structure<Item_Mushroom_C> Item_Mushroom_C;
	Structure<Item_Mushroom_E> Item_Mushroom_E;
	Structure<Item_Mushroom_F> Item_Mushroom_F;
	Structure<Item_Mushroom_H> Item_Mushroom_H;
	Structure<Item_Mushroom_J> Item_Mushroom_J;
	Structure<Item_Mushroom_L> Item_Mushroom_L;
	Structure<Item_Mushroom_M> Item_Mushroom_M;
	Structure<Item_Mushroom_N> Item_Mushroom_N;
	Structure<Item_Mushroom_O> Item_Mushroom_O;
	Structure<Item_Mushroom_P> Item_Mushroom_P;
	Structure<Item_MushroomGet_D> Item_MushroomGet_D;
	Structure<Item_MushroomGet_K> Item_MushroomGet_K;
	Structure<Item_PlantGet_A> Item_PlantGet_A;
	Structure<Item_PlantGet_B> Item_PlantGet_B;
	Structure<Item_PlantGet_C> Item_PlantGet_C;
	Structure<Item_PlantGet_E> Item_PlantGet_E;
	Structure<Item_PlantGet_F> Item_PlantGet_F;
	Structure<Item_PlantGet_G> Item_PlantGet_G;
	Structure<Item_PlantGet_H> Item_PlantGet_H;
	Structure<Item_PlantGet_I> Item_PlantGet_I;
	Structure<Item_PlantGet_J> Item_PlantGet_J;
	Structure<Item_PlantGet_L> Item_PlantGet_L;
	Structure<Item_PlantGet_M> Item_PlantGet_M;
	Structure<Item_PlantGet_O> Item_PlantGet_O;
	Structure<Item_PlantGet_Q> Item_PlantGet_Q;
	Structure<Item_PlantGet_R> Item_PlantGet_R;
	Structure<Item_PlantGet_S> Item_PlantGet_S;
	Structure<Item_PlantGet_U> Item_PlantGet_U;
	Structure<LightBall_Large> LightBall_Large;
	Structure<LightBall_Small> LightBall_Small;
	Structure<LightFruit> LightFruit;
	Structure<NormalArrow> NormalArrow;
	Structure<Obj_Mineral_A_01> Obj_Mineral_A_01;
	Structure<Obj_Mineral_B_01> Obj_Mineral_B_01;
	Structure<Obj_Mineral_C_01> Obj_Mineral_C_01;
	Structure<Obj_Mineral_D_01> Obj_Mineral_D_01;
	Structure<SmokeFruit> SmokeFruit;
	Structure<TBox_Field_Iron> TBox_Field_Iron;
	Structure<WaterFruit> WaterFruit;
	Structure<Weapon_Bow_001> Weapon_Bow_001;
	Structure<Weapon_Bow_002> Weapon_Bow_002;
	Structure<Weapon_Bow_003> Weapon_Bow_003;
	Structure<Weapon_Bow_004> Weapon_Bow_004;
	Structure<Weapon_Bow_006> Weapon_Bow_006;
	Structure<Weapon_Bow_009> Weapon_Bow_009;
	Structure<Weapon_Bow_011> Weapon_Bow_011;
	Structure<Weapon_Bow_013> Weapon_Bow_013;
	Structure<Weapon_Bow_014> Weapon_Bow_014;
	Structure<Weapon_Bow_015> Weapon_Bow_015;
	Structure<Weapon_Bow_016> Weapon_Bow_016;
	Structure<Weapon_Bow_017> Weapon_Bow_017;
	Structure<Weapon_Bow_026> Weapon_Bow_026;
	Structure<Weapon_Bow_027> Weapon_Bow_027;
	Structure<Weapon_Bow_028> Weapon_Bow_028;
	Structure<Weapon_Bow_029> Weapon_Bow_029;
	Structure<Weapon_Bow_030> Weapon_Bow_030;
	Structure<Weapon_Bow_032> Weapon_Bow_032;
	Structure<Weapon_Bow_033> Weapon_Bow_033;
	Structure<Weapon_Bow_035> Weapon_Bow_035;
	Structure<Weapon_Bow_036> Weapon_Bow_036;
	Structure<Weapon_Bow_038> Weapon_Bow_038;
	Structure<Weapon_Bow_040> Weapon_Bow_040;
	Structure<Weapon_Bow_072> Weapon_Bow_072;
	Structure<Weapon_Bow_101> Weapon_Bow_101;
	Structure<Weapon_Bow_104> Weapon_Bow_104;
	Structure<Weapon_Bow_105> Weapon_Bow_105;
	Structure<Weapon_Bow_106> Weapon_Bow_106;
	Structure<Weapon_Bow_107> Weapon_Bow_107;
	Structure<Weapon_Bow_166> Weapon_Bow_166;
	Structure<Weapon_Lsword_001> Weapon_Lsword_001;
	Structure<Weapon_Lsword_002> Weapon_Lsword_002;
	Structure<Weapon_Lsword_003> Weapon_Lsword_003;
	Structure<Weapon_Lsword_019> Weapon_Lsword_019;
	Structure<Weapon_Lsword_020> Weapon_Lsword_020;
	Structure<Weapon_Lsword_024> Weapon_Lsword_024;
	Structure<Weapon_Lsword_027> Weapon_Lsword_027;
	Structure<Weapon_Lsword_029> Weapon_Lsword_029;
	Structure<Weapon_Lsword_036> Weapon_Lsword_036;
	Structure<Weapon_Lsword_038> Weapon_Lsword_038;
	Structure<Weapon_Lsword_041> Weapon_Lsword_041;
	Structure<Weapon_Lsword_045> Weapon_Lsword_045;
	Structure<Weapon_Lsword_047> Weapon_Lsword_047;
	Structure<Weapon_Lsword_051> Weapon_Lsword_051;
	Structure<Weapon_Lsword_054> Weapon_Lsword_054;
	Structure<Weapon_Lsword_057> Weapon_Lsword_057;
	Structure<Weapon_Lsword_059> Weapon_Lsword_059;
	Structure<Weapon_Lsword_060> Weapon_Lsword_060;
	Structure<Weapon_Lsword_101> Weapon_Lsword_101;
	Structure<Weapon_Lsword_103> Weapon_Lsword_103;
	Structure<Weapon_Lsword_106> Weapon_Lsword_106;
	Structure<Weapon_Lsword_108> Weapon_Lsword_108;
	Structure<Weapon_Lsword_109> Weapon_Lsword_109;
	Structure<Weapon_Lsword_112> Weapon_Lsword_112;
	Structure<Weapon_Lsword_113> Weapon_Lsword_113;
	Structure<Weapon_Lsword_114> Weapon_Lsword_114;
	Structure<Weapon_Lsword_124> Weapon_Lsword_124;
	Structure<Weapon_Lsword_127> Weapon_Lsword_127;
	Structure<Weapon_Lsword_129> Weapon_Lsword_129;
	Structure<Weapon_Lsword_136> Weapon_Lsword_136;
	Structure<Weapon_Lsword_147> Weapon_Lsword_147;
	Structure<Weapon_Lsword_161> Weapon_Lsword_161;
	Structure<Weapon_Lsword_163> Weapon_Lsword_163;
	Structure<Weapon_Lsword_164> Weapon_Lsword_164;
	Structure<Weapon_Lsword_166> Weapon_Lsword_166;
	Structure<Weapon_Lsword_174> Weapon_Lsword_174;
	Structure<Weapon_Shield_001> Weapon_Shield_001;
	Structure<Weapon_Shield_002> Weapon_Shield_002;
	Structure<Weapon_Shield_003> Weapon_Shield_003;
	Structure<Weapon_Shield_004> Weapon_Shield_004;
	Structure<Weapon_Shield_005> Weapon_Shield_005;
	Structure<Weapon_Shield_006> Weapon_Shield_006;
	Structure<Weapon_Shield_007> Weapon_Shield_007;
	Structure<Weapon_Shield_008> Weapon_Shield_008;
	Structure<Weapon_Shield_009> Weapon_Shield_009;
	Structure<Weapon_Shield_016> Weapon_Shield_016;
	Structure<Weapon_Shield_017> Weapon_Shield_017;
	Structure<Weapon_Shield_018> Weapon_Shield_018;
	Structure<Weapon_Shield_021> Weapon_Shield_021;
	Structure<Weapon_Shield_022> Weapon_Shield_022;
	Structure<Weapon_Shield_023> Weapon_Shield_023;
	Structure<Weapon_Shield_025> Weapon_Shield_025;
	Structure<Weapon_Shield_026> Weapon_Shield_026;
	Structure<Weapon_Shield_030> Weapon_Shield_030;
	Structure<Weapon_Shield_031> Weapon_Shield_031;
	Structure<Weapon_Shield_032> Weapon_Shield_032;
	Structure<Weapon_Shield_033> Weapon_Shield_033;
	Structure<Weapon_Shield_034> Weapon_Shield_034;
	Structure<Weapon_Shield_035> Weapon_Shield_035;
	Structure<Weapon_Shield_036> Weapon_Shield_036;
	Structure<Weapon_Shield_037> Weapon_Shield_037;
	Structure<Weapon_Shield_040> Weapon_Shield_040;
	Structure<Weapon_Shield_041> Weapon_Shield_041;
	Structure<Weapon_Shield_042> Weapon_Shield_042;
	Structure<Weapon_Shield_057> Weapon_Shield_057;
	Structure<Weapon_Shield_101> Weapon_Shield_101;
	Structure<Weapon_Shield_102> Weapon_Shield_102;
	Structure<Weapon_Shield_103> Weapon_Shield_103;
	Structure<Weapon_Shield_107> Weapon_Shield_107;
	Structure<Weapon_Spear_001> Weapon_Spear_001;
	Structure<Weapon_Spear_002> Weapon_Spear_002;
	Structure<Weapon_Spear_003> Weapon_Spear_003;
	Structure<Weapon_Spear_021> Weapon_Spear_021;
	Structure<Weapon_Spear_022> Weapon_Spear_022;
	Structure<Weapon_Spear_024> Weapon_Spear_024;
	Structure<Weapon_Spear_025> Weapon_Spear_025;
	Structure<Weapon_Spear_027> Weapon_Spear_027;
	Structure<Weapon_Spear_029> Weapon_Spear_029;
	Structure<Weapon_Spear_030> Weapon_Spear_030;
	Structure<Weapon_Spear_032> Weapon_Spear_032;
	Structure<Weapon_Spear_036> Weapon_Spear_036;
	Structure<Weapon_Spear_038> Weapon_Spear_038;
	Structure<Weapon_Spear_047> Weapon_Spear_047;
	Structure<Weapon_Spear_050> Weapon_Spear_050;
	Structure<Weapon_Spear_101> Weapon_Spear_101;
	Structure<Weapon_Spear_103> Weapon_Spear_103;
	Structure<Weapon_Spear_106> Weapon_Spear_106;
	Structure<Weapon_Spear_108> Weapon_Spear_108;
	Structure<Weapon_Spear_109> Weapon_Spear_109;
	Structure<Weapon_Spear_112> Weapon_Spear_112;
	Structure<Weapon_Spear_113> Weapon_Spear_113;
	Structure<Weapon_Spear_124> Weapon_Spear_124;
	Structure<Weapon_Spear_125> Weapon_Spear_125;
	Structure<Weapon_Spear_127> Weapon_Spear_127;
	Structure<Weapon_Spear_129> Weapon_Spear_129;
	Structure<Weapon_Spear_132> Weapon_Spear_132;
	Structure<Weapon_Spear_147> Weapon_Spear_147;
	Structure<Weapon_Spear_161> Weapon_Spear_161;
	Structure<Weapon_Spear_163> Weapon_Spear_163;
	Structure<Weapon_Spear_164> Weapon_Spear_164;
	Structure<Weapon_Spear_166> Weapon_Spear_166;
	Structure<Weapon_Spear_173> Weapon_Spear_173;
	Structure<Weapon_Sword_001> Weapon_Sword_001;
	Structure<Weapon_Sword_002> Weapon_Sword_002;
	Structure<Weapon_Sword_003> Weapon_Sword_003;
	Structure<Weapon_Sword_019> Weapon_Sword_019;
	Structure<Weapon_Sword_020> Weapon_Sword_020;
	Structure<Weapon_Sword_021> Weapon_Sword_021;
	Structure<Weapon_Sword_022> Weapon_Sword_022;
	Structure<Weapon_Sword_024> Weapon_Sword_024;
	Structure<Weapon_Sword_025> Weapon_Sword_025;
	Structure<Weapon_Sword_027> Weapon_Sword_027;
	Structure<Weapon_Sword_029> Weapon_Sword_029;
	Structure<Weapon_Sword_031> Weapon_Sword_031;
	Structure<Weapon_Sword_041> Weapon_Sword_041;
	Structure<Weapon_Sword_043> Weapon_Sword_043;
	Structure<Weapon_Sword_044> Weapon_Sword_044;
	Structure<Weapon_Sword_047> Weapon_Sword_047;
	Structure<Weapon_Sword_051> Weapon_Sword_051;
	Structure<Weapon_Sword_052> Weapon_Sword_052;
	Structure<Weapon_Sword_057> Weapon_Sword_057;
	Structure<Weapon_Sword_058> Weapon_Sword_058;
	Structure<Weapon_Sword_059> Weapon_Sword_059;
	Structure<Weapon_Sword_070> Weapon_Sword_070;
	Structure<Weapon_Sword_101> Weapon_Sword_101;
	Structure<Weapon_Sword_103> Weapon_Sword_103;
	Structure<Weapon_Sword_105> Weapon_Sword_105;
	Structure<Weapon_Sword_106> Weapon_Sword_106;
	Structure<Weapon_Sword_107> Weapon_Sword_107;
	Structure<Weapon_Sword_108> Weapon_Sword_108;
	Structure<Weapon_Sword_109> Weapon_Sword_109;
	Structure<Weapon_Sword_112> Weapon_Sword_112;
	Structure<Weapon_Sword_113> Weapon_Sword_113;
	Structure<Weapon_Sword_114> Weapon_Sword_114;
	Structure<Weapon_Sword_124> Weapon_Sword_124;
	Structure<Weapon_Sword_125> Weapon_Sword_125;
	Structure<Weapon_Sword_127> Weapon_Sword_127;
	Structure<Weapon_Sword_129> Weapon_Sword_129;
	Structure<Weapon_Sword_131> Weapon_Sword_131;
	Structure<Weapon_Sword_147> Weapon_Sword_147;
	Structure<Weapon_Sword_161> Weapon_Sword_161;
	Structure<Weapon_Sword_163> Weapon_Sword_163;
	Structure<Weapon_Sword_164> Weapon_Sword_164;
	Structure<Weapon_Sword_166> Weapon_Sword_166;
	
	explicit Structure(Sav& s) : 
		Animal_Bear_A { s },
		Animal_Bear_B { s },
		Animal_Boar_A { s },
		Animal_Boar_B { s },
		Animal_Bull_A { s },
		Animal_Cassowary_A { s },
		Animal_Cow_A { s },
		Animal_Crow_A { s },
		Animal_Deer_A { s },
		Animal_Doe_A { s },
		Animal_Dog_A { s },
		Animal_Elk_A { s },
		Animal_Fox_A { s },
		Animal_Fox_B { s },
		Animal_Goat_A { s },
		Animal_Gull_A { s },
		Animal_Hawk_A { s },
		Animal_Heron_A { s },
		Animal_Heron_B { s },
		Animal_Insect_A { s },
		Animal_Insect_AA { s },
		Animal_Insect_AB { s },
		Animal_Insect_AG { s },
		Animal_Insect_AH { s },
		Animal_Insect_AI { s },
		Animal_Insect_B { s },
		Animal_Insect_C { s },
		Animal_Insect_E { s },
		Animal_Insect_F { s },
		Animal_Insect_G { s },
		Animal_Insect_H { s },
		Animal_Insect_I { s },
		Animal_Insect_M { s },
		Animal_Insect_N { s },
		Animal_Insect_P { s },
		Animal_Insect_Q { s },
		Animal_Insect_R { s },
		Animal_Insect_S { s },
		Animal_Insect_T { s },
		Animal_Insect_X { s },
		Animal_Kokko_A { s },
		Animal_LittleBird_A { s },
		Animal_LittleBird_B { s },
		Animal_LittleBird_C { s },
		Animal_LittleBird_D { s },
		Animal_LittleBird_E { s },
		Animal_LittleBird_F { s },
		Animal_Pao_A { s },
		Animal_Pigeon_A { s },
		Animal_Pigeon_B { s },
		Animal_Ptarmigan_A { s },
		Animal_Ptarmigan_B { s },
		Animal_RupeeRabbit_A { s },
		Animal_Sheep_A { s },
		Animal_SkyCassowary_A { s },
		Animal_SkyGull_A { s },
		Animal_SkyPigeon_A { s },
		Animal_Squirrel_A { s },
		Animal_Sunazarashi_A { s },
		Animal_SunazarashiSP_C { s },
		Animal_WildDuck_A { s },
		Animal_WildGoat_A { s },
		Animal_Wolf_A { s },
		Animal_Wolf_B { s },
		Animal_Wolf_C { s },
		BeeHome { s },
		BombFruit { s },
		ConfusionFruit { s },
		ElectricalFruit { s },
		Enemy_Assassin_Junior { s },
		Enemy_Assassin_Middle { s },
		Enemy_Assassin_Senior { s },
		Enemy_Bokoblin_Bone_Junior { s },
		Enemy_Bokoblin_Boss_Dark { s },
		Enemy_Bokoblin_Boss_Junior { s },
		Enemy_Bokoblin_Boss_Middle { s },
		Enemy_Bokoblin_Boss_Senior { s },
		Enemy_Bokoblin_Dark { s },
		Enemy_Bokoblin_Junior { s },
		Enemy_Bokoblin_Middle { s },
		Enemy_Bokoblin_Senior { s },
		Enemy_CaveMaster_000 { s },
		Enemy_CDungeon_Practice { s },
		Enemy_Chuchu_Electric_Junior { s },
		Enemy_Chuchu_Fire_Junior { s },
		Enemy_Chuchu_Ice_Junior { s },
		Enemy_Chuchu_Junior { s },
		Enemy_Dragon_Darkness { s },
		Enemy_Dragon_Electric { s },
		Enemy_Dragon_Fire { s },
		Enemy_Dragon_Ice { s },
		Enemy_Dragon_Light_001 { s },
		Enemy_Drake_Electric { s },
		Enemy_Drake_Fire { s },
		Enemy_Drake_Ice { s },
		Enemy_Drake_Mix { s },
		Enemy_DungeonBoss_Gerudo { s },
		Enemy_DungeonBoss_Goron { s },
		Enemy_DungeonBoss_Rito { s },
		Enemy_DungeonBoss_Zonau { s },
		Enemy_DungeonBoss_Zora { s },
		Enemy_Ganondorf { s },
		Enemy_Ganondorf_Miasma { s },
		Enemy_Giant_Bone { s },
		Enemy_Giant_Junior { s },
		Enemy_Giant_Middle { s },
		Enemy_Giant_Senior { s },
		Enemy_Golem_Fire { s },
		Enemy_Golem_Fort_A { s },
		Enemy_Golem_Ice { s },
		Enemy_Golem_Junior { s },
		Enemy_Golem_Little { s },
		Enemy_Golem_Little_Fire { s },
		Enemy_Golem_Little_Ice { s },
		Enemy_Golem_Middle { s },
		Enemy_Golem_Senior { s },
		Enemy_Horablin_Dark { s },
		Enemy_Horablin_Junior { s },
		Enemy_Horablin_Middle { s },
		Enemy_Horablin_Senior { s },
		Enemy_Keese { s },
		Enemy_Keese_Electric { s },
		Enemy_Keese_Fire { s },
		Enemy_Keese_Ice { s },
		Enemy_LikeLike_Crack { s },
		Enemy_LikeLike_Electric { s },
		Enemy_LikeLike_Fire { s },
		Enemy_LikeLike_Ice { s },
		Enemy_LikeLike_Plane { s },
		Enemy_LikeLike_Tar { s },
		Enemy_Lizalfos_Bone_Junior { s },
		Enemy_Lizalfos_Dark { s },
		Enemy_Lizalfos_Electric { s },
		Enemy_Lizalfos_Fire { s },
		Enemy_Lizalfos_Ice { s },
		Enemy_Lizalfos_Junior { s },
		Enemy_Lizalfos_Middle { s },
		Enemy_Lizalfos_Senior { s },
		Enemy_Lynel_Dark { s },
		Enemy_Lynel_Junior { s },
		Enemy_Lynel_Middle { s },
		Enemy_Lynel_Senior { s },
		Enemy_MiddleBoss_Goron { s },
		Enemy_Mogurudo_Baby_Junior { s },
		Enemy_Mogurudo_Junior { s },
		Enemy_Mogurudo_Middle { s },
		Enemy_Mogurudo_Senior { s },
		Enemy_Moriblin_Bone_Junior { s },
		Enemy_Moriblin_Dark { s },
		Enemy_Moriblin_Junior { s },
		Enemy_Moriblin_Middle { s },
		Enemy_Moriblin_Senior { s },
		Enemy_Octarock { s },
		Enemy_Octarock_Desert { s },
		Enemy_Octarock_Forest { s },
		Enemy_Octarock_Snow { s },
		Enemy_Octarock_Stone { s },
		Enemy_PhantomGanon { s },
		Enemy_Sandworm { s },
		Enemy_Toby_Junior { s },
		Enemy_Treant_Broadleaf { s },
		Enemy_Wizzrobe_Electric { s },
		Enemy_Wizzrobe_Electric_Senior { s },
		Enemy_Wizzrobe_Fire { s },
		Enemy_Wizzrobe_Fire_Senior { s },
		Enemy_Wizzrobe_Ice { s },
		Enemy_Wizzrobe_Ice_Senior { s },
		Enemy_Zombie_Boss_Junior { s },
		Enemy_Zombie_Junior { s },
		Enemy_Zonau_BlockMaster_Junior { s },
		Enemy_Zonau_BlockMaster_Middle { s },
		Enemy_Zonau_BlockMaster_Senior { s },
		Enemy_Zonau_Golem_Dark { s },
		Enemy_Zonau_Golem_Junior { s },
		Enemy_Zonau_Golem_Middle { s },
		Enemy_Zonau_Golem_Senior { s },
		Enemy_Zonau_Robot_Dark { s },
		Enemy_Zonau_Robot_Junior { s },
		Enemy_Zonau_Robot_Middle { s },
		Enemy_Zonau_Robot_Senior { s },
		FireFruit { s },
		FldObj_HyliaWoodWell_A_02 { s },
		FldObj_Pinecone_A_01 { s },
		GameRomHorse { s },
		GameRomHorse00L { s },
		GameRomHorse00S { s },
		GameRomHorse01L { s },
		GameRomHorseBone { s },
		GameRomHorseGold { s },
		GameRomHorseZelda { s },
		IceFruit { s },
		Item_Enemy_100 { s },
		Item_Enemy_101 { s },
		Item_Enemy_102 { s },
		Item_Enemy_103 { s },
		Item_Enemy_106 { s },
		Item_Enemy_107 { s },
		Item_Enemy_108 { s },
		Item_Enemy_109 { s },
		Item_Enemy_117 { s },
		Item_Enemy_118 { s },
		Item_Enemy_119 { s },
		Item_Enemy_132 { s },
		Item_Enemy_133 { s },
		Item_Enemy_134 { s },
		Item_Enemy_142 { s },
		Item_Enemy_143 { s },
		Item_Enemy_144 { s },
		Item_Enemy_148 { s },
		Item_Enemy_149 { s },
		Item_Enemy_15 { s },
		Item_Enemy_150 { s },
		Item_Enemy_151 { s },
		Item_Enemy_153 { s },
		Item_Enemy_154 { s },
		Item_Enemy_155 { s },
		Item_Enemy_16 { s },
		Item_Enemy_166 { s },
		Item_Enemy_167 { s },
		Item_Enemy_168 { s },
		Item_Enemy_169 { s },
		Item_Enemy_17 { s },
		Item_Enemy_181 { s },
		Item_Enemy_182 { s },
		Item_Enemy_183 { s },
		Item_Enemy_184 { s },
		Item_Enemy_186 { s },
		Item_Enemy_187 { s },
		Item_Enemy_188 { s },
		Item_Enemy_19 { s },
		Item_Enemy_191 { s },
		Item_Enemy_192 { s },
		Item_Enemy_193 { s },
		Item_Enemy_208 { s },
		Item_Enemy_210 { s },
		Item_Enemy_211 { s },
		Item_Enemy_212 { s },
		Item_Enemy_213 { s },
		Item_Enemy_214 { s },
		Item_Enemy_215 { s },
		Item_Enemy_216 { s },
		Item_Enemy_217 { s },
		Item_Enemy_218 { s },
		Item_Enemy_228 { s },
		Item_Enemy_229 { s },
		Item_Enemy_230 { s },
		Item_Enemy_231 { s },
		Item_Enemy_40 { s },
		Item_Enemy_58 { s },
		Item_Enemy_59 { s },
		Item_Enemy_60 { s },
		Item_Enemy_64 { s },
		Item_Enemy_66 { s },
		Item_Enemy_67 { s },
		Item_Enemy_69 { s },
		Item_Enemy_77 { s },
		Item_Enemy_78 { s },
		Item_Enemy_79 { s },
		Item_Enemy_80 { s },
		Item_Enemy_89 { s },
		Item_Enemy_90 { s },
		Item_Enemy_91 { s },
		Item_Enemy_92 { s },
		Item_FishGet_A { s },
		Item_FishGet_AA { s },
		Item_FishGet_AC { s },
		Item_FishGet_B { s },
		Item_FishGet_C { s },
		Item_FishGet_D { s },
		Item_FishGet_E { s },
		Item_FishGet_F { s },
		Item_FishGet_G { s },
		Item_FishGet_H { s },
		Item_FishGet_I { s },
		Item_FishGet_J { s },
		Item_FishGet_L { s },
		Item_FishGet_M { s },
		Item_FishGet_X { s },
		Item_FishGet_Z { s },
		Item_Fruit_A { s },
		Item_Fruit_B { s },
		Item_Fruit_C { s },
		Item_Fruit_E { s },
		Item_Fruit_F { s },
		Item_Fruit_G { s },
		Item_Fruit_H { s },
		Item_Fruit_I { s },
		Item_Fruit_J { s },
		Item_Fruit_M { s },
		Item_Fruit_N { s },
		Item_Fruit_P { s },
		Item_InsectGet_K { s },
		Item_InsectGet_O { s },
		Item_InsectGet_Z { s },
		Item_Mushroom_A { s },
		Item_Mushroom_B { s },
		Item_Mushroom_C { s },
		Item_Mushroom_E { s },
		Item_Mushroom_F { s },
		Item_Mushroom_H { s },
		Item_Mushroom_J { s },
		Item_Mushroom_L { s },
		Item_Mushroom_M { s },
		Item_Mushroom_N { s },
		Item_Mushroom_O { s },
		Item_Mushroom_P { s },
		Item_MushroomGet_D { s },
		Item_MushroomGet_K { s },
		Item_PlantGet_A { s },
		Item_PlantGet_B { s },
		Item_PlantGet_C { s },
		Item_PlantGet_E { s },
		Item_PlantGet_F { s },
		Item_PlantGet_G { s },
		Item_PlantGet_H { s },
		Item_PlantGet_I { s },
		Item_PlantGet_J { s },
		Item_PlantGet_L { s },
		Item_PlantGet_M { s },
		Item_PlantGet_O { s },
		Item_PlantGet_Q { s },
		Item_PlantGet_R { s },
		Item_PlantGet_S { s },
		Item_PlantGet_U { s },
		LightBall_Large { s },
		LightBall_Small { s },
		LightFruit { s },
		NormalArrow { s },
		Obj_Mineral_A_01 { s },
		Obj_Mineral_B_01 { s },
		Obj_Mineral_C_01 { s },
		Obj_Mineral_D_01 { s },
		SmokeFruit { s },
		TBox_Field_Iron { s },
		WaterFruit { s },
		Weapon_Bow_001 { s },
		Weapon_Bow_002 { s },
		Weapon_Bow_003 { s },
		Weapon_Bow_004 { s },
		Weapon_Bow_006 { s },
		Weapon_Bow_009 { s },
		Weapon_Bow_011 { s },
		Weapon_Bow_013 { s },
		Weapon_Bow_014 { s },
		Weapon_Bow_015 { s },
		Weapon_Bow_016 { s },
		Weapon_Bow_017 { s },
		Weapon_Bow_026 { s },
		Weapon_Bow_027 { s },
		Weapon_Bow_028 { s },
		Weapon_Bow_029 { s },
		Weapon_Bow_030 { s },
		Weapon_Bow_032 { s },
		Weapon_Bow_033 { s },
		Weapon_Bow_035 { s },
		Weapon_Bow_036 { s },
		Weapon_Bow_038 { s },
		Weapon_Bow_040 { s },
		Weapon_Bow_072 { s },
		Weapon_Bow_101 { s },
		Weapon_Bow_104 { s },
		Weapon_Bow_105 { s },
		Weapon_Bow_106 { s },
		Weapon_Bow_107 { s },
		Weapon_Bow_166 { s },
		Weapon_Lsword_001 { s },
		Weapon_Lsword_002 { s },
		Weapon_Lsword_003 { s },
		Weapon_Lsword_019 { s },
		Weapon_Lsword_020 { s },
		Weapon_Lsword_024 { s },
		Weapon_Lsword_027 { s },
		Weapon_Lsword_029 { s },
		Weapon_Lsword_036 { s },
		Weapon_Lsword_038 { s },
		Weapon_Lsword_041 { s },
		Weapon_Lsword_045 { s },
		Weapon_Lsword_047 { s },
		Weapon_Lsword_051 { s },
		Weapon_Lsword_054 { s },
		Weapon_Lsword_057 { s },
		Weapon_Lsword_059 { s },
		Weapon_Lsword_060 { s },
		Weapon_Lsword_101 { s },
		Weapon_Lsword_103 { s },
		Weapon_Lsword_106 { s },
		Weapon_Lsword_108 { s },
		Weapon_Lsword_109 { s },
		Weapon_Lsword_112 { s },
		Weapon_Lsword_113 { s },
		Weapon_Lsword_114 { s },
		Weapon_Lsword_124 { s },
		Weapon_Lsword_127 { s },
		Weapon_Lsword_129 { s },
		Weapon_Lsword_136 { s },
		Weapon_Lsword_147 { s },
		Weapon_Lsword_161 { s },
		Weapon_Lsword_163 { s },
		Weapon_Lsword_164 { s },
		Weapon_Lsword_166 { s },
		Weapon_Lsword_174 { s },
		Weapon_Shield_001 { s },
		Weapon_Shield_002 { s },
		Weapon_Shield_003 { s },
		Weapon_Shield_004 { s },
		Weapon_Shield_005 { s },
		Weapon_Shield_006 { s },
		Weapon_Shield_007 { s },
		Weapon_Shield_008 { s },
		Weapon_Shield_009 { s },
		Weapon_Shield_016 { s },
		Weapon_Shield_017 { s },
		Weapon_Shield_018 { s },
		Weapon_Shield_021 { s },
		Weapon_Shield_022 { s },
		Weapon_Shield_023 { s },
		Weapon_Shield_025 { s },
		Weapon_Shield_026 { s },
		Weapon_Shield_030 { s },
		Weapon_Shield_031 { s },
		Weapon_Shield_032 { s },
		Weapon_Shield_033 { s },
		Weapon_Shield_034 { s },
		Weapon_Shield_035 { s },
		Weapon_Shield_036 { s },
		Weapon_Shield_037 { s },
		Weapon_Shield_040 { s },
		Weapon_Shield_041 { s },
		Weapon_Shield_042 { s },
		Weapon_Shield_057 { s },
		Weapon_Shield_101 { s },
		Weapon_Shield_102 { s },
		Weapon_Shield_103 { s },
		Weapon_Shield_107 { s },
		Weapon_Spear_001 { s },
		Weapon_Spear_002 { s },
		Weapon_Spear_003 { s },
		Weapon_Spear_021 { s },
		Weapon_Spear_022 { s },
		Weapon_Spear_024 { s },
		Weapon_Spear_025 { s },
		Weapon_Spear_027 { s },
		Weapon_Spear_029 { s },
		Weapon_Spear_030 { s },
		Weapon_Spear_032 { s },
		Weapon_Spear_036 { s },
		Weapon_Spear_038 { s },
		Weapon_Spear_047 { s },
		Weapon_Spear_050 { s },
		Weapon_Spear_101 { s },
		Weapon_Spear_103 { s },
		Weapon_Spear_106 { s },
		Weapon_Spear_108 { s },
		Weapon_Spear_109 { s },
		Weapon_Spear_112 { s },
		Weapon_Spear_113 { s },
		Weapon_Spear_124 { s },
		Weapon_Spear_125 { s },
		Weapon_Spear_127 { s },
		Weapon_Spear_129 { s },
		Weapon_Spear_132 { s },
		Weapon_Spear_147 { s },
		Weapon_Spear_161 { s },
		Weapon_Spear_163 { s },
		Weapon_Spear_164 { s },
		Weapon_Spear_166 { s },
		Weapon_Spear_173 { s },
		Weapon_Sword_001 { s },
		Weapon_Sword_002 { s },
		Weapon_Sword_003 { s },
		Weapon_Sword_019 { s },
		Weapon_Sword_020 { s },
		Weapon_Sword_021 { s },
		Weapon_Sword_022 { s },
		Weapon_Sword_024 { s },
		Weapon_Sword_025 { s },
		Weapon_Sword_027 { s },
		Weapon_Sword_029 { s },
		Weapon_Sword_031 { s },
		Weapon_Sword_041 { s },
		Weapon_Sword_043 { s },
		Weapon_Sword_044 { s },
		Weapon_Sword_047 { s },
		Weapon_Sword_051 { s },
		Weapon_Sword_052 { s },
		Weapon_Sword_057 { s },
		Weapon_Sword_058 { s },
		Weapon_Sword_059 { s },
		Weapon_Sword_070 { s },
		Weapon_Sword_101 { s },
		Weapon_Sword_103 { s },
		Weapon_Sword_105 { s },
		Weapon_Sword_106 { s },
		Weapon_Sword_107 { s },
		Weapon_Sword_108 { s },
		Weapon_Sword_109 { s },
		Weapon_Sword_112 { s },
		Weapon_Sword_113 { s },
		Weapon_Sword_114 { s },
		Weapon_Sword_124 { s },
		Weapon_Sword_125 { s },
		Weapon_Sword_127 { s },
		Weapon_Sword_129 { s },
		Weapon_Sword_131 { s },
		Weapon_Sword_147 { s },
		Weapon_Sword_161 { s },
		Weapon_Sword_163 { s },
		Weapon_Sword_164 { s },
		Weapon_Sword_166 { s }
	{ }
};/* Data::Structure GameData::PictureBookData close */
