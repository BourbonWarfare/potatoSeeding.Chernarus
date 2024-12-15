#include "..\..\script_component.hpp"
/***************************************************************************//*
* Author: Lambda.Tiger
*
* Description:
* This fucntion enable all AI options on every enemy and set them to
* move towards the players.
*
* Arguments:
* None
*
* Return:
* none
*
* Example:
* [] call bw_fnc_autoEndSessionAI;
*//***************************************************************************/
{
    if (local _x && !isPlayer _x) then {
        _x enableAI "ALL";
        if (_x == leader _x) then {
            private _grp = group _x;
            private _wp = _grp addWaypoint [getPosASL _x, 100];
            _wp setWaypointSpeed "FULL";
            _wp setWaypointCompletionRadius 500;
            _wp setWaypointType "SCRIPTED";
            _wp setWaypointScript "\z\lambs\addons\wp\scripts\fnc_wpRush.sqf";
            _grp setCurrentWaypoint _wp;
        };
    };
} forEach allUnits;
