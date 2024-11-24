#define UI(var1) 	DOUBLES(functions\ui\fn,var1)
#define HELPER(var1) 	DOUBLES(functions\helper\fn,var1)
#define FILLZONE(var1) 	DOUBLES(functions\fillZone\fn,var1)
#define SERVER(var1) 	DOUBLES(functions\serverSystems\fn,var1)


#define PREP_COMPLEX(var1,var2) TRIPLES(PREFIX,fnc,var1) = compileScript [QUOTE(GLUE(var2,.sqf))]
#define PREP(var1) TRIPLES(PREFIX,fnc,var1) = compileScript [QUOTE(functions\DOUBLES(fn,var1).sqf))]

// helper funcs
PREP_COMPLEX(occupyBuilding,HELPER(occupyBuilding));
PREP_COMPLEX(posInMarker,HELPER(posInMarker));
PREP_COMPLEX(teleportUnitHandle,HELPER(teleportUnitHandle));

// UI
PREP_COMPLEX(handleMissionMenu,UI(handleMissionMenu));
PREP_COMPLEX(handleMissionSlider,UI(handleMissionSlider));
PREP_COMPLEX(updateMenuOptions,UI(updateMenuOptions));
PREP_COMPLEX(handleMissionDropDown,UI(handleMissionDropDown));

// Zone fill
PREP_COMPLEX(garrisonBuilding,FILLZONE(garrisonBuilding));
PREP_COMPLEX(garrisonBuildings,FILLZONE(garrisonBuildings));
PREP_COMPLEX(garrisonBuildingsCentered,FILLZONE(garrisonBuildingsCentered));
PREP_COMPLEX(spawnZoneVehicles,FILLZONE(spawnZoneVehicles));
PREP_COMPLEX(spawnPatrols,FILLZONE(spawnPatrols));
PREP_COMPLEX(spawnPatrol,FILLZONE(spawnPatrol));
PREP_COMPLEX(spawnReinforcements,FILLZONE(spawnReinforcements));
PREP_COMPLEX(spawnReinforcementSquad,FILLZONE(spawnReinforcementSquad));

// Serverside systems
PREP_COMPLEX(handleMissionInit,SERVER(handleMissionInit));
PREP_COMPLEX(updateAISkill,SERVER(updateAISkill));
PREP_COMPLEX(addSectorReinforce,SERVER(addSectorReinforce));
PREP_COMPLEX(handleSectorReinforce,SERVER(handleSectorReinforce));

