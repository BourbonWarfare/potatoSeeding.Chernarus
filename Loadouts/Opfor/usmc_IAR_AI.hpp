author = "Lambda.Tiger";
description = "US Marines circa 2020 (HK M27, AI)";
#include "..\undef.hpp" // Reset defines
// Camo set
#define CAMO_UNIFORM "CUP_U_B_USMC_MCCUU_gloves"
#define CAMO_VEST "CUP_V_B_Eagle_SPC_Patrol"
#define CAMO_BACKPACK "B_Battle_Belt_XL_F"
#define CARRYALL "B_Carryall_khk"
#define CAMO_HEADGEAR "CUP_H_LWHv2_MARPAT"
#define CAMO_HEADGEAR_SPECIAL "CUP_H_LWHv2_MARPAT_cov_fr"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "CUP_U_B_USMC_PilotOverall"
#define CAMO_VEST_PILOT "CUP_V_B_PilotVest"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "CUP_H_SPH4"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "CUP_U_B_USMC_MCCUU_gloves"
#define CAMO_VEST_VICC "CUP_V_B_Eagle_SPC_Crew"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "CUP_H_CVC"
// Rifle
#define RIFLE "CUP_arifle_HK_M27","CUP_arifle_HK_M27_VFG"
#define RIFLE_MAG "CUP_30Rnd_556x45_Stanag_Tracer_Red:3","CUP_30Rnd_556x45_Stanag:2"
#define RIFLE_ATTACHMENTS
#define ALT_OPTICS "optic_Aco","CUP_optic_CompM2_Black","CUP_optic_TrijiconRx01_black","CUP_optic_MRad"
// GL Rifle
#define GLRIFLE "CUP_arifle_HK_M27_AG36"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell"
#define GLRIFLE_MAG_FLARE "CUP_1Rnd_StarFlare_White_M203:4"
#define GLRIFLE_MAG_HE "potato_1Rnd_40mm_M433_HEDP"
// Carbine
#define CARBINE RIFLE
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR RIFLE
#define AR_MAG  "CUP_30Rnd_556x45_Stanag_Tracer_Red:8"
#define AR_ATTACHMENTS "CUP_bipod_Harris_1A2_L_BLK"
// AT
#define AT "CUP_launch_M136"
#define AT_MAG
// MMG
#define MMG "CUP_lmg_M240"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M:3"
#define MMG_ATTACHMENTS
// MAT
#define MAT "CUP_launch_Mk153Mod0"
#define MAT_MAG "CUP_SMAW_HEAA_M:1", "CUP_SMAW_HEDP_M:2", "CUP_SMAW_Spotting:2"
#define MAT_MAG_LAT "CUP_SMAW_HEDP_M:2", "CUP_SMAW_Spotting:2"
#define MAT_MAG2 "CUP_SMAW_HEAA_M:1", "CUP_SMAW_HEDP_M"
#define MAT_OPTIC "CUP_optic_SMAW_Scope"
// HMG
#define HMG "CUP_m2_carry"
#define HMG_TRI_HI "ace_csw_m3CarryTripod"
#define HMG_TRI_LO "ace_csw_m3CarryTripodLow"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag_red:3"
// HAT
#define HAT "CUP_launch_Javelin"
#define HAT_TRI_HI
#define HAT_TRI_LO
#define HAT_MAG "CUP_Javelin_M"
// SAM
#define SAM "CUP_launch_FIM92Stinger"
// Sniper
#define SNIPER "CUP_srifle_m110_kac_black"
#define SNIPER_MAG "CUP_20Rnd_762x51_B_M110:5"
#define SNIPER_ATTACHMENTS "CUP_optic_LeupoldMk4", "CUP_bipod_Harris_1A2_L"
// Spotter
#define SPOTTER RIFLE
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS
// SMG
#define SMG "CUP_arifle_M4A1"
#define SMG_MAG "CUP_30Rnd_556x45_Stanag:5"
// Grenades
#ifdef SIDE_BASE_GRENADES
  #undef SIDE_BASE_GRENADES
