#include "..\..\script_component.hpp"
/***************************************************************************//*
* Author: Lambda.Tiger
*
* Description:
* This fucntion handles drawing custom zones to help the player
*
* Arguments:
* BIS Draw2D mission EH
*
* Only called via callback
*//***************************************************************************/
private _firstPoint = getMarkerPos GVAR(missionFirstPositionMarker);
if (_firstPoint isEqualTo [0, 0, 0]) exitWith {};
private _map = findDisplay IDD_MISSION_MENU displayCtrl IDC_MISSION_MAP;
private _mapPos = ctrlMapPosition _map;
private _mousePos = getMousePosition;
private _withinBounds = _mousePos#0 >= _mapPos#0 &&
    _mousePos#0 <= _mapPos#0 + _mapPos#2 &&
    _mousePos#1 >= _mapPos#1 &&
    _mousePos#1 <= _mapPos#1 + _mapPos#3;
if (_withinBounds) then {
    GVAR(missionMenuLastCursorPos) = _mousePos;
} else {
    _mousePos = GVAR(missionMenuLastCursorPos);
};
private _secondPoint = _map ctrlMapScreenToWorld _mousePos;

switch (GET_MENU_OPTION(density)) do {
    case BW_TRAINING_DENSITY_RANDOM: { // "Circle - Center-Radius"
        _secondPoint = (_firstPoint vectorDiff _secondPoint) apply {abs _x};
        _secondPoint set [2, 0];
        private _radius = vectorMagnitude _secondPoint;
        _map drawEllipse [_firstPoint, _radius, _radius, 0, [0.2, 0, 0.8, 1], ""];
    };
    case BW_TRAINING_DENSITY_UNIFORM: { // "Ellipse - Corner-Corner"
        _secondPoint = (_firstPoint vectorAdd _secondPoint) apply {_x / 2};
        _firstPoint = (_firstPoint vectorDiff _secondPoint) apply {abs _x};
        _map drawEllipse [_secondPoint, _firstPoint#0, _firstPoint#1, 0, [0.2, 0, 0.8, 1], ""];
    };
    case BW_TRAINING_DENSITY_SINGLE: { // "Ellipse - Center-Corner";
        _secondPoint = (_firstPoint vectorDiff _secondPoint) apply {abs _x};
        _map drawEllipse [_firstPoint, _secondPoint#0, _secondPoint#1, 0, [0.2, 0, 0.8, 1], ""];
    };
    case BW_TRAINING_DENSITY_SINGLEMARKED: { // "Rectangle - Center-Corner"
        _secondPoint = (_firstPoint vectorDiff _secondPoint) apply {abs _x};
        _map drawRectangle [_firstPoint, _secondPoint#0, _secondPoint#1, 0, [0.2, 0, 0.8, 1], ""];
    };
    default { // "Rectangle - Corner-Corner"
        _firstPoint = (_firstPoint vectorAdd _secondPoint) apply {_x / 2};
        _secondPoint = (_firstPoint vectorDiff _secondPoint) apply {abs _x};
        _map drawRectangle [_firstPoint, _secondPoint#0, _secondPoint#1, 0, [0.2, 0, 0.8, 1], ""];
    };
};
