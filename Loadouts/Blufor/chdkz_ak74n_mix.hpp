author = "Lambda.Tiger";
description = "ChDKZ (Various)";
#include "..\undef.hpp"
#include "..\undef_side_gear.hpp"
#define SIDE_BASE_GRENADES "gm_handgrenade_frag_rgd5:3","rhs_mag_rdg2_white:2"
#define SIDE_LEADER_GRENADES SIDE_BASE_GRENADES,"rhs_mag_rdg2_white:4","gm_smokeshell_grn_gc:2","1Rnd_SmokeRed_Grenade_shell:2","1Rnd_Smoke_Grenade_shell:2","gm_smokeshell_blu_gc"
#define SIDE_FAC_GRENADES "rhs_mag_rdg2_white:2","CUP_HandGrenade_M67:2","1Rnd_SmokeBlue_Grenade_shell:4","1Rnd_SmokeYellow_Grenade_shell:3","1Rnd_SmokeOrange_Grenade_shell:3","1Rnd_SmokeGreen_Grenade_shell:5"
#define SIDE_MEDIC_GRENADES "rhs_mag_rdg2_white:6","gm_smokeshell_blu_gc:2"
#define SIDE_CREW_GRENADES "rhs_mag_rdg2_white:4","gm_smokeshell_grn_gc:2"
#define SIDE_BINOS "Binocular"
#define CAMO_UNIFORM "CUP_U_O_CHDKZ_Kam_01","CUP_U_O_CHDKZ_Kam_02","CUP_U_O_CHDKZ_Kam_03","CUP_U_O_CHDKZ_Kam_04","CUP_U_O_CHDKZ_Kam_05","CUP_U_O_CHDKZ_Kam_06","CUP_U_O_CHDKZ_Kam_07","CUP_U_O_CHDKZ_Kam_08"
#define CAMO_UNIFORM_SL "CUP_U_O_CHDKZ_Commander"
#define CAMO_UNIFORM_SNIPER "CUP_U_O_CHDKZ_Lopotev"
#define CAMO_UNIFORM_OFFICER "CUP_U_O_CHDKZ_Bardak"
#define CAMO_VEST_OFFICER "CUP_V_O_Ins_Carrier_Rig_Com"
#define CAMO_VEST_RAT "CUP_V_O_Ins_Carrier_Rig"
#define CAMO_VEST_MAT CAMO_VEST_RAT
#define CAMO_VEST_MMG "CUP_V_O_Ins_Carrier_Rig_MG"
#define CAMO_VEST_AR CAMO_VEST_RAT
#define CAMO_VEST_FTL "CUP_V_RUS_Smersh_New_Radio"
#define CAMO_VEST_MEDIC "CUP_V_O_Ins_Carrier_Rig_Light"
#define CAMO_VEST CAMO_VEST_RAT
#define CAMO_BACKPACK "CUP_B_AlicePack_Bedroll","CUP_B_AlicePack_Khaki"
#define CAMO_HEADGEAR_OFFICER "CUP_H_ChDKZ_Cap","CUP_H_ChDKZ_Cap","CUP_H_ChDKZ_Beret"
#define CAMO_HEADGEAR_MEDIC "CUP_H_ChDKZ_Cap"
#define CAMO_HEADGEAR "CUP_H_ChDKZ_Beanie","CUP_H_ChDKZ_Beanie","CUP_H_ChDKZ_Beanie","CUP_H_SLA_Helmet_OD_worn"
#define CAMO_HEADGEAR_SPECIAL CAMO_HEADGEAR
#define CARRYALL "CUP_B_AlicePack_Bedroll"
#define CARRYALL_RPG "CUP_B_RPGPack_Khaki"
#define CARRYALL_RAT CARRYALL_RPG
#define CARRYALL_AR CAMO_BACKPACK
#define CARRYALL_FTL "cwr3_b_backpack_alice"
#define CARRYALL_SL CARRYALL_FTL
#define CARRYALL_MAT "B_Carryall_oli"
#define CARRYALL_MMG CARRYALL_MAT
#define CARRYALL_HAT CARRYALL_MAT
#define CARRYALL_MEDIC CARRYALL_MAT
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_BACKPACK_VICC CAMO_BACKPACK_PILOT
#define CAMO_UNIFORM_PILOT "CUP_U_O_Pilot_01"
#define CAMO_VEST_PILOT "CUP_V_O_TK_CrewBelt"
#define CAMO_HEADGEAR_PILOT "H_Cap_headphones"
#define CAMO_UNIFORM_VICC CAMO_UNIFORM
#define CAMO_VEST_VICC "CUP_V_O_Ins_Carrier_Rig_Light"
#define CAMO_HEADGEAR_VICC "CUP_H_TK_TankerHelmet"
#define RIFLE_MAG_762 "CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_bakelite_M:3","CUP_30Rnd_762x39_AK47_bakelite_M:7"
#define RIFLE_MAG_545 "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M:3","CUP_30Rnd_545x39_AK74M_M:7"
#define RIFLE {"CUP_arifle_AKM", {RIFLE_MAG_762}},\
              {"CUP_arifle_AKS", {RIFLE_MAG_762}},\
              {"CUP_arifle_AK47", {RIFLE_MAG_762}},\
              {"CUP_arifle_AK74", {RIFLE_MAG_545}},\
              {"CUP_arifle_AK74M", {RIFLE_MAG_545}},\
              {"CUP_arifle_AK74_Early", {RIFLE_MAG_545}},\
              {"CUP_arifle_AKS74_Early", {RIFLE_MAG_545}}
