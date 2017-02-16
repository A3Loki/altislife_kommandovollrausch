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
			["apple",-1,55,85],
			["peach",-1,55,85],
			["oil_processed",-1,3000,4800],
			//["wood",-1,800,2000],
			//["brett",-1,2300,4100],
			["copper_refined",-1,1700,4500],
			["iron_refined",-1,2800,4800],
			["salt_refined",-1,2800,5200],
			["glass",-1,2100,4400],
			["diamond_cut",-1,3500,6200],
			["diamond_uncut",-1,1200,2900],
			["cement",-1,1900,3600],
			//["baumwolle_refined",-1,2600,4200],
			//["applejuice",-1,50,75],
			//["peachjuice",-1,50,75],
			//["frogmeat",-1,2500,3500],
			//["suggar",-1,1200,2300],
			//["nail",-1,2200,3600],
			["goldbar",-1,95000,115000]
		],
		0.5
	],
	["Illegal", 
		[
			["heroin_unprocessed",-1,2300,4500],
			["heroin_processed",-1,3500,7500],
			["cannabis",-1,2800,3500],
			["marijuana",-1,4500,8200],
			["cocaine_unprocessed",-1,3000,4500],
			["cocaine_processed",-1,3900,7500],
			//["froglsd",-1,3500,6300],
			["turtle_raw",-1,7500,9800],
			//["turtle_soup",-1,3800,5800],
			["weaponmg",-1,8000,15000]
		],
		0.5
	]
];

// █████████████████    ALL SELLABLE ITEMS    █████████████████

DYNMARKET_Items_ToTrack        = 
[

	["apple",50],
	["peach",50],
	["oil_processed",3000],
	//["wood",800],
	//["brett",2300],
	["copper_refined",1700],
	["iron_refined",2800],
	["salt_refined",2800],
	["glass",2100],
	["diamond_cut",3500],
	["diamond_uncut",1200],
	["cement",1900],
	//["baumwolle_refined",2600],
	//["applejuice",50],
	//["peachjuice",50],
	//["frogmeat",2500],
	//["suggar",1200],
	//["nail",2200],
	["goldbar",95000],
	// ILLEGAL
	["heroin_unprocessed",2300],
	["heroin_processed",3500],
	["cannabis",2800],
	["marijuana",4500],
	["cocaine_unprocessed",3000],
	["cocaine_processed",3900],
	//["froglsd",3500],
	["turtle_raw",7500],
	//["turtle_soup",3800],
	["weaponmg",8000]
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
