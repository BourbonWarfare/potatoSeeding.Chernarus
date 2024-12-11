#include "script_component.hpp"

if (isServer) then {
    [] call FUNC(autoEndSession);
};

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

addMissionEventHandler ["EntityCreated", {
	params ["_object"];
    if !(local _object || {!_object isKindOf BW_TP_FLAG_TYPE}) exitWith {};
    private _pos = getPosATL _object;
    // create a user moveable marker that should delete itself when the flag goes away
    private _mk = createMarkerLocal ["_USER_DEFINED flag_" + (getPlayerID player) + str time, _pos];
    _mk setMarkerColorLocal "colorBLUFOR";
    _mk setMarkerTextLocal "TP Flag";
    _mk setMarkerType "mil_triangle";
    _object setVariable [QGVAR(attachedMarker), _mk];
    _object addEventHandler ["Deleted", {
	    params ["_object"];
        deleteMarker (_object getVariable [QGVAR(attachedMarker), ""]);
    }];
}];

if !(hasInterface) exitWith {};

[{
    ["Info", [
        "Mission Info",
        text "<t color='#ff0000'>ACE self-interact</t> at any US flag pole to access the mission menu."
    ]] call BIS_fnc_showNotification;
}, [], 15] call CBA_fnc_waitAndExecute;

private _action = [
    "PotatoSeedActions",
    "Mission Actions",
    "\A3\ui_f\data\map\markers\military\flag_CA.paa", {},
    {(_player nearObjects ["Flag_US_F", 8.5]) isNotEqualTo []}
] call ace_interact_menu_fnc_createAction;
[
    "potato_w_rifleman",
    1,
    ["ACE_SelfActions"],
    _action,
    true
] call ace_interact_menu_fnc_addActionToClass;

_action = [
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
    {true}
] call ace_interact_menu_fnc_createAction;
[
    "potato_w_rifleman",
    1,
    ["ACE_SelfActions", "PotatoSeedActions"],
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
    "potato_w_rifleman",
    1,
    ["ACE_SelfActions", "PotatoSeedActions"],
    _action,
    true
] call ace_interact_menu_fnc_addActionToClass;

private _action = [
    "fullHeal",
    "Full Heal",
    "\a3\ui_f\data\igui\cfg\simpletasks\types\Heal_ca.paa", {
        [_player, _player] call ace_medical_treatment_fnc_fullHeal;
    },
    {true}
] call ace_interact_menu_fnc_createAction;
[
    "potato_w_rifleman",
    1,
    ["ACE_SelfActions", "PotatoSeedActions"],
    _action,
    true
] call ace_interact_menu_fnc_addActionToClass;

private _action = [
    "resetGear",
    "Reset Gear",
    "\a3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa", {
        ["potato_adminMenu_resetGear", [_player], [_player]] call CBA_fnc_localEvent;
    },
    {true}
] call ace_interact_menu_fnc_createAction;
[
    "potato_w_rifleman",
    1,
    ["ACE_SelfActions", "PotatoSeedActions"],
    _action,
    true
] call ace_interact_menu_fnc_addActionToClass;