#endif
#define SIDE_BASE_GRENADES "CUP_HandGrenade_M67"
#define LEADER_GRENADES "CUP_HandGrenade_M67","SmokeShell:2"
// Gear
#define TOOLS "SmokeShell"
#define LEADER_TOOLS TOOLS
#define LINKED BASE_LINKED
#define LEADER_LINKED

class Car {};
class Tank {};
class Helicopter {};
class Plane {};
class Ship_F {};

artilleryArray[] = {
  {"CUP_B_M252_USMC", {"potato_8Rnd_82mm_Mo_shells_noFrag", "8Rnd_82mm_Mo_Smoke_white"}, 3},
  {"CUP_B_M252_USMC", {"potato_8Rnd_82mm_Mo_shells_noFrag", "8Rnd_82mm_Mo_Smoke_white"}, 2},
  {"CUP_B_M252_USMC", {"potato_8Rnd_82mm_Mo_shells_noFrag", "8Rnd_82mm_Mo_Smoke_white"}, 2},
  {"CUP_B_M252_USMC", {"potato_8Rnd_82mm_Mo_shells_noFrag", "8Rnd_82mm_Mo_Smoke_white"}, 2},
  {"CUP_B_M119_USMC", {"potato_CUP_30Rnd_105mmHE_M119_M_noFrag", "CUP_30Rnd_105mmSMOKE_M119_M"}, 1}
};
transportVehiclePool[] = {
  "CUP_B_nM1038_USMC_WDL",
  "CUP_B_nM1151_Unarmed_USMC_WDL",
  "CUP_B_MTVR_USMC"
};
armedSoftVehiclePool[] = {
  "CUP_B_nM1025_M2_USMC_WDL",
  "CUP_B_nM1025_M240_USMC_WDL",
  "CUP_B_nM1025_Mk19_USMC_WDL",
  "CUP_B_nM1025_SOV_M2_USMC_WDL",
  "CUP_B_nM1025_SOV_Mk19_USMC_WDL",
  "CUP_B_nM1097_AVENGER_USMC_WDL",
  "CUP_B_nM1036_TOW_USMC_WDL"
};
armoredVehiclePool[] = {
  "CUP_B_AAV_USMC_TTS",
  "CUP_B_AAV_Unarmed_USMC",
  "CUP_B_LAV25_USMC",
  "CUP_B_LAV25M240_USMC"
};
tankVehiclePool[] = {
  "CUP_B_M1A1FEP_Woodland_USMC",
  "CUP_B_M1A1EP_TUSK_Woodland_USMC",
  "CUP_B_M60A3_TTS_USMC",
  "CUP_B_M60A3_TTS_USMC",
  "CUP_B_M60A3_TTS_USMC",
  "CUP_B_M60A3_TTS_USMC"
};
heliVehiclePool[] = {
  "CUP_B_MH60L_DAP_2x_USN",
  "CUP_B_MH60L_DAP_2x_USN",
  "CUP_B_MH60L_DAP_2x_USN",
  "CUP_B_UH1Y_Gunship_Dynamic_USMC",
  "CUP_B_AH1Z_Dynamic_USMC",
  "CUP_B_AH6M_USA"
};
planeVehiclePool[] = {
  "CUP_B_AV8B_DYN_USMC",
  "CUP_B_AV8B_DYN_USMC",
  "CUP_B_AV8B_DYN_USMC",
  "CUP_B_A10_DYN_USA"
};
reinforcementTruck = "CUP_B_MTVR_USMC"
reinforcementArmed[] = {"CUP_B_LAV25M240_USMC",6};

rallyObject = "Flag_US_F";
infantryAirDropVehicle = "CUP_B_MV22_USMC";
vehicleAirDropVehicle = "CUP_B_C130J_Cargo_USMC";

