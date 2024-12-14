author = "Lambda.Tiger";
description = "Saharani Liberation Army Presedential Guard (Woodland, 2000s)";
#include "..\undef.hpp"
#include "..\undef_side_gear.hpp"
#define SIDE_KEY
#define SIDE_CHEM_LIGHT
#define SIDE_UAV_BACKPACK
#define SIDE_UAV_TERMINAL
#define SIDE_FAC_GRENADES "rhs_mag_rdg2_white:2","gm_handgrenade_frag_rgd5:2","1Rnd_SmokeBlue_Grenade_shell:4","1Rnd_SmokeYellow_Grenade_shell:3","1Rnd_SmokeOrange_Grenade_shell:3","1Rnd_SmokeGreen_Grenade_shell:5"
#define SIDE_BASE_GRENADES "rhs_mag_rdg2_white:2","gm_handgrenade_frag_rgd5"
#define SIDE_LEADER_GRENADES SIDE_BASE_GRENADES,"gm_smokeshell_org_gc:2","gm_smokeshell_blk_gc"
#define SIDE_CREW_GRENADES "rhs_mag_rdg2_white","gm_smokeshell_blk_gc:2"
#define SIDE_MEDICAL "ACE_elasticBandage:2","ACE_packingBandage:1"
#define CAMO_UNIFORM "CUP_U_O_SLA_MixedCamo"
#define CAMO_VEST "CUP_V_O_SLA_6B3_1_WDL"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "cwr3_b_backpack_alice"
#define CAMO_HEADGEAR "CUP_H_SLA_Helmet"
#define CAMO_HEADGEAR_SPECIAL "CUP_H_SLA_Boonie"
#define CAMO_UNIFORM_PILOT "CUP_U_O_SLA_Overalls_Pilot"
#define CAMO_VEST_PILOT "CUP_V_O_TK_CrewBelt"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "CUP_H_SLA_Pilot_Helmet"
#define CAMO_UNIFORM_VICC "CUP_U_O_SLA_Overalls_Tank"
#define CAMO_VEST_VICC "CUP_V_O_TK_CrewBelt"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "CUP_H_SLA_TankerHelmet"
#define RIFLE "hlc_rifle_g3ka4"
#define RIFLE_MAG "hlc_20rnd_762x51_b_G3:6","hlc_20rnd_762x51_T_G3:3"
#define RIFLE_ATTACHMENTS
#define AAR_ATTACHMENTS
#define ALT_OPTICS "CUP_optic_CompM2_Black","CUP_optic_TrijiconRx01_black","CUP_optic_MRad","CUP_optic_Aimpoint_5000"
#define GLRIFLE "HLC_Rifle_g3ka4_GL"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell"
#define GLRIFLE_MAG_HE "CUP_1Rnd_HE_M203:2"
#define GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
#define CARBINE RIFLE
#define CARBINE_MAG RIFLE_MAG
#define AR "CUP_arifle_RPK74_45_top_rail"
#define AR_MAG "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M:6"
#define MAT "launch_RPG7_F"
#define MAT_MAG "gm_1Rnd_40mm_heat_pg7v_rpg7:2","CUP_OG7_M:2"
#define MAT_OPTIC
#define AT "gm_rpg18_oli"
#define AT_MAG "gm_1Rnd_64mm_heat_pg18"
#define MMG "CUP_lmg_PKM"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:5"
#define HMG ""
#define HMG_TRI_HI ""
#define HMG_TRI_LO ""
#define HMG_MAG
#define HAT ""
#define HAT_TRI_HI ""
#define HAT_TRI_LO ""
#define HAT_MAG
#define SAM "gm_9k32m_oli"
#define SAM_MAG "gm_1Rnd_72mm_he_9m32m:2"
#define SNIPER "CUP_srifle_SVD"
#define SNIPER_MAG "CUP_10Rnd_762x54_SVD_M:10"
#define SNIPER_OPTIC "CUP_optic_PSO_1_open"
#define SPOTTER "hlc_rifle_g3ka4"
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_OPTIC ""
#define SMG "gm_mp5a3_surefire_blk"
#define SMG_MAG "gm_30Rnd_9x19mm_AP_DM91_mp5a3_blk:5"
#define PISTOL "CUP_hgun_PB6P9"
#define PISTOL_MAG "CUP_8Rnd_9x18_Makarov_M:4"
#define PISTOL_OPTIC ""
#define LEADER_GRENADES SIDE_BASE_GRENADES,"gm_smokeshell_org_gc:2","gm_smokeshell_blk_gc"
#define TOOLS
#define LEADER_TOOLS
#define LINKED BASE_LINKED
#define LEADER_LINKED
#define SIDE_MEDIC_GRENADES "rhs_mag_rdg2_white","gm_smokeshell_org_gc","gm_smokeshell_blk_gc"
// ------------- Vehicle Pool -------------
transportVehiclePool[] = {
  "CUP_O_Ural_Open_SLA",
  "CUP_O_Ural_SLA",
  "CUP_O_Tigr_233011_SLA"
};
armedSoftVehiclePool[] = {
  "CUP_O_UAZ_MG_SLA",
  "CUP_O_Tigr_233014_PK_SLA"
};
armoredVehiclePool[] = {
  "CUP_O_MTLB_pk_SLA",
  "CUP_O_BTR60_SLA",
  "CUP_O_BTR80_SLA",
  "CUP_O_BRDM2_SLA"
};
tankVehiclePool[] = {
  "CUP_O_T72_SLA",
  "CUP_O_BMP2_SLA"
};
reinforcementTruck = "CUP_O_Ural_Open_SLA";
reinforcementArmed = "CUP_O_BTR80_SLA";
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
  backpackItems[] = {SIDE_MEDICAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,SIDE_BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
};
class Fic_Soldier_Carbine: rifleman {
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,SIDE_BASE_GRENADES};
};
class ftl: rifleman {
  weapons[] = {GLRIFLE};
  vest[] = {"CUP_V_O_SLA_6B3_5_WDL"};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  backpack[] = {CARRYALL};
  items[] += {LEADER_TOOLS};
};
class sl: ftl {
  handguns[] = {PISTOL};
  headgear[] = {CAMO_HEADGEAR,CAMO_HEADGEAR,CAMO_HEADGEAR,"gmx_cdf2022_army_beret_blk"};
  magazines[] += {PISTOL_MAG};
  handgunAttachments[] = {};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
};
class coy: sl {
  items[] += {};
};
class uav: rifleman {
  backpack[] = {SIDE_UAV_BACKPACK};
  linkedItems[] += {SIDE_UAV_TERMINAL};
};
class ar: rifleman {
  weapons[] = {AR};
  backpack[] = {"B_Battle_Belt_XL_F"};
  magazines[] = {AR_MAG,PISTOL_MAG,SIDE_BASE_GRENADES};
  handguns[] = {PISTOL};
};
class aar: rifleman {
  backpack[] = {"B_Battle_Belt_XL_F"};
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: rifleman {
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class sm: Fic_Soldier_Carbine {
  magazines[] = {CARBINE_MAG,SIDE_MEDIC_GRENADES};
  backpack[] = {"cwr3_b_backpack_alice_medic_empty"};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {BINOS};
};
class mmgg: ar {
  weapons[] = {MMG};
  vest[] = {"CUP_V_O_SLA_6B3_3_WDL"};
  magazines[] = {MMG_MAG,PISTOL_MAG,SIDE_BASE_GRENADES};
  attachments[] = {};
  backpack[] = {CARRYALL};
};
class mmgag: Fic_Spotter {
  backpackItems[] += {MMG_MAG};
  vest[] = {"CUP_V_O_SLA_6B3_3_WDL"};
  backpack[] = {CARRYALL};
};
class matg: Fic_Soldier_Carbine {
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {SIDE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
  backpack[] = {"CUP_B_RPGPack_KHaki"};
};
class matag: Fic_Spotter {
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  backpack[] = {"CUP_B_RPGPack_KHaki"};
};
class msamg: Fic_Soldier_Carbine {
  SAM_GEAR(CARRYALL, SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {
  SAM_GEAR(CARRYALL, SAM_MAG2)
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
  magazines[] = {SPOTTER_MAG,SIDE_BASE_GRENADES};
  items[] += {};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: spotter {
  headgear[] = {CAMO_HEADGEAR_SPECIAL};
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,SIDE_BASE_GRENADES};
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
  backpackItems[] = {SIDE_KEY};
  items[] = {SIDE_MEDICAL,TOOLS,LEADER_TOOLS};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class vicc: Fic_Soldier_Carbine {
  uniform[] = {CAMO_UNIFORM_VICC};
  vest[] = {CAMO_VEST_VICC};
  headgear[] = {CAMO_HEADGEAR_VICC};
  backpack[] = {CAMO_BACKPACK_VICC};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,SIDE_CREW_GRENADES};
  backpackItems[] = {SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {SIDE_MEDICAL};
};
class vicd: vicc {
  backpackItems[] = {"Toolkit",SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class Fic_eng: rifleman {
  items[] += {BASE_ENG,,SIDE_MEDICAL};
  backpack[] = {CARRYALL};
  backpackItems[] = {"Toolkit",SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
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
class fac: coy {
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,"Laserbatteries",PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
};
class rifleman_02: rifleman {
};
class artl: sl {
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY};
};
class artg: rifleman {
  backpackItems[] += {BASE_ARTILLERY};
};
class plm: sm {
  backpackItems[] = {PL_MEDIC_MEDICAL};
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
  items[] += {};
  backpackItems[] = {SIDE_KEY};
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
  items[] += {SIDE_MEDICAL};
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
  magazines[] += {SAM_MAG2};
};
class mtrl: sl {
  items[] += {BASE_ARTILLERY};
};
class helicrew: pilot {
  backpackItems[] = {"Toolkit",SIDE_KEY};
};
class cc: helicrew {
};
class engl: eng {
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class fallback: rifleman {};