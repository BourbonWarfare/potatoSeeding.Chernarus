author = "Lambda.Tiger";
description = "British Armed Forces Rifle Company (L1A1, circa 1982)";
#include "../undef.hpp"
#include "../undef_side_gear.hpp"
#define SIDE_BASE_GRENADES "gm_handgrenade_frag_m26a1:2","SmokeShell:3"
#define SIDE_BASE_GRENADES_REDUCED "gm_handgrenade_frag_m26a1:2","SmokeShell:2"
#define SIDE_FAC_GRENADES SIDE_BASE_GRENADES,"SmokeShellBlue:4","SmokeShellYellow:3","SmokeShellOrange:3","SmokeShellGreen:5"
#define SIDE_LEADER_GRENADES SIDE_BASE_GRENADES,"SmokeShell:3","SmokeShellGreen:3","SmokeShellRed:2","SmokeShellPurple"
#ifdef SIDE_RANGE_FINDER
  #undef SIDE_RANGE_FINDER
#endif
#define SIDE_RANGE_FINDER gm_lp7_oli
// Camo set
#define CAMO_UNIFORM "cwr3_b_uk_uniform_dpm","cwr3_b_uk_uniform_dpm_gloves"
#define CAMO_VEST "cwr3_b_uk_vest_58webbing"
#define CAMO_VEST_OFFICER "cwr3_b_uk_vest_58webbing_officer"
#define CAMO_VEST_MG "cwr3_b_uk_vest_58webbing_mg"
#define CAMO_VEST_MEDIC "cwr3_b_uk_vest_58webbing_medic"
#define CAMO_VEST_SAPPER "cwr3_b_uk_vest_58webbing_sapper"
#define CAMO_BACKPACK "B_Battle_Belt_XL_F"
#define CARRYALL "cwr3_b_uk_backpack"
#define CARRYALL_BIG "gm_ge_army_backpack_90_oli"
#define CARRYALL_OFFICER "cwr3_b_backpack_radio"
#define CARRYALL_MEDIC "cwr3_b_uk_backpack_medic_empty"
#define CAMO_HEADGEAR "cwr3_b_uk_headgear_mk5_helmet_scrim_camo","cwr3_b_uk_headgear_mk5_helmet_scrim"
#define CAMO_HEADGEAR_MEDIC "cwr3_b_uk_headgear_mk5_helmet_net_medic"
#define CAMO_HEADGEAR_OFFICER "cwr3_b_uk_headgear_beret_infantry"
#define CAMO_HEADGEAR_SPECIAL "cwr3_b_uk_headgear_mk5_helmet_scrim_camo"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "cwr3_b_uk_uniform_pilot"
#define CAMO_VEST_PILOT "cwr3_b_vest_pilot"
#define CAMO_BACKPACK_PILOT CAMO_BACKPACK
#define CAMO_HEADGEAR_PILOT "cwr3_b_headgear_pilot"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "cwr3_b_uk_uniform_olive"
#define CAMO_VEST_VICC "cwr3_b_uk_vest_58webbing_belt"
#define CAMO_BACKPACK_VICC CAMO_BACKPACK
#define CAMO_HEADGEAR_VICC "cwr3_b_uk_headgear_beret_headset_tank"
// Rifle
#define RIFLE "cwr3_arifle_l1a1"
#define RIFLE_MAG "hlc_20Rnd_762x51_B_fal:10","hlc_20Rnd_762x51_T_fal:4"
#define RIFLE_MAG_FTL "hlc_20Rnd_762x51_B_fal:8","hlc_20Rnd_762x51_T_fal:6"
#define RIFLE_MAG_LEADER "hlc_20Rnd_762x51_B_fal:6","hlc_20Rnd_762x51_T_fal:8"
// GL Rifle
#define GLRIFLE RIFLE
// Carbine
#define CARBINE RIFLE
#define CARBINE_MAG RIFLE_MAG
// MMG
#define MMG "CUP_lmg_L7A2_Flat"
#define MMG_MAG "hlc_100Rnd_762x51_M_M60E4:5"
// AR
#define AR "vn_l4"
#define AR_MAG "vn_l1a1_30_02_mag:8","vn_l1a1_30_02_t_mag:6"
// AT
#define AT "gm_m72a3_oli"
#define AT_MAG "gm_1Rnd_66mm_heat_m72a3:1"
// MAT
#define MAT "cwr3_launch_carlgustaf"
#define MAT_MAG "cwr3_carlgustaf_heat_m:2","cwr3_carlgustaf_hedp_m"
#define MAT_MAG2 "cwr3_carlgustaf_heat_m","cwr3_carlgustaf_hedp_m"
#define MAT_MAG1 "cwr3_carlgustaf_heat_m"
#define MAT_OPTIC "CUP_optic_MAAWS_Scope"
// HMG
#define HMG "CUP_m2_carry"
#define HMG_TRI_HI "ace_csw_m3CarryTripod"
#define HMG_TRI_LO "ace_csw_m3CarryTripod"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag_red"
#define HMG_MAG2 "ace_csw_100Rnd_127x99_mag_red:2"
// HAT
#define HAT "potato_cswCompatCUP_patchGM_gm_milan_backpack"
#define HAT_TRI_HI
#define HAT_TRI_LO
#define HAT_MAG "gm_1Rnd_milan_heat_dm82_csw"
// SAM
#define SAM "cwr3_launch_javelin"
#define SAM_MAG "cwr3_javelin_m"
#define SAM_MAG2 "cwr3_javelin_m:2"
// Sniper
#define SNIPER "cwr3_srifle_l42a1_no23"
#define SNIPER_MAG "CUP_5Rnd_762x51_M24:20"
#define SNIPER_ATTACHMENTS "CUP_optic_no23mk2"
// Spotter
#define SPOTTER RIFLE
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS "cwr3_optic_suit"
// SMG
#define SMG "cwr3_smg_sterling"
#define SMG_MAG "cwr3_30rnd_sterling_m:5"
// Pistol
#define PISTOL "CUP_hgun_Browning_HP"
#define PISTOL_MAG "CUP_13Rnd_9x19_Browning_HP:3"
// Grenades
#define LEADER_GRENADES SIDE_BASE_GRENADES,"1Rnd_HE_Grenade_shell:5","1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define LEADER_GRENADES_FTL SIDE_LEADER_GRENADES
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED

