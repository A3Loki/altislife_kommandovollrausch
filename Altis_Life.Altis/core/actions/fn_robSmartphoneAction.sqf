/*
	File: fn_robAction.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Starts the robbing process?
*/
private["_target"];
_target = cursorTarget;

//Error checks
if(isNull _target) exitWith {};
if(!isPlayer _target) exitWith {};

if("tf_fadak_2" in assignedItems cursorTarget) then {
cursorTarget removeweapon "tf_fadak_2";
} else { hint "Die Person hat kein Smartphone!"};