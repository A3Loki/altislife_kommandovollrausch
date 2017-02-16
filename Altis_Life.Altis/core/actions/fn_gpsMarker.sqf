#include "..\..\script_macros.hpp"
/*
    File: fn_gpsMarker.sqf
    Author: Loki

    Description:
    Markierungen der GPS Tracker
*/

private ["_vehicle","_caller"];
_vehicle = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_caller = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;

sleep 0.5;
//Create markers
_marker = createMarkerLocal ["vehicle_marker",visiblePosition _vehicle];
_marker setMarkerColorLocal "ColorRed";
_marker setMarkerTypeLocal "Mil_dot";
_marker setMarkerTextLocal format ["%1", getText(configFile >> "CfgVehicles" >> typeof _vehicle >> "displayName")];

while {true} do {
    if (!isNull _vehicle) then {
        _marker setMarkerPosLocal (visiblePosition _vehicle);
    };
    if (!alive _vehicle) exitWith {deleteMarkerLocal _marker;};
    sleep 0.02;
};