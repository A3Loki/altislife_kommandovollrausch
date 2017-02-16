#define INFINITE 1e+1000
#define IDC_LIFE_BAR_FOOD 2200
#define IDC_LIFE_BAR_WATER 2201
#define IDC_LIFE_BAR_HEALTH 2202
#define IDC_LIFE_PICTURE_FOOD 1200
#define IDC_LIFE_PICTURE_WATER 1201
#define IDC_LIFE_PICTURE_HEALTH 1202
#define IDC_LIFE_FOOD_TEXT 1000
#define IDC_LIFE_WATER_TEXT 1001
#define IDC_LIFE_HEALTH_TEXT 1002
 
/*
        Author: Noldy
        File: ui.hpp
*/
 
class playerHUD {
        idd = -1;
        duration = INFINITE;
        movingEnable = 0;
        fadein = 0;
        fadeout = 0;
        name = "playerHUD";
        onLoad = "uiNamespace setVariable ['playerHUD',_this select 0]";
        objects[] = {};
        controls[] = {
                LIFE_UI_BACK1,
                LIFE_UI_BACK2,
                LIFE_UI_BACK3,
                LIFE_BAR_FOOD,
                LIFE_BAR_WATER,
                LIFE_BAR_HEALTH,
                LIFE_PICTURE_FOOD,
                LIFE_PICTURE_WATER,
                LIFE_PICTURE_HEALTH
        };
 
 
        class LIFE_UI_BACK1: Life_RscBackground
        {
                colorBackground[] = {0,0,0,0.5};
                x = 0.876546 * safezoneW + safezoneX;
                y = 0.929161 * safezoneH + safezoneY;
                w = 0.030949 * safezoneW;
                h = 0.0440165 * safezoneH;
        };
        class LIFE_UI_BACK2: Life_RscBackground
        {
                colorBackground[] = {0,0,0,0.5};
                x = 0.948761 * safezoneW + safezoneX;
                y = 0.929161 * safezoneH + safezoneY;
                w = 0.030949 * safezoneW;
                h = 0.0440165 * safezoneH;
        };
        class LIFE_UI_BACK3: Life_RscBackground
        {
                colorBackground[] = {0,0,0,0.5};
                x = 0.912653 * safezoneW + safezoneX;
                y = 0.929161 * safezoneH + safezoneY;
                w = 0.030949 * safezoneW;
                h = 0.0440165 * safezoneH;
        };
        class LIFE_BAR_FOOD: Life_RscProgress
        {
                idc = IDC_LIFE_BAR_FOOD;
                x = 0.876546 * safezoneW + safezoneX;
                y = 0.973177 * safezoneH + safezoneY;
                w = 0.030949 * safezoneW;
                h = 0.0110041 * safezoneH;
        };
        class LIFE_BAR_WATER: Life_RscProgress
        {
                idc = IDC_LIFE_BAR_WATER;
                x = 0.912653 * safezoneW + safezoneX;
                y = 0.973177 * safezoneH + safezoneY;
                w = 0.030949 * safezoneW;
                h = 0.0110041 * safezoneH;
        };
        class LIFE_BAR_HEALTH: Life_RscProgress
        {
                idc = 2202;
                x = 0.948761 * safezoneW + safezoneX;
                y = 0.973177 * safezoneH + safezoneY;
                w = 0.030949 * safezoneW;
                h = 0.0110041 * safezoneH;
        };
        class LIFE_PICTURE_FOOD: Life_RscPicture
        {
                idc = 1200;
                text = "icons\hunger.paa";
                x = 0.879681 * safezoneW + safezoneX;
                y = 0.93181 * safezoneH + safezoneY;
                w = 0.0206327 * safezoneW;
                h = 0.0330124 * safezoneH;
        };
        class LIFE_PICTURE_WATER: Life_RscPicture
        {
                idc = 1201;
                text = "icons\thirst.paa";
                x = 0.914912 * safezoneW + safezoneX;
                y = 0.933736 * safezoneH + safezoneY;
                w = 0.0257908 * safezoneW;
                h = 0.0330124 * safezoneH;
        };
        class LIFE_PICTURE_HEALTH: Life_RscPicture
        {
                idc = 1202;
                text = "icons\health.paa";
                x = 0.951169 * safezoneW + safezoneX;
                y = 0.928493 * safezoneH + safezoneY;
                w = 0.0257908 * safezoneW;
                h = 0.0440165 * safezoneH;
        };
};