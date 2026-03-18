author = "Lambda.Tiger";
description = "People's Liberation Army Ground Forces (QBZ-95)";
#include "..\undef.hpp"
#include "..\undef_side_gear.hpp"
#define SIDE_BASE_GRENADES "rhs_mag_rgn","rhs_mag_rgo","gm_smokeshell_wht_gc:2"
#define SIDE_LEADER_GRENADES SIDE_BASE_GRENADES,"gm_smokeshell_wht_gc:4","gm_smokeshell_grn_gc:2","1Rnd_SmokeRed_Grenade_shell:2","1Rnd_Smoke_Grenade_shell:2","gm_smokeshell_blu_gc"
#define SIDE_FAC_GRENADES "gm_smokeshell_wht_gc:2","CUP_HandGrenade_M67:2","1Rnd_SmokeBlue_Grenade_shell:4","1Rnd_SmokeYellow_Grenade_shell:3","1Rnd_SmokeOrange_Grenade_shell:3","1Rnd_SmokeGreen_Grenade_shell:5"
#define SIDE_MEDIC_GRENADES "gm_smokeshell_wht_gc:6","gm_smokeshell_blu_gc:2"
#define SIDE_CREW_GRENADES "gm_smokeshell_wht_gc:4","gm_smokeshell_grn_gc:2"
#define SIDE_BINOS "Binocular"
#define CAMO_UNIFORM "acp_CN_Xingkong_W_core_lite_U_B_CombatUniform_CN_Xingkong_W"
#define CAMO_VEST "acp_CN_Xingkong_W_contact_lite_V_CarrierRigKBT_01_light_CN_Xingkong_W_F"
#define CAMO_VEST_AR "acp_CN_Xingkong_W_contact_lite_V_CarrierRigKBT_01_light_CN_Xingkong_W_F"
#define CAMO_VEST_FTL "acp_CN_Xingkong_W_contact_lite_V_CarrierRigKBT_01_heavy_CN_Xingkong_W_F"
#define CAMO_VEST_SL CAMO_VEST_FTL
#define CAMO_BACKPACK "acp_CN_Xingkong_W_core_lite_B_AssaultPackEnhanced_CN_Xingkong_W"
#define CAMO_HEADGEAR "acp_CN_Xingkong_W_modern_west_lite_H_HelmetFASTMT_Cover_CN_Xingkong_W_F"
#define CAMO_HEADGEAR_SPECIAL CAMO_HEADGEAR
#define CARRYALL "acp_CN_Xingkong_W_core_lite_B_Carryall_CN_Xingkong_W"
#define CARRYALL_RAT "acp_CN_Xingkong_W_core_lite_B_AssaultPackEnhanced_CN_Xingkong_W"
#define CARRYALL_AR "acp_CN_Xingkong_W_core_lite_B_Kitbag_rgr_CN_Xingkong_W"
#define CARRYALL_FTL "acp_CN_Xingkong_W_core_lite_B_Kitbag_rgr_CN_Xingkong_W"
#define CARRYALL_SL "acp_CN_Xingkong_W_core_lite_B_Kitbag_rgr_CN_Xingkong_W"
#define CARRYALL_MAT CARRYALL
#define CARRYALL_MMG CARRYALL
#define CARRYALL_HAT CARRYALL
#define CARRYALL_MEDIC CARRYALL
#define CAMO_UNIFORM_PILOT "gm_gc_airforce_uniform_pilot_80_blu"
#define CAMO_VEST_PILOT "CUP_V_CDF_OfficerBelt"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "CUP_H_RUS_ZSH_Shield_Up"
#define CAMO_UNIFORM_VICC "acp_CN_Xingkong_W_core_lite_U_B_CombatUniform_CN_Xingkong_W"
#define CAMO_VEST_VICC "acp_CN_Xingkong_W_core_lite_V_HarnessO_CN_Xingkong_W_F"
#define CAMO_BACKPACK_VICC CAMO_BACKPACK_PILOT
#define CAMO_HEADGEAR_VICC "acp_CN_Xingkong_W_modern_east_lite_H_HelmetEAST_Cover_CN_Xingkong_W_F"
#define RIFLE "arifle_CTAR_blk_F"
#define RIFLE_MAG "30Rnd_580x42_Mag_F:7","30Rnd_580x42_Mag_Tracer_F:3"
#define RIFLE_ATTACHMENTS "optic_ACO_grn"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "CUP_optic_ACOG_TA648_308_RDS_Desert","CUP_optic_Aimpoint_5000","CUP_optic_CompM4","CUP_optic_MicroT1","CUP_optic_MicroT1_low","CUP_optic_AC11704_Black","CUP_optic_HensoldtZO","ptv_xps3","CUP_optic_VortexRazor_UH1_Black"
#define GLRIFLE "arifle_CTAR_GL_blk_F"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:6"
#define GLRIFLE_MAG_FLARE "CUP_FlareWhite_GP25_M:4"
#define CARBINE RIFLE
#define CARBINE_MAG RIFLE_MAG
#define AR "arifle_CTARS_blk_F"
#define AR_MAG "100Rnd_580x42_Mag_Tracer_F:4"
#define LAT "CUP_launch_RPG26"
#define AT "CUP_launch_RPG7V"
#define AT_MAG "CUP_PG7VM_M:2","CUP_OG7_M"
#define MMG "CUP_lmg_PKM"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:5"
#define MAT "launch_O_Titan_short_ghex_F"
#define MAT_MAG "Titan_AT"
#define MAT_MAG3 "Titan_AT:2"
#define MAT_OPTIC "CUP_acc_ANPEQ_2_grey"
#define HMG "ace_compat_rhs_afrf3_nsv_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripod"
#define HMG_MAG "ace_csw_50Rnd_127x108_mag:2"
#define HAT "potato_cswCompatCUP_patchGM_gm_fagot_backpack"
#define HAT_TRI_HI
#define HAT_TRI_LO
#define HAT_MAG "gm_1Rnd_fagot_heat_9m111_csw"
#define SAM "CUP_launch_Igla"
#define SAM_MAG
#define SNIPER "srifle_DMR_07_blk_F"
#define SNIPER_MAG "20Rnd_650x39_Cased_Mag_F:10"
#define SNIPER_ATTACHMENTS "optic_DMS"
#define SPOTTER RIFLE
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS "CUP_optic_Elcan_SpecterDR_RMR_black","CUP_bipod_Harris_1A2_L_BLK"
#define SMG "CUP_smg_vityaz"
#define SMG_MAG "CUP_30Rnd_9x19AP_Vityaz:5"
#define SMG_MAG_FULL "CUP_30Rnd_9x19AP_Vityaz:10"
#define PISTOL "hgun_P07_blk_F"
#define PISTOL_MAG "16Rnd_9x21_Mag:2"
#define PISTOL_ATTACHMENTS
#define TOOLS BASE_TOOLS,"ACE_EntrenchingTool"
#define LEADER_TOOLS BASE_LEADER_TOOLS
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED

