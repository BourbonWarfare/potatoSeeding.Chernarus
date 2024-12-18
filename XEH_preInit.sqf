#include "script_component.hpp"

MISSION_GVAR_PREFIX = false;
#include "XEH_PREP.hpp"

// Mission select menu
GVAR(menuOptions) = createHashMapFromArray [
    ["operationType", BW_TRAINING_OPERATION_MOUT],
    ["enemyType", BW_TRAINING_ENEMY_OPFOR],
    ["density", BW_TRAINING_DENSITY_UNIFORM],
    ["AIskillMin", 0.5],
    ["AIskillMax", 0.5],
    ["option0", 0.2],
    ["option1", 0.5],
    ["option2", 0],
    ["option3", 0],
    ["option4", 0],
    ["option5", 0],
    ["option6", 0]
];
GVAR(mainMenuMapClickEH) = -1;
GVAR(missionFirstPositionMarker) = "";
GVAR(missionSelectedZone) = "";
GVAR(missionActiveZones) = createHashMap;
GVAR(nextMapClickTime) = -1;
GVAR(reinforceHashMap) = createHashMap;
GVAR(missionMenuLastUpdateFrame) = -1;
GVAR(endOfMission) = false;

MISSION_GVAR_PREFIX = true;
