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
			["apple",-1,75,125],
			["peach",-1,125,175],
			["oil_processed",-1,3500,4500],
			//["wood",-1,426,816],
			//["brett",-1,852,1632],
			["copper_refined",-1,650,1250],
			["iron_refined",-1,1450,2150],
			["salt_refined",-1,1450,2250],
			["glass",-1,1350,2000],
			["diamond_cut",-1,1770,2750],
			["diamond_uncut",-1,1000,1500],
			["cement",-1,2000,2500],
			//["baumwolle_refined",-1,2600,4200],
			//["applejuice",-1,50,75],
			//["peachjuice",-1,50,75],
			//["frogmeat",-1,2500,3500],
			//["suggar",-1,1200,2300],
			//["nail",-1,2200,3600],
			["goldbar",-1,50000,80000]
		],
		0.5
	],
	["Illegal",
		[
			["heroin_unprocessed",-1,486,875],
			["heroin_processed",-1,4500,7000],
			["cannabis",-1,500,950],
			["marijuana",-1,2500,4000],
			["cocaine_unprocessed",-1,300,900],
			["cocaine_processed",-1,4250,6550],
			//["froglsd",-1,3500,6300],
			["turtle_raw",-1,7000,17500],
			//["turtle_soup",-1,3800,5800],
			["weaponmg",-1,4500,7000]
		],
		0.5
	]
];

// █████████████████    ALL SELLABLE ITEMS    █████████████████

DYNMARKET_Items_ToTrack        =
[

	["apple",85],
	["peach",135],
	["oil_processed",4000],
	//["wood",800],
	//["brett",2300],
	["copper_refined",1000],
	["iron_refined",1650],
	["salt_refined",1750],
	["glass",1550],
	["diamond_cut",2250],
	["diamond_uncut",1250],
	["cement",2100],
	//["baumwolle_refined",2600],
	//["applejuice",50],
	//["peachjuice",50],
	//["frogmeat",2500],
	//["suggar",1200],
	//["nail",2200],
	["goldbar",65000],
	// ILLEGAL
	["heroin_unprocessed",875],
	["heroin_processed",5275],
	["cannabis",950],
	["marijuana",2725],
	["cocaine_unprocessed",900],
	["cocaine_processed",5000],
	//["froglsd",3500],
	["turtle_raw",17500],
	//["turtle_soup",3800],
	["weaponmg",5000]
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