// ------------- Vehicle Pool -------------
rallyObject = "cwr3_Flag_UnitedKingdom";
transportVehiclePool[] = {
  "cwr3_b_uk_fv620_transport",
  "cwr3_b_uk_landrover",
  "cwr3_b_uk_fv432_hq"
};
armedSoftVehiclePool[] = {
  "cwr3_b_uk_fv432_gpmg",
  "cwr3_b_uk_fv432_peak",
  "CUP_B_LR_MG_GB_W",
  "CUP_B_LR_MG_GB_W"
};
armoredVehiclePwdool[] = {
  "cwr3_b_uk_fv510",
  "cwr3_b_uk_fv101",
  "potato_cwr3_b_uk_fv107_unstab"
};
tankVehiclePool[] = {
  "cwr3_b_uk_fv4030",
  "cwr3_b_uk_fv4201"
};
heliVehiclePool[] = {
  "cwr3_b_uk_hc1",
  "cwr3_b_uk_lynx_ah7_cas",
  "cwr3_b_uk_lynx_ah7_transport",
  "cwr3_b_uk_puma_hc1",
  "CUP_B_AH1_DL_BAF"
};
planeVehiclePool[] = {
  "cwr3_b_uk_f4m",
  "cwr3_b_frs1",
  "FA_EMB312_AT27_Syndicate"
};
reinforcementTruck = "CUP_B_T810_Unarmed_CZ_WDL";
reinforcementArmed = "I_APC_Wheeled_03_cannon_F";
// ------------- End Vehicle Pool -------------

