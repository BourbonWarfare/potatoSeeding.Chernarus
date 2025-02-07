#include "..\..\script_component.hpp"
/***************************************************************************//*
* Author: Lambda.Tiger
*
* Description:
* This handles calling reinforcements when a zone hits 60% of it's pop.
*
* Arguments:
* none
*
* Return:
* none
*
* Example:
* [] call bw_fnc_handleSectorReinforce;
*//***************************************************************************/
if (GVAR(reinforceHashMap) isEqualTo createHashMap) exitWith {};

private _entriesToRemove = [];
{
    private _zone = _x;
    _y params ["_squadCount", "_armedVehicles", "_side", "_startingUnits"];
    private _countZone = count (units _side select {alive _x && _x inArea _zone});
    if (_countZone < (0.6 + random 0.2) * _startingUnits && _countZone > 0) then {
        _entriesToRemove pushBack _zone;
        [_zone, 10, _squadCount, _side, _armedVehicles] call FUNC(spawnReinforcements);
    };
} forEach GVAR(reinforceHashMap);

{
    private _zone = _x;
    private _zoneParams = GVAR(reinforceHashMap) getOrDefault [_zone, [0, false, east, 0]];
    if (count (units (_zoneParams#2) select {alive _x && _x inArea _zone}) > 0) then {
        [{
            params ["_zone", "_squadsToSpawn", "_armedVehicles", "_side"];
            private _startingUnits = count (units _side select {alive _x && _x inArea _zone});
            if (_startingUnits > 20) then {
                [_zone, _squadsToSpawn, _armedVehicles, _side, _startingUnits] call FUNC(addSectorReinforce);
            };
        }, [_zone] + _zoneParams, 900 + random 300] call CBA_fnc_waitAndExecute;
    };
    GVAR(reinforceHashMap) deleteAt _x;
} forEach _entriesToRemove;

if (GVAR(reinforceHashMap) isNotEqualTo createHashMap) then {
    [{[] call FUNC(handleSectorReinforce)}, 0, 30 + random 15] call CBA_fnc_waitAndExecute;
};
