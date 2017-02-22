#include <macro.h>
/*
	File: fn_initMedic.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Initializes the medic..
*/
private["_end"];
player addRating 99999999;
waitUntil {!(isNull (findDisplay 46))};

if((FETCH_CONST(life_medicLevel)) < 1) exitWith {
	["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
	sleep 35;
};


[]spawn{
     while{true}do{
     private["_uniform"];
     _uniform = uniform player;
     switch (_uniform)do{
     case "U_C_WorkerCoveralls":{
     player setObjectTextureGlobal [0,"textures\med\art_uniform.jpg"];
     		};
     	};
     };
};


[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
[player, uniform player] call life_fnc_equipGear;