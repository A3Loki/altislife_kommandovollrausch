class life_dynmarket_prices {
	idd = 7100;
	name= "life_dynmarket_prices";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[] spawn {sleep 1;[] call life_fnc_LoadIntoListbox;};";
	
	class controlsBackground {
		
		class HG: life_RscPicture //tablet background
		{
			idc = -1;
			text = "images\tablet\tablet.paa";
			x = 0.258501 * safezoneW + safezoneX;
			y = 0.0716 * safezoneH + safezoneY;
			w = 0.485625 * safezoneW;
			h = 0.854 * safezoneH;
		};
		
	};
	
	
class controls {
		
	class RscFrame_1800: Life_RscText //Background Pricingtable
	{
		idc = -1;
		x = 0.31599 * safezoneW + safezoneX;
		y = 0.276518 * safezoneH + safezoneY;
		w = 0.12375 * safezoneW;
		h = 0.429 * safezoneH;
		colorBackground[] = {0,0,0,0.5};
	};
	
	class RscListbox_1500: Life_RscListBox //Pricingtable
	{
		idc = 7055;
		onLBSelChanged = "[] spawn {[] call life_fnc_DisplayPrices;};";
		x = 0.31599 * safezoneW + safezoneX;
		y = 0.277444 * safezoneH + safezoneY;
		w = 0.124323 * safezoneW;
		h = 0.427148 * safezoneH;
		sizeEx = 0.0260;
	};
	
	class Market_InfotextBox: RscStructuredText //Infotext header
{
	idc = 1100;
	text = "Aktueller Verkaufspreis: "; //--- ToDo: Localize;
	x = 0.45875 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.139219 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,0.5};
};
	/*
	class RscText_1000: Life_RscText //infotext pricing
	{
		idc = -1;
		text = "Verkaufspreis"; //--- ToDo: Localize;
		x = 0.441198 * safezoneW + safezoneX;
		y = 0.450666 * safezoneH + safezoneY;
		w = 0.0876563 * safezoneW;
		h = 0.033 * safezoneH;
	};
	*/
	class RscText_1001: Life_RscText //preisanzeige!
	{
		idc = 7056;
		text = "";
		x = 0.459271 * safezoneW + safezoneX;
		y = 0.319371 * safezoneH + safezoneY;
		w = 0.195937 * safezoneW;
		h = 0.022 * safezoneH;
		colorBackground[] = {0,0,0,0.5};
	};
	
	class RscButtonMenu_2400: Life_RscButtonMenu //close button
	{
		onButtonClick = "closeDialog 0;";
	
		idc = 1006;
		text = "Schließen";
		x = 0.59073 * safezoneW + safezoneX;
		y = 0.667074 * safezoneH + safezoneY;
		w = 0.0825 * safezoneW;
		h = 0.033 * safezoneH;
	};
	/*
	class RscText_1007: Life_RscStructuredText
	{
		idc = 7058;
	
		text = "";
		x = 0.5 * safezoneW + safezoneX;
		//y = 0.447221 * safezoneH + safezoneY;
		y = 0.460221 * safezoneH + safezoneY;
		w = 0.20625 * safezoneW;
		h = 0.0549786 * safezoneH;
		colorText[] = {0.33,0.33,0.33,1};
	
		};
		*/
	};
};