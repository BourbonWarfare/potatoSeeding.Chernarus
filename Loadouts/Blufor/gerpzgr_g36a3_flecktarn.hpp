author = "AChesheireCat";
description = "German Panzergrenadier Infantry c. 2024";
#include "undef.hpp" // Reset defines
#include "..\west_gear.hpp"

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "CUP_U_B_GER_Flecktarn_1","CUP_U_B_GER_Flecktarn_2","CUP_U_B_GER_Flecktarn_3","CUP_U_B_GER_Flecktarn_4","CUP_U_B_GER_Flecktarn_5","CUP_U_B_GER_Flecktarn_6","CUP_U_B_GER_Flecktarn_7","CUP_U_B_GER_Flecktarn_8","CUP_U_B_GER_Fleck_Crye","CUP_U_B_GER_Fleck_Crye2"
#define CAMO_VEST "CUP_V_B_GER_PVest_Fleck_RFL"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "gm_ge_army_backpack_90_flk"
#define CAMO_HEADGEAR "CUP_H_OpsCore_Covered_Fleck"
#define CAMO_HEADGEAR_SPECIAL "CUP_H_Ger_Boonie_Flecktarn"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "gm_ge_army_uniform_pilot_oli","gm_ge_army_uniform_pilot_rolled_oli"
#define CAMO_VEST_PILOT "CUP_V_B_GER_Tactical_Fleck"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "CUP_H_SPH4_visor"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "CUP_U_B_GER_Fleck_Overalls_Tank"
#define CAMO_VEST_VICC "CUP_V_B_GER_Vest_1"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "cwr3_b_headgear_cvc","cwr3_b_headgear_cvc_goggles"
// Rifle
#define RIFLE "CUP_arifle_G36A3","CUP_arifle_G36A3_grip","CUP_arifle_G36A3","CUP_arifle_G36KA3","CUP_arifle_G36KA3_grip"
#define RIFLE_MAG "CUP_30Rnd_556x45_G36:7","CUP_30Rnd_TE1_Red_Tracer_556x45_G36:3"
#define RIFLE_ATTACHMENTS "CUP_optic_ZeissZPoint","CUP_acc_LLM_black"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "ptv_eot552","CUP_optic_MicroT1_low","ptv_rmr","ptv_xps3"
#define MAG_OPTICS "hlc_optic_HensoldtZO_lo_Docter","hlc_optic_HensoldtZO_Lo"
// GL Rifle
#define GLRIFLE "CUP_arifle_G36A3_AG36","CUP_arifle_G36A3_AG36","CUP_arifle_G36A3_AG36","CUP_arifle_G36K_RIS_AG36"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "CUP_1Rnd_HEDP_M203:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareGreen_F:4"
#define GLRIFLE_MAG_ILLUM "CUP_1Rnd_StarFlare_White_M203:4"
// Carbine
#define CARBINE "CUP_arifle_G36KA3","CUP_arifle_G36KA3_afg","CUP_arifle_G36KA3_grip"
#define CARBINE_MAG RIFLE_MAG
// AR - stand-in for the MG4
#define AR "CUP_lmg_minimi_railed"
#define AR_MAG "CUP_100Rnd_TE4_Red_Tracer_556x45_M249:4"
// AT
#define AT "CUP_launch_PzF3"
#define AT_MAG
// MMG
#define MMG "CUP_lmg_MG3_rail"
#define MMG_MAG "CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M:5"
// MAT
#define MAT "launch_MRAWS_green_rail_F"
#define MAT_MAG "MRAWS_HEAT55_F:2","MRAWS_HE_F:1","MAA_MAAWS_SMOKE469:1"
#define MAT_MAG2 "MRAWS_HEAT55_F:2","MRAWS_HE_F:1","MAA_MAAWS_SMOKE469:2","MAA_MAAWS_ILLUM545:2"
#define MAT_OPTIC "CUP_acc_LLM_od"
// HMG
#define HMG "ace_csw_staticM2ShieldCarry"
#define HMG_TRI_HI "ace_csw_m3CarryTripod"
#define HMG_TRI_LO "ace_csw_m3CarryTripod"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag_red:3"
// HAT
#define HAT "ace_spike_launcher"
#define HAT_TRI_HI
#define HAT_TRI_LO
#define HAT_MAG "ace_spike_lr:2"
// SAM
#define SAM "CUP_launch_FIM92Stinger"
#define SAM_MAG
// Sniper
#define SNIPER "ptv_AX_t"
#define SNIPER_MAG "ACE_10Rnd_338_300gr_HPBT_Mag:10"
#define SNIPER_OPTIC "ptv_PMII_525_des","CUP_acc_LLM","ptv_1a2"
// Spotter
#define SPOTTER CARBINE
#define SPOTTER_MAG CARBINE_MAG
#define SPOTTER_OPTIC RIFLE_ATTACHMENTS
// SMG
#define SMG "CUP_smg_MP7"
#define SMG_MAG "CUP_20Rnd_46x30_MP7:5"
// Pistol
#define PISTOL "ptv_usp45t"
#define PISTOL_MAG "ptv_12Rnd_45ACP_USP:3"
#define PISTOL_OPTIC
// Grenades
#define SIDE_CHEM_LIGHT "Chemlight_blue:2"
#define SIDE_KEY "ACE_key_west"
#define SIDE_FRAG "gm_handgrenade_frag_dm51a1:2"
#define SIDE_SMOKE "SmokeShell:2"
#define LEADER_GRENADES SIDE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define BASE_GRENADES SIDE_FRAG,SIDE_SMOKE
// Gear
#define TOOLS BASE_TOOLS,"ACE_EntrenchingTool"
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR "CUP_V_B_GER_PVest_Fleck_MG"
#define CAMO_VEST_FTL "CUP_V_B_GER_PVest_Fleck_Gren"
#define CAMO_VEST_SL "CUP_V_B_GER_PVest_Fleck_TL"
#define CAMO_VEST_MEDIC "CUP_V_B_GER_PVest_Fleck_Med"
#define CAMO_VEST_CREW CAMO_VEST_PILOT
#define CAMO_BACKPACK_LAT CAMO_BACKPACK
#define CAMO_BACKPACK_AR "CUP_B_GER_Pack_Flecktarn"
#define CAMO_BACKPACK_FTL "B_Battle_Belt_F"
#define CAMO_BACKPACK_SL CAMO_BACKPACK_FTL
#define CAMO_BACKPACK_MEDIC CARRYALL
#define MMG_ATTACHMENTS "CUP_optic_ZeissZPoint","CUP_acc_LLM_black"
#define CAMO_UNIFORM_SNIPER CAMO_UNIFORM

