#include "component.hpp"

params ["_vehClass","_textures","_animations","_spawnPos",["_pylonMags",[]],["_side",WEST],["_onSpawn",{}],["_eventParams",[]]];

/// Lets see if the vehicle class is something we must limit
if (isNil QGVAR(armorTypes)) then { // init vehicles
    private _cfgPath = missionConfigFile >> "CfgLoadouts" >> "potato_w";
    GVAR(armedVehicle) = getArray (_cfgPath >> "armedSoftVehiclePool");
    GVAR(armorTypes) = getArray (_cfgPath >> "armoredVehiclePwdool") +
                        (getArray (_cfgPath >> "tankVehiclePool"));
    GVAR(heliTypes) = getArray (_cfgPath >> "heliVehiclePool");
    GVAR(planeTypes) = getArray (_cfgPath >> "planeVehiclePool");
    GVAR(counts) = [0, 0, 0, 0, 0];
};

private _overLimit = false;
private _typeStr = "UNKNOWN";
private _type = switch (true) do {
    case (_vehClass in GVAR(armedVehicle)): {
        _typeStr = "armed soft";
        _overLimit = MAX_VEHICLE_ARMD <= GVAR(counts)#0; 0
    };
    case (_vehClass in GVAR(armorTypes)): {
        _typeStr = "armored";
        _overLimit = MAX_VEHICLE_ARMR <= GVAR(counts)#1; 1
    };
    case (_vehClass in GVAR(heliTypes)): {
        _typeStr = "rotary";
        _overLimit = MAX_VEHICLE_HELI <= GVAR(counts)#2; 2
    };
    case (_vehClass in GVAR(planeTypes)): {
        _typeStr = "fixed wing";
        _overLimit = MAX_VEHICLE_JETS <= GVAR(counts)#3; 3
    };
    default {-1};
};
if (_overLimit) exitWith {
    [format ["Over limit for %1 vehicles!", _typeStr],"3DEN_notificationWarning"] remoteExec [QFUNC(showMessage),remoteExecutedOwner,false];
    [] remoteExec [QFUNC(restorePreview),remoteExecutedOwner,false];
};

([_spawnPos,_vehClass] call FUNC(findEmptySpawnPosition)) params ["_actualSpawnPos",["_dir",0]];

if (_actualSpawnPos isEqualTo [0,0,0]) exitWith {
    ["Error: Server could not find a spawn position!","3DEN_notificationWarning"] remoteExec [QFUNC(showMessage),remoteExecutedOwner,false];
    [] remoteExec [QFUNC(restorePreview),remoteExecutedOwner,false];
};

private _veh = _vehClass createVehicle [0,0,0];
_veh setDir _dir;
_veh setPos _actualSpawnPos;
[_veh,_textures,_animations,true] call BIS_fnc_initVehicle;
_veh setVariable ["grad_vehicleSpawner_ownerID",remoteExecutedOwner];
_veh setVariable ["grad_vehicleSpawner_textures",_textures];

if (count _pylonMags > 0) then {
    _pylonPaths = (configProperties [configFile >> "CfgVehicles" >> _vehClass >> "Components" >> "TransportPylonsComponent" >> "Pylons", "isClass _x"]) apply {getArray (_x >> "turret")};
    {_veh removeWeaponGlobal getText (configFile >> "CfgMagazines" >> _x >> "pylonWeapon") } forEach getPylonMagazines _veh;
    {_veh setPylonLoadOut [_forEachIndex + 1,_x,true,_pylonPaths select _forEachIndex]} forEach _pylonMags;
};

if ([configFile >> "cfgVehicles" >> _vehClass,"isUAV",0] call BIS_fnc_returnConfigEntry == 1) then {
    [_veh,_side] call grad_vehicleSpawner_fnc_createDroneAI;
};

[_veh,_textures,_animations,remoteExecutedOwner,_eventParams] call _onSpawn;
[_veh] remoteExec ["grad_vehicleSpawner_fnc_onSpawnClient",remoteExecutedOwner,false];
[_veh] call grad_vehicleSpawner_fnc_trackVehicleStatus;
/// Check if type needs to be managed (Nice)
if (_type >= 0) then {
    GVAR(counts) set [_type, 1 + GVAR(counts)#_type];
    _veh addEventHandler ["Killed", {
        params ["_veh"];
        private _type = _veh getVariable [QGVAR(vicTypeEnum), 4];
        private _deleteEH = _veh getVariable [QGVAR(deleteEH), -1];
        _veh removeEventHandler ["Deleted", _deleteEH];
        GVAR(counts) set [_type, -1 + GVAR(counts)#_type];
    }];
    private _deleteEH = _veh addEventHandler ["Deleted", {
        params ["_veh"];
        private _type = _veh getVariable [QGVAR(vicTypeEnum), 4];
        GVAR(counts) set [_type, -1 + GVAR(counts)#_type];
    }];
    _veh setVariable [QGVAR(vicTypeEnum), _type];
    _veh setVariable [QGVAR(deleteEH), _deleteEH];
};
