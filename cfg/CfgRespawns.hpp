// Sad respawn noises
respawn = 3;
respawnDelay = 15;
respawnOnStart = -1;
respawnTemplates[] = {
  "MenuPosition",
  "Wave",
  QGVAR(resetLoadout)
};

class CfgRespawnTemplates {
    class GVAR(resetLoadout) {
        onPlayerRespawn = "potato_assignGear_fnc_requestPlayerGear";
    };
};
