class CfgFunctions {
    class lmd {
        tag = "bw";
        class Helper {
            file = "functions\helper";
            class findPlayerCentroid;
            class occupyBuilding;
            class posInMarker;
            class teleportUnitHandle;
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
            class handleMissionDropDown;
            class handleMissionMenu;
            class handleMissionSlider;
            class updateMenuOptions;
        };
        class Zone_Filling {
            file = "functions\fillZone";
            class garrisonBuilding;
            class garrisonBuildings;
            class garrisonBuildingsCentered;
            class spawnPatrol;
            class spawnPatrols;
            class spawnReinforcements;
            class spawnReinforcementSquad;
            class spawnZoneVehicles;
        };
    };
};