// common defines

// RADIOS
#define RADIO_SR "ACRE_PRC343"
#define RADIO_MR "ACRE_PRC148"
#define RADIO_LR "ACRE_PRC117F"

// GEAR
#define BASE_MEDICAL "ACE_packingBandage:2","ACE_elasticBandage:8","ACE_tourniquet:2","ACE_splint","potato_pkblister","ACE_salineIV_500:1"
#define BASE_MEDICAL_AI "ACE_elasticBandage:2","ACE_splint","ACE_salineIV_250"
#define MEDIC_MEDICAL RADIO_MR,"ACE_packingBandage:10","ACE_elasticBandage:40","ACE_epinephrine:10","ACE_salineIV:4","ACE_salineIV_500:6","ACE_salineIV_250:8","ACE_morphine:16","ACE_tourniquet:6","ACE_splint:12","ACE_adenosine:10","potato_naloxone:10","ACE_painkillers"
#define MEDIC_MEDICAL_AI "ACE_elasticBandage:10","ACE_packingBandage:5","ACE_epinephrine:2","ACE_salineIV_500:2","ACE_salineIV_250:3","ACE_morphine:3","ACE_tourniquet:2","ACE_splint:2","ACE_adenosine:4"
#define PL_MEDIC_MEDICAL RADIO_MR,"ACE_packingBandage:30","ACE_elasticBandage:20","ACE_epinephrine:10","ACE_salineIV:10","ACE_salineIV_500:10","ACE_salineIV_250:10","ACE_morphine:16","ACE_tourniquet:6","ACE_splint:12","ACE_adenosine:10","potato_naloxone:10","ACE_painkillers"
#define BASE_TOOLS RADIO_SR,"ACE_MapTools","ACE_IR_Strobe_item:2","ACE_Flashlight_XL50","ACE_CableTie:2"
#define BASE_LEADER_TOOLS "ACE_microDAGR","acex_intelitems_notepad"
#define BASE_LINKED "ItemMap","ItemCompass","ItemWatch"
#define BASE_LEADER_LINKED "ItemGPS"
#define BASE_FRAG "HandGrenade:2"
#define BASE_SMOKES "SmokeShell:2"
#define BASE_GRENADES BASE_FRAG,BASE_SMOKES
#define LEADER_SMOKES "SmokeShell:4","SmokeShellGreen:2","SmokeShellPurple"
#define MEDIC_GRENADES "SmokeShell:6","SmokeShellPurple:2"
#define CREW_GRENADES "SmokeShell:4","SmokeShellGreen:2"
#define BASE_ENG "ACE_DefusalKit"
#define BASE_EXP "DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2","ACE_Clacker"
#define BASE_MINE "ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"
#define MINE_DETECTOR "ACE_VMM3"
#define BINOS "Binocular"
#define RANGE_FINDER "ACE_Vector"
#define BASE_BALLISTICS "ACE_ATragMX","ACE_Kestrel4500"
#define BASE_ARTILLERY "ACE_artilleryTable",BASE_BALLISTICS,"ACE_PlottingBoard","acex_intelitems_notepad","ace_marker_flags_red:15"

// OPTIX
#define WARSAW_OPTICS "rhs_acc_1p63", "rhs_acc_ekp1", "rhs_acc_ekp8_02", "rhs_acc_pkas" // note RHS and CUP mount optics differently, not cross compatible
#define STANAG_OPTICS "optic_Aco", "optic_Yorris", "rhs_acc_1p87", "rhs_acc_ekp8_18", "rhs_acc_rakursPM", "rhsusf_acc_compm4", "rhsusf_acc_eotech_xps3", "rhsusf_acc_T1_high", "CUP_optic_MRad", "CUP_optic_ZDDot"

// FUNCTIONS
#define SAM_GEAR(BACKPACK,MAG) backpack[] = {BACKPACK}; backpackItems[] = {}; magazines[] += {MAG}; items[] += {BASE_MEDICAL};
#define MORTAR_GEAR(BACKPACK) backpack[] = {BACKPACK}; items[] += {BASE_ARTILLERY};
