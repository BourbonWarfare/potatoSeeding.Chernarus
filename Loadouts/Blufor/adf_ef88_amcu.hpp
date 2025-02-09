author = "AChesheireCat";
description = "Australian Defense Force c. 2024 - requires the Rhodesys Royal Australian Regiment mod.";
#include "undef.hpp" // Reset defines

// rifleman_03 is a Marksman

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "Rho_AMCU_Combat_Rolled"
#define CAMO_VEST "rho_rar_vest_rifle","rho_rar_vest_rifle2"
#define CAMO_BACKPACK "B_Battle_Belt_F","B_tweed_pack_wasser_molle_od3","B_tweed_pack_wasser_molle_od3_alt"
#define CARRYALL "CUP_B_Motherlode_MTP"
#define CAMO_HEADGEAR "rho_rar_tw_exfil_comtac_ir_bat","rho_rar_tw_exfil_ir_bat"
#define CAMO_HEADGEAR_SPECIAL "acp_AUS_AUSCAM_core_lite_H_Booniehat_AUS_AUSCAM"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "CUP_U_B_USMC_PilotOverall"
#define CAMO_VEST_PILOT "Aircrew_vest_2_NH"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "H_CrewHelmetHeli_B"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC CAMO_UNIFORM
#define CAMO_VEST_VICC CAMO_VEST
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "CUP_H_CVC"
// Rifle
#define RIFLE "arifle_rho_ef88_blk_F","arifle_rho_ef88_cam1_F","arifle_rho_ef88_cam2_F","arifle_rho_ef88_cam3_F","arifle_rho_ef88_cam4_F","arifle_rho_ef88_cam5_F","arifle_rho_ef88_cam6_F","arifle_rho_ef88_cam7_F","arifle_rho_ef88_cam8_F","arifle_rho_ef88_cam9_F","arifle_rho_ef88_cam10_F"
#define RIFLE_MAG "CUP_30Rnd_556x45_AUG:7","CUP_30Rnd_TE1_Red_Tracer_556x45_AUG:3"
#define RIFLE_ATTACHMENTS "rho_rar_peq16b_wml_ir","CUP_optic_Eotech553_Black"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "ptv_xps3","ptv_compm4s","ptv_rmr","ptv_eot552"
#define MAG_OPTICS "CUP_optic_Elcan_SpecterDR_KF_black","CUP_optic_Elcan_SpecterDR_KF_RMR_black"
// GL Rifle
#define GLRIFLE "arifle_rho_ef88_GL_blk_F","arifle_rho_ef88_GL_cam1_F","arifle_rho_ef88_GL_cam2_F","arifle_rho_ef88_GL_cam3_F","arifle_rho_ef88_GL_cam4_F","arifle_rho_ef88_GL_cam5_F","arifle_rho_ef88_GL_cam6_F","arifle_rho_ef88_GL_cam7_F","arifle_rho_ef88_GL_cam8_F","arifle_rho_ef88_GL_cam9_F","arifle_rho_ef88_GL_cam10_F"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "potato_1Rnd_40mm_M433_HEDP:3","CUP_1Rnd_HE_M203:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareGreen_F:4"
#define GLRIFLE_MAG_ILLUM "CUP_1Rnd_StarFlare_White_M203:4"
// Carbine
#define CARBINE RIFLE
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_lmg_minimi_railed"
#define AR_MAG "CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch:2"
// AT
#define AT "ptv_m72a7"
#define AT_MAG
// MMG
#define MMG "CUP_lmg_FNMAG_RIS"
#define MMG_MAG "hlc_200Rnd_762x51_Barrier_M60E4:3"
#define MMG_MAG2 "hlc_200Rnd_762x51_Barrier_M60E4:2"
// MAT
#define MAT "launch_MRAWS_green_rail_F"
#define MAT_MAG "MRAWS_HEAT55_F:2","MRAWS_HE_F:1","MAA_MAAWS_SMOKE469:2","MAA_MAAWS_ILLUM545:1"
#define MAT_MAG2 "MRAWS_HEAT55_F:2","MRAWS_HE_F:1","MAA_MAAWS_SMOKE469:1","MAA_MAAWS_ILLUM545:2"
#define MAT_MAG3 "MRAWS_HEAT55_F:1","MRAWS_HE_F:1"
#define MAT_OPTIC
// HMG
#define HMG "ace_csw_staticM2ShieldCarry"
#define HMG_TRI_HI "ace_csw_m3CarryTripod"
#define HMG_TRI_LO "ace_csw_m3CarryTripod"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag_red:2"
// HAT
#define HAT "CUP_launch_Javelin"
#define HAT_TRI_HI
#define HAT_TRI_LO
#define HAT_MAG "CUP_Javelin_M:1"
// SAM - RBS-70
#define SAM
#define SAM_MAG
// Sniper
#define SNIPER "ptv_AX_t"
#define SNIPER_MAG "ACE_10Rnd_338_300gr_HPBT_Mag:5"
#define SNIPER_OPTIC "ACE_DBAL_A3_Green","ptv_PMII_525_des","CUP_bipod_Harris_1A2_L_BLK"
// Spotter
#define SPOTTER RIFLE
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_OPTIC RIFLE_ATTACHMENTS
// SMG
#define SMG RIFLE
#define SMG_MAG "CUP_30Rnd_TE1_Red_Tracer_556x45_AUG:5"
// Pistol
#define PISTOL "ptv_p320"
#define PISTOL_MAG "ptv_15Rnd_9mm_P320:3"
#define PISTOL_OPTIC "hlc_acc_TLR1","optic_MRD"
// Grenades
#define LEADER_GRENADES SIDE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define SIDE_FRAG "rho_rar_handgrenade_f1:2"
#define SIDE_SMOKE "ptv_mag_smoke01:2"
#define BASE_GRENADES SIDE_FRAG,SIDE_SMOKE
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR "rho_rar_vest_lmg","rho_rar_vest_mg"
#define CAMO_VEST_FTL "rho_rar_vest_grenadier"
#define CAMO_VEST_SL "rho_rar_vest_secco"
#define CAMO_VEST_MEDIC "rho_rar_vest_medic"
#define CAMO_VEST_CC CAMO_VEST_PILOT
#define CAMO_VEST_JFO "rho_rar_vest_fo"
#define CAMO_VEST_PLT "rho_rar_vest_pl"
#define CAMO_VEST_PLM "rho_rar_vest_pl_medic"
#define CAMO_VEST_ENG "rho_rar_vest_engi"
#define CAMO_BACKPACK_LAT CAMO_BACKPACK
#define CAMO_BACKPACK_AR "CUP_B_US_IIID_OEFCP"
#define CAMO_BACKPACK_FTL "CUP_B_US_Assault_OEFCP"
#define CAMO_BACKPACK_SL CAMO_BACKPACK_FTL
#define CAMO_BACKPACK_MEDIC "ptv_DeltaPack_Rgr"
#define MMG_ATTACHMENTS "CUP_optic_ElcanM145"
#define CAMO_UNIFORM_SNIPER CAMO_UNIFORM

