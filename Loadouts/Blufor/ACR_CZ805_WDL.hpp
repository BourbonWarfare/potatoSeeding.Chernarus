
#include "../undef.hpp"
#define CAMO_UNIFORM "CUP_U_B_CZ_WDL_NoKneepads","CUP_U_B_CZ_WDL_Kneepads_Gloves"
#define CAMO_VEST "CUP_V_CZ_vest04"
#define CAMO_BACKPACK "B_Battle_Belt_XL_F"
#define CARRYALL "CUP_B_ACRPara_m95"
#define CAMO_HEADGEAR "CUP_H_CZ_Helmet03","CUP_H_CZ_Helmet04"
#define CAMO_HEADGEAR_SPECIAL "CUP_H_CZ_Cap_Headphones"
#define CAMO_UNIFORM_PILOT "CUP_U_B_CZ_Pilot_WDL"
#define CAMO_VEST_PILOT "CUP_V_CZ_vest02"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "CUP_H_SPH4_visor"
#define CAMO_UNIFORM_VICC "CUP_U_B_CZ_WDL_Kneepads"
#define CAMO_VEST_VICC "CUP_V_CZ_vest02"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "CUP_H_CZ_Helmet05"
#define RIFLE "CUP_arifle_CZ805_A1_blk"
#define RIFLE_MAG "hlc_30rnd_556x45_M_G36:8","hlc_30rnd_556x45_Tracers_G36:4"
#define RIFLE_MAG_NORM "hlc_30rnd_556x45_M_G36:7","hlc_30rnd_556x45_Tracers_G36:3"
#define RIFLE_ATTACHMENTS
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "CUP_optic_AC11704_Black","CUP_optic_CompM4","CUP_optic_HoloBlack","CUP_optic_CompM2_Black","CUP_optic_TrijiconRx01_black","CUP_optic_MRad","CUP_optic_MicroT1_low","CUP_optic_MEPRO_moa_clear"
#define GLRIFLE "CUP_arifle_CZ805_GL_blk"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:6","potato_1Rnd_40mm_M433_HEDP:4"
#define GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
#define CARBINE "CUP_arifle_CZ805_A2_blk"
#define CARBINE_MAG RIFLE_MAG_NORM
#define AR "CUP_lmg_minimi_railed"
#define AR_MAG "CUP_200Rnd_TE4_Red_Tracer_556x45_M249:3"
#define AT "gm_rpg18_oli"
#define AT_MAG "gm_1Rnd_64mm_heat_pg18"
#define MMG "CUP_lmg_M240"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M:5"
#define MAT "gm_pzf84_oli"
#define MAT_MAG "gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf:3"
#define MAT_MAG2 "gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf:2"
#define MAT_OPTIC "gm_feroz2x17_pzf84_blk"
#define MAT_AUX "CUP_launch_NLAW"
#define HMG "CUP_m2_carry"
#define HMG_TRI_HI "ace_csw_m3CarryTripod"
#define HMG_TRI_LO "ace_csw_m3CarryTripodLow"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag:3"
#define HAT "CUP_TOW2_carry"
#define HAT_TRI_HI "ace_csw_m220CarryTripod"
#define HAT_TRI_LO HAT_TRI_HI
#define HAT_MAG "CUP_compats_TOW2_M"
#define SAM "CUP_launch_Igla"
#define SAM_MAG
#define SAM_MAG2
#define SNIPER "CUP_srifle_CZ750"
#define SNIPER_MAG "potato_magazine_762x51_10rnd:7","potato_magazine_762x51_10rnd_tracer_Red:3"
#define SNIPER_ATTACHMENTS "CUP_optic_LeupoldMk4","CUP_bipod_Harris_1A2_L_BLK"
#define SPOTTER RIFLE
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS "CUP_optic_Elcan_SpecterDR_black","CUP_bipod_Harris_1A2_L_BLK"
#define SMG "SMG_02_F"
#define SMG_MAG "30Rnd_9x21_Mag_SMG_02_Tracer_Red:5"
#define PISTOL "CUP_hgun_CZ75"
#define PISTOL_MAG "potato_magazine_9x19_16rnd:3"
#define PISTOL_ATTACHMENTS ""
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED

