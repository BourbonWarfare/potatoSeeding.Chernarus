#include "script_component.hpp"

setViewDistance 4000;

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
"uelzenMOUTMarker" setMarkerDrawPriority 1;

for "_i" from 0 to BW_MOUT_MAX_CHECK do {
    private _mark = BW_MOUT_BASE_STRING + (str _i);
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
        text "<t color='#FFC000'>ACE self-interact</t> at any Rally Point to access the mission menu.",
        "\z\ace\addons\interaction\ui\Icon_Module_Interaction_ca.paa"
    ]] call BIS_fnc_showNotification;
}, [], 15] call CBA_fnc_waitAndExecute;

private _action = [
    "PotatoSeedActions",
    "Mission Actions",
    "\A3\ui_f\data\map\markers\military\flag_CA.paa", {},
    {
        params ["_player"];
        if ((_player nearObjects [BW_TP_FLAG_TYPE, BW_TP_FLAG_DIST]) isNotEqualTo []) then {
            _player setVariable [QPGVAR(assignGear,changeOpticsTimeLimit), CBA_missionTime + 10];
            true
        } else {
            false
        }
    }
] call ACEFUNC(interact_menu,createAction);
[
    "CAManBase", 1,
    ["ACE_SelfActions"],
    _action,
    true
] call ACEFUNC(interact_menu,addActionToClass);

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
] call ACEFUNC(interact_menu,createAction);
[
    "CAManBase", 1,
    ["ACE_SelfActions", "PotatoSeedActions"],
    _action,
    true
] call ACEFUNC(interact_menu,addActionToClass);

_action = [
    "InitTasks",
    "Open Mission Menu",
    "\A3\ui_f\data\map\mapcontrol\taskIcon_ca.paa", {
        createDialog "RscMissionSelectMenu";
    },
    {true}
] call ACEFUNC(interact_menu,createAction);
[
    "CAManBase", 1,
    ["ACE_SelfActions", "PotatoSeedActions"],
    _action,
    true
] call ACEFUNC(interact_menu,addActionToClass);

_action = [
    "fullHeal",
    "Full Heal",
    "\a3\ui_f\data\igui\cfg\simpletasks\types\Heal_ca.paa", {
        [_player, _player] call ace_medical_treatment_fnc_fullHeal;
    },
    {true}
] call ACEFUNC(interact_menu,createAction);
[
    "CAManBase", 1,
    ["ACE_SelfActions", "PotatoSeedActions"],
    _action,
    true
] call ACEFUNC(interact_menu,addActionToClass);

_action = [
    "resetGear",
    "Reset Gear",
    "\a3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa", {
        [_player] call PFUNC(assignGear,assignGearMan);
    },
    {true}
] call ACEFUNC(interact_menu,createAction);
[
    "CAManBase", 1,
    ["ACE_SelfActions", "PotatoSeedActions"],
    _action,
    true
] call ACEFUNC(interact_menu,addActionToClass);
_action = [
    "PotatoAddRally",
    "Place Rally Flag",
    "\a3\ui_f\data\igui\cfg\actions\takeflag_ca.paa", {
        if ((_player nearObjects [BW_TP_FLAG_TYPE, 175]) isNotEqualTo []) exitWith {
            ["Notif_Picture", [
                "Failed to Create Rally",
                "You are currently too close to another rally to place a new one.",
                "\a3\ui_f\data\igui\cfg\actions\returnflag_ca.paa"
            ]] call BIS_fnc_showNotification;
        };
        if (((_player nearEntities ["CAManBase", 200]) select {
                alive _x &&
                 (side _x == east ||
                 side _x == resistance)
                 }) isNotEqualTo []  &&
                {_player nearObjects [BW_TP_FLAG_TYPE, 1000] isNotEqualTo []}) exitWith {
            ["Notif_Picture", [
                "Failed to Create Rally",
                "Enemy within 200 meters, you may not place a Rally.",
                "\a3\ui_f\data\igui\cfg\actions\returnflag_ca.paa"
            ]] call BIS_fnc_showNotification;
        };
        private _pos = getPosATL _player;
        private _flag = createVehicle [BW_TP_FLAG_TYPE, _pos, [], 0, "NONE"];
        [_flag, true] remoteExecCall ["enableDynamicSimulation", 0, true];
    },
    {leader _player == _player}
] call ACEFUNC(interact_menu,createAction);
[
    "CAManBase", 1,
    ["ACE_SelfActions"],
    _action,
    true
] call ACEFUNC(interact_menu,addActionToClass);

if (GVAR(enableGRADMode) > 0 && getMissionConfigValue ["allowGRADFromFlag", 0] == 1) then {
    _action = [
        "PotatoGRADVehicle",
        "Vehicle Spawner",
        "\a3\ui_f\data\gui\rsc\rscdisplayarsenal\spacegarage_ca.paa", {
            call FUNC(gradVicHandle)
        }, {true}
    ] call ACEFUNC(interact_menu,createAction);
    [
        "CAManBase", 1,
        ["ACE_SelfActions", "PotatoSeedActions"],
        _action,
        true
    ] call ACEFUNC(interact_menu,addActionToClass);
};
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
] call ACEFUNC(interact_menu,createAction);
[
    "CAManBase", 1,
    ["ACE_SelfActions", "PotatoSeedActions"],
    _action,
    true
] call ACEFUNC(interact_menu,addActionToClass);
