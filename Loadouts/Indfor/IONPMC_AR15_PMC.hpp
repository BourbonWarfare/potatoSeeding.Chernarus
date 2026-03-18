author = "AChesheireCat";
description = "Armaverse - ION PMC c.2020 (Last updated: 2025/06/27)";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "CUP_I_B_PMC_Unit_36","CUP_I_B_PMC_Unit_38","CUP_I_B_PMC_Unit_36","CUP_I_B_PMC_Unit_38","CUP_I_B_PMC_Unit_37","CUP_I_B_PMC_Unit_41","CUP_I_B_PMC_Unit_43","CUP_I_B_PMC_Unit_41","CUP_I_B_PMC_Unit_43","U_BG_Guerilla2_1","U_I_G_Story_Protagonist_F","U_BG_Guerilla2_1","U_I_G_Story_Protagonist_F","CUP_I_B_PMC_Unit_19","CUP_I_B_PMC_Unit_15","U_I_C_Soldier_Bandit_3_F","CUP_I_B_PMC_Unit_19","CUP_I_B_PMC_Unit_15","cwr3_i_uniform_og107_woodland","U_I_C_Soldier_Bandit_3_F"
#define CAMO_VEST "acp_Solid_Black_modern_west_lite_V_Crye_AVS_1_Solid_Black","acp_Solid_Black_modern_west_lite_V_Crye_AVS_1_1_Solid_Black","acp_Solid_Black_modern_west_lite_V_Crye_AVS_1_2_Solid_Black","acp_Solid_Black_modern_west_lite_V_Crye_AVS_1_3_Solid_Black"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "cwr3_b_backpack_alice_black"
#define CAMO_HEADGEAR "acp_Solid_Black_modern_west_lite_H_HelmetFASTMT_Headset_Solid_Black_F","acp_Solid_Black_core_lite_H_HelmetB_light_Solid_Black","CUP_H_OpsCore_Black","CUP_H_OpsCore_Black_SF","CUP_H_USArmy_Helmet_ECH2_Black","CUP_H_USArmy_Helmet_ECH1_Black","acp_Solid_Black_modern_west_lite_H_HelmetFASTMT_Solid_Black_F","acp_Solid_Black_contact_lite_H_HelmetIA_Solid_Black","acp_Solid_Black_modern_east_lite_H_HelmetSpecter_headset_Solid_Black_F"
#define CAMO_HEADGEAR_SPECIAL "H_tweed_Hat_fleece","H_tweed_Hat_fleece","H_tweed_Hat_fleece","H_Cap_blk_ION","H_Bandanna_gry","CUP_H_PMC_Cap_Back_EP_Grey","CUP_H_PMC_Cap_Grey","CUP_H_PMC_Cap_Back_EP_Tan","H_Cap_blk_CMMG","H_Cap_khaki_specops_UK","H_Cap_usblack"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT CAMO_UNIFORM
#define CAMO_VEST_PILOT "V_TacVestIR_blk"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "CUP_H_SPH4_grey_visor"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC CAMO_UNIFORM
#define CAMO_VEST_VICC "acp_Solid_Black_contact_lite_V_CarrierRigKBT_01_Solid_Black_F"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "CUP_H_PMC_EP_Headset"
// Rifle
#define RIFLE "CUP_arifle_M4A1_MOE_black","CUP_arifle_SBR_od","CUP_arifle_SBR_black","CUP_arifle_M4A1_SOMMOD_black","CUP_arifle_M4A1_SOMMOD_Grip_black","CUP_arifle_Mk16_STD_AFG","CUP_arifle_Mk16_STD_FG_black","CUP_arifle_mk18_black","CUP_arifle_ACR_wdl_556","CUP_arifle_ACRC_wdl_556","CUP_CZ_BREN2_556_14","CUP_arifle_HK416_Black","CUP_arifle_HK416_CQB_Black","CUP_arifle_M16A4_Base","CUP_arifle_M16A4_Grip","CUP_arifle_M4A1","CUP_arifle_M4A3_black","CUP_arifle_M4A1_black","CUP_srifle_Mk12SPR"
#define RIFLE_MAG "hlc_30rnd_556x45_M_L5:7","hlc_30rnd_556x45_t_L5:3"
#define RIFLE_ATTACHMENTS "potato_strongerFlashlights_acc_cup_Flashlight_05","ptv_xps3","rhs_acc_dtk3","rhs_acc_grip_ffg2"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "ptv_compm5","ptv_compm4s","CUP_optic_VortexRazor_UH1_Black","CUP_optic_Eotech553_Black"
#define MAG_OPTICS "ptv_xps3xmag","CUP_optic_ACOG","CUP_optic_Elcan_SpecterDR_black","ptv_cm4s3xmag","ptv_cm53xmag"
// GL Rifle
#define GLRIFLE 
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
#define GLRIFLE_MAG_ILLUM "CUP_1Rnd_StarFlare_White_M203:4"
// Carbine
#define CARBINE "rhs_weap_ak74m_zenitco01_b33","rhs_weap_ak105_zenitco01_b33"
#define CARBINE_MAG "CUP_30Rnd_545x39_AK12_M:7","CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M:3"
// AR
#define AR "potato_lmg_LAMG_black"
#define AR_MAG "CUP_100Rnd_TE4_Red_Tracer_556x45_M249:4"
#define AR_ATTACHMENTS "CUP_optic_MicroT1_low","potato_strongerFlashlights_acc_cup_Flashlight_05","CUP_bipod_VLTOR_Modpod_black"
// Light AR
#define LAR "potato_fauxC7_c7a2","CUP_arifle_M4A1_SOMMOD_Grip_black"
#define LAR_MAG "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15:4"
#define LAR_ATTACHMENTS "ptv_t1","potato_strongerFlashlights_acc_cup_Flashlight_05","CUP_bipod_Harris_1A2_L_BLK"
// AT
#define AT "ptv_m72a7"
#define AT_MAG 
// MMG
#define MMG "CUP_lmg_M240_B"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M:6"
// MAT
#define MAT "CUP_launch_MAAWS"
#define MAT_MAG "za_enhancedmaawsCUP_mag_HEAT551:2","za_enhancedmaawsCUP_mag_HE:2"
#define MAT_MAG2 "za_enhancedmaawsCUP_mag_HEAT551:1","za_enhancedmaawsCUP_mag_ASM509:2","za_enhancedmaawsCUP_mag_ILLUM:1"
#define MAT_MAG3 "za_enhancedmaawsCUP_mag_HEAT551:2","za_enhancedmaawsCUP_mag_HE:2","za_enhancedmaawsCUP_mag_ILLUM:1"
#define MAT_OPTIC "CUP_optic_MAAWS_Scope"
// HMG
#define HMG "ace_csw_staticM2ShieldCarry"
#define HMG_TRI_HI "ace_csw_m3CarryTripod"
#define HMG_TRI_LO "ace_csw_m3CarryTripod"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag_red:3"
// HAT
#define HAT "CUP_TOW_carry"
#define HAT_TRI_HI "ace_csw_m220CarryTripod"
#define HAT_TRI_LO "ace_csw_m220CarryTripod"
#define HAT_MAG "CUP_compats_TOW_M"
// SAM - Ideally Use Emplacements
#define SAM "CUP_launch_FIM92Stinger"
#define SAM_MAG 
// Sniper
#define SNIPER "ptv_AX_b"
#define SNIPER_MAG "ACE_10Rnd_338_300gr_HPBT_Mag:10"
#define SNIPER_ATTACHMENTS "optic_LRPS","ACE_DBAL_A3_Green","CUP_bipod_Harris_1A2_L_BLK"
/* // Anti-Material Rifle
#define SNIPER "ptv_M82a1"
#define SNIPER_MAG "ACE_10Rnd_127x99_API_Mag:5"
#define SNIPER_ATTACHMENTS "CUP_optic_LeupoldM3LR"
*/
// Spotter
#define SPOTTER RIFLE
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS RIFLE_ATTACHMENTS
// SMG
#define SMG "CUP_smg_MP5A5_Rail","CUP_smg_MP5A5_Rail_AFG","CUP_smg_MP5A5_Rail_VFG"
#define SMG_MAG "CUP_30Rnd_Red_Tracer_9x19_MP5:5"
// GL Pistol
#define GLPISTOL "ptv_hk69"
// Pistol
#define PISTOL "ptv_p80"
#define PISTOL_MAG "ptv_17Rnd_9mm_G17:3"
#define PISTOL_ATTACHMENTS "ptv_x300"
// Grenades
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED



// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR "acp_Solid_Black_modern_west_lite_V_Crye_AVS_2_Solid_Black"
#define CAMO_VEST_FTL CAMO_VEST
#define CAMO_VEST_SL CAMO_VEST
#define CAMO_VEST_MEDIC CAMO_VEST
#define CAMO_VEST_CC "V_TacVestIR_blk"
#define CAMO_BACKPACK_LAT CAMO_BACKPACK
#define CAMO_BACKPACK_AR "B_CivilianBackpack_01_Everyday_Black_F"
#define CAMO_BACKPACK_FTL "acp_Solid_Black_core_lite_B_AssaultPack_Solid_Black"
#define CAMO_BACKPACK_SL "acp_Solid_Black_core_lite_B_TacticalPack_Solid_Black"
#define CAMO_BACKPACK_MEDIC "ptv_DeltaPack_Blk"
#define MMG_ATTACHMENTS 
#define CAMO_UNIFORM_SNIPER CAMO_UNIFORM

#define ETOOL "ACE_EntrenchingTool"
#define NVG "CUP_NVG_PVS14_WP"
#define DEMO "DemoCharge_Remote_Mag"
#define DEMOTOOL "ACE_Clacker"

#define DMR "srifle_EBR_F"
#define DMR_MAG "ACE_20Rnd_762x51_M118LR_Mag:10"
#define DMR_ATTACHMENTS "CUP_optic_LeupoldMk4","ACE_DBAL_A3_Green","CUP_bipod_Harris_1A2_L_BLK"

