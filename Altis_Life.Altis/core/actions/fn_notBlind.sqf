#include "..\..\script_macros.hpp"
/*
    File: fn_notBlind.sqf
    Author: Loki

    Description:
    Entfernt Augenbinde von Spieler
*/

private["_unit"];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _unit) exitWith {};
if(!(_unit getVariable "blindfolded")) exitWith {};
_unit setVariable["blindfolded",false,true];
0 cutText ["","BLACK IN"];