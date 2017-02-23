/*
	File: fn_cellPhoneHandler.sqf
	Author: Loki
	
	Description:
	Radio equipped
*/

if(!("ItemRadio" in assignedItems player)) exitWith {hint "Du besitzt kein Handy"};
createDialog "Life_cell_phone";