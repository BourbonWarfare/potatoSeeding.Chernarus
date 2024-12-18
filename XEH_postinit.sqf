#include "script_component.hpp"

if (isServer) then {
    [] call FUNC(autoEndSession);
    [missionNameSpace, getPosATL flag_neaf] call BIS_fnc_addRespawnPosition;
};

addMissionEventHandler ["EntityCreated", {
	params ["_object"];
    if !(local _object && {(_object isKindOf BW_TP_FLAG_TYPE)}) exitWith {};
    private _pos = getPosATL _object;
    // create a user moveable marker that should delete itself when the flag goes away
    private _mk = createMarkerLocal ["_USER_DEFINED flag_" + (getPlayerID player) + str time, _pos];
    _mk setMarkerColorLocal "colorBLUFOR";
    _mk setMarkerTextLocal "TP Flag";
    _mk setMarkerType "mil_triangle";
    _object setVariable [QGVAR(attachedMarker), _mk, true];
    // respawn position
    private _respawnIndex = [missionNameSpace, _object] call BIS_fnc_addRespawnPosition;
    _object setVariable [QGVAR(respawnIndex), _respawnIndex, true];
}];

if !(hasInterface) exitWith {};

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

[{
    ["Info_Picture", [
        "Mission Info",
        text "<t color='#FFC000'>ACE self-interact</t> at any US flag pole to access the mission menu.",
        "\z\ace\addons\interaction\ui\Icon_Module_Interaction_ca.paa"
    ]] call BIS_fnc_showNotification;
}, [], 15] call CBA_fnc_waitAndExecute;

private _action = [
    "PotatoSeedActions",
    "Mission Actions",
    "\A3\ui_f\data\map\markers\military\flag_CA.paa", {},
    {(_player nearObjects [BW_TP_FLAG_TYPE, BW_TP_FLAG_DIST]) isNotEqualTo []}
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

_action = [
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

_action = [
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

_action = [
    "resetGear",
    "Reset Gear",
    "\a3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa", {
        [PGVAR(adminMenu,resetGear), [_player], [_player]] call CBA_fnc_localEvent;
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

_action = [
    "PotatoDeleteRally",
    "Delete Rally Flag",
    "\a3\ui_f\data\igui\cfg\actions\returnflag_ca.paa", {
        private _flags = _player nearObjects [BW_TP_FLAG_TYPE, BW_TP_FLAG_DIST];
        if (_flags isEqualTo []) exitWith {};
        private _flag = _flags#0;
        private _flagMarker = _flag getVariable [QGVAR(attachedMarker), ""];
        if (_flagMarker == "")  exitWith {
            ["Notif_Picture", [
                "Cannot Delete Flag",
                "Current flag is not a placed rally point.",
                "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_exit_cross_ca.paa"
            ]] call BIS_fnc_showNotification;
        };
        private _flagIndex = _flag getVariable [QGVAR(respawnIndex), []];
        if (_flagIndex isNotEqualTo []) then {
            _flagIndex call BIS_fnc_removeRespawnPosition;
        };
        deleteMarker _flagMarker;
        deleteVehicle _flag;
    },
    {leader _player == _player}
] call ace_interact_menu_fnc_createAction;
[
    "potato_w_rifleman",
    1,
    ["ACE_SelfActions", "PotatoSeedActions"],
    _action,
    true
] call ace_interact_menu_fnc_addActionToClass;

_action = [
    "PotatoRally",
    "Place Rally Flag",
    "\a3\ui_f\data\igui\cfg\actions\takeflag_ca.paa", {
        if ((_player nearObjects [BW_TP_FLAG_TYPE, 100]) isNotEqualTo []) exitWith {
            ["Notif_Picture", [
                "Failed to Plant Flag",
                "You are currently too close to another flag to place a new one.",
                "\a3\ui_f\data\igui\cfg\actions\returnflag_ca.paa"
            ]] call BIS_fnc_showNotification;
        };
        private _pos = getPosATL _player;
        createVehicle [BW_TP_FLAG_TYPE, _pos, [], 0, "NONE"];
    },
    {leader _player == _player}
] call ace_interact_menu_fnc_createAction;
[
    "CAManBase",
    1,
    ["ACE_SelfActions"],
    _action,
    true
] call ace_interact_menu_fnc_addActionToClass;

