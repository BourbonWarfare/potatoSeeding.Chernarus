author = "Lambda.Tiger";
description = "Colombian Insurgents (West Arms, Various Camo, AI)";
#include "../undef.hpp"
#include "../undef_side_gear.hpp"
#define SIDE_BASE_GRENADES "CUP_HandGrenade_M67"
#define SIDE_LEADER_GRENADES SIDE_BASE_GRENADES,"SmokeShell"
#define SIDE_FAC_GRENADES "SmokeShell:2","CUP_HandGrenade_M67:2","1Rnd_SmokeBlue_Grenade_shell:4","1Rnd_SmokeYellow_Grenade_shell:3","1Rnd_SmokeOrange_Grenade_shell:3","1Rnd_SmokeGreen_Grenade_shell:5"
#define SIDE_MEDIC_GRENADES "SmokeShell:2"
#define SIDE_CREW_GRENADES "SmokeShell"
#define SIDE_BINOS "Binocular"
#define CAMO_UNIFORM "cwr3_b_uk_uniform_olive","cwr3_b_uk_uniform_olive_rolled","cwr3_b_uk_uniform_dpm_weathered_olive","U_I_C_Soldier_Bandit_3_F","cwr3_o_fia_uniform_granite_khaki","cwr3_i_uniform_fleckerlteppich_steingrau","cwr3_i_uniform_mol_p60",
#define CAMO_VEST "V_TacVest_blk","V_TacVest_oli","V_HarnessO_ghex_F","V_CarrierRigKBT_01_Olive_F","cwr3_b_vest_alice_light","CUP_V_CPC_light_rngr"
#define CAMO_VEST_AR "cwr3_b_vest_alice_mg"
#define CAMO_VEST_FTL "cwr3_b_vest_alice_gl"
#define CAMO_VEST_SL "cwr3_b_vest_alice_gl"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CAMO_HEADGEAR "gm_dk_headgear_m96_oli","CUP_H_PMC_Beanie_Khaki","cwr3_b_headgear_m1_olive","cwr3_b_headgear_m1_olive","gm_dk_headgear_m96_oli"
#define CAMO_HEADGEAR_SPECIAL "CUP_H_RUS_6B47_NV_6B34U_Summer"
#define CARRYALL "B_Carryall_oli"
#define CARRYALL_RAT "acp_Solid_Olive_core_lite_B_AssaultPack_Solid_Olive"
#define CARRYALL_AR "CUP_B_USMC_AssaultPack"
#define CARRYALL_FTL "B_Battle_Belt_XL_F"
#define CARRYALL_SL "cwr3_b_backpack_alice"
#define CARRYALL_MAT "B_TacticalPack_oli"
#define CARRYALL_MMG "B_Kitbag_sgg"
#define CARRYALL_HAT "cwr3_b_backpack_alice"
#define CARRYALL_MEDIC "cwr3_b_backpack_alice_medic"
#define CAMO_UNIFORM_PILOT "cwr3_i_uniform_coverall"
#define CAMO_VEST_PILOT "gm_ge_army_vest_80_rifleman_smg"
#define CAMO_BACKPACK_PILOT CAMO_BACKPACK
#define CAMO_HEADGEAR_PILOT "cwr3_c_headgear_camelpilot_hat"
#define CAMO_UNIFORM_VICC "cwr3_i_uniform_coverall","CUP_U_C_Mechanic_02"
#define CAMO_VEST_VICC "cwr3_b_vest_alice_crew"
#define CAMO_BACKPACK_VICC CAMO_BACKPACK
#define CAMO_HEADGEAR_VICC "gm_xx_headgear_headwrap_crew_01_m84"
#define RIFLE {"CUP_arifle_Galil_SAR_black",{"CUP_35Rnd_556x45_Red_Tracer_Galil_Mag:3","CUP_35Rnd_556x45_Galil_Mag"}},{"CUP_arifle_Galil_SAR_black",{"CUP_35Rnd_556x45_Red_Tracer_Galil_Mag:3","CUP_35Rnd_556x45_Galil_Mag"}},{"arifle_TRG20_F",{"CUP_30Rnd_556x45_Stanag_Tracer_Yellow:3","CUP_30Rnd_556x45_Stanag:2"}},{"potato_arifle_M4",{"CUP_30Rnd_556x45_Stanag_Tracer_Yellow:3","CUP_30Rnd_556x45_Stanag:2"}},{"CUP_arifle_M16A2",{"CUP_30Rnd_556x45_Stanag_Tracer_Yellow:3","CUP_30Rnd_556x45_Stanag:2"}}
#define RIFLE_MAG
#define RIFLE_ATTACHMENTS
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS
#define GLRIFLE "CUP_arifle_M16A2_GL"
#define GLRIFLE_MAG "CUP_30Rnd_556x45_Stanag_Tracer_Yellow:3","CUP_30Rnd_556x45_Stanag:2"
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell"
#define GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
#define CARBINE RIFLE
#define CARBINE_MAG RIFLE_MAG
#define AR {"LMG_Zafir_F",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M:3"}},{"CUP_lmg_M249_E1",{"CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249:2"}}
#define AR_MAG
#define LAT "rhs_weap_rpg26"
#define AT "CUP_launch_APILAS","CUP_launch_M72A6","potato_launch_M136A1_CS"
#define AT_MAG
#define MMG "CUP_lmg_FNMAG"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M:3"
#define MAT "cwr3_launch_carlgustaf"
#define MAT_MAG "cwr3_carlgustaf_hedp_m"
#define MAT_MAG3 "cwr3_carlgustaf_hedp_m:2"
#define MAT_OPTIC
#define HMG "CUP_KORD_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripod"
#define HMG_MAG "ace_csw_50Rnd_127x108_mag"
#define HAT "CUP_launch_Metis"
#define HAT_TRI_HI
#define HAT_TRI_LO
#define HAT_MAG "CUP_AT13_M"
#define SAM "CUP_launch_FIM92Stinger"
#define SAM_MAG
#define SNIPER "CUP_srifle_M24_blk"
#define SNIPER_MAG "CUP_5Rnd_762x51_M24:10"
#define SNIPER_ATTACHMENTS "CUP_optic_LeupoldMk4", "CUP_bipod_VLTOR_Modpod_black"
#define SPOTTER RIFLE
#define SPOTTER_MAG
#define SPOTTER_ATTACHMENTS "CUP_optic_ACOG_TA01B_Black"
#define SMG {"CUP_smg_UZI",{"CUP_32Rnd_9x19_UZI_M:5"}},{"gm_mp5a5_blk",{"gm_60Rnd_9x19mm_AP_DM91_mp5a3_blk:3"}}
#define SMG_MAG
#define SMG_MAG_FULL
#define TOOLS "SmokeShell"
#define LEADER_TOOLS TOOLS
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LINKED