// ------------- Vehicle Pool -------------
rallyObject = "cwr3_Flag_China";
transportVehiclePool[] = {
  "O_T_MRAP_02_ghex_F",
  "O_T_LSV_02_unarmed_F",
  "O_T_Truck_03_transport_ghex_F",
  "O_T_Truck_02_F"
};
armedSoftVehiclePool[] = {
  "CUP_O_BRDM2_CSAT_T",
  "O_T_MRAP_02_gmg_ghex_F",
  "O_T_MRAP_02_hmg_ghex_F",
  "O_T_LSV_02_armed_F",
  "O_T_LSV_02_AT_F"
};
armoredVehiclePool[] = {
  "O_T_APC_Tracked_02_cannon_ghex_F",
  "CUP_O_BMP2_CSAT_T",
  "CUP_O_BMP2_ZU_CSAT_T",
  "CUP_O_BRDM2_ATGM_CSAT_T",
  "CUP_O_BTR80_CSAT_T",
  "CUP_O_BTR80A_CSAT_T",
  "O_T_APC_Wheeled_02_rcws_v2_ghex_F",
  "CUP_O_BMP3_CSAT_T"
};
tankVehiclePool[] = {
  "O_T_APC_Tracked_02_AA_ghex_F",
  "O_T_MBT_02_arty_ghex_F",
  "O_T_MBT_02_railgun_ghex_F",
  "O_T_MBT_04_cannon_F",
  "CUP_O_T90MS_CSAT_T",
  "O_T_MBT_02_cannon_ghex_F"
};
heliVehiclePool[] = {
  "CUP_O_Mi24_Mk4_CSAT_T",
  "CUP_O_MI6T_CSAT_T",
  "O_Heli_Attack_02_dynamicLoadout_F",
  "O_Heli_Transport_04_covered_F",
  "O_Heli_Light_02_dynamicLoadout_F",
  "CUP_B_MH6M_USA",
  "CUP_B_AH6M_USA",
};
planeVehiclePool[] = {
"CUP_O_Su25_Dyn_CSAT_T",
"O_T_VTOL_02_infantry_dynamicLoadout_F",
"CUP_O_SU34_CSAT",
"O_Plane_Fighter_02_F"
};
reinforcementTruck = "CUP_B_Ural_CDF";
reinforcementArmed = "CUP_B_BTR80_CDF";
// ------------- End Vehicle Pool -------------

vehicleAirDropVehicle = "CUP_B_Mi17_VIV_CDF";
infAirDropVehicle = "CUP_B_Mi17_medevac_CDF";

