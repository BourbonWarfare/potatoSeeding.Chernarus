class CfgFunctions {
    class lmd {
        tag = "bw";
        class Helper {
            file = "functions\helper";
            class findPlayerCentroid;
            class findRoadPos;
            class gradVicHandle;
            class occupyBuilding;
            class posInMarker;
            class teleportUnitHandle;
            class unloadCargo;
            class findArcSpawnPosVehicle;
            class findArcSpawnPos;
        };
        class Mission_Flow {
            file = "functions\missionFlow";
            class autoEndSession;
            class autoEndSessionAI;
            class endMission;
        };
        class Server_Systems {
            file = "functions\serverSystems";
            class addSectorReinforce;
            class handleMissionInit;
            class handleSectorReinforce;
            class updateAISkill;
        };
        class UI {
            file = "functions\ui";
            class handleMissionDraw;
            class handleMissionDropDown;
            class handleMissionMenu;
            class handleMissionSlider;
            class updateMenuOptions;
            class ui_handleCircleSpawnMenu;
            class ui_updateCircleSpawnMenu;
        };
        class Circle_Defense {
            file = "functions\spawn";
            class spawnUnitsWP;
            class addCircleSpawner;
            class circleSpawnHandle;
            class circleSpawnVehicle;
            class removeCircleSpawner;
            class createArtyGun;
        };
        class Zone_Filling {
            file = "functions\fillZone";
            class garrisonBuilding;
            class garrisonBuildings;
            class garrisonBuildingsCentered;
            class spawnAircraft;
            class spawnPatrol;
            class spawnPatrols;
            class spawnReinforcements;
            class spawnReinforcementSquad;
            class spawnZoneVehicles;
        };
    };
    #include "..\modules\grad-vehicleSpawner\CfgFunctions.hpp"
};