class CfgLoadouts {
  // Use POTATO to run gear assignment
  usePotato = 1;

  // Fast, Easy Settings to change loadouts without touching the arrays.  For TVT Balancing.
  // Allow Zoomed Optics (1 is true, 0 is false) <Anything like a HAMR (4x) optic won't be added, "red dot" would be fine>
  allowMagnifiedOptics = 0;

  // Allow changeable optics on a global level, note: optic options obey allowMagnifiedOptics rules
  allowChangeableOptics = 1;

  // Do Vehicle Loadouts
  // (1 will run normaly, 0 will leave them to vanilla defaults, -1 will clear and leave empty)
  setVehicleLoadouts = -1;

  // Do Supply Box Loadouts
  // (1 will run normaly, 0 will leave them to vanilla defaults, -1 will clear and leave empty)
  setSupplyBoxLoadouts = 0;
  class SupplyBoxes {
    /* Example:
      class B_supplyCrate_F {
        TransportWeapons[] = {"arifle_TRG20_F"};
        TransportMagazines[] = {"30Rnd_556x45_Stanag_red:8","30Rnd_556x45_Stanag_Tracer_Red:2"};
        TransportItems[] = {"ACRE_PRC148:10"};
      };
    */
  };

  // Fallback: use a basic soldiers loadout when the unit's classname isn't found (for Alive spawning random units)
  useFallback = 1;

  // prefixes to strip from the units classnames
  prefixes[] = {"potato_w_", "potato_e_", "potato_i_"};

  // Shared defines
  #include "Loadouts\common.hpp" // DO NOT COMMENT OUT, WILL BREAK EVERYTHING


  // cleanup.bat will delete any loadouts not in active use (so make sure to include before running)

  // Blufor/Indfor/Opfor folders are just for organization, they can be used with any faction
  // e.g. Blufor\us_mx_mtp.hpp for potato_e is fine

  // Loadouts can be either kept in the Loadouts\Blufor\ folders or moved up to Loadouts\

  // West factions
  #include "Loadouts\west_gear.hpp"
  class potato_w { // BluFor
    #include "Loadouts\Blufor\askeland_gm90r_ormr.hpp"
  };

  // Indy factions
  #include "Loadouts\indy_gear.hpp"
  class potato_i { // Indy
    #include "Loadouts\Blufor\gerpzgr_g36a3_flecktarn.hpp"
  };

  // East Factions
  #include "Loadouts\east_gear.hpp"
  class potato_e { // OpFor
    #include "Loadouts\Opfor\msv22_ak74m_emr.hpp"
  };

  // Civilians (mainly for RP missions)
  #include "Loadouts\civ_gear.hpp"
  #include "Loadouts\civilians.hpp" // Bare example of doing civilian loadouts
};