class CUP_BOX_CDF_Ammo_F {
  boxCount = 2;
  boxCustomName = "Fireteam Resupply";
  TransportWeapons[] = {"CUP_launch_RPG26:2"};
  TransportMagazines[] = {
    "30Rnd_580x42_Mag_F:15",
    "30Rnd_580x42_Mag_Tracer_F:15",
    "100Rnd_580x42_Mag_Tracer_F:6",
    "gm_smokeshell_wht_gc:6",
    "gm_smokeshell_grn_gc:2",
    "rhs_mag_rgn:4","rhs_mag_rgo:4",
    "1Rnd_Smoke_Grenade_shell:4",
    "1Rnd_SmokeRed_Grenade_shell:2",
    "1Rnd_HE_Grenade_shell:6",
    "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:5",
    "CUP_PG7VM_M:2",
    "CUP_OG7_M"
  };
  TransportItems[] = {
    "ACE_elasticBandage:25",
    "ACE_packingBandage:10",
    "ACE_splint:6"
  };
};
class ACE_medicalSupplyCrate {
  boxCustomName = "Medical Crate";
  boxCount = 1;
  TransportItems[] = {
    "ACE_elasticBandage:40",
    "ACE_packingBandage:20",
    "ACE_epinephrine:15",
    "ACE_morphine:15",
    "ACE_adenosine:10",
    "ACE_tourniquet:10",
    "ACE_splint:20",
    "ACE_salineIV:4",
    "ACE_salineIV_500:4",
    "ACE_salineIV_250:10",
    "potato_naloxone:10",
    "potato_pkblister:10"
  };
};
class CUP_B_Ural_Open_CDF {
  class ACE_medicalSupplyCrate: ACE_medicalSupplyCrate {};
  class CUP_BOX_CDF_Ammo_F: CUP_BOX_CDF_Ammo_F {};
};
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
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,SIDE_BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
  launchers[] = {LAT};
};
class rifleman_02: rifleman {};
class Fic_Soldier_Carbine: rifleman {
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,SIDE_BASE_GRENADES};
  launchers[] = {};
};
class ftl: rifleman {
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,SIDE_LEADER_GRENADES,"CUP_PipeBomb_M:2","ACE_Clacker"};
  vest[] = {CAMO_VEST_FTL};
  items[] += {LEADER_TOOLS};
  backpack[] = {CARRYALL_FTL};
  launchers[] = {};
  linkedItems[] += {LEADER_LINKED,SIDE_BINOS};
};
class sl: ftl {
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  vest[] = {CAMO_VEST_SL};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
  backpack[] = {CARRYALL_SL};
};
class coy: sl {
  items[] += {RADIO_LR};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,SIDE_LEADER_GRENADES,PISTOL_MAG};
  linkedItems[] += {RANGE_FINDER};
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
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class mmgg: ar {
  weapons[] = {MMG};
  backpack[] = {CARRYALL_MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,SIDE_BASE_GRENADES};
  attachments[] = {};
};
class mmgag: Fic_Spotter {
  backpackItems[] += {MMG_MAG};
  backpack[] = {CARRYALL_MMG};
};
class matg: Fic_Soldier_Carbine {
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class matag: Fic_Spotter {
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
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
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500"};
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
  backpackItems[] = {RADIO_LR};
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED};
  opticChoices[] = {ALT_OPTICS};
};
class vicc: Fic_Soldier_Carbine {
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,SIDE_CREW_GRENADES};
  uniform[] = {CAMO_UNIFORM_VICC};
  headgear[] = {CAMO_HEADGEAR_VICC};
  vest[] = {CAMO_VEST_VICC};
  backpackItems[] = {RADIO_LR};
  linkedItems[] = {LINKED,LEADER_LINKED};
  items[] += {BASE_MEDICAL};
};
class vicd: vicc {
  backpackItems[] = {"Toolkit",RADIO_MR};
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
  backpackItems[] = {RADIO_MR,"Toolkit"};
};
class eng: Fic_eng {
  backpackItems[] = {"Toolkit","ACE_EntrenchingTool","ACE_Fortify","ACE_wirecutter"};
};
class fac: coy {
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,"Laserbatteries",PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
};
class artl: sl {
  backpack[] = {"B_Kitbag_mcamo"};
  items[] = {TOOLS,RADIO_MR,"acex_intelitems_notepad"};
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR};
};
class artg: rifleman {
  backpackItems[] += {BASE_ARTILLERY};
};
class plm: sm {
  backpackItems[] = {PL_MEDIC_MEDICAL};
};
class cm: plm {};
class xo: coy {};
class plt: coy {};
class sgt: plt {};
class vicl: vicc {
  items[] += {RADIO_MR};
  backpackItems[] = {RADIO_LR};
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
  magazines[] = {RIFLE_MAG,SIDE_LEADER_GRENADES,PISTOL_MAG,HMG_MAG};
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
  magazines[] = {RIFLE_MAG,SIDE_LEADER_GRENADES,PISTOL_MAG,HAT_MAG};
  backpack[] = {CARRYALL_HAT};
  launchers[] = {HAT_TRI_LO};
  items[] += {BASE_MEDICAL};
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
  backpackItems[] += {RADIO_MR};
};
class engl: eng {
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,SIDE_LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,SIDE_BINOS};
  backpackItems[] += {RADIO_MR};
};
class uav: rifleman {};
class fallback: rifleman {};
