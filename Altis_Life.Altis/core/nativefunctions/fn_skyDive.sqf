#include <macro.h>
/*
	File: fn_skyDive.sqf
	Author: blaster
	Edited by Demigod & Nox, www.ragecore.de
	Description: The code is documentation enough
*/
private ["_num","_color","_action","_price"];
if(playerSide != civilian) exitWith {hint "Du bist im Dienst, spaßvogel!";};
_price = 8500;
if(life_ragecore_cash < _price) exitWith {hint "Du hast nicht genug Geld!";};

_action = [
	"Du musst deinen Rucksal hier lassen wenn du Fallschirmspringen willst, weiter?",
	"Sicher?",
	"Ja",
	"Nein"
] call BIS_fnc_guiMessage;


if(_action) then {

playSound "airplane";
life_ragecore_cash = life_ragecore_cash - _price;

"colorCorrections" ppEffectEnable true; 
"colorCorrections" ppEffectAdjust [1, 1, 0, [0,0,0,0], [0,0,0,0], [1,1,1,1]]; 
"colorCorrections" ppEffectCommit 1;


sleep 3;
player addBackpack "B_Parachute"; 
player setPos [getPos player select 0, getPos player select 1, 1500];
sleep 2;
"colorCorrections" ppEffectEnable false; 

waitUntil {(vehicle player != player)};	


	_num = floor(random 7);
	
_color = switch (_num) do {
	case 0: {"SmokeShell";};
	case 1: {"SmokeShellGreen";};
	case 2: {"SmokeShellRed";};
	case 3: {"SmokeShellBlue";};
	case 4: {"SmokeShellOrange";};
	case 5: {"SmokeShellYellow";};
	case 6: {"SmokeShellPurple";};
};

_smoke = _color createVehicle position player;
_smoke attachTo [vehicle player, [0,-0.1,1.5]]; 
		
} else {
			hint"Thanks for nothing, move along";
};