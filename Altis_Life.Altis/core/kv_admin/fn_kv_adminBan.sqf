#include <macro.h>
/*
	File: fn_kv_banKick.sqf
	Author: Loki
	
	Description:
	Ban Handler
*/
private["_uid", "_name", "_unit"];
if(FETCH_CONST(life_adminlevel) < 1) exitWith {closeDialog 0;};

if((lbCurSel 75307) == -1) exitWith {"Es wurde kein Spieler ausgewaehlt."};

_uid = lbData[75307, lbCurSel (75307)];
_name = lbText[75307, lbCurSel (75307)];
_unit = call compile format["%1", _uid];

[[_unit], "KV_fnc_banPlayer", player, false] call life_fnc_MP;
[[0,format["ADMIN: %1 wurde von %2 gebannt.",_name, name player]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;