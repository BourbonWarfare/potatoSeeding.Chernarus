class CfgNotifications {
    class Notif {
        title = "%1";
        description = "%2";
        duration = 10;
        priority = 0;
        iconPicture = "";
        iconText = "";
        sound = "vanillaDefaultNotification";
        soundClose = "vanillaDefaultNotificationClose";
    };
    class Info: Notif {
        iconPicture = "\a3\ui_f\data\GUI\Cfg\CommunicationMenu\instructor_ca.paa";
        duration = 20;
    };
    class MapTeleport: Notif {
        title = "Forward Deploy";
        description = "Left-click near a flag to teleport the player.";
        iconPicture = "\a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\map_ca.paa";
    };
    class MapTeleportFireteam: MapTeleport {
        title = "Forward Deploy";
        description = "Left-click near a flag to teleport the Fire Team.";
    };
    class isrReport: Notif {
        title = "ISR Report";
        description = "%1";
        iconPicture = "a3\ui_f\data\gui\cfg\communicationmenu\call_ca.paa";
    };
    class commIntercept : isrReport {
        title = "Enemy comms intercepted!";
    };
    class isrReport_short : isrReport {
        duration = 5;
    };
};