#define RIFLE_OPTIC {"CUP_arifle_AKM", {RIFLE_MAG_762}},\
                    {"CUP_arifle_AKS", {RIFLE_MAG_762}},\
                    {"CUP_arifle_AK74", {RIFLE_MAG_545}}
#define RIFLE_MAG
#define RIFLE_ATTACHMENTS
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "rhs_acc_1p63","rhs_acc_ekp1","rhs_acc_ekp8_02","rhs_acc_pkas","CUP_optic_1p63"
#define GLRIFLE {"CUP_arifle_AK74_GL", {RIFLE_MAG_545}},\
{"CUP_arifle_AKM_GL", {RIFLE_MAG_762}}
#define GLRIFLE_MAG
#define GLRIFLE_MAG_SMOKE "CUP_1RND_SMOKE_GP25_M:2","CUP_1Rnd_SmokeRed_GP25_M:2"
#define GLRIFLE_MAG_HE "CUP_1Rnd_HE_GP25_M:6"
#define GLRIFLE_MAG_FLARE "CUP_IlumFlareWhite_GP25_M:4"
#define CARBINE "CUP_arifle_AKS74U"
#define AR "CUP_arifle_RPK74"
#define AR_MAG "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M:5"
#define LAT "CUP_launch_RPG26"
#define AT "CUP_launch_RPG7V"
#define AT_MAG "CUP_PG7VM_M:2","CUP_OG7_M"
#define MMG "CUP_lmg_PKM"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:5"
#define MMG_MAG_SL "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:2"
#define MAT "RPG29"
#define MAT_MAG "PG29V:2"
#define MAT_MAG3 "PG29V:2","OG29"
#define MAT_OPTIC "optic_PGO"
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
#define SNIPER "CUP_srifle_SVD"
#define SNIPER_MAG "CUP_10Rnd_762x54_SVD_M:15"
#define SNIPER_ATTACHMENTS "CUP_optic_PSO_3_open"
#define SPOTTER RIFLE_OPTIC
#define SPOTTER_MAG
#define SPOTTER_ATTACHMENTS "CUP_optic_PSO_1_AK_open"
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
rallyObject = "FlagCarrierINS";
transportVehiclePool[] = {
  "CUP_O_TT650_CHDKZ",
  "CUP_O_UAZ_Open_CHDKZ",
  "CUP_O_UAZ_Unarmed_CHDKZ",
  "CUP_O_Hilux_unarmed_CHDKZ",
  "CUP_O_Ural_CHDKZ",
  "CUP_O_Ural_Open_CHDKZ"
};
armedSoftVehiclePool[] = {
  "CUP_O_Datsun_AA_Random",
  "CUP_O_Ural_ZU23_CHDKZ",
  "CUP_O_Datsun_PK_Random",
  "CUP_O_Hilux_AGS30_CHDKZ",
  "CUP_O_Hilux_DSHKM_CHDKZ",
  "CUP_O_Hilux_igla_CHDKZ",
  "CUP_O_Hilux_metis_CHDKZ",
  "CUP_O_Hilux_SPG9_CHDKZ",
  "CUP_O_UAZ_AGS30_CHDKZ",
  "CUP_O_UAZ_MG_CHDKZ",
  "CUP_O_UAZ_METIS_CHDKZ",
  "CUP_O_UAZ_SPG9_CHDKZ",
  "gmx_chdkz_btr60pa_wdr"
};
armoredVehiclePool[] = {
  "CUP_O_BMP2_CHDKZ",
  "CUP_O_BTR80A_CHDKZ",
  "CUP_O_BTR80_CHDKZ",
  "CUP_O_MTLB_pk_ChDKZ",
  "gmx_chdkz_bmp1sp2_wdr",
  "gmx_chdkz_brdm2_wdr",
  "gmx_chdkz_btr60pb_wdr",
  "gmx_chdkz_ot64a_wdr"
};
tankVehiclePool[] = {
  "CUP_O_ZSU23_Afghan_ChDKZ",
  "CUP_O_T55_CHDKZ",
  "CUP_O_T72_CHDKZ",
  "gmx_chdkz_zsu234v1_wdr",
  "gmx_chdkz_2s1_wdr",
  "gmx_chdkz_pt76b_wdr",
  "gmx_chdkz_t55am2b_wdr"
};
heliVehiclePool[] = {
  "CUP_O_Mi8_medevac_CHDKZ",
  "gmx_chdkz_mi2urp_wdl",
  "CUP_B_MH6M_USA",
  "CUP_B_AH6M_USA",
};
planeVehiclePool[] = {
  "gmx_chdkz_l410t_wdl",
  "CUP_O_Su25_Dyn_RU"
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
    "CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_bakelite_M:6","CUP_30Rnd_762x39_AK47_bakelite_M:14",
    "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M:6","CUP_30Rnd_545x39_AK74M_M:14",
    "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M:10",
    "rhs_mag_rdg2_white:6",
    "gm_smokeshell_grn_gc:2",
    "gm_handgrenade_frag_rgd5:8",
    "CUP_1RND_SMOKE_GP25_M:4",
    "CUP_1Rnd_SmokeRed_GP25_M:2",
    "CUP_1Rnd_HE_GP25_M:6",
    "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:5",
    "CUP_PG7VM_M:4",
    "CUP_OG7_M:2"
  };
  TransportItems[] = {
    "ACE_elasticBandage:20",
    "ACE_splint:2"
  };
};
class ACE_medicalSupplyCrate {
  boxCustomName = "Medical Crate";
  boxCount = 1;
  TransportItems[] = {
    "ACE_elasticBandage:30",
    "ACE_packingBandage:10",
    "ACE_epinephrine:8",
    "ACE_morphine:8",
    "ACE_adenosine:4",
    "ACE_tourniquet:8",
    "ACE_splint:10",
    "ACE_salineIV:6",
    "ACE_salineIV_500:8",
    "ACE_salineIV_250:4",
    "potato_naloxone:4",
    "potato_pkblister:5"
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
  magazines[] = {SIDE_BASE_GRENADES,RIFLE_MAG_545};
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
  uniform[] = {CAMO_UNIFORM_SL};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  vest[] = {CAMO_VEST_OFFICER};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
  backpack[] = {CARRYALL_SL};
  headgear[] = {CAMO_HEADGEAR_OFFICER};
};
class coy: sl {
  uniform[] = {CAMO_UNIFORM_OFFICER};
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
  vest[] = {CAMO_VEST_MAT};
  magazines[] = {RIFLE_MAG,SIDE_BASE_GRENADES,AT_MAG};
  weapons[] = {RIFLE};
  backpack[] = {CARRYALL_RAT};
  launchers[] = {AT};
  secondaryAttachments[] = {"CUP_optic_PGO7V3"};
};
class sm: Fic_Soldier_Carbine {
  magazines[] = {RIFLE_MAG_545,SIDE_MEDIC_GRENADES};
  vest[] = {CAMO_VEST_MEDIC};
  backpack[] = {CARRYALL_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL};
  headgear[] = {CAMO_HEADGEAR_MEDIC};
};
class Fic_Spotter: rifleman {
  launchers[] = {};
  linkedItems[] += {RANGE_FINDER};
};
class mmgg: ar {
  weapons[] = {MMG};
  vest[] = {CAMO_VEST_MMG};
  backpack[] = {CARRYALL_MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,SIDE_BASE_GRENADES};
  attachments[] = {};
};
class mmgag: Fic_Spotter {
  vest[] = {CAMO_VEST_MMG};
  backpackItems[] += {MMG_MAG};
  backpack[] = {CARRYALL_MMG};
};
class matg: Fic_Soldier_Carbine {
  backpackItems[] = {};
  vest[] = {CAMO_VEST_MAT};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class matag: Fic_Spotter {
  vest[] = {CAMO_VEST_MAT};
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
  headgear[] = {};
  backpack[] = {"B_Battle_Belt_XL_F"};
  magazines[] = {SNIPER_MAG,SIDE_BASE_GRENADES};
  items[] = {TOOLS,"ACE_RangeCard"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_ATTACHMENTS};
  uniform[] = {CAMO_UNIFORM_SNIPER};
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
  backpack[] = {CARRYALL_MAT};
  vest[] = {CUP_V_O_SLA_M23_1_OD};
  items[] = {TOOLS,RADIO_MR};
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
  magazines[] += {MMG_MAG_SL};
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