// ------------- Vehicle Pool -------------
transportVehiclePool[] = {
  "CUP_B_LR_Transport_CZ_W",
  "CUP_B_T810_Unarmed_CZ_WDL",
  "CUP_B_UAZ_Unarmed_ACR"
};
armedSoftVehiclePool[] = {
  "CUP_B_HMMWV_AGS_GPK_ACR",
  "CUP_B_HMMWV_DSHKM_GPK_ACR",
  "CUP_B_HMMWV_M2_GPK_ACR",
  "CUP_B_LR_MG_CZ_W",
  "CUP_B_LR_Special_CZ_W",
  "CUP_B_UAZ_MG_ACR",
  "CUP_B_UAZ_AGS30_ACR",
  "CUP_B_UAZ_SPG9_ACR"
};
armoredVehiclePwdool[] = {
  "CUP_B_Dingo_GL_CZ_Wdl",
  "CUP_B_Dingo_CZ_Wdl",
  "CUP_B_BRDM2_CZ",
  "CUP_B_BMP2_CZ",
  "I_APC_Wheeled_03_cannon_F"
};
tankVehiclePool[] = {
  "CUP_B_T72_CZ"
};
heliVehiclePool[] = {
  "CUP_B_Mi171Sh_ACR",
  "CUP_B_Mi35_Dynamic_CZ",
  "CUP_B_Mi17_CDF"
};
planeVehiclePool[] = {
  "CUP_B_L39_CZ",
  "FA_EMB312_AT27M35_AAF",
  "FA_EMB312_AT27_Syndicate"
};
reinforcementTruck = "CUP_B_T810_Unarmed_CZ_WDL";
reinforcementArmed = "I_APC_Wheeled_03_cannon_F";
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
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class Fic_Soldier_Carbine: rifleman {
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,BASE_GRENADES};
};
class ftl: rifleman {
  weapons[] = {GLRIFLE};
  vest[] = {"CUP_V_CZ_vest06"};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES,"CUP_PipeBomb_M"};
  items[] += {SIDE_KEY,"acex_intelitems_notepad","ACE_M26_CLACKER"};
  linkedItems[] += {BINOS};
};
class sl: ftl {
  handguns[] = {PISTOL};
  vest[] = {"CUP_V_CZ_vest08"};
  magazines[] += {PISTOL_MAG};
  handgunAttachments[] = {PISTOL_ATTACHMENTS};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR,"ACE_microDAGR"};
};
class coy: sl {
  items[] += {RADIO_LR};
};
class uav: rifleman {
  backpack[] = {SIDE_UAV_BACKPACK};
  linkedItems[] += {SIDE_UAV_TERMINAL};
};
class ar: rifleman {
  weapons[] = {AR};
  vest[] = {"CUP_V_CZ_vest12"};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
};
class aar: rifleman {
  backpackItems[] += {AR_MAG};
  vest[] = {"CUP_V_CZ_vest12"};
  linkedItems[] += {BINOS};
};
class lat: rifleman {
  magazines[] += {AT_MAG,AT_MAG};
  items[] += {AT};
  launchers[] = {AT};
};
class sm: Fic_Soldier_Carbine {
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  vest[] = {"CUP_V_CZ_vest14"};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class mmgg: ar {
  weapons[] = {MMG};
  vest[] = {"CUP_V_CZ_vest12"};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {};
  backpack[] = {CARRYALL};
};
class mmgag: Fic_Spotter {
  backpackItems[] += {MMG_MAG};
  vest[] = {"CUP_V_CZ_vest12"};
  backpack[] = {CARRYALL};
};
class matg: Fic_Soldier_Carbine {
  backpackItems[] = {};
  magazines[] += {MAT_MAG2};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
  backpack[] = {CARRYALL};
};
class matag: Fic_Spotter {
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  backpack[] = {CARRYALL};
};
class msamg: Fic_Soldier_Carbine {
  SAM_GEAR(CARRYALL, SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {
  SAM_GEAR(CARRYALL, SAM_MAG2)
};
class mtrg: Fic_Soldier_Carbine {
  MORTAR_GEAR("B_Mortar_01_weapon_F")
};
class mtrag: Fic_Spotter {
  MORTAR_GEAR("B_Mortar_01_support_F")
};
class spotter: Fic_Spotter {
  headgear[] = {CAMO_HEADGEAR_SPECIAL};
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: spotter {
  headgear[] = {CAMO_HEADGEAR_SPECIAL};
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,BASE_GRENADES};
  items[] = {TOOLS,"ACE_RangeCard"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_ATTACHMENTS};
};
class pilot {
  uniform[] = {CAMO_UNIFORM_PILOT};
  vest[] = {CAMO_VEST_PILOT};
  headgear[] = {CAMO_HEADGEAR_PILOT};
  backpack[] = {CAMO_BACKPACK_PILOT};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class vicc: Fic_Soldier_Carbine {
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
class vicd: vicc {
  backpackItems[] = {"Toolkit",RADIO_MR,SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class Fic_eng: rifleman {
  items[] += {BASE_ENG,,BASE_MEDICAL};
  backpackItems[] = {"Toolkit",RADIO_MR,SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
  backpack[] = {CARRYALL};
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
class rifleman_02: rifleman {
};
class artl: sl {
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR};
};
class artg: rifleman {
  backpackItems[] += {BASE_ARTILLERY};
};
class plm: sm {
  backpackItems[] = {PL_MEDIC_MEDICAL};
};
class cm: plm {
};
class xo: coy {
};
class plt: coy {
};
class sgt: plt {
};
class vicl: vicc {
  items[] += {RADIO_MR};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
};
class mmgl: sl {
  backpack[] = {CARRYALL};
  magazines[] += {MMG_MAG};
};
class matl: sl {
  backpack[] = {CARRYALL};
  magazines[] = {MAT_MAG2,PISTOL_MAG,RIFLE_MAG_NORM,MEDIC_GRENADES,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES,"CUP_PipeBomb_M:2"};
  launchers[] = {MAT_AUX};
};
class hmgl: sl {
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HMG_MAG};
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
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HAT_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HAT_TRI_LO};
  items[] += {BASE_MEDICAL};
};
class hatg: rifleman {
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT};
};
class hatag: rifleman {
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT_TRI_HI};
};
class msaml: sl {
  backpack[] = {CARRYALL};
  magazines[] += {SAM_MAG2};
};
class mtrl: sl {
  items[] += {BASE_ARTILLERY};
};
class helicrew: pilot {
  backpackItems[] = {"Toolkit",SIDE_KEY};
};
class cc: helicrew {
  backpackItems[] += {RADIO_MR};
};
class engl: eng {
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
  backpackItems[] += {RADIO_MR};
};
class fallback: rifleman {};