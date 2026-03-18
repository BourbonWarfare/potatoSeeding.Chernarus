author = "Lambda.Tiger";
description = "Chernarus Defense Forces (AK-74N, , AI)";
#include "../undef.hpp"
#include "../undef_side_gear.hpp"
#define SIDE_BASE_GRENADES "gm_handgrenade_frag_rgd5"
#define SIDE_LEADER_GRENADES SIDE_BASE_GRENADES,"rhs_mag_rdg2_white","SmokeShellGreen","CUP_1RND_SMOKE_GP25_M"
#define SIDE_FAC_GRENADES "rhs_mag_rdg2_white:2","gm_handgrenade_frag_rgd5:2","1Rnd_SmokeBlue_Grenade_shell:4","1Rnd_SmokeYellow_Grenade_shell:3","1Rnd_SmokeOrange_Grenade_shell:3","1Rnd_SmokeGreen_Grenade_shell:5"
#define SIDE_MEDIC_GRENADES "rhs_mag_rdg2_white:2"
#define SIDE_CREW_GRENADES "rhs_mag_rdg2_white"
#define SIDE_BINOS "gm_df7x40_blk"
#define CAMO_UNIFORM "CUP_U_B_CDF_MNT_1"
#define CAMO_VEST "CUP_V_CDF_6B3_1_MNT","CUP_V_CDF_6B3_2_MNT"
#define CAMO_VEST_AR "CUP_V_CDF_6B3_3_MNT"
#define CAMO_VEST_FTL "CUP_V_CDF_6B3_4_MNT"
#define CAMO_VEST_SL "CUP_V_CDF_6B3_5_MNT"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CAMO_HEADGEAR "CUP_H_CDF_H_PASGT_MNT"
#define CAMO_HEADGEAR_SPECIAL "CUP_H_CDF_H_PASGT_MNT"
#define CARRYALL CAMO_BACKPACK
#define CARRYALL_RAT "CUP_B_RPGPack_Khaki"
#define CARRYALL_AR "CUP_B_USMC_AssaultPack"
#define CARRYALL_FTL "B_Battle_Belt_XL_F"
#define CARRYALL_SL "B_Kitbag_rgr"
#define CARRYALL_MAT "gm_pl_army_backpack_at_80_gry"
#define CARRYALL_MMG "gm_ge_army_backpack_90_oli"
#define CARRYALL_HAT "gm_ge_army_backpack_90_oli"
#define CARRYALL_MEDIC "cwr3_o_backpack_rd54_medic_empty"
#define CAMO_UNIFORM_PILOT "gm_ge_uniform_pilot_commando_oli"
#define CAMO_VEST_PILOT "gm_ge_vest_90_crew_flk"
#define CAMO_BACKPACK_PILOT CAMO_BACKPACK
#define CAMO_HEADGEAR_PILOT "gm_gc_headgear_zsh3_blu"
#define CAMO_UNIFORM_VICC "gmx_cdf2022_army_uniform_soldier_oli"
#define CAMO_VEST_VICC "cwr3_o_vest_beltkit_ak74"
#define CAMO_BACKPACK_VICC CAMO_BACKPACK
#define CAMO_HEADGEAR_VICC "gm_gc_army_headgear_crewhat_80_blk"
#define RIFLE "gm_ak74n_wud"
#define RIFLE_MAG "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M:3""CUP_30Rnd_545x39_AK_M:2"
#define RIFLE_ATTACHMENTS
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "CUP_optic_Aimpoint_5000","CUP_optic_CompM4","CUP_optic_MicroT1","CUP_optic_MicroT1_low","CUP_optic_AC11704_Black","CUP_optic_HoloBlack","CUP_optic_Eotech553_Black","CUP_optic_CompM2_Black","ptv_xps3","CUP_optic_VortexRazor_UH1_Black"
#define GLRIFLE "CUP_arifle_AK74_GL"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "CUP_1RND_SMOKE_GP25_M:2","CUP_1Rnd_SmokeRed_GP25_M"
#define GLRIFLE_MAG_HE "CUP_1Rnd_HE_GP25_M"
#define GLRIFLE_MAG_FLARE "CUP_FlareWhite_GP25_M:4"
#define CARBINE "CUP_arifle_AK105_railed"
#define CARBINE_MAG RIFLE_MAG
#define AR "gm_rpk74n_wud"
#define AR_MAG "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M:4"
#define LAT "rhs_weap_rpg26"
#define AT "rhs_weap_rpg26"
#define AT_MAG
#define MMG "gm_hmgpkm_prp"
#define MMG_MAG "gm_100Rnd_762x54mmR_B_T_7t2_pk_grn:3"
#define MAT "gm_rpg7_wud"
#define MAT_MAG "gm_1Rnd_40mm_heat_pg7vl_rpg7:2","gm_1Rnd_40mm_heat_pg7v_rpg7:2"
#define MAT_MAG3 "gm_1Rnd_40mm_heat_pg7vl_rpg7","gm_1Rnd_40mm_heat_pg7v_rpg7:2"
#define MAT_OPTIC "gm_pgo7v_blk"
#define HMG "CUP_KORD_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripod"
#define HMG_MAG "ace_csw_50Rnd_127x108_mag"
#define HAT "potato_cswCompatCUP_patchGM_gm_fagot_backpack"
#define HAT_TRI_HI
#define HAT_TRI_LO
#define HAT_MAG "gm_1Rnd_fagot_heat_9m111_csw"
#define SAM "gm_9k32m_oli"
#define SAM_MAG "gm_1Rnd_72mm_he_9m32m:2"
#define SNIPER "CUP_srifle_AWM_blk"
#define SNIPER_MAG "CUP_5Rnd_86x70_L115A1:20"
#define SNIPER_ATTACHMENTS "CUP_optic_LeupoldM3LR","CUP_bipod_Harris_1A2_L_BLK"
#define SPOTTER "CUP_arifle_HK417_20"
#define SPOTTER_MAG "CUP_20Rnd_762x51_HK417:15"
#define SPOTTER_ATTACHMENTS "CUP_optic_Elcan_SpecterDR_RMR_black","CUP_bipod_Harris_1A2_L_BLK"
#define SMG "CUP_arifle_AKS74U"
#define SMG_MAG "CUP_30Rnd_545x39_AK74_plum_M:3"
#define SMG_MAG_FULL "CUP_30Rnd_545x39_AK74_plum_M:7"
#define TOOLS "rhs_mag_rdg2_white"
#define LEADER_TOOLS TOOLS
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LINKED

