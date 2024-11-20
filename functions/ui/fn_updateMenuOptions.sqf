#include "..\..\script_component.hpp"
/***************************************************************************//*
* Author: Lambda.Tiger
*
* Description:
* This function updates the menu to the current set operationtype
*
* Arguments:
* - _display - The menu display variable
*
* Example
* _display call bw_fnc_updateMenuOptions;
*//***************************************************************************/
#define DESELECTED_ZONE_ALPHA 0.4
params ["_display"];

// Common elements first
private _control = _display displayCtrl IDC_MISSION_OPERATIONTYPE;
_control lbSetCurSel GET_MENU_OPTION(operationType);
_control = _display displayCtrl IDC_MISSION_ENEMYTYPE;
_control lbSetCurSel GET_MENU_OPTION(enemyType);
_control = _display displayCtrl IDC_MISSION_DROPDOWN;
_control lbSetCurSel GET_MENU_OPTION(density);
_control = _display displayCtrl IDC_MISSION_AISKILLMIN;
_control sliderSetPosition GET_MENU_OPTION(AIskillMin);
_control = _display displayCtrl IDC_MISSION_AISKILLMAX;
_control sliderSetPosition GET_MENU_OPTION(AIskillMax);
_control = _display displayCtrl IDC_MISSION_OPTION0;
_control sliderSetPosition GET_MENU_OPTION(option0);
_control = _display displayCtrl IDC_MISSION_OPTION1;
_control sliderSetPosition GET_MENU_OPTION(option1);
_control = _display displayCtrl IDC_MISSION_OPTION2;
_control sliderSetPosition GET_MENU_OPTION(option2);
_control = _display displayCtrl IDC_MISSION_OPTION3;
_control sliderSetPosition GET_MENU_OPTION(option3);
_control = _display displayCtrl IDC_MISSION_OPTION4;
_control sliderSetPosition GET_MENU_OPTION(option4);
_control = _display displayCtrl IDC_MISSION_OPTION5;
_control sliderSetPosition GET_MENU_OPTION(option5);
_control = _display displayCtrl IDC_MISSION_OPTION6;
_control sliderSetPosition GET_MENU_OPTION(option6);

_control = _display displayCtrl IDC_MISSION_MAP;
private _markerAlpha = [0, DESELECTED_ZONE_ALPHA] select (BW_TRAINING_OPERATION_ZONE == GET_MENU_OPTION(operationType));
private _maxZoneMarker = 0;
for "_i" from 0 to BW_ZONE_MAX_CHECK do {
    private _mark = BW_ZONE_BASE_STRING + (str _i);
    if (getMarkerPos _mark isEqualTo [0, 0, 0]) exitWith {_maxZoneMarker = _i};
    _mark setMarkerAlphaLocal _markerAlpha;
};

switch (GET_MENU_OPTION(operationType)) do {
    case BW_TRAINING_OPERATION_MOUT: {
        GVAR(selectedZone) = "moutPos_0"; // hard coded for now
        _control ctrlMapAnimAdd [0, 0.1, getMarkerPos "moutPos_0"];
        ctrlMapAnimCommit _control;
        BW_FADE_CONTROL(_display, _control, IDC_MISSION_DROPDOWN);
        BW_FADE_CONTROL(_display, _control, IDC_MISSION_OPTION3);
        BW_FADE_CONTROL(_display, _control, IDC_MISSION_OPTION4);
        BW_FADE_CONTROL(_display, _control, IDC_MISSION_OPTION5);
        BW_FADE_CONTROL(_display, _control, IDC_MISSION_OPTION6);
        BW_FADE_CONTROL(_display, _control, IDC_MISSION_DROPDOWN_TEXT);
        BW_FADE_CONTROL(_display, _control, IDC_MISSION_OPTION3_TEXT);
        BW_FADE_CONTROL(_display, _control, IDC_MISSION_OPTION4_TEXT);
        BW_FADE_CONTROL(_display, _control, IDC_MISSION_OPTION5_TEXT);
        BW_FADE_CONTROL(_display, _control, IDC_MISSION_OPTION6_TEXT);
        _control = _display displayCtrl IDC_MISSION_OPTION2;
        SET_MENU_OPTION(option2, 0);
        _control sliderSetPosition GET_MENU_OPTION(option2);
    };
    case BW_TRAINING_OPERATION_ZONE: {
        GVAR(selectedZone) = "";
        GVAR(mainMenuMapClickEH) = addMissionEventHandler ["MapSingleClick", {
            params ["", "_pos"];
            for "_i" from 0 to BW_ZONE_MAX_CHECK do {
                private _mark = BW_ZONE_BASE_STRING + (str _i);
                if (getMarkerPos _mark isEqualTo [0, 0, 0]) exitWith {};
                if (_pos inArea _mark) exitWith {
                    GVAR(selectedZone) setMarkerAlphaLocal DESELECTED_ZONE_ALPHA;
                    GVAR(selectedZone) = _mark;
                    _mark setMarkerAlphaLocal 0.8;
                };
            };
        }];
        GVAR(selectedZone) = BW_ZONE_BASE_STRING + str (floor random _maxZoneMarker);
        _control ctrlMapAnimAdd [0, 0.4, getMarkerPos GVAR(selectedZone)];
        GVAR(selectedZone) setMarkerAlphaLocal 0.8;
        ctrlMapAnimCommit _control;
        BW_DEFADE_CONTROL(_display, _control, IDC_MISSION_DROPDOWN);
        BW_DEFADE_CONTROL(_display, _control, IDC_MISSION_OPTION3);
        BW_DEFADE_CONTROL(_display, _control, IDC_MISSION_OPTION4);
        BW_DEFADE_CONTROL(_display, _control, IDC_MISSION_OPTION5);
        BW_DEFADE_CONTROL(_display, _control, IDC_MISSION_OPTION6);
        BW_DEFADE_CONTROL(_display, _control, IDC_MISSION_DROPDOWN_TEXT);
        BW_DEFADE_CONTROL(_display, _control, IDC_MISSION_OPTION3_TEXT);
        BW_DEFADE_CONTROL(_display, _control, IDC_MISSION_OPTION4_TEXT);
        BW_DEFADE_CONTROL(_display, _control, IDC_MISSION_OPTION5_TEXT);
        BW_DEFADE_CONTROL(_display, _control, IDC_MISSION_OPTION6_TEXT);
    };
    case BW_TRAINING_OPERATION_MECH: { // To be completed

    };
    default {};
};