#include <macro.h>
/*
	File: fn_kv_adminDeadVeh.sqf
	Author: Loki
	
	Description:
	Dead Vehicle Handler
*/
if(FETCH_CONST(life_adminlevel) < 1) exitWith {closeDialog 0;};
private["_player", "_name", "_type"];
_type = _this;

switch(_type) do {
   case "tpto";
   case "tphere": {
      if((lbCurSel 75307) == -1) exitWith {"Es wurde kein Spieler ausgewaehlt."};

      _player = lbData[75307, lbCurSel (75307)];
      _player = call compile format["%1", _player];
      _name = lbText[75307, lbCurSel (75307)];

      [[_player, _type, true], "KV_fnc_changePos", player, false] call life_fnc_MP;
      hint "Teleport wurde ausgefuehrt.";
   };
   case "tpall": {
      [[playableUnits, _type, true], "KV_fnc_changePos", player, false] call life_fnc_MP;
      hint "Teleport wurde ausgefuehrt.";
   };
};