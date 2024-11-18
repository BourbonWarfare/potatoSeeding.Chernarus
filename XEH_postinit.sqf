#include "script_component.hpp"

for "_i" from 0 to BW_MOUT_MAX_CHECK do {
    private _mark = "moutPos_" + (str _i);
    if ((getMarkerPos _mark) isEqualTo [0, 0, 0]) exitWith {};
    _mark setMarkerAlphaLocal 0;
};
for "_i" from 0 to BW_ZONE_MAX_CHECK do {
    private _mark = BW_ZONE_BASE_STRING + (str _i);
    if ((getMarkerPos _mark) isEqualTo [0, 0, 0]) exitWith {};
    _mark setMarkerAlphaLocal 0;
};

private _action = [
    "tpUnit",
    "Teleport to flag",
    "\a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\map_ca.paa", {
        openMap [true, false];
        ["MapTeleport"] call BIS_fnc_showNotification;
        _player setVariable [QGVAR(mapClickWindow), CBA_missionTime + 20];
        GVAR(safeStartTPClickEH) = addMissionEventHandler ["MapSingleClick", {
            _this call FUNC(teleportUnitHandle);
        }];
    },
    {(_player nearObjects ["Flag_US_F", 6]) isNotEqualTo []}
] call ace_interact_menu_fnc_createAction;
[
    "CAManBase",
    1,
    ["ACE_SelfActions"],
    _action,
    true
] call ace_interact_menu_fnc_addActionToClass;

private _action = [
    "InitTasks",
    "Open Mission Menu",
    "\A3\ui_f\data\map\mapcontrol\taskIcon_ca.paa", {
        createDialog "RscMissionSelectMenu";
    },
    {true}
] call ace_interact_menu_fnc_createAction;
[
    "CAManBase",
    1,
    ["ACE_SelfActions"],
    _action,
    true
] call ace_interact_menu_fnc_addActionToClass;

