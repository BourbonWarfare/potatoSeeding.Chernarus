#include "..\..\script_component.hpp"
/***************************************************************************//*
* Author: Lambda.Tiger
*
* Description:
* This function handles opening the GRAD mission with only specific
* vehicle types
*
* Arguments:
* Action Params
*
* Return:
* None
*
* Example:
* [] call bw_fnc_gradVicHandle;
*//***************************************************************************/
if (((_player nearEntities ["CAManBase", 400]) select {
        alive _x &&
        (side _x == east ||
        side _x == resistance)
        }) isNotEqualTo []) exitWith {
    ["Notif_Picture", [
        "Failed to Open Menu",
        "Enemy within 400 meters, you may not manage vehicles.",
        "\a3\ui_f\data\igui\cfg\actions\returnflag_ca.paa"
    ]] call BIS_fnc_showNotification;
};
private _centerPos = getPosATL _player;
private _spawnPositions = flatten ([_centerPos] call FUNC(findRoadPos));
private _heliSpawns = _centerPos nearObjects [SPAWN_HELI_OBJ, 100];
private _plansSpawns = _centerPos nearObjects [SPAWN_PLANE_OBJ, 100];
if (_spawnPositions isEqualTo [0, 0, 0, 0] &&
    _heliSpawns isEqualTo [] &&
    _plansSpawns isEqualTo []) exitWith {
    ["Notif_Picture", [
        "No Nearby Flag",
        "Flag must be within 100m of a road or vehicle spawn to spawn a vehicle.",
        "\a3\ui_f\data\igui\cfg\actions\returnflag_ca.paa"
    ]] call BIS_fnc_showNotification;
};
private _vehicles = [];
_spawnPositions = [_spawnPositions, _spawnPositions];
if (_spawnPositions isNotEqualTo [0, 0, 0, 0]) then {
    _vehicles = SPAWN_LAND_VEHICLE_ARRAY;
};
if (_spawnPositions isNotEqualTo [0, 0, 0, 0]) then {
    _vehicles = _vehicles + SPAWN_APCIFV_VEHICLE_ARRAY;
};
if (_spawnPositions isNotEqualTo [0, 0, 0, 0]) then {
    _vehicles = _vehicles + SPAWN_TANK_VEHICLE_ARRAY;
};
if (_heliSpawns isNotEqualTo []) then {
    private _finalHeli = selectRandom _heliSpawns;
    _spawnPositions pushBack ((getPosATL  _finalHeli) + [getDir _finalHeli]);
    _vehicles = _vehicles + SPAWN_HELI_VEHICLE_ARRAY;
};
if (_plansSpawns isNotEqualTo []) then {
    private _finalPlane = selectRandom _plansSpawns;
    _spawnPositions pushBack ((getPosATL _finalPlane) + [getDir _finalPlane]);
    _vehicles = _vehicles + SPAWN_PLANE_VEHICLE_ARRAY;
};

[{
    _this spawn grad_vehicleSpawner_fnc_openDialog;
}, [_vehicles,_spawnPositions]] call CBA_fnc_execNextFrame;