// ------------- Vehicle Pool -------------
rallyObject = "FlagCarrierCDF_EP1";
artilleryArray[] = {
  {"CUP_O_2b14_82mm_RUS_M_Summer", {"potato_8Rnd_82mm_Mo_shells_noFrag", "8Rnd_82mm_Mo_Smoke_white"}, 2},
  {"CUP_O_D30_RUS_M_Summer", {"potato_CUP_30Rnd_122mmHE_D30_M_noFrag", "CUP_30Rnd_122mmSMOKE_D30_M"}, 1}
};
transportVehiclePool[] = {
  "CUP_B_Kamaz_CDF",
  "CUP_B_UAZ_Unarmed_CDF",
  "CUP_B_Ural_Open_CDF"
};
armedSoftVehiclePool[] = {
  "CUP_B_UAZ_MG_CDF",
  "CUP_B_UAZ_AGS30_CDF"
};
armoredVehiclePool[] = {
  "CUP_B_BTR80_CDF",
  "CUP_B_BTR80_CDF",
  "CUP_B_BRDM2_CDF",
  "CUP_B_BRDM2_CDF",
  "CUP_B_BRDM2_CDF"
};
tankVehiclePool[] = {
  "CUP_B_BTR80A_CDF",
  "CUP_B_BMP2_CDF",
  "CUP_B_T72_CDF"
};
heliVehiclePool[] = {
  "CUP_B_Mi171Sh_CDF",
  "gmx_cdf2022_mi2us_wdl",
  "gmx_cdf2022_mi2us_wdl",
  "gmx_cdf2022_mi2us_wdl"
};
planeVehiclePool[] = {
  "CUP_B_Su25_Dyn_CDF",
  "gmx_cdf2022_l39_dynamicLoadout_wdl"
};
reinforcementTruck = "CUP_B_Ural_CDF";
reinforcementArmed = "CUP_B_BTR80_CDF";
// ------------- End Vehicle Pool -------------

