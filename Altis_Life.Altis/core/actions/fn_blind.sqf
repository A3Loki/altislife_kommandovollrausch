#include "..\..\script_macros.hpp"
/*
    File: fn_blind.sqf
    Author: Loki

    Description:
    Handler für Augen verbinden
*/

private["_unit"];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_caller = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _unit) exitWith {};
if(life_inv_blindfold < 1) exitWith {hint "Du hast keine Augenbinde"};
if(_unit getVariable "blindfolded") exitWith {hint "Die Augen sind bereits verbunden"};
[false,"blindfold",1] call life_fnc_handleInv;
[[_unit],"life_fnc_doBlindfold",_unit,false] spawn life_fnc_MP;