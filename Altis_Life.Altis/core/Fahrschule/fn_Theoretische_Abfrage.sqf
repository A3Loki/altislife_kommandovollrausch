/*
Author: Motombo
File: fn_Theoretische_Abfrage.sqf

Nein, dies wird protected!
*/
private["_uid","_name"];
_uid = getplayerUID player;
_name = name player;
if(life_cash < 500) exitWith {hint "Du hast nich genug Geld dabei um die Theoriepruefung zu absolvieren! Du benoetigst 500$";};
if(license_civ_driver) exitWith {hint "Du hast den Fuehrerschein bereits?!";};
if(license_civ_Theorie) exitWith {hint "Du hast die Theoriepruefung bereits bestanden. Besuche nun die Praktische Fahrschule.";};
if(Theoriestrafe) exitWith { hint "Da du den letzten Test vermasselt hast, hast du eine Strafzeit von 10 Minuten bekommen. Bitte komme spater wieder!";};
if(!license_civ_ausweis) exitWith {hint "Du bist noch kein Staatsbuerger"};
life_cash = life_cash - 500;

diag_log format ["////////////////////////////////////////////////////Theoretische Fahrpruefung von %2 mit UID %1 wird angefragt\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\",_uid, _name];

[["Theorie",_uid,_name],"TON_fnc_Pruefung",false,false] spawn life_fnc_MP;

