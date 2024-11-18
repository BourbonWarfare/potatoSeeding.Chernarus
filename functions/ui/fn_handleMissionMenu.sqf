#include "..\..\script_component.hpp"
/***************************************************************************//*
* Author: Lambda.Tiger
*
* Description:
* This fucntion handles opening and closing the mission menu.
*
* Arguments:
* _isClosing - True if dialog is closing
* _eventArgs - Array of arguments depending on state
*
* Only called via callback
*//***************************************************************************/
params ["_isClosing", "_eventArgs"];

if (_isClosing) then {
    _eventArgs params ["_display", ["_exitCode", 0]];
    if (GVAR(mainMenuMapClickEH) >= 0) then {
        removeMissionEventHandler ["MapSingleClick", GVAR(mainMenuMapClickEH)];
        GVAR(mainMenuMapClickEH) = -1;
    };
    for "_i" from 0 to BW_ZONE_MAX_CHECK do {
        private _mark = BW_ZONE_BASE_STRING + (str _i);
        if ((getMarkerPos _mark) isEqualTo [0, 0, 0]) exitWith {};
        _mark setMarkerAlphaLocal 0;
    };
    if (_exitCode != 1) exitWith {};
    if (GVAR(selectedZone) != "" ||
        GET_MENU_OPTION(operationType) == BW_TRAINING_OPERATION_MOUT) then {
        [GVAR(selectedZone), GVAR(menuOptions)] remoteExecCall [QFUNC(handleMissionInit), 2];
    } else {
        systemChat "Failed to initialize mission";
    };
    GVAR(selectedZone) = "";
} else {
    _eventArgs params ["_display"];
    [_display] call FUNC(updateMenuOptions);
};
