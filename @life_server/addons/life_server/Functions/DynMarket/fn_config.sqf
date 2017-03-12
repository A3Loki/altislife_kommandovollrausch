/*
##################### DYNAMIC MARKET SCRIPT #####################
### AUTHOR: RYAN TT.                                          ###
### STEAM: www.steamcommunity.com/id/ryanthett                ###
###                                                           ###
### DISCLAIMER: THIS SCRIPT CAN BE USED ON EVERY SERVER ONLY  ###
###             WITH THIS HEADER / NOTIFICATION               ###
#################################################################
*/

// ███████████████████████████████████████████████████████████████████████
// █████████████████ DYNAMIC MARKET BASIC CONFIGURATION ██████████████████
// ███████████████████████████████████████████████████████████████████████

DYNMARKET_Serveruptime         = 04;   // Serveruptime after restart in hours
DYNMARKET_UseExternalDatabase  = true; // Should the script use the External Database?
DYNMARKET_PriceUpdateInterval  = 05;   // After how many minutes should the price be updated?
DYNMARKET_CreateBackups        = true; // Should the server save write the prices regulary into the Database? If false, it will save the prices before Server-restart?
DYNMARKET_CreateBackupInterval = 03;   // After how many updates (PriceUpdateIntervals) should the prices be saved into the Database?
DYNMARKET_UserNotification     = false; // Should the user be informed with a hint whenever the prices got updated?

// █████████████████ USER NOTIFICATION TEXTS  █████████████████

DYNMARKET_UserNotification_Text = 
[
	"Die Marktpreise wurden aktualisiert!",
	"Diese Meldung dient zu Testzwecken."
];

// █████████████████ ITEM GROUP CONFIGURATION █████████████████

DYNMARKET_Items_Groups =
[
	["Legal",
		[
			["apple",-1,50,100],
			["peach",-1,65,125],
			["oil_processed",-1,148,400],
			//["wood",-1,426,816],
			//["brett",-1,852,1632],
			["copper_refined",-1,165,450],
			["iron_refined",-1,475,1050],
			["salt_refined",-1,131,356],
			["glass",-1,185,480],
			["diamond_cut",-1,300,750],
			["diamond_uncut",-1,150,375],
			["cement",-1,425,950],
			//["baumwolle_refined",-1,2600,4200],
			//["applejuice",-1,50,75],
			//["peachjuice",-1,50,75],
			//["frogmeat",-1,2500,3500],
			//["suggar",-1,1200,2300],
			//["nail",-1,2200,3600],
			["goldbar",-1,38000,50000]
		],
		0.5
	],
	["Illegal", 
		[
			["heroin_unprocessed",-1,486,875],
			["heroin_processed",-1,972,1750],
			["cannabis",-1,500,950],
			["marijuana",-1,800,1500],
			["cocaine_unprocessed",-1,300,900],
			["cocaine_processed",-1,600,1800],
			//["froglsd",-1,3500,6300],
			["turtle_raw",-1,7000,17500],
			//["turtle_soup",-1,3800,5800],
			["weaponmg",-1,1500,4500]
		],
		0.5
	]
];

// █████████████████    ALL SELLABLE ITEMS    █████████████████

DYNMARKET_Items_ToTrack        = 
[

	["apple",50],
	["peach",65],
	["oil_processed",400],
	//["wood",800],
	//["brett",2300],
	["copper_refined",450],
	["iron_refined",1050],
	["salt_refined",356],
	["glass",480],
	["diamond_cut",750],
	["diamond_uncut",375],
	["cement",950],
	//["baumwolle_refined",2600],
	//["applejuice",50],
	//["peachjuice",50],
	//["frogmeat",2500],
	//["suggar",1200],
	//["nail",2200],
	["goldbar",50000],
	// ILLEGAL
	["heroin_unprocessed",875],
	["heroin_processed",1750],
	["cannabis",950],
	["marijuana",1500],
	["cocaine_unprocessed",900],
	["cocaine_processed",1800],
	//["froglsd",3500],
	["turtle_raw",17500],
	//["turtle_soup",3800],
	["weaponmg",4500]
];

//███████████████████████████████████████████████████████████████████████
//██████████████████ DO NOT MODIFY THE FOLLOWING CODE! ██████████████████
//███████████████████████████████████████████████████████████████████████

DYNMARKET_Items_CurrentPriceArr = [];
DYNMARKET_sellarraycopy = DYNMARKET_Items_ToTrack;
DYNMARKET_Serveruptime = (DYNMARKET_Serveruptime * 3600) - 300;
{
	_currentArray = _x;
	DYNMARKET_Items_CurrentPriceArr pushBack [_currentArray select 0,_currentArray select 1,0];
} forEach DYNMARKET_Items_ToTrack;
publicVariable "DYNMARKET_UserNotification";
publicVariable "DYNMARKET_UserNotification_Text";
if (DYNMARKET_UseExternalDatabase) then {[1] call TON_fnc_HandleDB;};
DYNMARKET_UpdateCount = 0;
if (DYNMARKET_UseExternalDatabase) then {
	[] spawn {
		sleep DYNMARKET_Serveruptime;
		diag_log "### DYNMARKET >> CURRENT PRICES ARE BEING WRITTEN TO THE DATABASE    ###";
		diag_log "### DYNMARKET >> AS PLANNED, AWAITING RESULT...                      ###";
		[0] call TON_fnc_HandleDB;
	};
};
sleep 5;
[] call TON_fnc_sleeper;
