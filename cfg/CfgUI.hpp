#include "\a3\ui_f\hpp\defineCommonGrids.inc"
import RscButtonMenuOK;
import RscButtonMenuCancel;
import RscCheckBox;
import RscCombo;
import RscMapControl;
import RscXSliderH;
import RscText;


class RscMissionSelectMenu {
    idd = IDD_MISSION_MENU;
    x = 0.425;
    y = 0.1;
    w = 0.75;
    h = 0.86;
    onUnload = QUOTE([ARR_2(true,_this)] call FUNC(handleMissionMenu));
    onLoad = QUOTE([ARR_2(false,_this)] call FUNC(handleMissionMenu));
    class ControlsBackground {
        class Background : RscText {
            idc = -1;
            x = -10 * GUI_GRID_CENTER_W;
            y = -5 * GUI_GRID_CENTER_H;
            w = 50 * GUI_GRID_CENTER_W;
            h = 35 * GUI_GRID_CENTER_H;
            colorBackground[] = {0, 0, 0, 0.8};
        };
    };
    class Controls {
        class RscText_title: RscText {
            idc = -1;
            align = "center";
            text = "Mission Select";
            x = 0.3;
            y = -0.15;
            w = 0.6;
            h = 0.08;
            sizeEx = 3 * GUI_GRID_H;
        };
        // LHS
        class RscText_type: RscText_title {
            text = "Mission Type";
            x = -0.05;
            w = 0.6;
            y = -0.025;
            sizeEx = 2 * GUI_GRID_H;
        };
        class RscText_operationType: RscText {
            idc = -1;
            text = "Operation";
            x = -0.275;
            y = 0.1;
            w = 0.25;
            h = 0.06;
        };
        class RscCombo_operationType: RscCombo {
            idc = IDC_MISSION_OPERATIONTYPE;
            x = -0.075;
            y = 0.1;
            w = 0.5;
            h = 0.06;
            onLBSelChanged = QUOTE(_this call FUNC(handleMissionDropDown));
            tooltip = "Select mission to initialize";
            class Items {
                class mout {
                    text = "MOUT";
                    value = BW_TRAINING_OPERATION_MOUT;
                    default = 1;
                };
                class zoneClear {
                    text = "Zone Assault (select zone on map)";
                    value = BW_TRAINING_OPERATION_ZONE;
                };
                class zoneClearDrawn {
                    text = "Zone Assault (draw on map)";
                    value = BW_TRAINING_OPERATION_ZONE_DRAW;
                };
                /*class tankFight { // TO BE IMPLEMENTED
                    text = "Mechanized Combat";
                    value = BW_TRAINING_OPERATION_MECH;
                };*/
            };
        };
        class RscText_enemyType: RscText_operationType {
            text = "OpFor Faction";
            y = 0.2;
        };
        class RscCombo_enemyType: RscCombo_operationType {
            idc = IDC_MISSION_ENEMYTYPE;
            y = 0.2;
            onLBSelChanged = QUOTE(_this call FUNC(handleMissionDropDown));
            tooltip = "Select faction of enemy units";
            class Items {
                class east {
                    text = "MSV Forces (AK-74M)";
                    value = BW_TRAINING_ENEMY_OPFOR;
                    default = 1;
                };
                class indy {
                    text = "Bundeswehr Forces (G36A3)";
                    value = BW_TRAINING_ENEMY_INDY;
                };
            };
        };
        class RscMap_UIInterface: RscMapControl {
            idc = IDC_MISSION_MAP;
            onDraw = QUOTE(_this call FUNC(handleMissionDraw));
            x = -0.275;
            y = 0.3;
            w = 0.6875;
            h = 0.86;
        };

        // RHS
        class RscText_parameters: RscText_type {
            text = "Mission Parameters";
            x = 0.65;
        };
        class RscText_minAISkill: RscText_operationType {
            text = "Minimum AI skill";
            x = 0.45;
        };
        class RscXSliderH_minAISkill: RscXSliderH {
            idc = IDC_MISSION_AISKILLMIN;
            x = 0.7;
            y = 0.1;
            w = 0.45;
            h = 0.06;
            sliderPosition = 0.6;
            sliderRange[] = {0, 1};
            onSliderPosChanged = QUOTE(_this call FUNC(handleMissionSlider));
        };
        class RscText_maxAISkill: RscText_minAISkill {
            text = "Maximum AI skill";
            y = 0.2
        };
        class RscXSliderH_maxAISkill: RscXSliderH_minAISkill {
            idc = IDC_MISSION_AISKILLMAX;
            y = 0.2;
            sliderPosition = 0.9;
            sliderRange[] = {0, 1};
        };

