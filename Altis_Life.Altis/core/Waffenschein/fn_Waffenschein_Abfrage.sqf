/*
Author: Motombo
File: fn_Waffenschein_Abfrage.sqf

Nein, dies wird protected!
*/
private["_uid","_name"];
_uid = getplayerUID player;
_name = name player;
if(life_cash < 500) exitWith {hint "Du hast nich genug Geld dabei um den Waffenschein zu absolvieren!";};
if(license_civ_gun) exitWith {hint "Du hast den Waffenschein bereits?!";};
if(Waffenschein) exitWith { hint "Gerade absolviert jemand den Waffenschein. Komm zu einen spaeteren Zeitpunkt wieder!";};
publicVariable "Waffenschein";

life_cash = life_cash - 500;

diag_log format ["////////////////////////////////////////////////////Waffenschein von %2 mit UID %1 wird angefragt\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\",_uid, _name];

[["Waffe",_uid,_name],"TON_fnc_Pruefung",false,false] spawn life_fnc_MP;

