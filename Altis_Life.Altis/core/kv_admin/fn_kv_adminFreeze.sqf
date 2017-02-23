#include <macro.h>
/*
	File: fn_kv_adminFreeze.sqf
	Author: Loki
	
	Description:
	Freeze Handler
*/
if(FETCH_CONST(life_adminlevel) < 1) exitWith {closeDialog 0;};
private["_player", "_name"];

if((lbCurSel 75307) == -1) exitWith {"Es wurde kein Spieler ausgewaehlt."};

_player = lbData[75307, lbCurSel (75307)];
_player = call compile format["%1", _player];
_name = lbText[75307, lbCurSel (75307)];

[[_player], "KV_fnc_freezePlayer", player, false] call life_fnc_MP;
hint format["%1 wurde gefreezed/entfreezed.", _name];