#define DEMO "DemoCharge_Remote_Mag:2"
#define DEMO_TOOL "ACE_Clacker"
// ------------- Vehicle Pool -------------
transportVehiclePool[] = {
  "B_T_Truck_01_transport_F",
  "B_T_Truck_01_covered_F",
  "gm_ge_army_iltis_cargo",
  "gm_ge_army_typ247_cargo",
  "gm_ge_army_typ253_cargo"
};
armedSoftVehiclePool[] = {
  "gm_ge_army_iltis_mg3",
  "gm_ge_army_u1300l_container",
  "gm_ge_army_fuchsa0_engineer"
};
armoredVehiclePool[] = {
  "gm_ge_army_m113a1g_apc",
  "gm_ge_army_marder1a2",
  "gm_ge_army_luchsa2"
};
tankVehiclePool[] = {
  "gm_ge_army_Leopard1a5",
  "gm_ge_army_Leopard1a5",
  "CUP_B_Leopard2A6_GER"
};
reinforcementTruck = "gm_ge_army_u1300l_cargo";
reinforcementArmed = "gm_ge_army_m113a1g_apc";
// ------------- End Vehicle Pool -------------

//  init = "this addGoggles selectRandom ['','','','','','','',''];"

class Box_NATO_Wps_F {
  boxCustomName = "FT Resupply Crate";
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,BASE_GRENADES,BASE_GRENADES,BASE_GRENADES,BASE_GRENADES,DEMO,DEMO_TOOL};
};
class Box_NATO_WpsLaunch_F {
  boxCustomName = "AT Launcher Crate";
  TransportWeapons[] = {AT,AT};
  TransportMagazines[] = {AT_MAG,AT_MAG,HAT_MAG};
};
class CUP_WeaponCase_Black_CUP {
  boxCustomName = "HAT Resupply Crate";
  TransportMagazines[] = {HAT_MAG};
};
class ACE_medicalSupplyCrate_advanced {
  boxCustomName = "Medical Crate";
  TransportItems[] = {MEDIC_MEDICAL};
};

