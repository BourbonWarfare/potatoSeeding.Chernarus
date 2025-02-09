author = "Lambda.Tiger";
description = "National Army of Colombia c. 2005 (AI)";
requiredAddons[] = {
  "ptv_weapons_cfg",
  "cwr3_weapons",
  "cwr3_soldiers_us",
  "CUP_Weapons_LoadOrder"
};
#include "..\undef.hpp"
#include "..\undef_side_gear.hpp"
#define SIDE_KEY
#define SIDE_CHEM_LIGHT
#define SIDE_UAV_BACKPACK
#define SIDE_UAV_TERMINAL
#define SIDE_BINOS "gm_ferod16_oli"
#define SIDE_RANGE_FINDER SIDE_BINOS
#define SIDE_BASE_GRENADES "HandGrenade"
#define SIDE_LEADER_GRENADES SIDE_BASE_GRENADES,"SmokeShell","SmokeShellYellow"
#define SIDE_CREW_GRENADES "SmokeShell","SmokeShellPurple"
#define SIDE_MEDICAL "ACE_elasticBandage:2","ACE_packingBandage:1"
#define CAMO_UNIFORM "cwr3_b_uniform_m65_woodland_gloves"
#define CAMO_VEST "cwr3_b_vest_alice"
#define CAMO_VEST_FTL "cwr3_b_vest_alice_officer"
#define CAMO_VEST_SL "cwr3_b_vest_lbv_alice"
#define CAMO_VEST_AR "cwr3_b_vest_alice_ar"
#define CAMO_VEST_RAT "cwr3_b_vest_alice_light"
#define CAMO_VEST_MEDIC  "cwr3_b_vest_alice_medic"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "cwr3_b_backpack_alice"
#define CARRYALL_MEDIC "cwr3_b_backpack_alice_medic"
#define CAMO_HEADGEAR "cwr3_b_headgear_pasgt_m81_woodland"
#define CAMO_HEADGEAR_SPECIAL "cwr3_b_headgear_pasgt_m81_woodland"
#define CAMO_UNIFORM_PILOT "CUP_U_B_USArmy_PilotOverall"
#define CAMO_VEST_PILOT "cwr3_b_vest_alice"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_F"
#define CAMO_HEADGEAR_PILOT "H_PilotHelmetHeli_I_E"
#define CAMO_UNIFORM_VICC "cwr3_b_uniform_m65_woodland_gloves"
#define CAMO_VEST_VICC "cwr3_b_vest_alice"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_F"
#define CAMO_HEADGEAR_VICC "cwr3_b_headgear_pasgt_m81_woodland"
#define RIFLE "CUP_arifle_Galil_556_black"
#define RIFLE_MAG "CUP_35Rnd_556x45_Galil_Mag:5"
#define RIFLE_ATTACHMENTS
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define GLRIFLE "CUP_arifle_M16A2_GL"
#define GLRIFLE_MAG "CUP_30Rnd_556x45_Stanag:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareWhite_F:2"
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2",GLRIFLE_MAG_FLARE
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:1"
#define CARBINE "CUP_arifle_Galil_SAR_black"
#define CARBINE_MAG RIFLE_MAG
#define AR "ptv_negev_b"
#define AR_MAG "ptv_150Rnd_556x45_Negev_Tracer_Red:3"
#define AT "cwr3_launch_m72a3"
#define AT_MAG
#define MMG "CUP_lmg_FNMAG_RIS_modern"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M:5"
#define MAT "ace_spike_launcher"
#define MAT_MAG "ace_spike_lr:2"
#define MAT_OPTIC
#define HMG "CUP_m2_carry"
#define HMG_TRI_HI "ace_csw_m3CarryTripod"
#define HMG_TRI_LO "ace_csw_m3CarryTripodLow"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag_red:4"
#define HAT "CUP_TOW2_carry"
#define HAT_TRI_HI "ace_csw_m220CarryTripod"
#define HAT_TRI_LO "ace_csw_m220CarryTripod"
#define HAT_MAG "CUP_compats_TOW2_M"
#define SAM "CUP_launch_FIM92Stinger"
#define SAM_MAG
#define SNIPER "CUP_srifle_M24_wdl"
#define SNIPER_MAG "CUP_5Rnd_762x51_M24:10"
#define SNIPER_ATTACHMENTS "hlc_optic_LeupoldM3A"
#define SPOTTER "CUP_arifle_Galil_556_black"
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS
#define SMG "gm_mp2a1_blk"
#define SMG_MAG "gm_32Rnd_9x19mm_B_DM51_mp2_blk:3"
#define PISTOL "CUP_hgun_M9"
#define PISTOL_MAG "CUP_15Rnd_9x19_M9:2"
#define PISTOL_ATTACHMENTS
#define TOOLS "SmokeShell"
#define LEADER_TOOLS
#define LEADER_LINKED


