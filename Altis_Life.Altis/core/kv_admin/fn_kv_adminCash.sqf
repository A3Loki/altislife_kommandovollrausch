#include <macro.h>
/*
	File: fn_kv_adminCash.sqf
	Author: Loki
	
	Description:
	Cash Handler
*/
if(FETCH_CONST(life_adminlevel) < 1) exitWith {closeDialog 0;};
private["_player", "_name", "_type", "_cash"];
_type = _this select 0;

if((lbCurSel 75307) == -1) exitWith {hint "Es wurde kein Spieler ausgewaehlt."};

_player = lbData[75307, lbCurSel (75307)];
_player = call compile format["%1", _player];
_name = lbText[75307, lbCurSel (75307)];
_cash = ctrlText 75309;

[[_player, _cash, _type], "KV_fnc_changeCash", player, false] call life_fnc_MP;
hint format["Bei %1 wurde das Geld geaendert.", _name];