class Car {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Tank {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Helicopter {
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Plane {};
class Ship_F {};

class CUP_B_Boxer_HMG_GER_WDL {
    minVehicleBoxSpace = 8;
  class Box_NATO_Wps_F: Box_NATO_Wps_F {
    boxCount = 2;
  };
  class Box_NATO_WpsLaunch_F: Box_NATO_WpsLaunch_F {
    boxCount = 1;
  };
  class ACE_medicalSupplyCrate_advanced: ACE_medicalSupplyCrate_advanced {
    boxCount = 1;
  };
  class Land_CanisterFuel_F {
    boxCount = 2;
  };
  class CUP_WeaponCase_Black_CUP: CUP_WeaponCase_Black_CUP {
    boxCount = 1;
  };
};
class CUP_B_Boxer_GMG_GER_WDL {
    minVehicleBoxSpace = 8;
  class Box_NATO_Wps_F: Box_NATO_Wps_F {
    boxCount = 2;
  };
  class Box_NATO_WpsLaunch_F: Box_NATO_WpsLaunch_F {
    boxCount = 1;
  };
  class ACE_medicalSupplyCrate_advanced: ACE_medicalSupplyCrate_advanced {
    boxCount = 1;
  };
  class Land_CanisterFuel_F {
    boxCount = 2;
  };
  class CUP_WeaponCase_Black_CUP: CUP_WeaponCase_Black_CUP {
    boxCount = 1;
  };
};
class gm_ge_army_kat1_451_reammo {
    minVehicleBoxSpace = 40;
  class Box_NATO_Wps_F: Box_NATO_Wps_F {
    boxCount = 10;
  };
  class Box_NATO_WpsLaunch_F: Box_NATO_WpsLaunch_F {
    boxCount = 4;
  };
  class ACE_medicalSupplyCrate_advanced: ACE_medicalSupplyCrate_advanced {
    boxCount = 4;
  };
  class CUP_WeaponCase_Black_CUP: CUP_WeaponCase_Black_CUP {
    boxCount = 3;
  };
};

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
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class Fic_Soldier_Carbine: rifleman {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,BASE_GRENADES};
};
class ftl: rifleman {// FTL
  vest[] = {CAMO_VEST_FTL};
  backpack[] = {CAMO_BACKPACK_FTL};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES,DEMO};
  items[] += {LEADER_TOOLS,DEMO_TOOL};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CAMO_BACKPACK_SL};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
  handgunAttachments[] = {PISTOL_OPTIC};
};
class coy: sl {// CO and DC
  backpack[] = {CARRYALL};
  items[] += {RADIO_LR};
  linkedItems[] += {SIDE_UAV_TERMINAL};
};
class uav: rifleman {
  backpack[] = {CAMO_BACKPACK};
  linkedItems[] += {SIDE_UAV_TERMINAL};
  items[] += {"ACE_UAVBattery:2"};
};
class ar: rifleman {// AR
  vest[] = {CAMO_VEST_AR};
  backpack[] = {CAMO_BACKPACK_AR};
  weapons[] = {AR};
  attachments[] = {AR_ATTACHMENTS};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
  handgunAttachments[] = {PISTOL_OPTIC};
};
class aar: rifleman {// AAR
  backpack[] = {CAMO_BACKPACK_AR};
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: rifleman {// RAT
  backpack[] = {CAMO_BACKPACK_LAT};
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class sm: rifleman {// Medic
  vest[] = {CAMO_VEST_MEDIC};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {CAMO_BACKPACK_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class mmgg: ar {// MMG
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {MMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
  items[] += {"ACE_EntrenchingTool"};
  launchers[] = {"dzn_MG_Tripod_Universal_Carry"};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {CARRYALL};
  backpackItems[] += {MMG_MAG};
  items[] += {"ACE_EntrenchingTool"};
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
  uniform[] = {CAMO_UNIFORM_SNIPER};
  weapons[] = {SPOTTER};
  backpack[] = {CARRYALL};
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_SpottingScope","ACE_Tripod"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_OPTIC};
};
class sniper: spotter {// Sniper
  uniform[] = {CAMO_UNIFORM_SNIPER};
  backpack[] = {"ace_gunbag"};
  weapons[] = {SNIPER};
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,BASE_GRENADES};
  backpackItems[] += {SPOTTER,SPOTTER_OPTIC};
  items[] = {TOOLS,"ACE_RangeCard","ACE_Tripod"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_OPTIC};
};
class pilot {// Pilot
  uniform[] = {CAMO_UNIFORM_PILOT};
  backpack[] = {CAMO_BACKPACK_PILOT};
  vest[] = {CAMO_VEST_PILOT};
  headgear[] = {CAMO_HEADGEAR_PILOT};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class vicc: Fic_Soldier_Carbine {// Crew
  uniform[] = {CAMO_UNIFORM_VICC};
  vest[] = {CAMO_VEST_VICC};
  headgear[] = {CAMO_HEADGEAR_VICC};
  backpack[] = {CAMO_BACKPACK_VICC};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
};
class vicd: vicc {// Repair Specialist
  backpackItems[] = {"Toolkit",RADIO_MR,SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class Fic_eng: Fic_Soldier_Carbine {
  backpack[] = {CARRYALL};
  items[] += {BASE_ENG,BASE_MEDICAL};
  backpackItems[] = {};
  linkedItems[] = {LINKED,LEADER_LINKED};
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
  backpackItems[] = {RADIO_MR,"Toolkit"};
};
class eng: Fic_eng {// Logistics Engineer
  backpackItems[] = {"Toolkit","ACE_EntrenchingTool","ACE_Fortify","ACE_wirecutter"};
};
class fac: coy {// FAC
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,"Laserbatteries",PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
};
class rifleman_02: rifleman {// Rifleman 2
};
class rifleman_03: rifleman {// Rifleman 3
};
class rifleman_04: rifleman {// Rifleman 2
};
class artl: sl {// Artillery Leader
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR,"acex_intelitems_notepad"};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY,"acex_intelitems_notepad"};
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
  items[] += {RADIO_MR};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
};
class mmgl: sl {// MMG Lead
  backpack[] = {CARRYALL};
  magazines[] += {MMG_MAG};
  items[] += {"ACE_EntrenchingTool"};
};
class matl: sl {// MAT Lead
  backpack[] = {CARRYALL};
  magazines[] += {MAT_MAG};
};
class hmgl: sl {// HMG Lead
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HMG_MAG};
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
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HAT_MAG};
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
  magazines[] += {SAM_MAG};
};
class mtrl: sl {// Mortar Lead
  items[] += {BASE_ARTILLERY};
};
class helicrew: pilot {// Aircrew
  vest[] = {CAMO_VEST_CREW};
  backpackItems[] = {"Toolkit",SIDE_KEY};
};
class cc: helicrew {// Crew Chief
  vest[] = {CAMO_VEST_CREW};
  backpackItems[] += {RADIO_MR};
};
class engl: eng {// Logistics Leader
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
  backpackItems[] += {RADIO_MR};
};
class fallback: rifleman {}; // This means any faction member who doesn't match something will use this loadout

//SF Classes

#define SF_UNIFORM
#define SF_VEST
#define SF_VEST_AR
#define SF_VEST_FTL
#define SF_VEST_SL
#define SF_VEST_SNIPER
#define SF_HEADGEAR
#define SF_BACKPACK
#define SF_CARRYALL

#define SF_RIFLE
#define SF_RIFLE_MAG
#define SF_RIFLE_ATTACHMENTS

#define SF_CARBINE SF_RIFLE
#define SF_CARBINE_MAG SF_RIFLE_MAG
#define SF_RIFLE_ATTACHMENTS SF_RIFLE_ATTACHMENTS

#define SF_GLRIFLE
#define SF_GLRIFLE_MAG
#define SF_GLRIFLE_MAG_HE
#define SF_GLRIFLE_MAG_SMOKE
#define SF_GLRIFLE_MAG_ILLUM

#define SF_AR
#define SF_AR_MAG
#define SF_AR_ATTACHMENTS

#define SF_SNIPER
#define SF_SNIPER_MAG
#define SF_SNIPER_ATTACHMENTS

#define SF_AT
#define SF_AT_MAG
#define SF_AT_ATTACHMENTS

#define SF_PISTOL
#define SF_PISTOL_MAG
#define SF_PISTOL_ATTACHMENTS

class sf_rifleman {// sf rifleman
  uniform[] = {SF_UNIFORM};
  vest[] = {SF_VEST};
  headgear[] = {SF_HEADGEAR};
  backpack[] = {SF_BACKPACK};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {SF_RIFLE};
  magazines[] = {SF_RIFLE_MAG,BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {SF_RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class sf_rifleman_02: sf_rifleman {// sf rifleman 02
  vest[] = {SF_VEST_SNIPER};
  weapons[] = {SF_SNIPER};
  magazines[] = {SF_SNIPER_MAG,BASE_GRENADES};
  linkedItems[] = {LINKED};
  attachments[] = {SF_SNIPER_ATTACHMENTS};
};
class sf_ar: sf_rifleman {// AR
  vest[] = {SF_VEST_AR};
  weapons[] = {SF_AR};
  magazines[] = {SF_AR_MAG,SF_PISTOL_MAG,BASE_GRENADES};
  handguns[] = {SF_PISTOL};
  handgunAttachments[] = {SF_PISTOL_ATTACHMENTS};
};
class sf_aar: sf_rifleman {// AAR
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,BASE_GRENADES};
  backpackItems[] += {SF_AR_MAG};
  linkedItems[] += {BINOS};
};
class sf_lat: sf_rifleman {// RAT
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,SF_AT_MAG,BASE_GRENADES};
  launchers[] = {SF_AT};
  secondaryAttachments[] = {SF_AT_ATTACHMENTS};
};
class sf_ftl: sf_rifleman {// FTL
  vest[] = {SF_VEST_FTL};
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_GLRIFLE};
  magazines[] = {SF_GLRIFLE_MAG,SF_GLRIFLE_MAG_HE,SF_GLRIFLE_MAG_SMOKE,SF_GLRIFLE_MAG_ILLUM,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sf_sl: sf_ftl {// SL
  vest[] = {SF_VEST_SL};
  handguns[] = {SF_PISTOL};
  magazines[] += {SF_PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
  handgunAttachments[] = {SF_PISTOL_ATTACHMENTS};
};
class sf_sm: sf_rifleman {// Medic
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {SF_CARRYALL};
  backpackItems[] = {MEDIC_MEDICAL};
};