// ------------- Vehicle Pool -------------
artilleryArray[] = {
  {"cwr3_b_m252", {"potato_8Rnd_82mm_Mo_shells_noFrag", "8Rnd_82mm_Mo_Smoke_white"}, 2}
};
transportVehiclePool[] = {
  "CUP_B_MTVR_HIL",
  "CUP_I_M151_SYND",
  "cwr3_i_landrover",
  "CUP_I_Hilux_unarmed_IND_G_F"
};
armedSoftVehiclePool[] = {
  "cwr3_b_hmmwv_m2",
  "CUP_I_M151_M2_SYND",
  "CUP_I_Hilux_M2_IND_G_F",
  "CUP_I_Hilux_SPG9_IND_G_F",
  "I_G_Offroad_01_armed_F"
};
armoredVehiclePool[] = {
  "cwr3_b_fia_m113a1",
  "cwr3_b_fia_m113a1",
  "cwr3_b_fia_m113a1",
  "CUP_B_RG31_M2_OD_USA"
};
tankVehiclePool[] = {
  "CUP_B_LAV25_green",
  "CUP_B_LAV25_green",
  "CUP_B_LAV25_green",
  "CUP_B_M163_Vulcan_USA",
  "cwr3_i_m41a1",
  "cwr3_i_m41a1"
};
heliVehiclePool[] = {
};
planeVehiclePool[] = {
  "CUP_I_UH1H_gunship_TK_GUE",
  "CUP_I_UH1H_slick_TK_GUE",
  "CUP_I_UH1H_slick_TK_GUE"
};
reinforcementTruck = "CUP_B_MTVR_HIL";
reinforcementArmed = "cwr3_b_fia_m113a1";
// ------------- End Vehicle Pool -------------


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