class rifleman {// rifleman
  uniform[] = {CAMO_UNIFORM};
  vest[] = {CAMO_VEST};
  headgear[] = {CAMO_HEADGEAR};
  backpack[] = {CAMO_BACKPACK};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
};
class Fic_Soldier_Carbine: rifleman {// carbine-man
  weapons[] = {CARBINE};
  launchers[] = {};
  magazines[] = {CARBINE_MAG,BASE_GRENADES};
};
class ftl: rifleman {// FTL
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  launchers[] = {};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
};
class coy: sl {// CO and DC
  backpack[] = {CARRYALL};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
};
class uav: rifleman {
  backpack[] = {SIDE_UAV_BACKPACK};
  linkedItems[] += {SIDE_UAV_TERMINAL};
  items[] += {"ACE_UAVBattery:2"};
};
class ar: rifleman {// AR
  weapons[] = {AR};
  magazines[] = {AR_MAG,BASE_GRENADES};
  attachments[] = {AR_ATTACHMENTS};
  launchers[] = {};
};
class aar: rifleman {// AAR
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
  launchers[] = {};
};
class lat: Fic_Soldier_Carbine {// RAT
  backpack[] = {CARRYALL};
  launchers[] = {AT};
};
class sm: Fic_Soldier_Carbine {// Medic
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class mmgg: ar {// MMG
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,BASE_GRENADES};
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
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {CARRYALL};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
};
class msamg: Fic_Soldier_Carbine {// SAM Gunner
  items[] += {BASE_MEDICAL};
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {// SAM Spotter/Ammo Bearer
  items[] += {BASE_MEDICAL};
  launchers[] = {SAM};
};
class mtrg: Fic_Soldier_Carbine {// Mortar Gunner
  launchers[] = {"ace_csw_staticMortarCarry"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"ACE_1Rnd_82mm_Mo_HE:6"};
};
class mtrag: Fic_Spotter {// Assistant Mortar
  launchers[] = {"ace_csw_carryMortarBaseplate"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"ACE_1Rnd_82mm_Mo_Smoke:4","ACE_1Rnd_82mm_Mo_HE:2"};
};
class spotter: Fic_Spotter {// Spotter
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,BASE_GRENADES};
  items[] += {"ACE_ATragMX","ACE_Kestrel4500"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: spotter {// Sniper
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,BASE_GRENADES};
  items[] = {TOOLS,"ACE_RangeCard"};
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
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS};
  linkedItems[] = {LINKED,LEADER_LINKED};
};

class vicc: Fic_Soldier_Carbine {// Crew
  uniform[] = {CAMO_UNIFORM_VICC};
  vest[] = {CAMO_VEST_VICC};
  headgear[] = {CAMO_HEADGEAR_VICC};
  backpack[] = {CAMO_BACKPACK_VICC};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
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
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,"Laserbatteries"};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
};
class rifleman_02: rifleman {// Rifleman 2
};
class rifleman_03: rifleman {// Rifleman 3
};
class rifleman_04: rifleman {// Rifleman 4
};
class artl: sl {// Artillery Leader
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY};
};
class plm: sm {//Platoon Medic
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
  magazines[] += {MAT_MAG2};
};
class hmgl: sl {// HMG Lead
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,HMG_MAG};
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
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,HAT_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HAT_TRI_LO};
  items[] += {BASE_MEDICAL};
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
  magazines[] += {};
  launchers[] = {SAM};
};
class mtrl: sl {// Mortar Lead
  items[] += {BASE_ARTILLERY};
  magazines[] += {"ACE_1Rnd_82mm_Mo_Smoke:2","ACE_1Rnd_82mm_Mo_HE:2"};
};
class helicrew: pilot {// Aircrew
  backpackItems[] = {"Toolkit"};
};
class cc: helicrew {// Crew Chief
};
class engl: eng {// Logistics Leader
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class fallback: rifleman {}; // This means any faction member who doesn't match something will use this loadout