#define DMR "CUP_srifle_m110_kac"
#define DMR_MAG "CUP_20Rnd_762x51_B_M110:10"
#define DMR_ATTACHMENTS "ptv_PMII_des_sunshade","CUP_muzzle_snds_M110","CUP_bipod_Harris_1A2_L_BLK"

#define ETOOL "ACE_EntrenchingTool"
#define NVG "CUP_NVG_PVS14_WP"
#define DEMO "DemoCharge_Remote_Mag"
#define DEMOTOOL "ACE_Clacker"

//  init = "this addGoggles selectRandom ['','','','','','','',''];"

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
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
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
  vest[] = {CAMO_VEST_PLT};
  backpack[] = {CARRYALL};
  items[] += {RADIO_LR};
};
class uav: rifleman {
  backpack[] = {SIDE_UAV_BACKPACK};
  linkedItems[] += {SIDE_UAV_TERMINAL};
  items[] += {"ACE_UAVBattery:2"};
};
class ar: rifleman {// AR
  vest[] = {CAMO_VEST_AR};
  backpack[] = {CAMO_BACKPACK_AR};
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
  handgunAttachments[] = {PISTOL_OPTIC};
};
class aar: rifleman {// AAR
  backpack[] = {CAMO_BACKPACK_AR};
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: Fic_Soldier_Carbine {// RAT
  backpack[] = {CAMO_BACKPACK_LAT};
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class sm: Fic_Soldier_Carbine {// Medic
  vest[] = {CAMO_VEST_MEDIC};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {CAMO_BACKPACK_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL,"WBK_HeadLampItem"};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class mmgg: ar {// MMG
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {MMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
  launchers[] = {"dzn_MG_Tripod_Universal_Carry"};
  items[] += {ETOOL};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {CARRYALL};
  backpackItems[] += {MMG_MAG};
  items[] += {ETOOL};
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
  magazines[] += {MAT_MAG2};
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
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
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
  items[] += {BASE_ENG,"WBK_HeadLampItem",BASE_MEDICAL};
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
  vest[] = {CAMO_VEST_ENG};
  backpackItems[] = {"Toolkit","ACE_EntrenchingTool","ACE_Fortify","ACE_wirecutter"};
};
class fac: coy {// FAC
  vest[] = {CAMO_VEST_JFO};
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,"Laserbatteries",PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
};
class rifleman_02: rifleman {// Rifleman 2
};
class rifleman_03: rifleman {// Rifleman 3 - Marksman
  weapons[] = {DMR};
  handguns[] = {PISTOL};
  magazines[] = {DMR_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {DMR_ATTACHMENTS};
  handgunAttachments[] = {PISTOL_OPTIC};
  items[] = {"ACE_RangeCard","ACE_ATragMX","ACE_Kestrel4500"};
};
class rifleman_04: rifleman {// Rifleman 2
};
class artl: sl {// Artillery Leader
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY};
};
class plm: sm {//Platoon Medic
  vest[] = {CAMO_VEST_PLM};
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
  magazines[] += {MMG_MAG2};
  items[] += {"ACE_EntrenchingTool"};
};
class matl: sl {// MAT Lead
  backpack[] = {CARRYALL};
  magazines[] += {MAT_MAG3};
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
  vest[] = {CAMO_VEST_CC};
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