#include "..\..\script_component.hpp"
/***************************************************************************//*
* Author: Lambda.Tiger
*
* Description:
* Spawn a number of squads to reinforce a zone under attack. The squads are
* given some kind of vehicles, either armed or unarmed, from the
*
* Arguments:
* _marker - Zone to reinforce (STRING, default "").
* _squadSize - Number of units in reinforcing squads (SCALAR, default 10).
* _numberOfSquads - Number of squads to create (SCALAR, default 2).
* _sideReinforcement - Side reinforcements are spawned on (SIDE, default east).
* _armedVehicles - Should the reinforcement vehicles be armed (BOOL, false).
*
* Return:
* The number of patroling units spawned
*
* Example:
* ["zone_0", 10, 2, east, false] call bw_fnc_spawnReinforcemetns;
*//***************************************************************************/
params [
    ["_marker", "", [""]],
    ["_squadSize", 10, [10]],
    ["_numberOfSquads", 2, [2]],
    ["_sideReinforcement", east, [east]],
    ["_armedVehicles", false, [false]]
];

if (_marker == "" ||
    getMarkerPos _marker isEqualTo [0, 0, 0] ||
    _squadSize <= 0 ||
    _numberOfSquads <= 0) exitWith {};

// Find a list of zones that are close but not too close to anthing important
private _nearZones = [];
private _zonePos = getMarkerPos _marker;
private _allPlayers = [] call CBA_fnc_players;
for "_i" from 0 to BW_ZONE_MAX_CHECK do {
    private _zone = BW_ZONE_BASE_STRING + str _i;
    private _reinforceZonePos = getMarkerPos _zone;
    if (_reinforceZonePos isEqualTo [0, 0, 0]) then {continue};
    private _distance = _allPlayers apply {_x distance2D _reinforceZonePos};
    private _mainDistance = _reinforceZonePos distance2D _zonePos;
    if (_mainDistance < 3000 &&
        _mainDistance > 1000 &&
        selectMin _distance > 1250) then {
        _nearZones pushBack _zone;
    };
};

private _sideConfig = switch (_sideReinforcement) do {
    case east: {"potato_e"};
    case west: {"potato_w"};
    case resistance: {"potato_i"};
    case civilian: {"CIV_F"};
    default {"potato_e"};
};
private _vehicleType = if (_armedVehicles) then {
    getText (missionConfigFile >> "CfgLoadouts" >> _sideConfig >> "reinforcementArmed");
} else {
    getText (missionConfigFile >> "CfgLoadouts" >> _sideConfig >> "reinforcementTruck");
};

if (_nearZones isEqualTo [] || _vehicleType == "") exitWith {
    diag_log formatText ["[SEED][REINFORCE] Could not find any suitable reinforcement zone or vehicle (%2) near %1", _marker, str _vehicleType];
};
private _reinforcementZone = selectRandom _nearZones;

private _roads = (getMarkerPos _reinforcementZone) nearRoads 75;
_roads = _roads select {_x inArea _reinforcementZone};

for "_i" from 1 to _numberOfSquads do {
    private _road = selectRandom _roads;
    private _posATL = getPosATL _road;
    private _vic = createVehicle [_vehicleType, _posATL, [], 0, "NONE"];
    (getRoadInfo _road) params ["", "", "", "", "", "", "_begPos", "_endPos"];
    _vic setDir (_endPos getDir _begPos);
    [[_marker, _squadSize, _vic, _sideReinforcement, _armedVehicles],
    QFUNC(spawnReinforcementSquad)] call potato_zeusHC_fnc_hcPassthrough;
};
