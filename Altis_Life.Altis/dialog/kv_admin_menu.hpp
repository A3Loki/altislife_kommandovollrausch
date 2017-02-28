class life_kv_admin_menu {
	idd = 75280;
	name= "life_kv_admin_menu";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[] spawn life_fnc_kv_adminMenu;";
	
	class controlsBackground {
		class kv_menuBackground: Life_RscText
		{
			idc = 75281;
			x = 0.2525 * safezoneW + safezoneX;
			y = 0.17 * safezoneH + safezoneY;
			w = 0.500156 * safezoneW;
			h = 0.66 * safezoneH;
			colorBackground[] = {0,0,0,0.4};
		};
		class kv_menuTitle: Life_RscText
		{
			idc = 75282;
			text = "Admin Menu"; //--- ToDo: Localize;
			x = 0.2525 * safezoneW + safezoneX;
			y = 0.17 * safezoneH + safezoneY;
			w = 0.500156 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {1,0,0,1};
		};
		class RscText_75283: Life_RscText
		{
			idc = 75283;
			x = 0.267969 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.561 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class kv_playerTitle: Life_RscText
		{
			idc = 75284;
			text = "Spieler"; //--- ToDo: Localize;
			x = 0.267969 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {1,0,0,1};
		};
		class RscText_75285: Life_RscText
		{
			idc = 75285;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.451 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class kv_vehiclesTitle: Life_RscText
		{
			idc = 75286;
			text = "Fahrzeuge"; //--- ToDo: Localize;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {1,0,0,1};
		};
		class RscText_75287: Life_RscText
		{
			idc = 75287;
			x = 0.608281 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.066 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class kv_moneyTitle: Life_RscText
		{
			idc = 75288;
			text = "Geld"; //--- ToDo: Localize;
			x = 0.608281 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {1,0,0,1};
		};
		class RscText_75289: Life_RscText
		{
			idc = 75289;
			x = 0.608281 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.484 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class kv_functionsTitle: Life_RscText
		{
			idc = 75290;
			text = "Admin Funktionen"; //--- ToDo: Localize;
			x = 0.608281 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {1,0,0,1};
		};
		class RscText_75291: Life_RscText
		{
			idc = 75291;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.099 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class kv_typeTitle: Life_RscText
		{
			idc = 75292;
			text = "Fahrzeug Art"; //--- ToDo: Localize;
			x = 0.448437 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {1,0,0,1};
		};
	};
	
	class controls {
		class kv_closeMenu: Life_RscButtonMenu
		{
			idc = 75293;
			text = "Close"; //--- ToDo: Localize;
			x = 0.701094 * safezoneW + safezoneX;
			y = 0.83 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
			action = "closeDialog 0;";
		};
		class kv_kickPlayer: Life_RscButtonMenu
		{
			idc = 75294;
			text = "Kick"; //--- ToDo: Localize;
			x = 0.267969 * safezoneW + safezoneX;
			y = 0.786 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			action =  "[] spawn life_fnc_kv_adminKick;";
		};
		class kv_banPlayer: Life_RscButtonMenu
		{
			idc = 75295;
			text = "Ban"; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.786 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			action =  "[] spawn life_fnc_kv_adminBan;";
		};
		class kv_spectatePlayer: Life_RscButtonMenu
		{
			idc = 75296;
			text = "Spectate"; //--- ToDo: Localize;
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.786 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			action =  "closeDialog 0; [] spawn life_fnc_kv_adminSpectate;";
		};
		class kv_spawnObject: Life_RscButtonMenu
		{
			idc = 75297;
			text = "Spawn Vehicle / Object"; //--- ToDo: Localize;
			x = 0.448437 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
			action =  "[] spawn life_fnc_kv_adminSpawnObject;";
		};
		class kv_addMoney: Life_RscButtonMenu
		{
			idc = 75298;
			text = "Add"; //--- ToDo: Localize;
			x = 0.608281 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
			action =  "[""add""] spawn life_fnc_kv_adminCash;";
		};
		class kv_subMoney: Life_RscButtonMenu
		{
			idc = 75299;
			text = "Sub"; //--- ToDo: Localize;
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
			action =  "[""sub""] spawn life_fnc_kv_adminCash;";
		};
		class kv_setMoney: Life_RscButtonMenu
		{
			idc = 75300;
			text = "Set"; //--- ToDo: Localize;
			x = 0.701094 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
			action =  "[""set""] spawn life_fnc_kv_adminCash;";
		};
		class kv_freezePlayer: Life_RscButtonMenu
		{
			idc = 75301;
			text = "Freeze Player"; //--- ToDo: Localize;
			x = 0.613437 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
			action =  "[] spawn life_fnc_kv_adminFreeze;";
		};
		class kv_typeLand: Life_RscButtonMenu
		{
			idc = 75302;
			text = "Land"; //--- ToDo: Localize;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			action =  "[""Land""] spawn life_fnc_kv_adminChangeVehType;";
		};
		class kv_typeAir: Life_RscButtonMenu
		{
			idc = 75303;
			text = "Luft"; //--- ToDo: Localize;
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			action =  "[""Air""] spawn life_fnc_kv_adminChangeVehType;";
		};
		class kv_typeSea: Life_RscButtonMenu
		{
			idc = 75304;
			text = "Sea"; //--- ToDo: Localize;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			action =  "[""Sea""] spawn life_fnc_kv_adminChangeVehType;";
		};
		class kv_typeObject: Life_RscButtonMenu
		{
			idc = 75305;
			text = "Object"; //--- ToDo: Localize;
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			action =  "[""Object""] spawn life_fnc_kv_adminChangeVehType;";
		};
		class kv_deleteDead: Life_RscButtonMenu
		{
			idc = 75306;
			text = "Zerstoerte Objekte"; //--- ToDo: Localize;
			x = 0.613437 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
			action =  "[] spawn life_fnc_kv_adminDeadVeh;";
		};
		class kv_playerList: Life_RscListbox
		{
			idc = 75307;
			x = 0.273125 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.517 * safezoneH;
		};
		class kv_vehicleList: Life_RscListbox
		{
			idc = 75308;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.407 * safezoneH;
		};
		class kv_moneyInput: Life_RscEdit
		{
			idc = 75309;
			text = "1";
			x = 0.613438 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class kv_tpTo: Life_RscButtonMenu
		{
			idc = 75310;
			text = "Zu Spieler porten"; //--- ToDo: Localize;
			x = 0.613437 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
			action =  "[""tpto""] spawn life_fnc_kv_adminTeleport;";
		};
		class kv_tpHere: Life_RscButtonMenu
		{
			idc = 75311;
			text = "Spieler herporten"; //--- ToDo: Localize;
			x = 0.613437 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
			action =  "[""tphere""] spawn life_fnc_kv_adminTeleport;";
		};
		class kv_tpAll: Life_RscButtonMenu
		{
			idc = 75312;
			text = "Alle herporten"; //--- ToDo: Localize;
			x = 0.613437 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
			action =  "[""tpall""] spawn life_fnc_kv_adminTeleport;";
		};
		class kv_tpMap: Life_RscButtonMenu
		{
			idc = 75313;
			text = "Auf Karte porten"; //--- ToDo: Localize;
			x = 0.613437 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
			action =  "closeDialog 0; [""tpmap""] spawn life_fnc_kv_adminTeleport;";
		};
	};
};
