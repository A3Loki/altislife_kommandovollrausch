#include <macro.h>
/*
	File: fn_kv_adminDeadVeh.sqf
	Author: Loki
	
	Description:
	Dead Vehicle Handler
*/
if(FETCH_CONST(life_adminlevel) < 1) exitWith {closeDialog 0;};

[[], "KV_fnc_cleanVehicles", player, false] call life_fnc_MP;
hint "Alle kaputten Fahrzeuge wurden entfernt";