// ------------- Vehicle Pool -------------
transportVehiclePool[] = {
  "C_Van_01_transport_F",
  "cwr3_b_fia_m151"
};
armedSoftVehiclePool[] = {
  "CUP_B_nM1025_M2_NATO_T",
  "cwr3_b_hmmwv_m2",
  "CUP_B_nM1025_M240_NATO_T"
};
armoredVehiclePool[] = {
  "cwr3_b_fia_m113a1",
  "CUP_B_RG31_M2_OD_USA",
  "CUP_B_nM1151_ogpk_m2_NATO_T",
  "CUP_B_LAV25M240_green"
};
tankVehiclePool[] = {
  "CUP_B_LAV25M240_green"
};
reinforcementTruck = "C_Van_01_transport_F";
reinforcementArmed = "cwr3_b_fia_m113a1";
// ------------- End Vehicle Pool -------------

class Car {};
class Tank {};
class Helicopter {};
class Plane {};
class Ship_F {};

class rifleman {// rifleman
  uniform[] = {CAMO_UNIFORM};
  vest[] = {CAMO_VEST};
  headgear[] = {CAMO_HEADGEAR};
  backpack[] = {CAMO_BACKPACK};
  backpackItems[] = {SIDE_MEDICAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,SIDE_BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {BASE_LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class Fic_Soldier_Carbine: rifleman {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,SIDE_BASE_GRENADES};
};
class ftl: rifleman {// FTL
  vest[] = {CAMO_VEST_FTL};
  backpack[] = {CAMO_BACKPACK};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,SIDE_LEADER_GRENADES};
};
class sl: ftl {// SL
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CARRYALL};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {SIDE_RANGE_FINDER};
};
class coy: sl {// CO and DC
  backpack[] = {CARRYALL};
};
class uav: rifleman {
  backpack[] = {SIDE_UAV_BACKPACK};
};
class ar: rifleman {// AR
  vest[] = {CAMO_VEST_AR};
  backpack[] = {CAMO_BACKPACK};
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,SIDE_BASE_GRENADES};
  attachments[] = {};
  handguns[] = {PISTOL};
};
class aar: rifleman {// AAR
  backpack[] = {CAMO_BACKPACK};
  backpackItems[] += {AR_MAG};
};
class lat: Fic_Soldier_Carbine {// RAT
  vest[] = {CAMO_VEST_RAT};
  backpack[] = {CAMO_BACKPACK};
  magazines[] += {AT_MAG};
  launchers[] = {AT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class sm: Fic_Soldier_Carbine {// Medic
  vest[] = {CAMO_VEST_MEDIC};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {CARRYALL_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {SIDE_RANGE_FINDER};
};
class mmgg: ar {// MMG
  vest[] = {CAMO_VEST_AR};
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,SIDE_BASE_GRENADES};
  attachments[] = {MMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {CARRYALL};
  backpackItems[] += {MMG_MAG};
};
class matg: Fic_Soldier_Carbine {// MAT Gunner
  backpack[] = {CARRYALL};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {SIDE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {CARRYALL};
  backpackItems[] = {};
  magazines[] += {MAT_MAG2};
  items[] += {SIDE_MEDICAL};
};
class msamg: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR(CARRYALL, SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR(CARRYALL, SAM_MAG)
};
class mtrg: Fic_Soldier_Carbine {// Mortar Gunner
  launchers[] = {"potato_vz99_carryWeapon"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"potato_vz99_HE_multi:6","potato_vz99_flare:2"};
};
class mtrag: Fic_Spotter {// Assistant Mortar
  launchers[] = {"ace_csw_carryMortarBaseplate"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"potato_vz99_HE_multi:2","potato_vz99_smokeWhite:4","potato_vz99_flare:2"};
};
class spotter: Fic_Spotter {// Spotter
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,SIDE_BASE_GRENADES};
  items[] += {"ACE_Kestrel4500","ACE_SpottingScope"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: spotter {// Sniper
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,SIDE_BASE_GRENADES};
  items[] = {TOOLS,"ACE_RangeCard","ACE_Tripod"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_ATTACHMENTS};
};
class pilot {// Pilot
  uniform[] = {CAMO_UNIFORM_PILOT};
  backpack[] = {CAMO_BACKPACK_PILOT};
  vest[] = {CAMO_VEST_PILOT};
  headgear[] = {CAMO_HEADGEAR_PILOT};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  items[] = {SIDE_MEDICAL};
};
class vicc: Fic_Soldier_Carbine {// Crew
  uniform[] = {CAMO_UNIFORM_VICC};
  vest[] = {CAMO_VEST_VICC};
  headgear[] = {CAMO_HEADGEAR_VICC};
  backpack[] = {CAMO_BACKPACK_VICC};
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED,SIDE_BINOS};
  items[] += {SIDE_MEDICAL};
};
class vicd: vicc {// Repair Specialist
  backpackItems[] = {"Toolkit"};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class Fic_eng: vicd {
  items[] += {BASE_ENG};
  backpackItems[] = {};
};
class demo: Fic_eng {// Explosive Specialist
  magazines[] += {BASE_EXP};
};
class mine: Fic_eng {// Mine Specialist
  magazines[] += {BASE_MINE};
  handguns[] = {MINE_DETECTOR};
};
class demol: Fic_eng {// Demolitions Leader
  magazines[] += {BASE_EXP};
  backpackItems[] = {"Toolkit"};
};
class eng: Fic_eng {// Logistics Engineer
  backpackItems[] = {"Toolkit","ACE_EntrenchingTool","ACE_Fortify","ACE_wirecutter"};
};
class fac: coy {// FAC
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,"Laserbatteries",PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
};
class artl: sl {// Artillery Leader
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY};
};
class plm: sm {//Platoon Medic
  backpack[] = {CARRYALL};
  backpackItems[] = {PL_MEDIC_MEDICAL};
};
class cm: plm {// Company Medic
};
class xo: coy {// XO
};
class plt: coy {// Platoon Leader
};
class sgt: plt {// Platoon Sergeant
};
class vicl: vicc {// Vehicle Commander
};
class mmgl: sl {// MMG Lead
  backpack[] = {CARRYALL};
  magazines[] += {MMG_MAG};
};
class matl: sl {// MAT Lead
  backpack[] = {CARRYALL};
  magazines[] += {MAT_MAG};
};
class hmgl: sl {// HMG Lead
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,SIDE_LEADER_GRENADES,PISTOL_MAG,HMG_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HMG_TRI_LO};
  items[] += {BASE_BALLISTICS};
};
class hmgg: rifleman {// HMG Gunner
  backpack[] = {CARRYALL};
  magazines[] += {HMG_MAG};
  launchers[] = {HMG};
};
class hmgag: rifleman {// HMG Spotter
  backpack[] = {CARRYALL};
  magazines[] += {HMG_MAG};
  launchers[] = {HMG_TRI_HI};
  items[] += {BASE_BALLISTICS};
};
class hatl: sl {// HAT Lead
  weapons[] = {RIFLE};
  backpackItems[] = {};
  magazines[] = {RIFLE_MAG,SIDE_LEADER_GRENADES,PISTOL_MAG,HAT_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HAT_TRI_LO};
  items[] += {SIDE_MEDICAL};
};
class hatg: rifleman {// HAT Gunner
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT};
};
class hatag: rifleman {// HAT Spotter
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT_TRI_HI};
};
class msaml: sl {// MSAM Lead
  backpack[] = {CARRYALL};
  magazines[] += {SAM_MAG};
};
class mtrl: sl {// Mortar Lead
  items[] += {BASE_ARTILLERY};
};
class helicrew: pilot {// Aircrew
  backpackItems[] = {"Toolkit",SIDE_KEY};
};
class cc: helicrew {// Crew Chief
};
class engl: eng {// Logistics Leader
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,SIDE_LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {SIDE_BINOS};
};
class rifleman_02: rifleman {};
class rifleman_03: rifleman {};
class rifleman_04: rifleman {};
class fallback: rifleman {}; // This means any faction member who doesn't match something will use this loadout