class Car {
  minVehicleBoxSpace = 6;
  class ACE_Wheel {
    boxCount = 3;
  };
};
class Tank {};
class Helicopter {};
class Plane {};
class Ship_F {};
class rifleman {
  uniform[] = {CAMO_UNIFORM};
  vest[] = {CAMO_VEST};
  headgear[] = {CAMO_HEADGEAR};
  backpack[] = {CAMO_BACKPACK};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,SIDE_BASE_GRENADES};
  items[] = {TOOLS};
  opticChoices[] = {"cwr3_optic_suit"};
  linkedItems[] = {LINKED};
};
class Fic_Soldier_Carbine: rifleman {
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,SIDE_BASE_GRENADES};
};
class ftl: rifleman {
  weapons[] = {GLRIFLE};
  vest[] = {CAMO_VEST_OFFICER};
  magazines[] = {LEADER_GRENADES,RIFLE_MAG_FTL};
  backpackItems[] += {"CUP_glaunch_M79"};
  items[] += {"acex_intelitems_notepad"};
  linkedItems[] += {BINOS};
};
class sl: ftl {
  handguns[] = {PISTOL};
  magazines[] = {RIFLE_MAG_LEADER,LEADER_GRENADES};
  backpack[] = {CARRYALL_OFFICER};
  linkedItems[] = {LINKED,LEADER_LINKED};
  items[] += {RADIO_MR,"SmokeShellGreen:2","SmokeShell:2",PISTOL_MAG};
};
class coy: sl {
  items[] += {RADIO_LR};
  headgear[] = {CAMO_HEADGEAR_OFFICER};
};
class ar: rifleman {
  weapons[] = {AR};
  magazines[] = {AR_MAG,SIDE_BASE_GRENADES};
};
class aar: rifleman {
  magazines[] = {RIFLE_MAG,SIDE_BASE_GRENADES_REDUCED,AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: rifleman {
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class sm: Fic_Soldier_Carbine {
  headgear[] = {CAMO_HEADGEAR_MEDIC};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  vest[] = {CAMO_VEST_MEDIC};
  backpack[] = {CARRYALL_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {SIDE_RANGE_FINDER};
};
class mmgg: ar {
  weapons[] = {MMG};
  vest[] = {CAMO_VEST_MG};
  magazines[] = {MMG_MAG,PISTOL_MAG,SIDE_BASE_GRENADES};
  handguns[] = {PISTOL};
  backpack[] = {CARRYALL};
};
class mmgag: Fic_Spotter {
  backpackItems[] += {MMG_MAG};
  vest[] = {CAMO_VEST_MG};
  backpack[] = {CARRYALL_BIG};
};
class matg: Fic_Soldier_Carbine {
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  backpack[] = {CARRYALL};
};
class matag: Fic_Spotter {
  backpackItems[] = {};
  backpack[] = {CARRYALL_BIG};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
};
class msamg: Fic_Soldier_Carbine {
  SAM_GEAR(CARRYALL, SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {
  SAM_GEAR(CARRYALL_BIG, SAM_MAG2)
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
  items[] += {RADIO_MR};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: spotter {
  headgear[] = {CAMO_HEADGEAR_SPECIAL};
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,SIDE_BASE_GRENADES};
  items[] = {TOOLS,"ACE_RangeCard"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_ATTACHMENTS};
};
class pilot {
  uniform[] = {CAMO_UNIFORM_PILOT};
  vest[] = {CAMO_VEST_PILOT};
  headgear[] = {CAMO_HEADGEAR_PILOT};
  backpack[] = {CAMO_BACKPACK_PILOT};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {RADIO_LR};
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class vicc: Fic_Soldier_Carbine {
  uniform[] = {CAMO_UNIFORM_VICC};
  vest[] = {CAMO_VEST_VICC};
  headgear[] = {CAMO_HEADGEAR_VICC};
  backpack[] = {CAMO_BACKPACK_VICC};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {RADIO_LR};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
};
class vicd: vicc {
  backpackItems[] = {"Toolkit",RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class Fic_eng: rifleman {
  items[] += {BASE_ENG,,BASE_MEDICAL};
  backpackItems[] = {"Toolkit",RADIO_MR};
  vest[] = {CAMO_VEST_SAPPER};
  linkedItems[] = {LINKED,LEADER_LINKED};
  backpack[] = {CARRYALL};
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
  backpackItems[] = {RADIO_MR,"Toolkit"};
};
class eng: Fic_eng {
  backpackItems[] = {"Toolkit","ACE_EntrenchingTool","ACE_Fortify","ACE_wirecutter"};
};
class fac: coy {
  magazines[] = {SIDE_FAC_GRENADES,"Laserbatteries",PISTOL_MAG,RIFLE_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
};
class rifleman_02: rifleman {
};
class artl: sl {
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR};
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
  backpack[] = {CARRYALL};
};
class vicl: vicc {
  items[] += {RADIO_MR};
  backpackItems[] = {RADIO_LR};
};
class mmgl: sl {
  backpack[] = {CARRYALL_OFFICER};
  magazines[] += {MMG_MAG};
};
class matl: sl {
  backpack[] = {CARRYALL_OFFICER};
  linkedItem[] += {SIDE_RANGE_FINDER};
  magazines[] += {MAT_MAG1};
};
class hmgl: sl {
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HMG_MAG};
  backpack[] = {CARRYALL_OFFICER};
  launchers[] = {HMG_TRI_LO};
  items[] += {BASE_BALLISTICS};
};
class hmgg: rifleman {
  backpack[] = {CARRYALL};
  magazines[] += {HMG_MAG};
  launchers[] = {HMG};
};
class hmgag: rifleman {
  backpack[] = {CARRYALL_BIG};
  magazines[] += {HMG_MAG2};
  launchers[] = {HMG_TRI_HI};
  items[] += {BASE_BALLISTICS};
};
class hatl: sl {
  weapons[] = {RIFLE};
  backpackItems[] = {};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES_FTL,PISTOL_MAG};
  backpack[] = {CARRYALL_OFFICER};
  launchers[] = {HAT_TRI_LO};
  items[] = {BASE_MEDICAL,RADIO_MR,"SmokeShellGreen:2","SmokeShell:2"};
};
class hatg: rifleman {
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT};
};
class hatag: rifleman {
  backpack[] = {CARRYALL_BIG};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT_TRI_HI};
};
class msaml: sl {
  handguns[] = {PISTOL};
  magazines[] = {RIFLE_MAG_LEADER,LEADER_GRENADES_FTL};
  backpack[] = {CARRYALL_OFFICER};
  linkedItems[] = {LINKED,LEADER_LINKED};
  items[] = {BASE_MEDICAL,  RADIO_MR,"SmokeShellGreen:2","SmokeShell:2",PISTOL_MAG};
};
class mtrl: sl {
  items[] += {BASE_ARTILLERY};
};
class helicrew: pilot {
  backpackItems[] = {"Toolkit"};
};
class cc: helicrew {
  backpackItems[] += {RADIO_MR};
};
class engl: eng {
  weapons[] = {GLRIFLE};
  magazines[] += {LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
  backpackItems[] += {RADIO_MR};
};
class fallback: rifleman {};
#undef SIDE_BASE_GRENADES
#undef SIDE_BASE_GRENADES_REDUCED
#undef SIDE_FAC_GRENADE
#undef SIDE_LEADER_GRENADES
#undef SIDE_RANGE_FINDER