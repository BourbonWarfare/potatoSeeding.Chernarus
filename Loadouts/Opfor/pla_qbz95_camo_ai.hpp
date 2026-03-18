author = "Lambda.Tiger";
description = "People's Liberation Army Ground Forces (QBZ-95, AI)";
#include "..\undef.hpp"
#include "..\undef_side_gear.hpp"
#define SIDE_KEY
#define SIDE_CHEM_LIGHT
#define SIDE_UAV_BACKPACK
#define SIDE_UAV_TERMINAL
#define SIDE_BINOS "Binocular"
#define SIDE_BASE_GRENADES "rhs_mag_rgn","rhs_mag_rgo"
#define SIDE_LEADER_GRENADES SIDE_BASE_GRENADES,"gm_smokeshell_org_gc","gm_smokeshell_blk_gc"
#define SIDE_CREW_GRENADES "gm_smokeshell_wht_gc","gm_smokeshell_blk_gc"
#define SIDE_MEDICAL "ACE_elasticBandage:2","ACE_packingBandage:1"
#define CAMO_UNIFORM "acp_CN_Xingkong_W_core_lite_U_B_CombatUniform_CN_Xingkong_W"
#define CAMO_VEST "acp_CN_Xingkong_W_contact_lite_V_CarrierRigKBT_01_light_CN_Xingkong_W_F"
#define CAMO_BACKPACK "acp_CN_Xingkong_W_core_lite_B_AssaultPack_CN_Xingkong_W"
#define CARRYALL "acp_CN_Xingkong_W_core_lite_B_AssaultPack_CN_Xingkong_W"
#define CAMO_HEADGEAR "acp_CN_Xingkong_W_modern_west_lite_H_HelmetFASTMT_Cover_CN_Xingkong_W_F"
#define CAMO_HEADGEAR_SPECIAL "acp_CN_Xingkong_W_modern_west_lite_H_HelmetFASTMT_Cover_CN_Xingkong_W_F"
#define CAMO_UNIFORM_PILOT "gm_gc_airforce_uniform_pilot_80_blu"
#define CAMO_VEST_PILOT "CUP_V_CDF_OfficerBelt"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "CUP_H_RUS_ZSH_Shield_Up"
#define CAMO_UNIFORM_VICC "acp_CN_Xingkong_W_core_lite_U_B_CombatUniform_CN_Xingkong_W"
#define CAMO_VEST_VICC "acp_CN_Xingkong_W_core_lite_V_HarnessO_CN_Xingkong_W_F"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "acp_CN_Xingkong_W_modern_east_lite_H_HelmetEAST_Cover_CN_Xingkong_W_F"
#define RIFLE "arifle_CTAR_blk_F"
#define RIFLE_MAG "30Rnd_580x42_Mag_F:5"
#define RIFLE_ATTACHMENTS
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "optic_Aco","CUP_optic_CompM2_Black","CUP_optic_TrijiconRx01_black","CUP_optic_MRad"
#define GLRIFLE "arifle_CTAR_GL_blk_F"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:1"
#define CARBINE "arifle_CTAR_blk_F"
#define CARBINE_MAG RIFLE_MAG
#define AR "arifle_CTARS_blk_F"
#define AR_MAG "100Rnd_580x42_Mag_Tracer_F:4"
#define AT "CUP_launch_RPG26"
#define AT_MAG
#define MMG "CUP_lmg_PKM"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:5"
#define MAT "APEX_RPG7_v2"
#define MAT_MAG "CUP_PG7VL_M:1","CUP_PG7VM_M:2"
#define MAT_OPTIC
#define HMG "ace_compat_rhs_afrf3_nsv_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripod"
#define HMG_MAG "ace_csw_50Rnd_127x108_mag:3"
#define HAT "potato_cswCompatCUP_patchGM_gm_fagot_backpack"
#define HAT_TRI_HI
#define HAT_TRI_LO
#define HAT_MAG "gm_1Rnd_fagot_heat_9m111_csw"
#define SAM "CUP_launch_Igla"
#define SAM_MAG
#define SNIPER "srifle_DMR_07_blk_F"
#define SNIPER_MAG "20Rnd_650x39_Cased_Mag_F:5"
#define SNIPER_ATTACHMENTS "optic_DMS"
#define SPOTTER RIFLE
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS
#define SMG "CUP_smg_vityaz"
#define SMG_MAG "CUP_30Rnd_9x19AP_Vityaz:5"
#define PISTOL "hgun_P07_blk_F"
#define PISTOL_MAG "16Rnd_9x21_Mag:2"
#define PISTOL_ATTACHMENTS
#define LEADER_GRENADES SIDE_BASE_GRENADES,"gm_smokeshell_org_gc:2"
#define TOOLS "gm_smokeshell_wht_gc"
#define LEADER_TOOLS
#define LINKED BASE_LINKED
#define LEADER_LINKED
#define SIDE_MEDIC_GRENADES "gm_smokeshell_wht_gc:2","gm_smokeshell_org_gc"
// ------------- Vehicle Pool -------------
transportVehiclePool[] = {
  "SX2316",
  "SX2220",
  "CUP_O_Tigr_M_233114_CSAT_T"
};
armedSoftVehiclePool[] = {
  "O_T_LSV_02_armed_F",
  "CUP_O_Tigr_M_233114_KORD_CSAT_T",
  "CUP_O_Tigr_M_233114_PK_CSAT_T"
};
armoredVehiclePool[] = {
  "CSK181",
  "O_ZBD04A",
  "O_ZTL11"
};
tankVehiclePool[] = {
  "O_ZBL09",
  "O_ZTZ96A",
  "O_ZTQ15"
};
reinforcementTruck = "SX2316";
reinforcementArmed = "O_T_Truck_02_transport_F";
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
  items[] = {TOOLS};
  linkedItems[] = {BASE_LINKED};
  magazines[] = {RIFLE_MAG,SIDE_BASE_GRENADES};
  attachments[] = {RIFLE_ATTACHMENTS};
};
class Fic_Soldier_Carbine: rifleman {
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,SIDE_BASE_GRENADES};
};
class ftl: rifleman {
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  backpack[] = {CARRYALL};
};
class sl: ftl {
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  handgunAttachments[] = {};
  linkedItems[] = {SIDE_BINOS};
};
class coy: sl {
  items[] += {};
};
class uav: rifleman {
  backpack[] = {SIDE_UAV_BACKPACK};
};
class ar: rifleman {
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,SIDE_BASE_GRENADES};
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
  backpack[] = {CARRYALL};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {SIDE_BINOS};
};
class mmgg: ar {
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,SIDE_BASE_GRENADES};
  attachments[] = {};
  backpack[] = {CARRYALL};
};
class mmgag: Fic_Spotter {
  backpackItems[] += {MMG_MAG};
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
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: spotter {
  headgear[] = {CAMO_HEADGEAR_SPECIAL};
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,SIDE_BASE_GRENADES};
  items[] = {TOOLS};
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
};
class vicc: Fic_Soldier_Carbine {
  uniform[] = {CAMO_UNIFORM_VICC};
  vest[] = {CAMO_VEST_VICC};
  headgear[] = {CAMO_HEADGEAR_VICC};
  backpack[] = {CAMO_BACKPACK_VICC};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,SIDE_CREW_GRENADES};
  backpackItems[] = {SIDE_KEY};
  linkedItems[] = {SIDE_BINOS};
  items[] += {SIDE_MEDICAL};
};
class vicd: vicc {
  backpackItems[] = {"Toolkit",SIDE_KEY};
};
class Fic_eng: rifleman {
  items[] += {BASE_ENG,,SIDE_MEDICAL};
  backpack[] = {CARRYALL};
  backpackItems[] = {"Toolkit",SIDE_KEY};
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
  magazines[] = {GLRIFLE_MAG,SIDE_LEADER_GRENADES,"Laserbatteries",PISTOL_MAG};
  linkedItems[] = {"CUP_LRTV"};
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
  linkedItems[] += {SIDE_BINOS};
};
class fallback: rifleman {};