//  init = "this addGoggles selectRandom ['','','','','','','',''];"

class Car {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,LAR_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,BASE_GRENADES,BASE_GRENADES};
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
  headgear[] = {CAMO_HEADGEAR_SPECIAL};
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
  weapons[] = {RIFLE};
  handguns[] = {GLPISTOL};
  magazines[] = {RIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
  opticChoices[] = {ALT_OPTICS,MAG_OPTICS};
};
class sl: ftl {// SL
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CAMO_BACKPACK_SL};
  handguns[] = {GLPISTOL};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class coy: sl {// CO and DC
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
  handgunAttachments[] = {PISTOL_ATTACHMENTS};
  attachments[] = {AR_ATTACHMENTS};
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
  backpack[] = {"ptv_M3_OD"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {"ptv_M3_OD"};
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
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: spotter {// Sniper
  uniform[] = {CAMO_UNIFORM_SNIPER};
  backpack[] = {"ace_gunbag"};
  weapons[] = {SNIPER};
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,BASE_GRENADES};
  backpackItems[] += {SPOTTER,SPOTTER_ATTACHMENTS};
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
  backpackItems[] = {"Toolkit","ACE_EntrenchingTool","ACE_Fortify","ACE_wirecutter"};
};
class fac: coy {// FAC
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,"Laserbatteries"};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
  backpack[] = {"B_RadioBag_01_black_F"};
};
class rifleman_02: Fic_Soldier_Carbine {// Rifleman 2
};
class rifleman_03: ar {// Rifleman 3 - Light AR
  backpack[] = {CAMO_BACKPACK_AR};
  weapons[] = {LAR};
  magazines[] = {LAR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
  handgunAttachments[] = {PISTOL_ATTACHMENTS};
  attachments[] = {LAR_ATTACHMENTS};
};
class rifleman_04: rifleman {// Rifleman 4 - Marksman
  weapons[] = {DMR};
  magazines[] = {DMR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
  handgunAttachments[] = {PISTOL_ATTACHMENTS};
  attachments[] = {DMR_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS,MAG_OPTICS};
};
class artl: sl {// Artillery Leader
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR};
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
  items[] += {RADIO_MR};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
};
class mmgl: rifleman {// MMG Lead
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CARRYALL};
  weapons[] = {RIFLE};
  handguns[] = {PISTOL};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,MMG_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {LEADER_TOOLS,RADIO_MR,ETOOL};
  handgunAttachments[] = {PISTOL_ATTACHMENTS};
};
class matl: sl {// MAT Lead
  vest[] = {CAMO_VEST_SL};
  backpack[] = {"ptv_M3_OD"};
  weapons[] = {RIFLE};
  handguns[] = {PISTOL};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,MAT_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {LEADER_TOOLS,RADIO_MR,ETOOL};
  handgunAttachments[] = {PISTOL_ATTACHMENTS};
};
class hmgl: sl {// HMG Lead
  weapons[] = {RIFLE};
  handguns[] = {PISTOL};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HMG_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HMG_TRI_LO};
  items[] += {BASE_BALLISTICS};
  handgunAttachments[] = {PISTOL_ATTACHMENTS};
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
  handguns[] = {PISTOL};
  backpackItems[] = {};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HAT_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HAT_TRI_LO};
  items[] += {BASE_MEDICAL};
  handgunAttachments[] = {PISTOL_ATTACHMENTS};
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
  vest[] = {CAMO_VEST_CC};
  backpackItems[] += {RADIO_MR};
};
class engl: eng {// Logistics Leader
  weapons[] = {RIFLE};
  handguns[] = {GLPISTOL};
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