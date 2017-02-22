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

if("ItemRadio" in assignedItems _target) then {
    _target unassignItem "ItemRadio";
    _target removeItems "ItemRadio";
    player addItem "ItemRadio";
    hint "Sie besitzten nun das Handy des Opfers";
} else { hint "Die Person hat kein Smartphone!"};