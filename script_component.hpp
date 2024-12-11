#include "script_macros.hpp"

#define BW_MAP_CLICK_HOLD_OFF 0.25
#define BW_TP_FLAG_TYPE "Flag_US_F"
#define BW_UNIT_SPAWN_POS [14193, 14388, 0]
#define BW_IGNORE_GARRISON_BUILDINGS ["land_nav_pier_m_1","land_nav_pier_M_fuel","land_nav_pier_c_big","land_nav_pier_m_end","Land_Wall_CBrk_5_D", "Land_Wall_CGry_5_D", "Land_Stanek_1", "Land_Stanek_1B", "Misc_Cargo1Bo_civil", "Misc_Cargo1Bo_military"]

#define BW_FADE_CONTROL(display,var1,idc) var1 = display displayCtrl idc;\
var1 ctrlSetFade 0.8;\
var1 ctrlCommit 0.4
#define BW_DEFADE_CONTROL(display,var1,idc) var1 = display displayCtrl idc;\
var1 ctrlSetFade 0;\
var1 ctrlCommit 0.4
#define BW_MISSION_SET_DROPDOWN_DENSITY(display,control) control = display displayCtrl IDC_MISSION_DROPDOWN;\
control lbSetText [BW_TRAINING_DENSITY_RANDOM, "Random"];\
control lbSetText [BW_TRAINING_DENSITY_UNIFORM, "Uniform"];\
control lbSetText [BW_TRAINING_DENSITY_SINGLE, "Single Center"];\
control lbSetText [BW_TRAINING_DENSITY_SINGLEMARKED, "Single Center (Marked)"];\
control lbSetText [BW_TRAINING_DENSITY_MULTI, "Multiple Centers - Best for larger zones"];\
control lbSetText [BW_TRAINING_DENSITY_MULTIMARKED, "Multiple Centers (Marked) - Best for larger zones"]
#define BW_MISSION_SET_DROPDOWN_DENSITY_TEXT(display,control) control = display displayCtrl IDC_MISSION_DROPDOWN_TEXT;\
control ctrlSetText "Enemy Dispersion"
#define BW_MISSION_SET_DROPDOWN_DRAWTYPE(display,control) control = display displayCtrl IDC_MISSION_DROPDOWN;\
control lbSetText [BW_TRAINING_DENSITY_RANDOM, "Circle - Center-Radius"];\
control lbSetText [BW_TRAINING_DENSITY_UNIFORM, "Ellipse - Corner-Corner"];\
control lbSetText [BW_TRAINING_DENSITY_SINGLE, "Ellipse - Center-Corner"];\
control lbSetText [BW_TRAINING_DENSITY_SINGLEMARKED, "Rectangle - Center-Corner"];\
control lbSetText [BW_TRAINING_DENSITY_MULTI, "Rectangle - Corner-Corner"];\
control lbSetText [BW_TRAINING_DENSITY_MULTIMARKED, "-"]
#define BW_MISSION_SET_DROPDOWN_DRAWTYPE_TEXT(display,control) control = display displayCtrl IDC_MISSION_DROPDOWN_TEXT;\
control ctrlSetText "Zone Draw Method"

/// Menu defines
// IDD Define
#define IDD_MISSION_MENU 2024110719

// IDCs numbers
#define IDC_MISSION_OPERATIONTYPE 900
#define IDC_MISSION_ENEMYTYPE 901
#define IDC_MISSION_MAP 1200
#define IDC_MISSION_AISKILLMIN 902
#define IDC_MISSION_AISKILLMAX 903
#define IDC_MISSION_DROPDOWN  904
#define IDC_MISSION_DROPDOWN_TEXT  804
#define IDC_MISSION_OPTION0 905
#define IDC_MISSION_OPTION0_TEXT 805
#define IDC_MISSION_OPTION1 906
#define IDC_MISSION_OPTION1_TEXT 806
#define IDC_MISSION_OPTION2 907
#define IDC_MISSION_OPTION2_TEXT 807
#define IDC_MISSION_OPTION3 908
#define IDC_MISSION_OPTION3_TEXT 808
#define IDC_MISSION_OPTION4 909
#define IDC_MISSION_OPTION4_TEXT 809
#define IDC_MISSION_OPTION5 910
#define IDC_MISSION_OPTION5_TEXT 810
#define IDC_MISSION_OPTION6 911
#define IDC_MISSION_OPTION6_TEXT 811

// Spawn Zones
#define BW_MOUT_MAX_CHECK 15
#define BW_ZONE_MAX_CHECK 255
#define BW_ZONE_BASE_STRING "clearableZone_"

// Operation Types
#define BW_TRAINING_OPERATION_MOUT 0
#define BW_TRAINING_OPERATION_ZONE 1
#define BW_TRAINING_OPERATION_ZONE_DRAW 2
#define BW_TRAINING_OPERATION_MECH 3

// Enemy Types
#define BW_TRAINING_ENEMY_OPFOR 0
#define BW_TRAINING_ENEMY_INDY  1

// Enemy Density
#define BW_TRAINING_DENSITY_RANDOM 0
#define BW_TRAINING_DENSITY_UNIFORM 1
#define BW_TRAINING_DENSITY_SINGLE 2
#define BW_TRAINING_DENSITY_SINGLEMARKED 3
#define BW_TRAINING_DENSITY_MULTI 4
#define BW_TRAINING_DENSITY_MULTIMARKED 5

// Menu Hash accessors
#define GET_MENU_OPTION(var1) (GVAR(menuOptions) get QUOTE(var1))
#define SET_MENU_OPTION(var1,var2) (GVAR(menuOptions) set [ARR_2(QUOTE(var1),var2)])
