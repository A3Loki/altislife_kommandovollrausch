class life_wanted_menu {
	idd = 2400;
	name= "life_wanted_menu";
	movingEnable = false;
	enableSimulation = true;
	
	class controlsBackground {
	
	    class fondtablet: Life_RscPicture
		{
			idc = 9090909;
			text = "images\tablet\tablet.paa";
			x = 0;
			y = -0.12;
			w = 1;
			h = 1.28;
		};
		
		class MainBackground:Life_RscText {
			colorBackground[] = {0, 0, 0, 0.2};
			idc = -1;
			x = 0.21;
			y = 0.2 + (11 / 250);
			w = 0.6;
			h = 0.6 - (22 / 250);
		};
	};
	
	class controls {

		
		class Title : Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "$STR_Wanted_Title";
			x = 0.21;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
		};
		
		class WantedConnection : Title {
			idc = 2404;
			style = 1;
			text = "";
		};
		
		class WantedList : Life_RscListBox 
		{
			idc = 2401;
			text = "";
			sizeEx = 0.035;
			onLBSelChanged = "[] call life_fnc_wantedInfo";
			
			x = 0.21; y = 0.26;
			w = 0.2; h = 0.4;
		};
		
		class WantedDetails : Life_RscListBox
		{
			idc = 2402;
			text = "";
			sizeEx = 0.035;
			colorBackground[] = {0, 0, 0, 0};
			
			x = 0.45;
			y = 0.35;
			w = 0.36;
			h = 0.32;
		};
		
		class BountyPrice : Life_RscText
		{
			idc = 2403;
			text = "";
			x = 0.45;
			y = 0.03;
			w = 0.6;
			h = 0.6;
		};
		
		class CloseButtonKey : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
			colorBackground[] = {0, 0, 0, 0};
			x = 0.21;
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		
		class PardonButtonKey : Life_RscButtonMenu {
			idc = 2405;
			text = "$STR_Wanted_Pardon";
			onButtonClick = "[] call life_fnc_pardon; closeDialog 0;";
			colorBackground[] = {0, 0, 0, 0};		
			x = 0.37;
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		
		class AddButtonKey : Life_RscButtonMenu {
			idc = 2406;
			text = "Wanted +";
			onButtonClick = "closeDialog 0; createDialog ""life_wantedadd2"";";
			colorBackground[] = {0, 0, 0, 0};
			x = 0.53;
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};

	};
};