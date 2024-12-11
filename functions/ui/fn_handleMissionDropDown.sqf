#include "..\..\script_component.hpp"
/***************************************************************************//*
* Author: Lambda.Tiger
*
* Description:
* This fucntion handles combo or "drop down" menus being changed.
*
* Arguments:
* BIS onLBSelChanged EH changed
*
* Only called via callback
*//***************************************************************************/
params ["_control", "_lbCurSel", "_lbSelection"];

private _controlIDC = ctrlIDC _control;

switch (_controlIDC) do {
    case IDC_MISSION_OPERATIONTYPE: {
        private _display = ctrlParent _control;
        GVAR(menuOptions) set ["operationType", _lbCurSel];
        [_display] call FUNC(updateMenuOptions);
    };
    case IDC_MISSION_ENEMYTYPE: {
        GVAR(menuOptions) set ["enemyType", _lbCurSel];
    };
    case IDC_MISSION_DROPDOWN: {
        GVAR(menuOptions) set ["density", _lbCurSel];
    };
    default {
        diag_log formatText ["[SEED][Mission] COMBO ERROR: Invalid control IDC: %1", _controlIDC];
    };
};