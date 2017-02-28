#include <macro.h>
/*
	File: fn_kv_adminSpawnObject.sqf
	Author: Loki
	
	Description:
	Spawn Handler
*/
if(FETCH_CONST(life_adminlevel) < 1) exitWith {closeDialog 0;};
private["_object", "_name"];
disableSerialization;

if((lbCurSel 75308) == -1) exitWith {hint "Es wurde kein Object ausgewaehlt."};

_object = lbData[75308, lbCurSel (75308)];
_name = lbText[75308, lbCurSel (75308)];

[[_object, position player, getDir player, 0, "NONE"], "KV_fnc_spawnObject", player, false] call life_fnc_MP;
hint format["%1 wurde erstellt", _name];