author = "Lambda.Tiger";
description = "Russian PMC (SG551)";
#include "..\undef.hpp"
#define SIDE_FAC_GRENADES "rhs_mag_rdg2_white","gm_handgrenade_frag_rgd5","1Rnd_SmokeBlue_Grenade_shell:4","1Rnd_SmokeYellow_Grenade_shell:3","1Rnd_SmokeOrange_Grenade_shell:3","1Rnd_SmokeGreen_Grenade_shell:5"
#define SIDE_SIDE_BASE_GRENADES "gm_handgrenade_frag_rgd5"
#define SIDE_LEADER_GRENADES SIDE_SIDE_BASE_GRENADES,"rhs_mag_rdg2_black"
#define SIDE_CREW_GRENADES "rhs_mag_rdg2_black:2"
// Camo set
#define CAMO_UNIFORM "CUP_I_B_PARA_Unit_2"
#define CAMO_VEST "acp_Solid_CoyoteBrown_modern_west_lite_V_Crye_AVS_1_Solid_CoyoteBrown"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "acp_Solid_CoyoteBrown_core_lite_B_Carryall_Solid_CoyoteBrown"
#define CAMO_HEADGEAR "acp_Solid_CoyoteBrown_extra_headgear_lite_H_Cap_Solid_CoyoteBrown","acp_Solid_CoyoteBrown_extra_headgear_lite_H_Cap_Solid_CoyoteBrown","acp_Solid_CoyoteBrown_extra_headgear_lite_H_Cap_Solid_CoyoteBrown","acp_Solid_CoyoteBrown_extra_headgear_lite_H_Cap_Solid_CoyoteBrown","CUP_H_RUS_6B47_Desert_1", "CUP_H_RUS_6B47_6M2_6B34C_Desert_1"
#define CAMO_HEADGEAR_SPECIAL CAMO_HEADGEAR
// Custom Assets
#define CAMO_BACKPACK_MEDIC CARRYALL
#define CAMO_VEST_FTL CAMO_VEST
#define CAMO_VEST_SL CAMO_VEST
#define CAMO_VEST_AR CAMO_VEST
#define CAMO_VEST_MEDIC CAMO_VEST
// Pilot Camo set
#define CAMO_UNIFORM_PILOT CAMO_UNIFORM
#define CAMO_VEST_PILOT "CUP_V_PMC_CIRAS_Black_Veh"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_F"
#define CAMO_HEADGEAR_PILOT "CUP_H_RUS_ZSH_Shield_Up"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC CAMO_UNIFORM
#define CAMO_VEST_VICC CAMO_VEST
#define CAMO_BACKPACK_VICC "B_Battle_Belt_F"
#define CAMO_HEADGEAR_VICC "CUP_H_RUS_TSH_4_Brown"
// Rifle
#define RIFLE "CUP_arifle_AK12_AFG_arid"
#define RIFLE_MAG "CUP_30Rnd_TE1_Green_Tracer_545x39_AK12_Tan_M:3", "CUP_30Rnd_545x39_AK12_Tan_M:2"
#define RIFLE_ATTACHMENTS
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
// GL Rifle
#define GLRIFLE "CUP_arifle_AK12_GP34_arid"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "rhs_GRD40_White"
#define GLRIFLE_MAG_HE "CUP_1Rnd_HE_GP25_M"
// Carbine
#define CARBINE "CUP_arifle_AK12_VG_arid"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_arifle_RPK74M_railed"
#define AR_MAG "CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M:3"
// AT
#define AT "rhs_weap_rpg26"
#define AT_MAG
// MMG
#define MMG "CUP_lmg_Pecheneg_B50_vfg"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:3"
// MAT
#define MAT "gm_rpg7_wud"
#define MAT_MAG "gm_1Rnd_40mm_heat_pg7v_rpg7:2"
#define MAT_OPTIC
// HMG
#define HMG
#define HMG_TRI_HI
#define HMG_TRI_LO
#define HMG_MAG
// HAT
#define HAT
#define HAT_TRI_HI
#define HAT_TRI_LO
#define HAT_MAG
// SAM
#define SAM "CUP_launch_Igla"
#define SAM_MAG
// Sniper
#define SNIPER "CUP_srifle_SVD_des"
#define SNIPER_MAG "CUP_10Rnd_762x54_SVD_M:10"
#define SNIPER_ATTACHMENTS "CUP_optic_PSO_1_1_open"
// Spotter
#define SPOTTER RIFLE
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS
// SMG
#define SMG "CUP_smg_bizon"
#define SMG_MAG "CUP_64Rnd_9x19_Bizon_M:3"
// Pistol
#define PISTOL "CUP_hgun_PB6P9"
#define PISTOL_MAG "CUP_8Rnd_9x18_Makarov_M:4"
#define PISTOL_ATTACHMENTS
#define LEADER_GRENADES SIDE_LEADER_GRENADES
#define TOOLS "rhs_mag_rdg2_white"
#define LEADER_TOOLS
#define LINKED BASE_LINKED
#define LEADER_LINKED
#define SIDE_MEDIC_GRENADES "rhs_mag_rdg2_white","rhs_mag_rdg2_black:2"
// ------------- Vehicle Pool -------------
transportVehiclePool[] = {
  "CUP_O_Tigr_233011_RU",
  "CUP_O_Ural_RU"
};
armedSoftVehiclePool[] = {
  "CUP_O_Tigr_233014_PK_RU",
  "CUP_O_Tigr_M_233114_KORD_RU",
  "CUP_O_Hilux_SPG9_OPF_G_F",
  "CUP_O_Hilux_AGS30_OPF_G_F"
};
armoredVehiclePool[] = {
  "CUP_I_BMP1_TK_GUE",
  "CUP_B_BTR80_FIA",
  "CUP_B_BTR80A_FIA"
};
tankVehiclePool[] = {
  "CUP_I_T72_NAPA"
};
reinforcementTruck[] = {"CUP_O_Tigr_233011_RU", 9};
reinforcementArmed = "CUP_B_BTR80_FIA";
// ------------- End Vehicle Pool -------------
class Car {};
class Tank {};
class Helicopter {};
class Plane {};
class Ship_F {};
class rifleman {
  uniform[] = {CAMO_UNIFORM};
  vest[] = {CAMO_VEST};
  headgear[] = {CAMO_HEADGEAR};
  backpack[] = {CAMO_BACKPACK};
  backpackItems[] = {BASE_MEDICAL_AI};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,SIDE_SIDE_BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
};
class Fic_Soldier_Carbine: rifleman {
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,SIDE_SIDE_BASE_GRENADES};
};
class ftl: rifleman {
  magazines[] = {RIFLE_MAG,LEADER_GRENADES};
  vest[] = {CAMO_VEST_FTL};
  backpack[] = {CARRYALL};
  items[] += {LEADER_TOOLS};
};
class sl: ftl {
  backpack[] = {"B_Battle_Belt_XL_F"};
  vest[] = {CAMO_VEST_SL};
  handgunAttachments[] = {};
  linkedItems[] = {LINKED,BINOS};
};
class coy: sl {
  items[] += {};
};
class uav: rifleman {
};
class ar: rifleman {
  weapons[] = {AR};
  vest[] = {CAMO_VEST_AR};
  magazines[] = {AR_MAG,SIDE_SIDE_BASE_GRENADES};
};
class aar: rifleman {
  backpackItems[] += {AR_MAG};
};
class lat: rifleman {
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class sm: Fic_Soldier_Carbine {
  magazines[] = {CARBINE_MAG,SIDE_MEDIC_GRENADES};
  vest[] = {CAMO_VEST_MEDIC};
  backpack[] = {CAMO_BACKPACK_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL_AI};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {BINOS};
};
class mmgg: ar {
  weapons[] = {MMG};
  vest[] = {CAMO_VEST_AR};
  backpack[] = {CARRYALL};
  magazines[] = {MMG_MAG,SIDE_SIDE_BASE_GRENADES};
  attachments[] = {};
};
class mmgag: Fic_Spotter {
  backpackItems[] += {MMG_MAG};
  vest[] = {CAMO_VEST};
  backpack[] = {CARRYALL};
};
class matg: Fic_Soldier_Carbine {
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL_AI};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class matag: Fic_Spotter {
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
};
class msamg: Fic_Soldier_Carbine {
  SAM_GEAR(CARRYALL, SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {
  SAM_GEAR(CARRYALL, SAM_MAG)
  launchers[] = {SAM};
};
class mtrg: Fic_Soldier_Carbine {
  MORTAR_GEAR("B_Mortar_01_weapon_F")
};
class mtrag: Fic_Spotter {
  MORTAR_GEAR("B_Mortar_01_support_F")
};
class spotter: Fic_Spotter {
  headgear[] = {CAMO_HEADGEAR_SPECIAL};
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,SIDE_SIDE_BASE_GRENADES};
  items[] += {};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: spotter {
  headgear[] = {CAMO_HEADGEAR_SPECIAL};
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,SIDE_SIDE_BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_ATTACHMENTS};
};
class pilot {
  uniform[] = {CAMO_UNIFORM_PILOT};
  vest[] = {CAMO_VEST_PILOT};
  headgear[] = {CAMO_HEADGEAR_PILOT};
  backpack[] = {CAMO_BACKPACK_PILOT};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,SIDE_CREW_GRENADES};
  items[] = {BASE_MEDICAL_AI,TOOLS,LEADER_TOOLS};
  linkedItems[] = {LINKED};
};
class vicc: Fic_Soldier_Carbine {
  uniform[] = {CAMO_UNIFORM_VICC};
  vest[] = {CAMO_VEST_VICC};
  headgear[] = {CAMO_HEADGEAR_VICC};
  backpack[] = {CAMO_BACKPACK_VICC};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,SIDE_CREW_GRENADES};
  linkedItems[] = {LINKED,BINOS};
  items[] += {BASE_MEDICAL_AI};
};
class vicd: vicc {
  backpackItems[] = {"Toolkit"};
  linkedItems[] = {LINKED};
};
class Fic_eng: rifleman {
  items[] += {BASE_ENG,,BASE_MEDICAL_AI};
  backpack[] = {CARRYALL};
  backpackItems[] = {"Toolkit"};
  linkedItems[] = {LINKED};
};
class demo: Fic_eng {
  magazines[] += {BASE_EXP};
};
class mine: Fic_eng {
  magazines[] += {BASE_MINE};
  handguns[] = {MINE_DETECTOR};
};
class demol: Fic_eng {
  magazines[] += {BASE_EXP};
  backpackItems[] = {"Toolkit"};
};
class eng: Fic_eng {
  backpackItems[] = {"Toolkit","ACE_EntrenchingTool","ACE_Fortify","ACE_wirecutter"};
};
class artl: sl {
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY};
};
class artg: rifleman {
  backpackItems[] += {BASE_ARTILLERY};
};
class plm: sm {
  backpackItems[] = {PL_MEDIC_MEDICAL_AI};
};
class cm: plm {
};
class xo: coy {
};
class plt: coy {
};
class sgt: plt {
};
class vicl: vicc {
};
class mmgl: sl {
  backpack[] = {CARRYALL};
  magazines[] += {MMG_MAG};
};
class matl: sl {
  backpack[] = {CARRYALL};
};
class hmgl: sl {
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,HMG_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HMG_TRI_LO};
  items[] += {BASE_BALLISTICS};
};
class hmgg: rifleman {
  backpack[] = {CARRYALL};
  magazines[] += {HMG_MAG};
  launchers[] = {HMG};
};
class hmgag: rifleman {
  backpack[] = {CARRYALL};
  magazines[] += {HMG_MAG};
  launchers[] = {HMG_TRI_HI};
  items[] += {BASE_BALLISTICS};
};
class hatl: sl {
  weapons[] = {RIFLE};
  backpackItems[] = {};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,HAT_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HAT_TRI_LO};
  items[] += {BASE_MEDICAL_AI};
};
class hatg: rifleman {
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT};
};
class hatag: rifleman {
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT_TRI_HI};
};
class msaml: sl {
  backpack[] = {CARRYALL};
};
class mtrl: sl {
  items[] += {BASE_ARTILLERY};
};
class helicrew: pilot {
  backpackItems[] = {"Toolkit"};
};
class cc: helicrew {
};
class fallback: rifleman {};
#undef SIDE_FAC_GRENADES
#undef SIDE_SIDE_BASE_GRENADES
#undef SIDE_LEADER_GRENADES
#undef SIDE_CREW_GRENADES
#undef CAMO_BACKPACK_MEDIC
#undef CAMO_VEST_FTL
#undef CAMO_VEST_SL
#undef CAMO_VEST_AR
#undef CAMO_VEST_MEDIC