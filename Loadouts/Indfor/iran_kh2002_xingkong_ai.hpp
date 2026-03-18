author = "Lambda.Tiger";
description = "Iranian Army (Xingkong, 2000s, AI)";
#include "../undef.hpp"
#include "../undef_side_gear.hpp"
#define SIDE_BASE_GRENADES "gm_handgrenade_frag_rgd5"
#define SIDE_LEADER_GRENADES SIDE_BASE_GRENADES,"rhs_mag_rdg2_white","SmokeShellGreen","1Rnd_Smoke_Grenade_shell"
#define SIDE_FAC_GRENADES "rhs_mag_rdg2_white:2","gm_handgrenade_frag_rgd5:2","1Rnd_SmokeBlue_Grenade_shell:4","1Rnd_SmokeYellow_Grenade_shell:3","1Rnd_SmokeOrange_Grenade_shell:3","1Rnd_SmokeGreen_Grenade_shell:5"
#define SIDE_MEDIC_GRENADES "rhs_mag_rdg2_white:2"
#define SIDE_CREW_GRENADES "rhs_mag_rdg2_white"
#define SIDE_BINOS "gm_df7x40_blk"
#define CAMO_UNIFORM "acp_CN_Xingkong_W_core_lite_U_obr88_CN_Xingkong_W"
#define CAMO_VEST "acp_CN_Xingkong_W_modern_east_lite_Aegis_OCarrierLuchnik_CN_Xingkong_W_F","acp_CN_Xingkong_W_modern_east_lite_Aegis_OCarrierLuchnik_Lite_CN_Xingkong_W_F"
#define CAMO_VEST_AR "acp_CN_Xingkong_W_modern_east_lite_Aegis_OCarrierLuchnik_CQB_CN_Xingkong_W_F"
#define CAMO_VEST_FTL "acp_CN_Xingkong_W_modern_east_lite_Aegis_OCarrierLuchnik_Lite_CN_Xingkong_W_F"
#define CAMO_VEST_SL CAMO_VEST_FTL
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CAMO_HEADGEAR "H_HelmetAggressor_cover_F","H_HelmetAggressor_cover_F","H_HelmetAggressor_cover_F","H_HelmetAggressor_F"
#define CAMO_HEADGEAR_SPECIAL "H_HelmetAggressor_F"
#define CARRYALL "acp_CN_Xingkong_W_core_lite_B_Carryall_CN_Xingkong_W"
#define CARRYALL_RAT "CUP_B_RPGPack_Khaki"
#define CARRYALL_AR "CUP_B_USMC_AssaultPack"
#define CARRYALL_FTL "acp_CN_Xingkong_W_core_lite_B_AssaultPackEnhanced_CN_Xingkong_W"
#define CARRYALL_SL "acp_CN_Xingkong_W_core_lite_B_Kitbag_rgr_CN_Xingkong_W"
#define CARRYALL_MAT CARRYALL
#define CARRYALL_MMG CARRYALL
#define CARRYALL_HAT CARRYALL
#define CARRYALL_MEDIC CARRYALL_SL
#define CAMO_UNIFORM_PILOT "U_O_PilotCoveralls"
#define CAMO_VEST_PILOT "gm_gc_army_vest_80_belt_str"
#define CAMO_BACKPACK_PILOT CAMO_BACKPACK
#define CAMO_HEADGEAR_PILOT "H_PilotHelmetFighter_Oacp_CN_Xingkong_W_core_lite_U_O_officer_noInsignia_CN_Xingkong_W_F"
#define CAMO_UNIFORM_VICC "gmx_cdf2022_army_uniform_soldier_oli"
#define CAMO_VEST_VICC "V_BandollierB_blk"
#define CAMO_BACKPACK_VICC CAMO_BACKPACK
#define CAMO_HEADGEAR_VICC "H_Tank_eaf_F"
#define RIFLE "arifle_Katiba_F"
#define RIFLE_MAG "30Rnd_65x39_caseless_green_mag_Tracer:3""30Rnd_65x39_caseless_green:2"
#define RIFLE_ATTACHMENTS
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "CUP_optic_Aimpoint_5000","CUP_optic_CompM4","CUP_optic_MicroT1","CUP_optic_MicroT1_low","CUP_optic_AC11704_Black","CUP_optic_HoloBlack","CUP_optic_Eotech553_Black","CUP_optic_CompM2_Black","ptv_xps3","CUP_optic_VortexRazor_UH1_Black"
#define GLRIFLE "arifle_Katiba_GL_F"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell"
#define GLRIFLE_MAG_FLARE "CUP_FlareWhite_GP25_M:4"
#define CARBINE "arifle_Katiba_C_F"
#define CARBINE_MAG RIFLE_MAG
#define AR "arifle_CTARS_blk_F"
#define AR_MAG "100Rnd_580x42_Mag_Tracer_F:3"
#define LAT "rhs_weap_rpg26"
#define AT "potato_launch_RPG7V_optic"
#define AT_MAG "CUP_PG7VL_M:2"
#define MMG "LMG_Zafir_F"
#define MMG_MAG "150Rnd_762x54_Box_Tracer:2"
#define MAT "RPG29"
#define MAT_MAG "PG29V:2"
#define MAT_MAG3 MAT_MAG
#define MAT_OPTIC "optic_PGO"
#define HMG "CUP_KORD_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripod"
#define HMG_MAG "ace_csw_50Rnd_127x108_mag"
#define HAT "launch_O_Titan_short_F"
#define HAT_TRI_HI
#define HAT_TRI_LO
#define HAT_MAG "Titan_AT:2"
#define SAM "CUP_launch_Igla"
#define SAM_MAG
#define SNIPER "srifle_DMR_05_KHS_LP_F"
#define SNIPER_MAG "10Rnd_93x64_DMR_05_Mag:8"
#define SNIPER_ATTACHMENTS "optic_KHS_blk"
#define SPOTTER "srifle_DMR_01_DMS_BI_F"
#define SPOTTER_MAG "ACE_10Rnd_762x54_Tracer_mag:15"
#define SPOTTER_ATTACHMENTS "optic_DMS"
#define SMG "SMG_02_F"
#define SMG_MAG "30Rnd_9x21_Mag_SMG_02_Tracer_Green:3"
#define SMG_MAG_FULL "30Rnd_9x21_Mag_SMG_02_Tracer_Green:7"
#define TOOLS "rhs_mag_rdg2_white"
#define LEADER_TOOLS TOOLS
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LINKED

