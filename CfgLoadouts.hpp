class CfgLoadouts {
  // Use POTATO to run gear assignment
  usePotato = 1;

  // Fast, Easy Settings to change loadouts without touching the arrays.  For TVT Balancing.
  // Allow Zoomed Optics (1 is true, 0 is false) <Anything like a HAMR (4x) optic won't be added, "red dot" would be fine>
  allowMagnifiedOptics = 1;

  // Allow changeable optics on a global level, note: optic options obey allowMagnifiedOptics rules
  allowChangeableOptics = 1;

  // Do Vehicle Loadouts
  // (1 will run normaly, 0 will leave them to vanilla defaults, -1 will clear and leave empty)
  setVehicleLoadouts = -1;
  maxRandomization = 10;

  // Do Supply Box Loadouts
  // (1 will run normaly, 0 will leave them to vanilla defaults, -1 will clear and leave empty)
  setSupplyBoxLoadouts = 1;
  class SupplyBoxes {
    class Box_NATO_Wps_F {
      boxCustomName = "Fireteam Resupply";
      forceAllowCarry = 1;
      TransportWeapons[] = {"CUP_launch_RPG26:2"};
      TransportMagazines[] = {
          "CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_bakelite_M:6","CUP_30Rnd_762x39_AK47_bakelite_M:14",
          "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M:6","CUP_30Rnd_545x39_AK74M_M:14",
          "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M:10",
          "rhs_mag_rdg2_white:6",
          "gm_smokeshell_grn_gc:2",
          "gm_handgrenade_frag_rgd5:8",
          "CUP_1RND_SMOKE_GP25_M:4",
          "CUP_1Rnd_SmokeRed_GP25_M:2",
          "CUP_1Rnd_HE_GP25_M:6",
          "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:5",
          "CUP_PG7VM_M:4",
          "CUP_OG7_M:2"
      };
      TransportItems[] = {
          "ACE_elasticBandage:20",
          "ACE_splint:2"
      };
    };
    class Box_NATO_WpsLaunch_F {
      boxCustomName = "Launcher Crate";
      forceAllowCarry = 1;
      TransportWeapons[] = {"CUP_launch_RPG26:4","CUP_launch_Igla:4"};
      TransportMagazines[] = {"CUP_PG7VM_M:4","CUP_OG7_M:4","Titan_AT:3"};
    };
    class ACE_medicalSupplyCrate_advanced {
      boxCustomName = "Medical Crate";
      forceAllowCarry = 1;
      TransportItems[] = {
        "ACE_elasticBandage:30",
        "ACE_packingBandage:10",
        "ACE_epinephrine:8",
        "ACE_morphine:8",
        "ACE_adenosine:4",
        "ACE_tourniquet:8",
        "ACE_splint:10",
        "ACE_salineIV:6",
        "ACE_salineIV_500:8",
        "ACE_salineIV_250:4",
        "potato_naloxone:4",
        "potato_pkblister:5"
      };
    };
    class gm_ammobox_aluminium_03_empty {
      boxCustomName = "Fortify Tools Crate";
      TransportItems[] = {"ACE_Fortify:14"};
    };
  };

  // Fallback: use a basic soldiers loadout when the unit's classname isn't found (for Alive spawning random units)
  useFallback = 1;

  // prefixes to strip from the units classnames
  prefixes[] = {"potato_nolambs_w_", "potato_nolambs_e_", "potato_nolambs_i_", "potato_w_", "potato_e_", "potato_i_"};

  // Shared defines
  #include "Loadouts\common.hpp" // DO NOT COMMENT OUT, WILL BREAK EVERYTHING


  // cleanup.bat will delete any loadouts not in active use (so make sure to include before running)

  // Blufor/Indfor/Opfor folders are just for organization, they can be used with any faction
  // e.g. Blufor\us_mx_mtp.hpp for potato_e is fine

  // Loadouts can be either kept in the Loadouts\Blufor\ folders or moved up to Loadouts\

  // West factions
  #include "Loadouts\west_gear.hpp"
  class potato_w { // BluFor
    #include "Loadouts\Blufor\chdkz_ak74n_mix.hpp"
  };

  // Indy factions
  #include "Loadouts\indy_gear.hpp"
  class potato_i { // Indy
    #include "Loadouts\Indfor\cdf_ak74n_cdfMTN_AI.hpp"
  };

  // East Factions
  #include "Loadouts\east_gear.hpp"
  class potato_e { // OpFor
    #include "Loadouts\Opfor\AFRF_AK74M_VKPO_ai.hpp"
  };

  // Civilians (mainly for RP missions)
  #include "Loadouts\civ_gear.hpp"
  #include "Loadouts\civilians.hpp" // Bare example of doing civilian loadouts
};
