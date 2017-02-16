#include "..\..\script_macros.hpp"
/*
    File: fn_addGPSTracker.sqf
    Author: Loki

    Description:
    Handler für GPS Tracker am Auto
*/

private["_vehicle", "_caller"];
_vehicle = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_caller = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;

if(isNull _vehicle) exitWith {};
if(life_inv_gpstracker < 1) exitWith {hint "Du hast keinen GPS Tracker"};
if(_vehicle getVariable "tracked") exitWith {hint "Es befindet sich bereits ein GPS Tracker an diesem Fahrzeug"};
_isVehicle = if ((_curTarget isKindOf "landVehicle") || (_curTarget isKindOf "Ship") || (_curTarget isKindOf "Air")) then {true} else {false};
if (!_isVehicle) exitWith {hint "Dieses Object ist kein Fahrzeug"};

life_action_inUse = true;
player playMove "AinvPknlMstpSnonWnonDnon_medic_1";
sleep 4;
life_action_inUse = false;

[false,"gpstracker",1] call life_fnc_handleInv;
_vehicle setVariable ["tracked",true,true];
[[_vehicle,_caller],"life_fnc_gpsMarker",_caller,false] spawn life_fnc_MP;