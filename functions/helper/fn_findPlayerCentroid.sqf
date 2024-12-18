#include "..\..\script_component.hpp"
/***************************************************************************//*
* Author: Lambda.Tiger
*
* Description:
* This fucntion calculates the center point of alive players evenly weighted.
*
* Arguments:
* None
*
* Return:
* Position (ATL) of the center of the players
*
* Example:
* [] spawn bw_fnc_findPlayerCentroid;
*//***************************************************************************/
private _playerCentroid = [0, 0, 0];
private _players = [] call CBA_fnc_players;
{
    private _posPlayer = getPosATL _x;
    if (_posPlayer isNotEqualTo [0, 0, 0] && alive _x) then {
        _playerCentroid = _playerCentroid vectorAdd _posPlayer;
    };
} forEach _players;

_playerCentroid set [2, 0];
_playerCentroid vectorMultiply (1 / count _players)