class life_admin_menu {
	idd = 75280;
	name= "life_admin_menu";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[] spawn life_fnc_adminMenu;";
	
	class controlsBackground {
		class Life_RscTitleBackground:Life_RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			x = 0.1;
			y = 0.2;
			w = 0.8;
			h = (1 / 25);
		};
		
		class MainBackground:Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
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
			idc = 75281;
			text = "$STR_Admin_Title";
			x = 0.1;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
		};
		
		class PlayerList_Admin : Life_RscListBox 
		{
			idc = 75282;
			text = "";
			sizeEx = 0.035;
			//colorBackground[] = {0,0,0,0};
			onLBSelChanged = "[_this] spawn life_fnc_adminQuery";
			
			x = 0.12; y = 0.26;
			w = 0.30; h = 0.4;
		};

		class VehiclesAir : Life_RscButtonMenu {
            idc = 75283;
            text = "Air";
            onButtonClick = "closeDialog 0;";

            x = 0.435; y = 0.26;
            w = 0.05; h = 0.05;
        };

        class VehiclesLand : Life_RscButtonMenu {
            idc = 75284;
            text = "Land";
            onButtonClick = "closeDialog 0;";

            x = 0.435; y = 0.36;
            w = 0.05; h = 0.05;
        };

        class VehiclesWater : Life_RscButtonMenu {
            idc = 75285;
            text = "Water";
            onButtonClick = "closeDialog 0;";

            x = 0.435; y = 0.46;
            w = 0.05; h = 0.05;
        };

        class VehiclesObjects : Life_RscButtonMenu {
            idc = 75286;
            text = "Objects";
            onButtonClick = "closeDialog 0;";

            x = 0.435; y = 0.56;
            w = 0.05; h = 0.05;
        };
		
		class PlayerList_Admin : Life_RscListBox
        {
            idc = 75287;
            text = "";
            sizeEx = 0.035;
            //colorBackground[] = {0,0,0,0};
            onLBSelChanged = "[_this] spawn life_fnc_adminQuery";

            x = 0.5; y = 0.26;
            w = 0.30; h = 0.4;
        };

		class CloseButtonKey : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
			x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.88 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		
		class AdminID : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Admin_GetID";
			onButtonClick = "[] call life_fnc_admingetID;";
			x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.88 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};