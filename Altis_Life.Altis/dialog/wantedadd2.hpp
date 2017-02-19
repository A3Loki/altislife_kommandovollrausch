class life_wantedadd2 {
	idd = 9900;
	name= "life_wantedadd2";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[] spawn life_fnc_wantedadd2;";
	
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
	
		class Life_RscTitleBackground:Life_RscText {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			x = 0.1;
			y = 0.2;
			w = 0.8;
			h = (1 / 25);
		};
		
		class MainBackground:Life_RscText {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			x = 0.1;
			y = 0.2 + (11 / 250);
			w = 0.8;
			h = 0.6 - (2 / 250);
		};
	};
	
	class controls {

		
		class Title : Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = 2901;
			text = "Zur Fahndungsliste hinzufuegen";
			x = 0.1;
			y = 0.2;
			w = 0.7;
			h = (1 / 25);
		};
		
		class WantedList : Life_RscListBox 
		{
			idc = 9902;
			text = "";
			sizeEx = 0.035;
			//colorBackground[] = {0,0,0,0};
			onLBSelChanged = "[_this] spawn life_fnc_WantedPersonList";
			
			x = 0.12; y = 0.25;
			w = 0.30; h = 0.4;
		};
		

        class RSUCombo_2101: Life_RscListBox
        {
            idc = 9991;
			//colorBackground[] = {0, 0, 0, 0};
			text = "";
			sizeEx = 0.035;
			x = 0.42;
			y = 0.25;
			w = 0.45;
			h = 0.4; 
        };
		


		class CloseButtonKey : Life_RscButtonMenu {
			idc = -1;
			text = "Close";
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "closeDialog 0;";
			x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.83 - (1 / 25);
			w = 0.18;
			//w = (6.25 / 40);
			h = (1 / 25);
		};
		

		class Adminwanted : Life_RscButtonMenu {
			idc = -1;
			text = "Hinzufuegen";
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "[] call life_fnc_wanted2;";
			x = 0.26 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.83 - (1 / 25);
			w = 0.18;
			//w = (6.25 / 40);
			h = (1 / 25);
		};		
		


	};
};