vehicleAirDropVehicle = "CUP_B_Mi17_VIV_CDF";
infAirDropVehicle = "CUP_B_Mi17_medevac_CDF";

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
  magazines[] = {RIFLE_MAG,SIDE_BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
  launchers[] = {};
};
class rifleman_02: rifleman {};
class Fic_Soldier_Carbine: rifleman {
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,SIDE_BASE_GRENADES};
  launchers[] = {};
};
class ftl: rifleman {
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,SIDE_LEADER_GRENADES};
  vest[] = {CAMO_VEST_FTL};
  items[] += {LEADER_TOOLS};
  backpack[] = {CARRYALL_FTL};
  launchers[] = {};
  linkedItems[] += {LEADER_LINKED,SIDE_BINOS};
};
class sl: ftl {
  handguns[] = {};
  magazines[] += {};
  vest[] = {CAMO_VEST_SL};
  linkedItems[] = {LINKED,LEADER_LINKED};
  backpack[] = {CARRYALL_SL};
};
class coy: sl {
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,SIDE_LEADER_GRENADES};
};
class ar: rifleman {
  weapons[] = {AR};
  vest[] = {CAMO_VEST_AR};
  backpack[] = {CARRYALL_AR};
  launchers[] = {};
  magazines[] = {AR_MAG,SIDE_BASE_GRENADES};
};
class aar: rifleman {
  backpackItems[] += {AR_MAG};
  backpack[] = {CARRYALL_AR};
  linkedItems[] += {SIDE_BINOS};
  launchers[] = {};
};
class lat: Fic_Soldier_Carbine {
  magazines[] += {AT_MAG};
  weapons[] = {RIFLE};
  backpack[] = {CARRYALL_RAT};
  launchers[] = {AT};
};
class sm: Fic_Soldier_Carbine {
  magazines[] = {CARBINE_MAG,SIDE_MEDIC_GRENADES};
  backpack[] = {CARRYALL_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL_AI};
};
class Fic_Spotter: rifleman {
};
class mmgg: ar {
  weapons[] = {MMG};
  backpack[] = {CARRYALL_MMG};
  magazines[] = {MMG_MAG,SIDE_BASE_GRENADES};
  attachments[] = {};
};
class mmgag: Fic_Spotter {
  backpackItems[] += {MMG_MAG};
  backpack[] = {CARRYALL_MMG};
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
  items[] += {BASE_MEDICAL_AI};
};
class msamg: Fic_Soldier_Carbine {
  SAM_GEAR("B_Carryall_mcamo",SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {
  SAM_GEAR("B_Carryall_mcamo",SAM_MAG)
};
class mtrg: Fic_Soldier_Carbine {
  MORTAR_GEAR("B_Mortar_01_weapon_F")
};
class mtrag: Fic_Spotter {
  MORTAR_GEAR("B_Mortar_01_support_F")
};
class spotter: Fic_Spotter {
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,SIDE_BASE_GRENADES};
  items[] += {"ACE_ATragMX","ACE_Kestrel4500"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: spotter {
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,SIDE_BASE_GRENADES};
  items[] = {TOOLS,"ACE_RangeCard"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_ATTACHMENTS};
};
class pilot {
  uniform[] = {CAMO_UNIFORM_PILOT};
  backpack[] = {CAMO_BACKPACK_PILOT};
  vest[] = {CAMO_VEST_PILOT};
  headgear[] = {CAMO_HEADGEAR_PILOT};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,SIDE_CREW_GRENADES};
  attachments[] = {RIFLE_ATTACHMENTS};
  backpackItems[] = {};
  items[] = {BASE_MEDICAL_AI,TOOLS,LEADER_TOOLS};
  linkedItems[] = {LINKED,LEADER_LINKED};
  opticChoices[] = {ALT_OPTICS};
};
class vicc: Fic_Soldier_Carbine {
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,SIDE_CREW_GRENADES};
  uniform[] = {CAMO_UNIFORM_VICC};
  headgear[] = {CAMO_HEADGEAR_VICC};
  vest[] = {CAMO_VEST_VICC};
  backpackItems[] = {};
  linkedItems[] = {LINKED,LEADER_LINKED};
  items[] += {BASE_MEDICAL_AI};
};
class vicd: vicc {
  backpackItems[] = {"Toolkit"};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class Fic_eng: vicd {
  items[] += {BASE_ENG};
  backpackItems[] = {};
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
  backpackItems[] = {"Toolkit","ACE_Fortify","ACE_wirecutter"};
};
class fac: coy {
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,"Laserbatteries"};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
};
class artl: sl {
  backpack[] = {"B_Kitbag_mcamo"};
  items[] = {TOOLS,"acex_intelitems_notepad"};
  backpackItems[] += {BASE_ARTILLERY};
};
class artg: rifleman {
  backpackItems[] += {BASE_ARTILLERY};
};
class plm: sm {
  backpackItems[] = {MEDIC_MEDICAL_AI};
};
class cm: plm {};
class xo: coy {};
class plt: coy {};
class sgt: plt {};
class vicl: vicc {
  linkedItems[] + = {SIDE_BINOS};
};
class mmgl: sl {
  backpack[] = {CARRYALL_MMG};
  magazines[] += {MMG_MAG};
};
class matl: sl {
  backpack[] = {CARRYALL};
  magazines[] += {MAT_MAG3};
};
class hmgl: sl {
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,SIDE_LEADER_GRENADES,HMG_MAG};
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
  magazines[] = {RIFLE_MAG,SIDE_LEADER_GRENADES,HAT_MAG};
  backpack[] = {CARRYALL_HAT};
  launchers[] = {HAT_TRI_LO};
  items[] += {BASE_MEDICAL_AI};
};
class hatg: rifleman {
  backpack[] = {CARRYALL_HAT};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT};
};
class hatag: rifleman {
  backpack[] = {CARRYALL_HAT};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT_TRI_HI};
};
class msaml: sl {
  backpack[] = {CARRYALL};
  magazines[] += {SAM_MAG};
};
class mtrl: sl {
  items[] += {BASE_ARTILLERY};
};
class helicrew: pilot {
  backpackItems[] = {"Toolkit"};
};
class cc: helicrew {
};
class engl: eng {
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,SIDE_LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,SIDE_BINOS};
};
class uav: rifleman {};
class fallback: rifleman {};

