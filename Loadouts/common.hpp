// common defines

// RADIOS
#define RADIO_SR "ACRE_PRC343"
#define RADIO_MR "ACRE_PRC148"
#define RADIO_LR "ACRE_PRC117F"

// GEAR
#define BASE_MEDICAL "ACE_elasticBandage:4","ACE_packingBandage:2","ACE_tourniquet:2","ACE_splint","ACE_salineIV_250:2"
#define MEDIC_MEDICAL RADIO_MR,"ACE_elasticBandage:25","ACE_packingBandage:15","ACE_epinephrine:10","ACE_salineIV:2","ACE_salineIV_500:4","ACE_salineIV_250:8","ACE_morphine:16","ACE_tourniquet:6","ACE_splint:12","ACE_adenosine:10"
#define PL_MEDIC_MEDICAL RADIO_MR,"ACE_elasticBandage:15","ACE_packingBandage:10","ACE_epinephrine:10","ACE_salineIV:8","ACE_salineIV_500:8","ACE_salineIV_250:8","ACE_morphine:5","ACE_tourniquet:3","ACE_splint:6","ACE_adenosine:10"
#define BASE_TOOLS RADIO_SR,"ACE_MapTools","ACE_IR_Strobe_item:2","ACE_Flashlight_KSF1","ACE_CableTie:2"
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
#define BASE_ARTILLERY "ACE_artilleryTable",BASE_BALLISTICS

// OPTIX
#define WARSAW_OPTICS "CUP_optic_1p63", "rhs_acc_ekp8_02", "CUP_optic_Kobra", "rhs_acc_okp7_dovetail", "rhs_acc_pkas" // RHS and CUP optics now compatible
#define STANAG_OPTICS "optic_Aco", "ptv_compm4s", "CUP_optic_MicroT1", "ptv_rmr", "CUP_optic_Eotech553_Black", "ptv_xps3", "CUP_optic_ZDDot", "CUP_optic_MRad"
//These are alternate optics that kinda suck, but are unique
#define BAD_OPTICS "rhs_acc_rakursPM", "rhs_acc_1p87", "CUP_optic_AC11704_Black", "CUP_optic_MARS", "CUP_optic_MEPRO", "CUP_optic_TrijiconRx01_black", "CUP_optic_ZeissZPoint"

// FUNCTIONS
#define SAM_GEAR(BACKPACK,MAG) backpack[] = {BACKPACK}; backpackItems[] = {}; magazines[] += {MAG}; items[] += {BASE_MEDICAL};
#define MORTAR_GEAR(BACKPACK) backpack[] = {BACKPACK}; items[] += {BASE_ARTILLERY};
