#include "..\..\script_component.hpp"
/***************************************************************************//*
* Author: Lambda.Tiger
*
* Description:
* Updates skill for units that will be spawned.
*
* Arguments:
* _minSkill - Min skill setting (SCALAR, default 0.3)
* _maxSkill - Max skill setting (SCALAR, default 0.6)
*
* Return:
* none
*
* Example:
* [0.1, 0.4] spawn bw_fnc_updateAISkill;
*//***************************************************************************/
if !(isServer) then {
    [_this] remoteExecCall [QFUNC(updateAISkill), 2];
};
params [
    ["_minSkill", 0.5, [0.5]],
    ["_maxSkill", 0.5, [0.5]]
];

// Set aiming accuracy 0.03-0.08
["potato_missionModules_aiSkill_aimingAccuracy_min", linearConversion [0, 1, _minSkill, 0, 0.15, true], 2, "server"] call CBA_settings_fnc_set;
["potato_missionModules_aiSkill_aimingAccuracy_max", linearConversion [0, 1, _minSkill, 0, 0.2, true], 2, "server"] call CBA_settings_fnc_set;
// Set aiming shake 0.75-1.00
["potato_missionModules_aiSkill_aimingShake_min", linearConversion [0, 1, _minSkill, 0.55, 0.95, true], 2, "server"] call CBA_settings_fnc_set;
["potato_missionModules_aiSkill_aimingShake_max", linearConversion [0, 1, _minSkill, 0.8, 1, true], 2, "server"] call CBA_settings_fnc_set;
// Set aiming speed 0.35-0.75
["potato_missionModules_aiSkill_aimingSpeed_min", linearConversion [0, 1, _minSkill, 0.2, 0.5, true], 2, "server"] call CBA_settings_fnc_set;
["potato_missionModules_aiSkill_aimingSpeed_max", linearConversion [0, 1, _minSkill, 0.6, 0.9, true], 2, "server"] call CBA_settings_fnc_set;