// ------------- Vehicle Pool -------------
rallyObject = "cwr3_Flag_Iran";
artilleryArray[] = {
  {"O_Mortar_01_F", {"potato_8Rnd_82mm_Mo_shells_noFrag", "8Rnd_82mm_Mo_Smoke_white"}, 2},
  {"O_MBT_02_arty_F", {"potato_32Rnd_155mm_Mo_shells_noFrag", "6Rnd_155mm_Mo_smoke_O"}, 1}
};
transportVehiclePool[] = {
  "O_LSV_02_unarmed_F",
  "O_Truck_03_transport_F"
};
armedSoftVehiclePool[] = {
  "CUP_O_BRDM2_CSAT",
  "O_LSV_02_armed_F",
  "CUP_O_UAZ_MG_CSAT",
  "CUP_O_UAZ_AGS30_CSAT",
  "CUP_O_BRDM2_CSAT",
  "O_LSV_02_armed_F",
  "CUP_O_UAZ_MG_CSAT",
  "CUP_O_UAZ_AGS30_CSAT",
  "O_MRAP_02_gmg_F",
  "O_MRAP_02_hmg_F",
  "O_MRAP_02_hmg_F"
};
armoredVehiclePool[] = {
  "CUP_O_BMP2_CSAT",
  "CUP_O_BMP2_CSAT",
  "CUP_O_BMP2_CSAT",
  "CUP_O_BMP1P_CSAT",
  "O_T_APC_Wheeled_02_rcws_v2_ghex_F",
  "O_T_APC_Wheeled_02_rcws_v2_ghex_F",
  "O_T_APC_Wheeled_02_rcws_v2_ghex_F",
  "CUP_O_ZSU23_Afghan_CSAT"
};
tankVehiclePool[] = {
  "O_APC_Tracked_02_cannon_F",
  "CUP_O_T90MS_CSAT",
  "O_APC_Tracked_02_cannon_F",
  "CUP_O_T90MS_CSAT",
  "O_APC_Tracked_02_AA_F"
};
heliVehiclePool[] = {
  "O_Heli_Light_02_dynamicLoadout_F",
  "O_Heli_Light_02_dynamicLoadout_F",
  "EC635_CSAT",
  "EC635_CSAT",
  "EC635_CSAT",
  "O_Heli_Attack_02_dynamicLoadout_F",
};
planeVehiclePool[] = {
  "O_UAV_02_dynamicLoadout_F",
  "O_Plane_CAS_02_dynamicLoadout_F"
};
reinforcementTruck = "O_Truck_03_transport_F";
reinforcementArmed[] = {"O_APC_Wheeled_02_rcws_v2_F",8};
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
  secondaryAttachments[] = {"CUP_optic_PGO7V3"};
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
  SAM_GEAR(CARRYALL,SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {
  SAM_GEAR(CARRYALL,SAM_MAG)
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
