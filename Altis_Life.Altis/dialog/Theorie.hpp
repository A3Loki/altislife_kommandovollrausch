////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Motombo, v1.063, #Qyjype)
////////////////////////////////////////////////////////
class Auto_Theorie {
	idd = 555;
	name = "Auto_Theorie";
	movingEnabled = false;
	enableSimulation = true;
	
	class Backgrounds
	{
		class Background: Life_RscText
		{
			colorBackground[] = {0,0,0,0.8}; // make the last number in the array 0 to get rid of the background
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.148 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.693 * safezoneH;
		};
	};
	
	class controls {
		class Header: Life_RscStructuredText
		{
			idc = 1100;
			text = "                                    Theorie-Pruefung"; //--- ToDo: Localize;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.391875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {1,0.6,0,1};
		};
		class Frage: Life_RscStructuredText
		{
			idc = 1101;
			x = 0.304063 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.391875 * safezoneW;
			h = 0.286 * safezoneH;
		};
		class Antwort_A: Life_RscStructuredText
		{
			idc = 1102;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class Antwort_B: Life_RscStructuredText
		{
			idc = 1103;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class Antwort_C: Life_RscStructuredText
		{
			idc = 1104;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class Btn_A: Life_RscButtonMenu
		{
			idc = 2400;
			x = 0.649531 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.066 * safezoneH;
			colorBackground[] = {1,0.6,0,1};
		};
		class Btn_B: Life_RscButtonMenu
		{
			idc = 2401;
			x = 0.649531 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.066 * safezoneH;
			colorBackground[] = {1,0.6,0,1};
		};
		class Btn_C: Life_RscButtonMenu
		{
			idc = 2402;
			x = 0.649531 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.066 * safezoneH;
			colorBackground[] = {1,0.6,0,1};
		};
		class Start: Life_RscButtonMenu
		{
			idc = 2403;
			text = "Los Gehts!"; //--- ToDo: Localize;
			x = 0.597969 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class Abbruch: Life_RscButtonMenu
		{
			idc = 2404;
			text = "Abbrechen"; //--- ToDo: Localize;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
			onButtonClick = "closeDialog 0;";
		};
		class Counter: Life_RscStructuredText
		{
			idc = 1105;
			text = "Frage 1/10"; //--- ToDo: Localize;
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {1,0.6,0,1};
		};
	};
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
