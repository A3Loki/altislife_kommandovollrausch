class Life_nativeConfigs
{
        idd = 13554;
        movingenable = 0;
        class Controls {
                class HG: life_RscPicture
                {
                        idc = -1;
                        text = "images\tablet\tablet.paa";
                        x = 0.258501 * safezoneW + safezoneX;
                        y = 0.0716 * safezoneH + safezoneY;
                        w = 0.485625 * safezoneW;
                        h = 0.854 * safezoneH;
                };
                /*class RscText_101:RscText
                {
                        idc=-1;
                        text= "Native-Gamer.net Einstellungen";
                        colorBackground[]= {0,0,0,0.8};
                        x = 0.293686 * safezoneW + safezoneX;
                        y = 0.236065 * safezoneH + safezoneY;
                        w = 0.412628 * safezoneW;
                        h = 0.0296296296296296 * safezoneH;
                };
				class RscText_1000: RscText
                {
                        idc = 1000;
                        text = "HUD:";
                        x = 0.35558 * safezoneW + safezoneX;
                        y = 0.291052 * safezoneH + safezoneY;
                        w = 0.0257893 * safezoneW;
                        h = 0.0219945 * safezoneH;
                };
                class NG_ShowHUD: RscNativeGamerButton2
                {
                        idc = 1601;
                        text = "An";
                        x = 0.319475 * safezoneW + safezoneX;
                        y = 0.335041 * safezoneH + safezoneY;
                        w = 0.0412628 * safezoneW;
                        h = 0.043989 * safezoneH;
                        onButtonClick = "[3,1,true] call NativeGamer_colorSet;";
                };
                class NG_HideHUD: RscNativeGamerButton2
                {
                        idc = 1602;
                        text = "Aus";
                        x = 0.376212 * safezoneW + safezoneX;
                        y = 0.335041 * safezoneH + safezoneY;
                        w = 0.0412628 * safezoneW;
                        h = 0.043989 * safezoneH;
                        onButtonClick = "[3,0,true] call NativeGamer_colorSet;";
                };
				*/
				class RscText_1001: RscText
                {
                        idc = 1001;
                        text = "Sichtweite:";
                        x = 0.334949 * safezoneW + safezoneX;
                        y = 0.423019 * safezoneH + safezoneY;
                        w = 0.0670521 * safezoneW;
                        h = 0.0219945 * safezoneH;
                };
				class RscNativeGamerButton2_1600: RscNativeGamerButton2
                {
                        idc = 1600;
                        text = "1000 Meter";
                        x = 0.319475 * safezoneW + safezoneX;
                        y = 0.467008 * safezoneH + safezoneY;
                        w = 0.0979992 * safezoneW;
                        h = 0.043989 * safezoneH;
						colorBackground[] = {-1,-1,-1,-1};
						colorBackgroundFocused[] = {1,1,1,0.12};
						colorBackground2[] = {0.75,0.75,0.75,0.2};
						color[] = {1,1,1,1};
						colorFocused[] = {0,0,0,0};
						color2[] = {0,0,0,0};
						colorText[] = {1,1,1,1};
						colorDisabled[] = {1,0,0,0.1};
                        onButtonClick = "[2,1,true] call NativeGamer_colorSet;";
                };
				class RscNativeGamerButton2_1603: RscNativeGamerButton2
                {
                        idc = 1603;
                        text = "1200 Meter";
                        x = 0.319475 * safezoneW + safezoneX;
                        y = 0.532992 * safezoneH + safezoneY;
                        w = 0.0979992 * safezoneW;
                        h = 0.043989 * safezoneH;
						colorBackground[] = {-1,-1,-1,-1};
						colorBackgroundFocused[] = {1,1,1,0.12};
						colorBackground2[] = {0.75,0.75,0.75,0.2};
						color[] = {1,1,1,1};
						colorFocused[] = {0,0,0,0};
						color2[] = {0,0,0,0};
						colorText[] = {1,1,1,1};
						colorDisabled[] = {1,0,0,0.1};
                        onButtonClick = "[2,0,true] call NativeGamer_colorSet;";
                };
                class RscNativeGamerButton2_1604: RscNativeGamerButton2
                {
                        idc = 1604;
                        text = "1500 Meter";
                        x = 0.319475 * safezoneW + safezoneX;
                        y = 0.598975 * safezoneH + safezoneY;
                        w = 0.0979992 * safezoneW;
                        h = 0.043989 * safezoneH;
						colorBackground[] = {-1,-1,-1,-1};
						colorBackgroundFocused[] = {1,1,1,0.12};
						colorBackground2[] = {0.75,0.75,0.75,0.2};
						color[] = {1,1,1,1};
						colorFocused[] = {0,0,0,0};
						color2[] = {0,0,0,0};
						colorText[] = {1,1,1,1};
						colorDisabled[] = {1,0,0,0.1};
                        onButtonClick = "[2,2,true] call NativeGamer_colorSet;";
                };
                class RscNativeGamerButton2_1605: RscNativeGamerButton2
                {
                        idc = 1605;
                        text = "1800 Meter";
                        x = 0.319475 * safezoneW + safezoneX;
                        y = 0.664959 * safezoneH + safezoneY;
                        w = 0.0979992 * safezoneW;
                        h = 0.043989 * safezoneH;
						colorBackground[] = {-1,-1,-1,-1};
						colorBackgroundFocused[] = {1,1,1,0.12};
						colorBackground2[] = {0.75,0.75,0.75,0.2};
						color[] = {1,1,1,1};
						colorFocused[] = {0,0,0,0};
						color2[] = {0,0,0,0};
						colorText[] = {1,1,1,1};
						colorDisabled[] = {1,0,0,0.1};
                        onButtonClick = "[2,3,true] call NativeGamer_colorSet;";
                };               
                class RscNativeGamerButton2_1606: RscNativeGamerButton2
                {
                        idc = 1606;
                        text = "Summer";
                        x = 0.587683 * safezoneW + safezoneX;
                        y = 0.467008 * safezoneH + safezoneY;
                        w = 0.0979992 * safezoneW;
                        h = 0.043989 * safezoneH;
						colorBackground[] = {-1,-1,-1,-1};
						colorBackgroundFocused[] = {1,1,1,0.12};
						colorBackground2[] = {0.75,0.75,0.75,0.2};
						color[] = {1,1,1,1};
						colorFocused[] = {0,0,0,0};
						color2[] = {0,0,0,0};
						colorText[] = {1,1,1,1};
						colorDisabled[] = {1,0,0,0.1};
                        onButtonClick = "[1,5,true] call NativeGamer_colorSet;";
                };
                class RscNativeGamerButton2_1607: RscNativeGamerButton2
                {
                        idc = 1607;
                        text = "Dark draining";
                        x = 0.474211 * safezoneW + safezoneX;
                        y = 0.467008 * safezoneH + safezoneY;
                        w = 0.0979992 * safezoneW;
                        h = 0.043989 * safezoneH;
						colorBackground[] = {-1,-1,-1,-1};
						colorBackgroundFocused[] = {1,1,1,0.12};
						colorBackground2[] = {0.75,0.75,0.75,0.2};
						color[] = {1,1,1,1};
						colorFocused[] = {0,0,0,0};
						color2[] = {0,0,0,0};
						colorText[] = {1,1,1,1};
						colorDisabled[] = {1,0,0,0.1};
                        onButtonClick = "[1,4,true] call NativeGamer_colorSet;";
                };
                class RscNativeGamerButton2_1608: RscNativeGamerButton2
                {
                        idc = 1608;
                        text = "Tropical";
                        x = 0.474211 * safezoneW + safezoneX;
                        y = 0.532992 * safezoneH + safezoneY;
                        w = 0.0979992 * safezoneW;
                        h = 0.043989 * safezoneH;
						colorBackground[] = {-1,-1,-1,-1};
						colorBackgroundFocused[] = {1,1,1,0.12};
						colorBackground2[] = {0.75,0.75,0.75,0.2};
						color[] = {1,1,1,1};
						colorFocused[] = {0,0,0,0};
						color2[] = {0,0,0,0};
						colorText[] = {1,1,1,1};
						colorDisabled[] = {1,0,0,0.1};
                        onButtonClick = "[1,6,true] call NativeGamer_colorSet;";
                };
                class RscNativeGamerButton2_1609: RscNativeGamerButton2
                {
                        idc = 1609;
                        text = "Op. Flashpoint";
                        x = 0.587683 * safezoneW + safezoneX;
                        y = 0.532992 * safezoneH + safezoneY;
                        w = 0.0979992 * safezoneW;
                        h = 0.043989 * safezoneH;
						colorBackground[] = {-1,-1,-1,-1};
						colorBackgroundFocused[] = {1,1,1,0.12};
						colorBackground2[] = {0.75,0.75,0.75,0.2};
						color[] = {1,1,1,1};
						colorFocused[] = {0,0,0,0};
						color2[] = {0,0,0,0};
						colorText[] = {1,1,1,1};
						colorDisabled[] = {1,0,0,0.1};
                        onButtonClick = "[1,7,true] call NativeGamer_colorSet;";
                };
                class RscNativeGamerButton2_1610: RscNativeGamerButton2
                {
                        idc = 1610;
                        text = "Africa";
                        x = 0.474211 * safezoneW + safezoneX;
                        y = 0.598975 * safezoneH + safezoneY;
                        w = 0.0979992 * safezoneW;
                        h = 0.043989 * safezoneH;
						colorBackground[] = {-1,-1,-1,-1};
						colorBackgroundFocused[] = {1,1,1,0.12};
						colorBackground2[] = {0.75,0.75,0.75,0.2};
						color[] = {1,1,1,1};
						colorFocused[] = {0,0,0,0};
						color2[] = {0,0,0,0};
						colorText[] = {1,1,1,1};
						colorDisabled[] = {1,0,0,0.1};
                        onButtonClick = "[1,8,true] call NativeGamer_colorSet;";
                };
                class RscNativeGamerButton2_1611: RscNativeGamerButton2
                {
                        idc = 1611;
                        text = "Blue";
                        x = 0.587683 * safezoneW + safezoneX;
                        y = 0.598975 * safezoneH + safezoneY;
                        w = 0.0979992 * safezoneW;
                        h = 0.043989 * safezoneH;
						colorBackground[] = {-1,-1,-1,-1};
						colorBackgroundFocused[] = {1,1,1,0.12};
						colorBackground2[] = {0.75,0.75,0.75,0.2};
						color[] = {1,1,1,1};
						colorFocused[] = {0,0,0,0};
						color2[] = {0,0,0,0};
						colorText[] = {1,1,1,1};
						colorDisabled[] = {1,0,0,0.1};
                        onButtonClick = "[1,9,true] call NativeGamer_colorSet;";
                };
                class RscNativeGamerButton2_1612: RscNativeGamerButton2
                {
                        idc = 1612;
                        text = "Arma mission";
                        x = 0.474211 * safezoneW + safezoneX;
                        y = 0.664959 * safezoneH + safezoneY;
                        w = 0.0979992 * safezoneW;
                        h = 0.043989 * safezoneH;
						colorBackground[] = {-1,-1,-1,-1};
						colorBackgroundFocused[] = {1,1,1,0.12};
						colorBackground2[] = {0.75,0.75,0.75,0.2};
						color[] = {1,1,1,1};
						colorFocused[] = {0,0,0,0};
						color2[] = {0,0,0,0};
						colorText[] = {1,1,1,1};
						colorDisabled[] = {1,0,0,0.1};
                        onButtonClick = "[1,10,true] call NativeGamer_colorSet;";
                };
                class RscNativeGamerButton2_1613: RscNativeGamerButton2
                {
                        idc = 1613;
                        text = "Heavy";
                        x = 0.587683 * safezoneW + safezoneX;
                        y = 0.664959 * safezoneH + safezoneY;
                        w = 0.0979992 * safezoneW;
                        h = 0.043989 * safezoneH;
						colorBackground[] = {-1,-1,-1,-1};
						colorBackgroundFocused[] = {1,1,1,0.12};
						colorBackground2[] = {0.75,0.75,0.75,0.2};
						color[] = {1,1,1,1};
						colorFocused[] = {0,0,0,0};
						color2[] = {0,0,0,0};
						colorText[] = {1,1,1,1};
						colorDisabled[] = {1,0,0,0.1};
                        onButtonClick = "[1,11,true] call NativeGamer_colorSet;";
                };
                class RscNativeGamerButton2_1614: RscNativeGamerButton2
                {
                        idc = 1614;
                        text = "Clear contrast";
                        x = 0.474211 * safezoneW + safezoneX;
                        y = 0.401025 * safezoneH + safezoneY;
                        w = 0.0979992 * safezoneW;
                        h = 0.043989 * safezoneH;
						colorBackground[] = {-1,-1,-1,-1};
						colorBackgroundFocused[] = {1,1,1,0.12};
						colorBackground2[] = {0.75,0.75,0.75,0.2};
						color[] = {1,1,1,1};
						colorFocused[] = {0,0,0,0};
						color2[] = {0,0,0,0};
						colorText[] = {1,1,1,1};
						colorDisabled[] = {1,0,0,0.1};
                        onButtonClick = "[1,2,true] call NativeGamer_colorSet;";
                };
                class RscNativeGamerButton2_1615: RscNativeGamerButton2
                {
                        idc = 1615;
                        text = "Wasteland";
                        x = 0.587683 * safezoneW + safezoneX;
                        y = 0.401025 * safezoneH + safezoneY;
                        w = 0.0979992 * safezoneW;
                        h = 0.043989 * safezoneH;
						colorBackground[] = {-1,-1,-1,-1};
						colorBackgroundFocused[] = {1,1,1,0.12};
						colorBackground2[] = {0.75,0.75,0.75,0.2};
						color[] = {1,1,1,1};
						colorFocused[] = {0,0,0,0};
						color2[] = {0,0,0,0};
						colorText[] = {1,1,1,1};
						colorDisabled[] = {1,0,0,0.1};
                        onButtonClick = "[1,3,true] call NativeGamer_colorSet;";
                };
                class RscNativeGamerButton2_1616: RscNativeGamerButton2
                {
                        idc = 1616;
                        text = "Default";
                        x = 0.474211 * safezoneW + safezoneX;
                        y = 0.335041 * safezoneH + safezoneY;
                        w = 0.0979992 * safezoneW;
                        h = 0.043989 * safezoneH;
						colorBackground[] = {-1,-1,-1,-1};
						colorBackgroundFocused[] = {1,1,1,0.12};
						colorBackground2[] = {0.75,0.75,0.75,0.2};
						color[] = {1,1,1,1};
						colorFocused[] = {0,0,0,0};
						color2[] = {0,0,0,0};
						colorText[] = {1,1,1,1};
						colorDisabled[] = {1,0,0,0.1};
                        onButtonClick = "[1,0,true] call NativeGamer_colorSet;";
                };
                class RscNativeGamerButton2_1617: RscNativeGamerButton2
                {
                        idc = 1617;
                        text = "Colorful";
                        x = 0.587683 * safezoneW + safezoneX;
                        y = 0.335041 * safezoneH + safezoneY;
                        w = 0.0979992 * safezoneW;
                        h = 0.043989 * safezoneH;
						colorBackground[] = {-1,-1,-1,-1};
						colorBackgroundFocused[] = {1,1,1,0.12};
						colorBackground2[] = {0.75,0.75,0.75,0.2};
						color[] = {1,1,1,1};
						colorFocused[] = {0,0,0,0};
						color2[] = {0,0,0,0};
						colorText[] = {1,1,1,1};
						colorDisabled[] = {1,0,0,0.1};
                        onButtonClick = "[1,1,true] call NativeGamer_colorSet;";
                };
                class RscText_1002: RscText
                {
                        idc = 1002;
                        text = " Farben:";
                        x = 0.536105 * safezoneW + safezoneX;
                        y = 0.291052 * safezoneH + safezoneY;
                        w = 0.0825256 * safezoneW;
                        h = 0.0219945 * safezoneH;
                };
                class RscNativeGamerButton2_1618: RscNativeGamerButton2
                {
                        idc = 1618;
                        text = "Schließen";
                        x = 0.474211 * safezoneW + safezoneX;
                        y = 0.730943 * safezoneH + safezoneY;
                        w = 0.0722099 * safezoneW;
                        h = 0.043989 * safezoneH;
                        onButtonClick = "closeDialog 0;";
                };
        };
};