        class RscText_densityType: RscText_minAISkill {
            idc = IDC_MISSION_DROPDOWN_TEXT;
            text = "Enemy Dispersion";
            y = 0.3;
        };
        class RscCombo_densityType: RscCombo {
            idc = IDC_MISSION_DROPDOWN;
            x = 0.7;
            y = 0.3;
            w = 0.45;
            h = 0.06;
            onLBSelChanged = QUOTE(_this call FUNC(handleMissionDropDown));
            tooltip = "Select enemy dispersion type";
            class Items {
                class random {
                    text = "Random";
                    value = BW_TRAINING_DENSITY_RANDOM;
                };
                class uniform {
                    text = "Uniform";
                    value = BW_TRAINING_DENSITY_UNIFORM;
                    default = 1;
                };
                class singleFocus {
                    text = "Single Center";
                    value = BW_TRAINING_DENSITY_SINGLE;
                };
                class singleFocusMarked {
                    text = "Single Center (Marked)";
                    value = BW_TRAINING_DENSITY_SINGLEMARKED;
                };
                class multiFocii {
                    text = "Multiple Centers - Best for larger zones";
                    value = BW_TRAINING_DENSITY_MULTI;
                };
                class multiFociiMarked {
                    text = "Multiple Centers (Marked) - Best for larger zones";
                    value = BW_TRAINING_DENSITY_MULTIMARKED;
                };
            };
        };

        class RscText_option0: RscText_minAISkill {
            idc = IDC_MISSION_OPTION0_TEXT;
            text = "Min Units Per Building (%)";
            y = 0.4;
        };
        class RscXSliderH_option0: RscXSliderH_minAISkill {
            idc = IDC_MISSION_OPTION0;
            sliderPosition = 0;
            y = 0.4;
        };

        class RscText_option1: RscText_minAISkill {
            idc = IDC_MISSION_OPTION1_TEXT;
            text = "Max Units Per Building (%)";
            y = 0.5;
        };
        class RscXSliderH_option1: RscXSliderH_minAISkill {
            idc = IDC_MISSION_OPTION1;
            y = 0.5;
            sliderPosition = 1;
            sliderRange[] = {0, 1};
        };

        class RscText_option2: RscText_minAISkill {
            idc = IDC_MISSION_OPTION2_TEXT;
            text = "Chance to de-Garrison";
            y = 0.6;
        };
        class RscXSliderH_option2: RscXSliderH_minAISkill {
            idc = IDC_MISSION_OPTION2;
            y = 0.6;
            sliderPosition = 1;
            sliderRange[] = {0, 1};
        };

        class RscText_option3: RscText_minAISkill {
            idc = IDC_MISSION_OPTION3_TEXT;
            text = "Patrol Count";
            y = 0.7;
        };
        class RscXSliderH_option3: RscXSliderH_minAISkill {
            idc = IDC_MISSION_OPTION3;
            y = 0.7;
            sliderPosition = 0;
        };

        class RscText_option4: RscText_minAISkill {
            idc = IDC_MISSION_OPTION4_TEXT;
            text = "Average Patrol Size";
            y = 0.8;
        };
        class RscXSliderH_option4: RscXSliderH_minAISkill {
            idc = IDC_MISSION_OPTION4;
            y = 0.8;
            sliderPosition = 0;
        };

        class RscText_option5: RscText_minAISkill {
            idc = IDC_MISSION_OPTION5_TEXT;
            text = "Vehicle Danger";
            y = 0.9;
        };
        class RscXSliderH_option5: RscXSliderH_minAISkill {
            idc = IDC_MISSION_OPTION5;
            y = 0.9;
            sliderPosition = 0;
        };

        class RscText_option6: RscText_minAISkill {
            idc = IDC_MISSION_OPTION6_TEXT;
            text = "Reinforcement Count";
            y = 1.0;
        };
        class RscXSliderH_option6: RscXSliderH_minAISkill {
            idc = IDC_MISSION_OPTION6;
            y = 1.0;
            sliderPosition = 0;
        };


        class RscButtonMenuOK_exit: RscButtonMenuOK {
            x = 1;
            y = 1.08;
            w = 0.15;
            h = 0.08;
            text = "Initialize";
            class Attributes {
                font = "PuristaLight";
                color = "#E5E5E5";
                align = "center";
                shadow = "false";
            };
            class TextPos {
                bottom = 0;
                left = "0.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
                right = 0.005;
                top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
                forceMiddle = true;
            };
        };
        class RscButtonMenuCancel_exit: RscButtonMenuCancel {
            x = 0.45;
            y = 1.08;
            w = 0.15;
            h = 0.08;
            text = "Cancel";
            class Attributes {
                font = "PuristaLight";
                color = "#E5E5E5";
                align = "center";
                shadow = "false";
            };
            class TextPos {
                bottom = 0;
                left = "0.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
                right = 0.005;
                top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
                forceMiddle = true;
            };
        };
    };
};