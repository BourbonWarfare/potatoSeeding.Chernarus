#include "..\..\script_component.hpp"
/***************************************************************************//*
* Author: Lambda.Tiger
*
* Description:
* This fucntion handles sliders in the mission menu changing.
*
* Arguments:
* BIS onSliderPosChanged EH arguments
*
* Only called via callback
*//***************************************************************************/
params ["_control", "_newValue"];
private _controlIDC = ctrlIDC _control;

switch (_controlIDC) do {
    case IDC_MISSION_AISKILLMIN: {
        private _aiSkillMax = GVAR(menuOptions) getOrDefault ["AIskillMax", _newValue];
        _newValue = _newValue min _aiSkillMax;
        GVAR(menuOptions) set ["AIskillMin", _newValue];
    };
    case IDC_MISSION_AISKILLMAX: {
        private _aiSkillMin = GVAR(menuOptions) getOrDefault ["AIskillMin", _newValue];
        _newValue = _newValue max _aiSkillMin;
        GVAR(menuOptions) set ["AIskillMax", _newValue];
    };
    case IDC_MISSION_OPTION0: {
        private _control = (ctrlParent _control) displayCtrl IDC_MISSION_OPTION0_TEXT;
        _control ctrlSetText format ["Min Units Per Building: %1", round (4 * _newValue)];
        GVAR(menuOptions) set ["option0", _newValue];
    };
    case IDC_MISSION_OPTION1: {
        private _control = (ctrlParent _control) displayCtrl IDC_MISSION_OPTION1_TEXT;
        _control ctrlSetText format ["Max Units: %1", round (BW_AI_MAX_SPAWN * _newValue)];
        GVAR(menuOptions) set ["option1", _newValue];
    };
    case IDC_MISSION_OPTION2: {
        GVAR(menuOptions) set ["option2", _newValue];
    };
    case IDC_MISSION_OPTION3: {
        GVAR(menuOptions) set ["option3", _newValue];
    };
    case IDC_MISSION_OPTION4: {
        GVAR(menuOptions) set ["option4", _newValue];
    };
    case IDC_MISSION_OPTION5: {
        GVAR(menuOptions) set ["option5", _newValue];
    };
    case IDC_MISSION_OPTION6: {
        GVAR(menuOptions) set ["option6", _newValue];
    };
    default {
        diag_log formatText ["[SEED][Mission] SLIDER ERROR: Invalid control IDC: %1", _controlIDC];
    };
};
