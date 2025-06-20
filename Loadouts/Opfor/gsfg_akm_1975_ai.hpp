author = "Lambda.Tiger";
description = "Group of Soviet Forces Germany (AKM, circa 1975)";
#include "..\undef.hpp"
#define SIDE_FAC_GRENADES "rhs_mag_rdg2_white:2","gm_handgrenade_frag_rgd5:2","1Rnd_SmokeBlue_Grenade_shell:4","1Rnd_SmokeYellow_Grenade_shell:3","1Rnd_SmokeOrange_Grenade_shell:3","1Rnd_SmokeGreen_Grenade_shell:5"
#define SIDE_SIDE_BASE_GRENADES "gm_handgrenade_frag_rgd5"
#define SIDE_LEADER_GRENADES SIDE_SIDE_BASE_GRENADES,"gm_smokeshell_blk_gc"
#define SIDE_CREW_GRENADES "gm_smokeshell_blk_gc:2"
// Camo set
#define CAMO_UNIFORM "cwr3_o_uniform_m1969"
#define CAMO_VEST "cwr3_o_vest_harness_ak74"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "cwr3_o_backpack_rd54"
#define CAMO_HEADGEAR "cwr3_o_headgear_ssh68"
#define CAMO_HEADGEAR_SPECIAL "cwr3_o_headgear_ssh68"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "cwr3_o_uniform_pilot"
#define CAMO_VEST_PILOT "cwr3_o_vest_beltkit_ak74"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_F"
#define CAMO_HEADGEAR_PILOT "cwr3_o_headgear_zsh5"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "cwr3_o_uniform_m1972_tanker"
#define CAMO_VEST_VICC "cwr3_o_vest_beltkit_ak74"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_F"
#define CAMO_HEADGEAR_VICC "cwr3_o_headgear_tsh4"
// Rifle
#define RIFLE "CUP_arifle_AKM_Early"
#define RIFLE_MAG "CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M:6"
#define RIFLE_ATTACHMENTS
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
// Carbine
#define CARBINE "CUP_arifle_AKMS_Early"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_arifle_RPK74"
#define AR_MAG "CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M:5"
// AT
#define AT "rhs_weap_rpg18"
#define AT_MAG
// MMG
#define MMG "CUP_lmg_PKM"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:3"
// MAT
#define MAT "APEX_RPG7_v2"
#define MAT_MAG "CUP_PG7VM_M:2"
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
#define SAM "gm_9k32m_oli"
#define SAM_MAG "gm_1Rnd_72mm_he_9m32m:2"
// Sniper
#define SNIPER "CUP_srifle_SVD"
#define SNIPER_MAG "CUP_10Rnd_762x54_SVD_M:10"
#define SNIPER_ATTACHMENTS "CUP_optic_PSO_1"
// Spotter
#define SPOTTER "CUP_arifle_AKMS_Early"
#define SPOTTER_MAG "CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M:10"
#define SPOTTER_ATTACHMENTS
// SMG
#define SMG "CUP_arifle_AKMS_Early"
#define SMG_MAG "CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M:5"
// Pistol
#define PISTOL "CUP_hgun_PB6P9"
#define PISTOL_MAG "CUP_8Rnd_9x18_Makarov_M:4"
#define PISTOL_ATTACHMENTS
#define LEADER_GRENADES SIDE_LEADER_GRENADES
#define TOOLS "rhs_mag_rdg2_white"
#define LEADER_TOOLS
#define LINKED BASE_LINKED
#define LEADER_LINKED
#define SIDE_MEDIC_GRENADES "rhs_mag_rdg2_white","gm_smokeshell_blk_gc:2"
// ------------- Vehicle Pool -------------
transportVehiclePool[] = {
  "cwr3_o_ural_open",
  "cwr3_o_uaz452",
  "cwr3_o_uaz_open"
};
armedSoftVehiclePool[] = {
  "cwr3_o_uaz_aa",
  "cwr3_o_ural_zu23",
  "cwr3_o_uaz_aa",
  "cwr3_o_ural_zu23",
  "cwr3_o_uaz_ags30",
  "cwr3_o_uaz_dshkm",
  "cwr3_o_uaz_dshkm"
};
armoredVehiclePool[] = {
  "cwr3_o_bmp1p",
  "cwr3_o_brdm2",
  "cwr3_o_btr60",
  "cwr3_o_mtlb_pk"
};
tankVehiclePool[] = {
  "cwr3_o_bmp1",
  "cwr3_o_zsu",
  "cwr3_o_pt76b",
  "cwr3_o_t64b",
  "cwr3_o_t55a"
};
reinforcementTruck = "cwr3_o_ural_open";
reinforcementArmed = "cwr3_o_btr60";
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
  backpack[] = {CARRYALL};
  items[] += {LEADER_TOOLS};
};
class sl: ftl {
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  backpack[] = {"cwr3_o_backpack_rd54_r148"};
  vest[] = {"cwr3_o_vest_harness_officer"};
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
  backpack[] = {CARRYALL};
  magazines[] = {AR_MAG,PISTOL_MAG,SIDE_SIDE_BASE_GRENADES};
  handguns[] = {PISTOL};
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
  vest[] = {"cwr3_o_vest_harness_medic"};
  backpack[] = {"cwr3_o_backpack_rd54_medic_empty"};
  backpackItems[] = {MEDIC_MEDICAL_AI};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {BINOS};
};
class mmgg: ar {
  weapons[] = {MMG};
  vest[] = {"cwr3_o_vest_harness_mg"};
  backpack[] = {"cwr3_o_backpack_veshmeshok"};
  magazines[] = {MMG_MAG,PISTOL_MAG,SIDE_SIDE_BASE_GRENADES};
  attachments[] = {};
};
class mmgag: Fic_Spotter {
  backpackItems[] += {MMG_MAG};
  vest[] = {"cwr3_o_vest_harness_mg"};
  backpack[] = {"cwr3_o_backpack_veshmeshok"};
};
class matg: Fic_Soldier_Carbine {
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL_AI};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
  backpack[] = {"cwr3_o_backpack_rpg7"};
};
class matag: Fic_Spotter {
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  backpack[] = {"cwr3_o_backpack_rpg7"};
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
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HMG_MAG};
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
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HAT_MAG};
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