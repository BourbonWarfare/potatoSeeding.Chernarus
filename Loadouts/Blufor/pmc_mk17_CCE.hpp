author = "Lambda.Tiger";
description = "BurstCoke PMC (MK17, 2000s)";
#include "../undef.hpp"
#include "../undef_side_gear.hpp"
#define SIDE_BASE_GRENADES "CUP_HandGrenade_M67:2","SmokeShell:2"
#define SIDE_LEADER_GRENADES SIDE_BASE_GRENADES,"SmokeShell:4","SmokeShellGreen:2","1Rnd_SmokeRed_Grenade_shell:2","1Rnd_Smoke_Grenade_shell:2","SmokeShellPurple"
#define SIDE_FAC_GRENADES "SmokeShell:2","CUP_HandGrenade_M67:2","1Rnd_SmokeBlue_Grenade_shell:4","1Rnd_SmokeYellow_Grenade_shell:3","1Rnd_SmokeOrange_Grenade_shell:3","1Rnd_SmokeGreen_Grenade_shell:5"
#define SIDE_MEDIC_GRENADES "SmokeShell:6","SmokeShellPurple:2"
#define SIDE_CREW_GRENADES "SmokeShell:4","SmokeShellGreen:2"
#define SIDE_BINOS "Binocular"
#define CAMO_UNIFORM "CUP_U_B_HIL_ACU_Gloves_CCE","CUP_U_B_HIL_ACU_Kneepad_CCE","CUP_U_B_HIL_ACU_Kneepad_Gloves_CCE"
#define CAMO_VEST "CUP_V_CZ_NPP2006_nk_des","CUP_V_CZ_NPP2006_des"
#define CAMO_VEST_AR "CUP_V_CZ_NPP2006_ok_des"
#define CAMO_VEST_FTL "CUP_V_CZ_NPP2006_co_des"
#define CAMO_VEST_SL CAMO_VEST_FTL
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CAMO_HEADGEAR "CUP_H_HIL_HelmetACH_CCE","CUP_H_HIL_HelmetACH_GCovered_CCE","CUP_H_HIL_HelmetACH_ESS_CCE"
#define CAMO_HEADGEAR_SPECIAL "CUP_H_HIL_HelmetACH_Headset_CCE","CUP_H_HIL_HelmetACH_GCovered_Headset_CCE","CUP_H_HIL_HelmetACH_ESS_Headset_CCE"
#define CARRYALL "acp_Solid_CoyoteBrown_core_lite_B_Carryall_Solid_CoyoteBrown"
#define CARRYALL_RAT "acp_Solid_CoyoteBrown_core_lite_B_AssaultPackEnhanced_Solid_CoyoteBrown"
#define CARRYALL_AR "acp_Solid_CoyoteBrown_core_lite_B_Kitbag_rgr_Solid_CoyoteBrown"
#define CARRYALL_FTL "acp_Solid_CoyoteBrown_core_lite_B_TacticalPack_Solid_CoyoteBrown"
#define CARRYALL_SL "acp_Solid_CoyoteBrown_core_lite_B_Carryall_Solid_CoyoteBrown"
#define CARRYALL_MAT CARRYALL
#define CARRYALL_MMG CARRYALL
#define CARRYALL_HAT CARRYALL
#define CARRYALL_MEDIC CARRYALL
#define CAMO_UNIFORM_PILOT "cwr3_o_uniform_pilot_ttsko"
#define CAMO_VEST_PILOT "CUP_V_CZ_vest20"
#define CAMO_BACKPACK_PILOT CAMO_BACKPACK
#define CAMO_HEADGEAR_PILOT "cwr3_c_headgear_camelpilot_hat"
#define CAMO_UNIFORM_VICC "CUP_U_B_HIL_ACU_Gloves_CCE"
#define CAMO_VEST_VICC "cwr3_o_vest_beltkit_ak74"
#define CAMO_BACKPACK_VICC CAMO_BACKPACK
#define CAMO_HEADGEAR_VICC "gm_gc_army_headgear_crewhat_80_blk"
#define RIFLE "CUP_arifle_Mk17_STD_FG"
#define RIFLE_MAG "CUP_20Rnd_762x51_B_SCAR:10","CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR:5"
#define RIFLE_ATTACHMENTS "CUP_optic_Eotech553_Coyote"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "CUP_optic_ACOG_TA648_308_RDS_Desert","CUP_optic_Aimpoint_5000","CUP_optic_CompM4","CUP_optic_MicroT1","CUP_optic_MicroT1_low","CUP_optic_AC11704_Black","CUP_optic_HensoldtZO","ptv_xps3","CUP_optic_VortexRazor_UH1_Black"
#define GLRIFLE "CUP_arifle_Mk17_STD_EGLM"
#define GLRIFLE_MAG "CUP_20Rnd_762x51_B_SCAR:7","CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR:8"
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "CUP_1Rnd_HE_M203:4","potato_1Rnd_40mm_M433_HEDP:2"
#define GLRIFLE_MAG_FLARE "CUP_FlareWhite_GP25_M:4"
#define CARBINE "CUP_arifle_Mk17_CQC_SFG"
#define CARBINE_MAG RIFLE_MAG
#define AR "CUP_lmg_M60E4"
#define AR_MAG "hlc_100Rnd_762x51_M_M60E4:4"
#define LAT "potato_launch_M72A7"
#define AT "CUP_launch_M136"
#define AT_MAG
#define MMG "CUP_lmg_M240"
#define MMG_MAG "hlc_100Rnd_762x51_M_M60E4:5"
#define MAT "launch_MRAWS_green_F"
#define MAT_MAG "za_enhancedmaawsCUP_mag_HEAT551:2","za_enhancedmaawsCUP_mag_HE:2"
#define MAT_MAG3 "za_enhancedmaawsCUP_mag_HEAT551:2","za_enhancedmaawsCUP_mag_HE"
#define MAT_OPTIC "CUP_acc_ANPEQ_2_grey"
#define HMG "CUP_m2_carry"
#define HMG_TRI_HI "ace_csw_m3CarryTripod"
#define HMG_TRI_LO "ace_csw_m3CarryTripodLow"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag_red:2"
#define HAT "CUP_launch_Javelin"
#define HAT_TRI_HI
#define HAT_TRI_LO
#define HAT_MAG "CUP_Javelin_M"
#define SAM "CUP_launch_FIM92Stinger"
#define SAM_MAG
#define SNIPER "CUP_arifle_Mk20"
#define SNIPER_MAG RIFLE_MAG
#define SNIPER_ATTACHMENTS "CUP_optic_LeupoldM3LR","CUP_bipod_Harris_1A2_L_BLK"
#define SPOTTER "CUP_arifle_Mk20"
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS "CUP_optic_Elcan_SpecterDR_RMR_black","CUP_bipod_Harris_1A2_L_BLK"
#define SMG "SMG_03C_black"
#define SMG_MAG "CUP_50Rnd_570x28_Red_Tracer_P90_M:3"
#define SMG_MAG_FULL "CUP_50Rnd_570x28_Red_Tracer_P90_M:6"
#define PISTOL "CUP_hgun_Glock17_blk"
#define PISTOL_MAG "CUP_17Rnd_9x19_glock17:2"
#define PISTOL_ATTACHMENTS
#define TOOLS BASE_TOOLS,"ACE_EntrenchingTool"
#define LEADER_TOOLS BASE_LEADER_TOOLS
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED

// ------------- Vehicle Pool -------------
rallyObject = "Flag_Burstkoke_inverted_F";
transportVehiclePool[] = {
  "CUP_I_Tigr_M_233114_ION",
  "CUP_I_SUV_ION",
  "CUP_I_LSV_02_unarmed_ION",
  "CUP_I_Van_Transport_ION",
  "CUP_I_Pickup_Unarmed_PMC",
  "CUP_M1245_Unarmed_USA_WDL"
};
armedSoftVehiclePool[] = {
  "CUP_I_SUV_Armored_ION",
  "CUP_I_nM1025_M2_ION",
  "CUP_I_nM1025_M240_ION",
  "CUP_I_nM1025_Mk19_ION",
  "CUP_B_nM1025_SOV_M2_ION",
  "CUP_B_nM1025_SOV_Mk19_ION",
  "CUP_M1245_RearM240_USA_WDL"
};
armoredVehiclePool[] = {
  "CUP_M1245_CROWS_M134_USA_WDL",
  "CUP_M1245_CROWS_M2_USA_WDL",
  "CUP_M1245_CROWS_Mk19_USA_WDL",
  "CUP_I_BTR80_ION",
  "CUP_I_BTR80A_ION"
};
tankVehiclePool[] = {
  "CUP_B_T72_CZ",
  "gmx_cdf2022_kpz1a5_wdl",
  "cwr3_b_m60a3_tts",
  "gm_ge_army_gepard1a1_des",
  "potato_ca_army_Leopard_c2"
};
heliVehiclePool[] = {
  "CUP_I_412_dynamicLoadout_PMC",
  "CUP_I_Merlin_HC3_PMC_Transport_black",
  "CUP_I_MH6M_ION_OBS",
  "CUP_I_Mi24_Mk4_ION",
  "CUP_B_AH6M_USA",
  "CUP_B_AH64D_DL_USA",
  "CUP_O_Ka50_DL_SLA"
};
planeVehiclePool[] = {
  "CUP_I_Plane_ION",
  "FA_EMB312_AT27M35_AAF",
  "I_Plane_Fighter_03_dynamicLoadout_F",
  "CUP_I_L39_AAF",
  "CUP_B_AC47_Spooky_USA"
};
reinforcementTruck = "CUP_B_Ural_CDF";
reinforcementArmed = "CUP_B_BTR80_CDF";
// ------------- End Vehicle Pool -------------

vehicleAirDropVehicle = "CUP_B_Mi17_VIV_CDF";
infAirDropVehicle = "CUP_B_Mi17_medevac_CDF";

class CUP_BOX_CDF_Ammo_F {
  boxCount = 2;
  boxCustomName = "Fireteam Resupply";
  TransportWeapons[] = {"rhs_weap_rpg26:2"};
  TransportMagazines[] = {
    "CUP_30Rnd_545x39_AK74M_M:15",
    "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M:15",
    "CUP_45Rnd_TE4_LRT4_Green_tracer_545x39_RPK74M_M:8",
    "SmokeShell:6",
    "SmokeShellGreen:2",
    "CUP_HandGrenade_M67:4",
    "CUP_1RND_SMOKE_GP25_M:4",
    "CUP_1Rnd_SmokeRed_GP25_M:4",
    "CUP_1Rnd_SmokeGreen_GP25_M:2",
    "CUP_1Rnd_HE_GP25_M:6",
    "CUP_PG7VL_M:2",
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
  SAM_GEAR("acp_Solid_CoyoteBrown_core_lite_B_Carryall_Solid_CoyoteBrown",SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {
  SAM_GEAR("acp_Solid_CoyoteBrown_core_lite_B_Carryall_Solid_CoyoteBrown",SAM_MAG)
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
