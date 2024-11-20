#include "..\..\script_component.hpp"
/***************************************************************************//*
* Author: Lambda.Tiger
*
* Description:
* Spawn a reinforcement squad, and put them in a given vehicle.
*
* Arguments:
* _marker - Zone to reinforce (STRING, default "").
* _squadSize - Number of units in reinforcing squads (SCALAR, default 10).
* _vic -  (SCALAR, default 2).
* _sideReinforcement - Side reinforcements are spawned on (SIDE, default east).
* _armedVehicles - Should the reinforcement vehicles be armed (BOOL, false).
* _group - The group units are spawned into. Should not be passed, used for recursion (GROUP).
*
* Return:
* The number of patroling units spawned
*
* Example:
* ["zone_0", 3, 10, east] call bw_fnc_spawnReinforementSquad;
*//***************************************************************************/
diag_log text str _this;
params [
    ["_marker", "", [""]],
    ["_squadSize", 10, [10]],
    ["_vic", objNull, [objNull]],
    ["_sideReinforcement", east, [east]],
    ["_armedVehicles", false, [false]],
    ["_group", grpNull, [grpNull]]
];

if (_marker == "" ||
    _markerPos isEqualTo [0, 0, 0] ||
    _squadSize <= 0) exitWith {};
if (isNull _group) then {
    _group = createGroup [_sideReinforcement, true];
};
if !(local _group) exitWith {
    [_this] remoteExecCall [QFUNC(spawnReinforementSquad), _group];
};
// Choose the unit type
private _type = switch (_squadSize mod 6) do {
    case 0: {selectRandom ["_ftl", "_ftl", "_sl"]};
    case 2: {selectRandom ["_rifleman", "_rifleman", "_lat"]};
    case 3: {selectRandom ["_ar", "_ar", "_ar",  "_ar", "_mmgg"]};
    case 4: {selectRandom ["_sm", "_rifleman_02"]};
    default {selectRandom ["_rifleman", "_rifleman_03", "_rifleman_04"]};
};
private _sideType = switch (_sideReinforcement) do {
    case east: {"e"};
    case west: {"w"};
    case resistance: {"i"};
    default {"e"};
};
private _unit = _group createUnit ["potato_" + _sideType + _type, BW_UNIT_SPAWN_POS, [], 0, "NONE"];

_squadSize = _squadSize - 1;

if (_squadSize == 0) then {
    _group selectLeader _unit;
};

if (_squadSize > 0) then { // recurse
    [{_this call FUNC(spawnReinforcementSquad)},
        [_marker, _squadSize, _vic, _sideReinforcement, _armedVehicles, _group],
        potato_zeusHC_delayBetweenUnitCreation * (1 + random 1)] call CBA_fnc_waitAndExecute;
} else { // it's waypoint time
    private _movePos = getPosATL _vic;
    private _markerPos = getMarkerPos _marker;
    private _wpRadius = (random 20) + vectorMagnitude getMarkerSize _marker;
    _vic setUnloadInCombat [false, false];
    private _wp = _group addWaypoint [_movePos, 0];
    _wp setWaypointType "GETIN";
    _wp waypointAttachObject _vic;
    _wp = _group addWaypoint [_markerPos, 10];
    {
        _x setVehiclePosition [_movePos, [], 10, "NONE"];
    } forEach units _group;
    if (_armedVehicles) then {
        _wp setWaypointType "TR UNLOAD";
    } else {
        _wp setWaypointCompletionRadius 1.1 * _wpRadius;
        _wp = _group addWaypoint [_markerPos, 10];
        _wp setWaypointType "GETOUT";
    };
    _wp setWaypointCompletionRadius _wpRadius;
    _wp = _group addWaypoint [_markerPos, 10];
    // ignore my shame, but I refuse to write another function for this
    _wp setWaypointStatements [
        "true",
        "private _vic = vehicle this; private _units = ((units group this) - [driver _vic, gunner _vic]); _vic setUnloadInCombat [true, false]; {unassignVehicle _x; _x leaveVehicle _vic} forEach _units; _units allowGetIn false;"
    ];
    _wp setWaypointType "SAD";
    _wp setWaypointCompletionRadius _wpRadius;
    _group setVariable ["lambs_danger_disableGroupAI", true];
    [{
        params ["_vic", "_lastPos", "_group", "_goalPos"];
        if (_vic distance2D _lastPos < 50) exitWith {
            deleteVehicleCrew _vic;
            deleteVehicle _vic;
        };
        if (isNull objectParent leader _group &&
            _goalPos distance leader _group > 1500) then {
            {deleteVehicle _x} forEach units _group;
            deleteVehicle _vic;
        };
    }, [_vic, _movePos, _group, _markerPos], 120] call CBA_fnc_waitAndExecute;
};