#undef SIDE_BASE_GRENADES
#undef SIDE_LEADER_GRENADES
#undef SIDE_FAC_GRENADES
#undef SIDE_MEDIC_GRENADES
#undef SIDE_CREW_GRENADES
#undef SIDE_BINOS
#undef CAMO_UNIFORM
#undef CAMO_VEST
#undef CAMO_VEST_AR
#undef CAMO_VEST_FTL
#undef CAMO_VEST_SL
#undef CAMO_BACKPACK
#undef CAMO_HEADGEAR
#undef CAMO_HEADGEAR_SPECIAL
#undef CARRYALL
#undef CARRYALL_RAT
#undef CARRYALL_AR
#undef CARRYALL_FTL
#undef CARRYALL_SL
#undef CARRYALL_MAT
#undef CARRYALL_MMG
#undef CARRYALL_HAT
#undef CARRYALL_MEDIC
#undef CAMO_UNIFORM_PILOT
#undef CAMO_VEST_PILOT
#undef CAMO_BACKPACK_PILOT
#undef CAMO_HEADGEAR_PILOT
#undef CAMO_UNIFORM_VICC
#undef CAMO_VEST_VICC
#undef CAMO_BACKPACK_VICC
#undef CAMO_HEADGEAR_VICC
#undef RIFLE
#undef RIFLE_MAG
#undef RIFLE_ATTACHMENTS
#undef AAR_ATTACHMENTS
#undef ALT_OPTICS
#undef GLRIFLE
#undef GLRIFLE_MAG
#undef GLRIFLE_MAG_SMOKE
#undef GLRIFLE_MAG_HE
#undef GLRIFLE_MAG_FLARE
#undef CARBINE
#undef CARBINE_MAG
#undef AR
#undef AR_MAG
#undef LAT
#undef AT
#undef AT_MAG
#undef MMG
#undef MMG_MAG
#undef MAT
#undef MAT_MAG
#undef MAT_MAG3
#undef MAT_OPTIC
#undef HMG
#undef HMG_TRI_HI
#undef HMG_TRI_LO
#undef HMG_MAG
#undef HAT
#undef HAT_TRI_HI
#undef HAT_TRI_LO
#undef HAT_MAG
#undef SAM
#undef SAM_MAG
#undef SNIPER
#undef SNIPER_MAG
#undef SNIPER_ATTACHMENTS
#undef SPOTTER
#undef SPOTTER_MAG
#undef SPOTTER_ATTACHMENTS
#undef SMG
#undef SMG_MAG
#undef SMG_MAG_FULL
#undef TOOLS
#undef LEADER_TOOLS
#undef LINKED
#undef LEADER_LINKED
